// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegisterFile.h for the primary calling header

#ifndef VERILATED_VREGISTERFILE___024ROOT_H_
#define VERILATED_VREGISTERFILE___024ROOT_H_  // guard

#include "verilated.h"

class VRegisterFile__Syms;

class VRegisterFile___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(data_in1,31,0);
    VL_IN(data_in2,31,0);
    VL_OUT(data_out,31,0);
    IData/*31:0*/ top__DOT__pc;
    IData/*31:0*/ top__DOT__inst;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__register0__DOT__i0__DOT__rf;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__register1__DOT__i0__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRegisterFile__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRegisterFile___024root(VRegisterFile__Syms* symsp, const char* v__name);
    ~VRegisterFile___024root();
    VL_UNCOPYABLE(VRegisterFile___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
