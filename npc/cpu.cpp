
#include <verilated_vcd_c.h>
#include "Vcpu.h"
#include "verilated_dpi.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <dlfcn.h>
#include <bits/stdc++.h>
#include <readline/readline.h>
#include <readline/history.h>

/*------------------------------------------macro------------------------------------------------*/

#define CONFIG_MBASE 0x80000000  
#define CONFIG_MSIZE 0x8000000
#define CONFIG_SERIAL_MMIO 0xa00003f8

#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)
#define IO_SPACE_MAX      (2 * 1024 * 1024)

#define CONFIG_RTC_MMIO 0xa0000040

#define INTER_IMG_SIZE 4

typedef uint32_t paddr_t;

void printf_green(const char *s)
{
  printf("\033[0m\033[1;32m%s\033[0m", s);
}

void printf_red(const char *s)
{
  printf("\033[0m\033[1;31m%s\033[0m", s);
}


uint32_t mmio_read(uint32_t addr, uint32_t mask);
uint32_t mmio_write(uint32_t addr, uint32_t mask,uint32_t data);
static uint64_t boot_time = 0;
/*----------------------------------------SIM--------------------------------------------------*/
VerilatedContext *ct = NULL;
VerilatedVcdC *ftrace = new VerilatedVcdC;
Vcpu *cpu = new Vcpu;

typedef struct
{
  uint32_t gpr[32];
  uint32_t pc;
} CPU_state;
CPU_state npc_cpu;
uint32_t *cpu_gpr = NULL;

void set_state() {
  npc_cpu.pc = cpu->pc_cur;
  memcpy(&npc_cpu.gpr[0], cpu_gpr, 4 * 32);
}

void single_cycle() {
// Lab2 TODO: implement the single cycle function of your cpu
  cpu->clk = 1; cpu->eval();
  cpu->clk = 0; cpu->eval();
  // m_trace->dump(sim_time++); 
  if(cpu->commit_wb == 1) set_state();
}

// simulate a reset
void reset(int n) {
  cpu->clk = 0;
  cpu->rstn = 0;
  cpu->eval();
  while (n-- > 0) {
    single_cycle();
  }
  cpu->rstn = 1;
  cpu->eval();
}

void cpu_init()
{
  Verilated::traceEverOn(true);
  cpu->trace(ftrace, 5);
  ftrace->open("dump.vcd");
  reset(1);
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

/*----------------------------------------------memory----------------------------------------------*/
// uint32_t img [] = {
//   0x00108113,  // addi 1 1 2
//   0x00100073,  // addi 1 2 3
//   0x00118213,  // addi 1 3 4
//   0x00120293,  // addi 1 4 5
// };
// addi : imm(12)  rs1(5)  func3(000)  rd(5) opcode(0010011)
// 000000000001 00100 000 00101 0010011
// 100010000 00110 0010011

// dpi c
extern "C" void npc_pmem_read(bool re, uint32_t raddr, uint32_t mask, uint32_t *rword);
extern "C" void npc_pmem_write(bool we, uint32_t waddr, uint32_t mask, uint32_t wword);

uint8_t img[CONFIG_MSIZE] = {0};
uint8_t inter_img[] = {
    0x00, 0x10, 0x81, 0x13, // addi 1 1 2
    0x00, 0x10, 0x00, 0x73, // addi 1 2 3
    0x00, 0x11, 0x82, 0x13, // addi 1 3 4
    0x00, 0x12, 0x02, 0x93, // addi 1 4 5
};


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
uint8_t *guest_to_host(paddr_t paddr) { return img + paddr - CONFIG_MBASE; }
// map the addr in our host to the addr in riscv code
paddr_t host_to_guest(uint8_t *haddr) { return haddr - img + CONFIG_MBASE; }

// give addr in host, return value
uint32_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: assert(0);
  }
}

// give addr in host, write value
void host_write(void *addr, int len, uint32_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    default: assert(0);
  }
}

