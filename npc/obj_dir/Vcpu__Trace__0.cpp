// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__imm_32),32);
        bufp->chgCData(oldp+1,(vlSelf->cpu__DOT__aluc),5);
        bufp->chgBit(oldp+2,(vlSelf->cpu__DOT__aluOut_WB_memOut));
        bufp->chgBit(oldp+3,(vlSelf->cpu__DOT__rs1Data_EX_PC));
        bufp->chgCData(oldp+4,(vlSelf->cpu__DOT__rs2Data_EX_imm32_4),2);
        bufp->chgBit(oldp+5,(vlSelf->cpu__DOT__write_reg));
        bufp->chgCData(oldp+6,(vlSelf->cpu__DOT__write_mem),2);
        bufp->chgCData(oldp+7,(vlSelf->cpu__DOT__read_mem),3);
        bufp->chgCData(oldp+8,(vlSelf->cpu__DOT__extOP),3);
        bufp->chgCData(oldp+9,(vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm),2);
        bufp->chgBit(oldp+10,(vlSelf->cpu__DOT__ebreak_or_ecall));
        bufp->chgCData(oldp+11,(vlSelf->cpu__DOT__rs1_p),5);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+12,(vlSelf->cpu__DOT__write_rd_data),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu__DOT__read_rs1_data),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu__DOT__in_alu_a),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu__DOT__in_alu_b),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__out_alu),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu__DOT__out_mem),32);
        bufp->chgBit(oldp+18,(vlSelf->cpu__DOT__condition_branch));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+19,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[0]),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[1]),32);
        bufp->chgIData(oldp+21,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[2]),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[3]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[4]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[5]),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[6]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[7]),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[8]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[9]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[10]),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[11]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[12]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[13]),32);
        bufp->chgIData(oldp+33,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[14]),32);
        bufp->chgIData(oldp+34,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[15]),32);
        bufp->chgIData(oldp+35,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[16]),32);
        bufp->chgIData(oldp+36,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[17]),32);
        bufp->chgIData(oldp+37,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[18]),32);
        bufp->chgIData(oldp+38,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[19]),32);
        bufp->chgIData(oldp+39,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[20]),32);
        bufp->chgIData(oldp+40,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[21]),32);
        bufp->chgIData(oldp+41,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[22]),32);
        bufp->chgIData(oldp+42,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[23]),32);
        bufp->chgIData(oldp+43,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[24]),32);
        bufp->chgIData(oldp+44,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[25]),32);
        bufp->chgIData(oldp+45,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[26]),32);
        bufp->chgIData(oldp+46,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[27]),32);
        bufp->chgIData(oldp+47,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[28]),32);
        bufp->chgIData(oldp+48,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[29]),32);
        bufp->chgIData(oldp+49,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[30]),32);
        bufp->chgIData(oldp+50,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[31]),32);
        bufp->chgIData(oldp+51,(vlSelf->cpu__DOT__REG_FILE__DOT__i),32);
    }
    bufp->chgBit(oldp+52,(vlSelf->clk));
    bufp->chgBit(oldp+53,(vlSelf->rst));
    bufp->chgIData(oldp+54,(vlSelf->instruction),32);
    bufp->chgIData(oldp+55,(vlSelf->pc),32);
    bufp->chgIData(oldp+56,(((0U == (0x1fU & (vlSelf->instruction 
                                              >> 0x14U)))
                              ? 0U : vlSelf->cpu__DOT__REG_FILE__DOT__regs
                             [(0x1fU & (vlSelf->instruction 
                                        >> 0x14U))])),32);
    bufp->chgIData(oldp+57,(((1U == (IData)(vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm))
                              ? vlSelf->cpu__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0
                              : ((2U == (IData)(vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm))
                                  ? (vlSelf->cpu__DOT__imm_32 
                                     + vlSelf->cpu__DOT__read_rs1_data)
                                  : ((IData)(vlSelf->cpu__DOT__condition_branch)
                                      ? vlSelf->cpu__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0
                                      : ((0x6cU == vlSelf->pc)
                                          ? 0x6cU : 
                                         ((IData)(4U) 
                                          + vlSelf->pc)))))),32);
    bufp->chgCData(oldp+58,((0x1fU & (vlSelf->instruction 
                                      >> 7U))),5);
    bufp->chgCData(oldp+59,((0x1fU & (vlSelf->instruction 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+60,((0x1fU & (vlSelf->instruction 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+61,((0x7fU & vlSelf->instruction)),7);
    bufp->chgCData(oldp+62,((7U & (vlSelf->instruction 
                                   >> 0xcU))),3);
    bufp->chgCData(oldp+63,((vlSelf->instruction >> 0x19U)),7);
    bufp->chgBit(oldp+64,((1U & (vlSelf->instruction 
                                 >> 0x14U))));
    bufp->chgIData(oldp+65,(vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
