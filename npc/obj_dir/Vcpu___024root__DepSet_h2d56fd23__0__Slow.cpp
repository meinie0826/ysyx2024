// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___eval_static(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcpu___024root___eval_initial__TOP(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

void Vcpu___024root____Vdpiimwrap_cpu__DOT__REG_FILE__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a);

VL_ATTR_COLD void Vcpu___024root___eval_initial__TOP(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->pc = 0x80000000U;
    vlSelf->cpu__DOT__write_reg = 0U;
    Vcpu___024root____Vdpiimwrap_cpu__DOT__REG_FILE__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->cpu__DOT__REG_FILE__DOT__regs);
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[1U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[2U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[3U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[4U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[5U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[6U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[7U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[8U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[9U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0xaU] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0xbU] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0xcU] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0xdU] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0xeU] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0xfU] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x10U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x11U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x12U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x13U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x14U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x15U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x16U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x17U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x18U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x19U] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x1aU] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x1bU] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x1cU] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x1dU] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x1eU] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0x1fU] = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__i = 0x20U;
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[2U] = 0x80U;
}

VL_ATTR_COLD void Vcpu___024root___eval_final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcpu___024root___eval_triggers__stl(Vcpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__stl(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___eval_stl(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vcpu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vcpu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("cpu.v", 4, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vcpu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__stl(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcpu___024root___ico_sequent__TOP__0(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_stl(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vcpu___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__ico(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__nba(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instruction = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__write_rd_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__read_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__imm_32 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__in_alu_a = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__in_alu_b = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__out_alu = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__out_mem = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__aluc = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__aluOut_WB_memOut = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rs1Data_EX_PC = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rs2Data_EX_imm32_4 = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__write_reg = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__write_mem = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__read_mem = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__extOP = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__condition_branch = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ebreak_or_ecall = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rs1_p = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu__DOT__REG_FILE__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__REG_FILE__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__3__data = 0;
    vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__4__data = 0;
    vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__5__data = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
