// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisterFile.h for the primary calling header

#include "verilated.h"

#include "VRegisterFile__Syms.h"
#include "VRegisterFile___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__act(VRegisterFile___024root* vlSelf);
#endif  // VL_DEBUG

void VRegisterFile___024root___eval_triggers__act(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((~ (IData)(vlSelf->clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__clk));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRegisterFile___024root___dump_triggers__act(vlSelf);
    }
#endif
}
