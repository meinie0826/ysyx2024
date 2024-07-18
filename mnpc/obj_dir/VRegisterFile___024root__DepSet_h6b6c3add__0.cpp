// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisterFile.h for the primary calling header

#include "verilated.h"

#include "VRegisterFile___024root.h"

void VRegisterFile___024root___eval_act(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_act\n"); );
}

VL_INLINE_OPT void VRegisterFile___024root___nba_sequent__TOP__0(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__pc = ((IData)(4U) + vlSelf->top__DOT__pc);
}

VL_INLINE_OPT void VRegisterFile___024root___nba_sequent__TOP__1(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__register1__DOT__i0__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__register1__DOT__i0__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__register1__DOT__i0__DOT__rf__v0;
    __Vdlyvval__top__DOT__register1__DOT__i0__DOT__rf__v0 = 0;
    // Body
    __Vdlyvval__top__DOT__register1__DOT__i0__DOT__rf__v0 
        = ((0U == (7U & (vlSelf->top__DOT__inst >> 0xcU)))
            ? (vlSelf->top__DOT__register0__DOT__i0__DOT__rf
               [(0x1fU & (vlSelf->top__DOT__inst >> 0xfU))] 
               + (vlSelf->top__DOT__inst >> 0x14U))
            : 0U);
    __Vdlyvdim0__top__DOT__register1__DOT__i0__DOT__rf__v0 
        = (0x1fU & (vlSelf->top__DOT__inst >> 7U));
    vlSelf->top__DOT__register1__DOT__i0__DOT__rf[__Vdlyvdim0__top__DOT__register1__DOT__i0__DOT__rf__v0] 
        = __Vdlyvval__top__DOT__register1__DOT__i0__DOT__rf__v0;
}

void VRegisterFile___024root___eval_nba(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VRegisterFile___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VRegisterFile___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VRegisterFile___024root___eval_triggers__act(VRegisterFile___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__act(VRegisterFile___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__nba(VRegisterFile___024root* vlSelf);
#endif  // VL_DEBUG

void VRegisterFile___024root___eval(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VRegisterFile___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VRegisterFile___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/meinie/Desktop/ysyx2024/mnpc/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VRegisterFile___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VRegisterFile___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/meinie/Desktop/ysyx2024/mnpc/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VRegisterFile___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VRegisterFile___024root___eval_debug_assertions(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