extern "C" void npc_pmem_read(bool re, uint32_t raddr, uint32_t mask, uint32_t *rword)
{
  
  if (!re) return;
  
  if(raddr >= CONFIG_MBASE && raddr < CONFIG_MBASE + CONFIG_MSIZE) {
    //printf("[npc_pmem_read] re : %d, raddr : %08x, mask : %08x\n",re,raddr,mask);
    *rword = host_read(guest_to_host(raddr), 1 << mask);
    return;
  }
  //*rword = mmio_read(raddr,mask);
}

// write physical memory with write enable we, write addr waddr, write size (1 << mask), write data wword
extern "C" void npc_pmem_write(bool we, uint32_t waddr, uint32_t mask, uint32_t wword)
{
  
  if (!we) return;
  printf("[npc_pmem_write] re : %d, raddr : %08x, mask : %08x， data : %08x\n",we,waddr,mask,wword);
  if(waddr >= CONFIG_MBASE && waddr < CONFIG_MBASE + CONFIG_MSIZE) {
   
    host_write(guest_to_host(waddr), 1 << mask, wword);
    return;
  }

  printf("waddr : %x, mask : %x,wword : %x\n",waddr,mask,wword);
  mmio_write(waddr,mask,wword);
}
/*----------------------------------------difftest-------------------------------------------------*/

bool ebreak;
enum
{
  DIFFTEST_TO_cpu,
  DIFFTEST_TO_REF
};

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *cpu, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;

void init_difftest(char *ref_so_file, long img_size, int port)
{
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
         "If it is not necessary, you can turn it off in menuconfig.",
         ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(0x80000000, img, img_size, DIFFTEST_TO_REF);

  for (int i = 0; i < 32; i++)
    npc_cpu.gpr[i] = 0;
  npc_cpu.pc = 0x80000000;
  ref_difftest_regcpy(&npc_cpu, DIFFTEST_TO_REF);
}


// set cpu_gpr point to your cpu's gpr
extern "C" void set_gpr_ptr(const svOpenArrayHandle r)
{
  cpu_gpr = (uint32_t *)(((VerilatedDpiOpenVar *)r)->datap());
}

bool isa_difftest_checkregs(CPU_state *ref_r, uint32_t pc)
{
  if (ref_r->pc != pc)
  {
    printf("[difftest]: pc [%08x] not equel ref_pc [%08x]\n", pc, ref_r->pc);
    return false;
  }
  for (int i = 0; i < 32; i++)
  {
    if (ref_r->gpr[i] != cpu_gpr[i])
    {
      printf("[difftest]: reg i :%d not equel, ref_reg [%08x] cpu_reg [%08x]\n", i, ref_r->gpr[i], cpu_gpr[i]);
      return false;
    }
  }
  return true;
}

static void checkregs(CPU_state *ref, uint32_t pc)
{
  if (!isa_difftest_checkregs(ref, pc))
  {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    ebreak = true;
  }
}

void difftest_step(uint32_t pc)
{
  CPU_state ref_r;
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_cpu);

  checkregs(&ref_r, pc);
}
/*-------------------------------------------sdb-------------------------------------------------*/

// check if the program should end
inline bool test_break(){
  return cpu->inst == 0x00100073U;
}

// execute n instructions
void cpu_exec(unsigned int n){
  switch (npc_state.state) {
    case NPC_END: case NPC_ABORT: case NPC_QUIT:
      printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
  }

  while (n--) {
    // execute single instruction
    if(test_break()) {
      // set the end state
      npc_state.halt_pc = cpu->pc_cur;
      npc_state.halt_ret = cpu_gpr[10];
      npc_state.state = NPC_END;
      break;
    }
    single_cycle();
    // char ass[32];
    // printf("pc : %08x, inst : %08x ",cpu->pc_cur,cpu->inst);
    // disassemble(ass,32,cpu->pc_cur,(uint8_t*)&cpu->inst,4);
    // printf("ass : %s \n",ass);

    if(npc_state.state != NPC_RUNNING) break;
  }

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;
    case NPC_END: case NPC_ABORT:
       npc_state.state == NPC_ABORT ? printf_red("ABORT\n") : 
       (npc_state.halt_ret == 0 ? printf_green("HIT GOOD TRAP\n") : printf_red("HIT BAD TRAP\n"));
  }
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  npc_state.state = NPC_QUIT;
  return -1;
}

