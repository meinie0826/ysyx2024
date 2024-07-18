// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisterFile.h for the primary calling header

#include "verilated.h"

#include "VRegisterFile___024root.h"

VL_ATTR_COLD void VRegisterFile___024root___eval_static(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_static\n"); );
}

VL_ATTR_COLD void VRegisterFile___024root___eval_initial__TOP(VRegisterFile___024root* vlSelf);

VL_ATTR_COLD void VRegisterFile___024root___eval_initial(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_initial\n"); );
    // Body
    VRegisterFile___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VRegisterFile___024root___eval_initial__TOP(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__pc = 0x80000000U;
}

VL_ATTR_COLD void VRegisterFile___024root___eval_final(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_final\n"); );
}

VL_ATTR_COLD void VRegisterFile___024root___eval_settle(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__act(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__nba(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRegisterFile___024root___ctor_var_reset(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->data_in1 = VL_RAND_RESET_I(32);
    vlSelf->data_in2 = VL_RAND_RESET_I(32);
    vlSelf->data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__inst = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__register0__DOT__i0__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__register1__DOT__i0__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
