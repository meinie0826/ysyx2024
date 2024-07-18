#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include <iostream>


VerilatedContext* ct = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;

void mux_init()
{
    ct = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vtop;
    ct->traceEverOn(true);
    top->trace(tfp,0);
    tfp->open("dump.vcd");
}

void step_and_dump_wave()
{
    top->eval();
    ct->timeInc(1);
    tfp->dump(ct->time());
}

void mux_exit()
{
    step_and_dump_wave();
    tfp->close();
}

uint32_t img [] = {
  0x00108113,  // addi 1 1 2
  0x00110193,  // addi 1 2 3
  0x00118213,  // addi 1 3 4
  0x00120293,  // addi 1 4 5
};
// addi : imm(12)  rs1(5)  func3(000)  rd(5) opcode(0010011)
//000000000001 00100 000 00101 0010011
//100010000 00110 0010011


#define OFFSETADDR 0x80000000 

uint32_t pmem_read(uint32_t addr){
    addr = addr - OFFSETADDR;
    return *(img+addr/4);
}

int main()
{
    mux_init();

    top->clk=1; 
    step_and_dump_wave();
    
    std::cout<<"pc : "<<top->pc<<" mem_read : "<<pmem_read(top->pc)<<std::endl;
    top->inst = pmem_read(top->pc);
    top->eval();
    top->clk=0; 
    step_and_dump_wave();
    top->clk=1; 
    step_and_dump_wave(); 

    std::cout<<"pc : "<<top->pc<<" mem_read : "<<pmem_read(top->pc)<<std::endl;
    top->inst = pmem_read(top->pc);
    top->eval();
    top->clk=0; 
    step_and_dump_wave();
    top->clk=1; 
    step_and_dump_wave(); 

    std::cout<<"pc : "<<top->pc<<" mem_read : "<<pmem_read(top->pc)<<std::endl;
    top->inst = pmem_read(top->pc);
    top->eval();
    top->clk=0; 
    step_and_dump_wave();
    top->clk=1; 
    step_and_dump_wave();
    
    std::cout<<"pc : "<<top->pc<<" mem_read : "<<pmem_read(top->pc)<<std::endl;
    top->inst = pmem_read(top->pc);
    top->eval();
    top->clk=0; 
    step_and_dump_wave();
    top->clk=1; 
    step_and_dump_wave();

    
    mux_exit();
}