static int cmd_si(char *args) {
  char *arg = strtok(NULL, " ");
  if (arg == NULL) {
    cpu_exec(1);
    return 0;
  }
  int n = atoi(arg);
  cpu_exec(n);
  return 0;
}


static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Excute several steps", cmd_si },
  //{ "info", "Print the info of rigisters(r)", cmd_info },
};

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)
bool is_batch_mode = true;

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(sim) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    // run until end
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}
/*-----------------------------------------------mmio-----------------------------------------------*/
#include <sys/time.h>
#include <time.h>
// ？#include "common.h"
static uint32_t *rtc_port_base = NULL;
static uint8_t *serial_base = NULL;
static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;
static uint64_t get_time_internal() {
  struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
  return us;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = get_time_internal();
  uint64_t now = get_time_internal();
  return now - boot_time;
}

void init_map() {
  io_space = (uint8_t *)malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
}

// alloc use a memory space
uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  printf("p_space : %p,size : %08x\n",p_space);
  p_space += size;
  printf("p_space : %p\n",p_space);
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len, io_callback_t callback) {
  assert(nr_map < NR_MAP);
  paddr_t left = addr, right = addr + len - 1;
  if (in_pmem(left) || in_pmem(right)) {
    report_mmio_overlap(name, left, right, "pmem", PMEM_LEFT, PMEM_RIGHT);
  }
  for (int i = 0; i < nr_map; i++) {
    if (left <= maps[i].high && right >= maps[i].low) {
      report_mmio_overlap(name, left, right, maps[i].name, maps[i].low, maps[i].high);
    }
  }

  maps[nr_map] = (IOMap){ .name = name, .low = addr, .high = addr + len - 1,
    .space = space, .callback = callback };
  Log("Add mmio map '%s' at [" FMT_PADDR ", " FMT_PADDR "]",
      maps[nr_map].name, maps[nr_map].low, maps[nr_map].high);

  nr_map ++;
}

// static void rtc_io_handler() {
//   uint64_t us = get_time();
//   rtc_port_base[0] = (uint32_t)us;
//   rtc_port_base[1] = us >> 32;
// }

// uint32_t mmio_read(uint32_t addr, uint32_t mask){
//   if(addr >= CONFIG_RTC_MMIO && addr < CONFIG_RTC_MMIO + 8 ){
//     rtc_io_handler();
//     uint32_t offset = addr - CONFIG_RTC_MMIO;
//     return host_read(rtc_port_base + offset, 1<<mask);
//   }
// }

// static void serial_putc(char ch) {
//   putc(ch,stderr);
// }

// static void serial_io_handler() {
//   printf("dafsdf\n");
//   serial_putc(serial_base[0]);
// }

uint32_t mmio_write(uint32_t addr, uint32_t mask, uint32_t data){
  printf("--- waddr : %x, mask : %x,wword : %x\n",addr,mask,data);
  if(addr >= CONFIG_SERIAL_MMIO && addr < CONFIG_SERIAL_MMIO + 8)
  {
    uint32_t offset = addr - CONFIG_SERIAL_MMIO;
    printf("offset : %08x\n",offset);
    host_write(serial_base + offset, 1<<mask, data);
    serial_io_handler();
  }
}

void init_serial() {
  serial_base = new_space(8);
  printf("serial_base : %x\n",serial_base[0]);
  add_mmio_map("serial", CONFIG_SERIAL_MMIO, serial_base, 8, serial_io_handler);
}

// void init_timer() {
//   rtc_port_base = (uint32_t *)new_space(8);
//   //add_mmio_map("rtc", CONFIG_RTC_MMIO, rtc_port_base, 8, rtc_io_handler);
// }

int main(int argc, char *argv[])
{
  cpu_init();
  init_map();
  //init_timer();
  init_serial();
  long img_size = img_init(argc, argv[1]);

  // init_difftest(argv[2],img_size,1234);
  reset(1);
  // start running
  sdb_mainloop();
  // end

  ftrace->close();
  delete cpu;
  return npc_state.state == NPC_ABORT;
}