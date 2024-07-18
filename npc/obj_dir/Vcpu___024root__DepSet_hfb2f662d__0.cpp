// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024root.h"

extern "C" void exit_m();

VL_INLINE_OPT void Vcpu___024root____Vdpiimwrap_cpu__DOT__exit_m_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root____Vdpiimwrap_cpu__DOT__exit_m_TOP\n"); );
    // Body
    exit_m();
}

extern "C" void set_npc_state(int halt_ret);

VL_INLINE_OPT void Vcpu___024root____Vdpiimwrap_cpu__DOT__set_npc_state_TOP(IData/*31:0*/ halt_ret) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root____Vdpiimwrap_cpu__DOT__set_npc_state_TOP\n"); );
    // Body
    int halt_ret__Vcvt;
    for (size_t halt_ret__Vidx = 0; halt_ret__Vidx < 1; ++halt_ret__Vidx) halt_ret__Vcvt = halt_ret;
    set_npc_state(halt_ret__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vcpu___024root____Vdpiimwrap_cpu__DOT__REG_FILE__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root____Vdpiimwrap_cpu__DOT__REG_FILE__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void npc_host_read(int addr, int len, int* data);

VL_INLINE_OPT void Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_read_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    int data__Vcvt;
    npc_host_read(addr__Vcvt, len__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" void npc_host_write(int addr, int len, int data);

VL_INLINE_OPT void Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_write_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    npc_host_write(addr__Vcvt, len__Vcvt, data__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__ico(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu___024root___eval_triggers__ico(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu___024root___eval_triggers__act(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->rst) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
