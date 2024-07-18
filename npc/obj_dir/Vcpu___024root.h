// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu__Syms;

class Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*4:0*/ cpu__DOT__aluc;
    CData/*0:0*/ cpu__DOT__aluOut_WB_memOut;
    CData/*0:0*/ cpu__DOT__rs1Data_EX_PC;
    CData/*1:0*/ cpu__DOT__rs2Data_EX_imm32_4;
    CData/*0:0*/ cpu__DOT__write_reg;
    CData/*1:0*/ cpu__DOT__write_mem;
    CData/*2:0*/ cpu__DOT__read_mem;
    CData/*2:0*/ cpu__DOT__extOP;
    CData/*1:0*/ cpu__DOT__pcImm_NEXTPC_rs1Imm;
    CData/*0:0*/ cpu__DOT__condition_branch;
    CData/*0:0*/ cpu__DOT__ebreak_or_ecall;
    CData/*4:0*/ cpu__DOT__rs1_p;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    VL_IN(instruction,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ cpu__DOT__write_rd_data;
    IData/*31:0*/ cpu__DOT__read_rs1_data;
    IData/*31:0*/ cpu__DOT__imm_32;
    IData/*31:0*/ cpu__DOT__in_alu_a;
    IData/*31:0*/ cpu__DOT__in_alu_b;
    IData/*31:0*/ cpu__DOT__out_alu;
    IData/*31:0*/ cpu__DOT__out_mem;
    IData/*31:0*/ cpu__DOT__next_pc;
    IData/*31:0*/ cpu__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0;
    IData/*31:0*/ cpu__DOT__REG_FILE__DOT__i;
    IData/*31:0*/ cpu__DOT__DATA_MEM__DOT__data_tmp;
    IData/*31:0*/ __Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__3__data;
    IData/*31:0*/ __Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__4__data;
    IData/*31:0*/ __Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__5__data;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__REG_FILE__DOT__regs;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* v__name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
