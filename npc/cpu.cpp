#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
#include "Vcpu__Dpi.h"
#include "verilated_dpi.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <dlfcn.h>




#define OFFSETADDR 0x80000000
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define INTER_IMG_SIZE 4
typedef uint32_t paddr_t;
VerilatedContext *ct = NULL;
VerilatedVcdC *tfp = NULL;

extern "C" void npc_host_read(int addr, int len,int* data);
extern "C" void npc_host_write(int addr, int len,int data);


static Vcpu *cpu;

bool ebreak;
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

uint8_t img[CONFIG_MSIZE] = {0};
uint8_t inter_img[] = {
    0x00,0x10,0x81,0x13, // addi 1 1 2
    0x00,0x10,0x00,0x73, // addi 1 2 3
    0x00,0x11,0x82,0x13, // addi 1 3 4
    0x00,0x12,0x02,0x93, // addi 1 4 5
};

void printf_green(const char *s)
{
    printf("\033[0m\033[1;32m%s\033[0m", s);
}

void printf_red(const char *s)
{
    printf("\033[0m\033[1;31m%s\033[0m", s);
}

enum
{
    NPC_RUNNING,
    NPC_STOP,
    NPC_END,
    NPC_ABORT,
    NPC_QUIT
};

typedef struct
{
    int state;
    uint32_t halt_pc;
    uint32_t halt_ret;
} NPCState;
NPCState npc_state;

typedef struct {
  uint32_t gpr[32];
  uint32_t pc;
} CPU_state;

void cpu_init()
{
    ct = new VerilatedContext;
    tfp = new VerilatedVcdC;
    cpu = new Vcpu;
    ct->traceEverOn(true);
    cpu->trace(tfp, 0);
    tfp->open("dump.vcd");
    cpu->instruction = 0;
}

void step_and_dump_wave()
{
    cpu->eval();
    ct->timeInc(1);
    tfp->dump(ct->time());
}

// uint32_t img [] = {
//   0x00108113,  // addi 1 1 2
//   0x00100073,  // addi 1 2 3
//   0x00118213,  // addi 1 3 4
//   0x00120293,  // addi 1 4 5
// };
// addi : imm(12)  rs1(5)  func3(000)  rd(5) opcode(0010011)
// 000000000001 00100 000 00101 0010011
// 100010000 00110 0010011

long img_init(int argc, char *filename)
{
    if (argc == 1)
    {
        printf("no input image !!! \n");
       
        return 0;
    }

    FILE *file;
    long fileSize;
    file = fopen(filename, "rb");
    if (file == NULL)
    {
        perror("Error opening file");
        return 0;
    }

    fseek(file, 0, SEEK_END);
    fileSize = ftell(file);
    rewind(file);

    if (fread(img, 1, fileSize, file) != fileSize)
    {
        perror("Error reading file");
        fclose(file);
        return 0;
    }
    fclose(file);
    return fileSize;
}

// map the addr in riscv code to the addr in our host
uint8_t* guest_to_host(paddr_t paddr) { return img + paddr - CONFIG_MBASE; }
// map the addr in our host to the addr in riscv code
paddr_t host_to_guest(uint8_t *haddr) { return haddr - img + CONFIG_MBASE; }

// give addr in host, return value
uint32_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    default: assert(0);
  }
}

// give addr in host, write value
void host_write(void *addr, int len, uint32_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    default: assert(0);
  }
}

extern "C" void npc_host_read(int addr, int len,int* data) {
    printf("[npc_read] addr : %08x, len : %d, data : %08x\n",addr,len,host_read(guest_to_host(addr), len));
    *data = host_read(guest_to_host(addr), len);
}

extern "C" void npc_host_write(int addr, int len,int data) {
    host_write(guest_to_host(addr), len, data);
}

uint32_t sdb_host_read(uint32_t addr, int len) {
    return host_read(guest_to_host(addr), len);
}

void sdb_host_write(uint32_t addr, int len,uint32_t data) {
    host_write(guest_to_host(addr), len, data);
}

uint32_t pmem_read(uint32_t addr)
{
    printf("addr: %x ", addr);
    printf("op: %08x \n", sdb_host_read(addr,4));
    return sdb_host_read(addr,4);
}

void cpu_exit()
{
    step_and_dump_wave();
}

void set_npc_state(int halt_ret){
    npc_state.state = NPC_END;
    npc_state.halt_pc = cpu->pc;
    npc_state.halt_ret = halt_ret;

    switch (npc_state.state)
    {
    case NPC_END:
    case NPC_ABORT:
        npc_state.state == NPC_ABORT ? printf_red("ABORT\n") :
           (npc_state.halt_ret == 0 ? printf_green("HIT GOOD TRAP\n") : printf_red("HIT BAD TRAP\n"));
    }
}

void exit_m()
{
    printf("exit_m !\n");
    ebreak = true;
    cpu_exit();
}

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(paddr_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  printf("Differential testing: ON\n");
  printf("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(0x80000000, img, img_size, DIFFTEST_TO_REF);
  CPU_state npc_cpu;
  for(int i=0;i<32;i++) npc_cpu.gpr[i] = 0;
  npc_cpu.pc = 0x80000000;
  ref_difftest_regcpy(&npc_cpu, DIFFTEST_TO_REF);
}
uint32_t *cpu_gpr = NULL;

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

bool isa_difftest_checkregs(CPU_state *ref_r, uint32_t pc) {
  if(ref_r->pc != pc) {
    printf("[difftest]: pc [%08x] not equel ref_pc [%08x]\n",pc,ref_r->pc);
    return false;
  }
  for(int i=0;i<32;i++){
    if(ref_r->gpr[i] != cpu_gpr[i]) {
      printf("[difftest]: reg i :%d not equel, ref_reg [%08x] dut_reg [%08x]\n",i,ref_r->gpr[i],cpu_gpr[i]);
      return false;
    }
  }
  return true;
}

static void checkregs(CPU_state *ref, uint32_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    ebreak = true;
  }
}

void difftest_step(uint32_t pc) {
  CPU_state ref_r;
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r, pc);
}
// simulate a reset
void reset(int n) {
  cpu->clk = 0;
  cpu->rst = 0;
  cpu->eval();
  while (n-- > 0) {
    cpu->clk = 1; cpu->eval();
    cpu->clk = 0; cpu->eval();
  }
  cpu->rst = 1;
  cpu->eval();
}


int main(int argc, char *argv[])
{
    cpu_init();

    long img_size = img_init(argc, argv[1]);

    //init_difftest(argv[2],img_size,1234);
    reset(1);
    ebreak = false;
    while (!ebreak)
    {
      printf("read next inst1\n");
      step_and_dump_wave();
      printf("read next inst2\n");
      cpu->instruction = pmem_read(cpu->pc);
      printf("read next inst3\n");
      cpu->clk = 1;
      printf("read next inst4\n");
      step_and_dump_wave();
      printf("read next inst5\n");
      cpu->clk = 0;
      printf("read next inst6\n");
      step_and_dump_wave();
      printf("read next inst7\n");
      //difftest_step(cpu->pc);
    }
    if(npc_state.state == NPC_ABORT) return 1;

    return 0;
}