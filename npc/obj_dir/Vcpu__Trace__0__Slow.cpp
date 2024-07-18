// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+53,"clk", false,-1);
    tracep->declBit(c+54,"rst", false,-1);
    tracep->declBus(c+55,"instruction", false,-1, 31,0);
    tracep->declBus(c+56,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+53,"clk", false,-1);
    tracep->declBit(c+54,"rst", false,-1);
    tracep->declBus(c+55,"instruction", false,-1, 31,0);
    tracep->declBus(c+56,"pc", false,-1, 31,0);
    tracep->declBus(c+13,"write_rd_data", false,-1, 31,0);
    tracep->declBus(c+14,"read_rs1_data", false,-1, 31,0);
    tracep->declBus(c+57,"read_rs2_data", false,-1, 31,0);
    tracep->declBus(c+1,"imm_32", false,-1, 31,0);
    tracep->declBus(c+15,"in_alu_a", false,-1, 31,0);
    tracep->declBus(c+16,"in_alu_b", false,-1, 31,0);
    tracep->declBus(c+17,"out_alu", false,-1, 31,0);
    tracep->declBus(c+18,"out_mem", false,-1, 31,0);
    tracep->declBus(c+58,"next_pc", false,-1, 31,0);
    tracep->declBus(c+59,"rd", false,-1, 4,0);
    tracep->declBus(c+60,"rs1", false,-1, 4,0);
    tracep->declBus(c+61,"rs2", false,-1, 4,0);
    tracep->declBus(c+62,"opcode", false,-1, 6,0);
    tracep->declBus(c+63,"func3", false,-1, 2,0);
    tracep->declBus(c+64,"func7", false,-1, 6,0);
    tracep->declBus(c+2,"aluc", false,-1, 4,0);
    tracep->declBit(c+3,"aluOut_WB_memOut", false,-1);
    tracep->declBit(c+4,"rs1Data_EX_PC", false,-1);
    tracep->declBus(c+5,"rs2Data_EX_imm32_4", false,-1, 1,0);
    tracep->declBit(c+6,"write_reg", false,-1);
    tracep->declBus(c+7,"write_mem", false,-1, 1,0);
    tracep->declBus(c+8,"read_mem", false,-1, 2,0);
    tracep->declBus(c+9,"extOP", false,-1, 2,0);
    tracep->declBus(c+10,"pcImm_NEXTPC_rs1Imm", false,-1, 1,0);
    tracep->declBit(c+19,"condition_branch", false,-1);
    tracep->declBit(c+11,"ebreak_or_ecall", false,-1);
    tracep->declBus(c+12,"rs1_p", false,-1, 4,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+2,"aluc", false,-1, 4,0);
    tracep->declBus(c+15,"a", false,-1, 31,0);
    tracep->declBus(c+16,"b", false,-1, 31,0);
    tracep->declBus(c+17,"out", false,-1, 31,0);
    tracep->declBit(c+19,"condition_branch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CONTROLLER ");
    tracep->declBus(c+62,"opcode", false,-1, 6,0);
    tracep->declBus(c+63,"func3", false,-1, 2,0);
    tracep->declBus(c+64,"func7", false,-1, 6,0);
    tracep->declBit(c+65,"ef", false,-1);
    tracep->declBus(c+2,"aluc", false,-1, 4,0);
    tracep->declBit(c+3,"aluOut_WB_memOut", false,-1);
    tracep->declBit(c+4,"rs1Data_EX_PC", false,-1);
    tracep->declBus(c+5,"rs2Data_EX_imm32_4", false,-1, 1,0);
    tracep->declBit(c+6,"write_reg", false,-1);
    tracep->declBus(c+7,"write_mem", false,-1, 1,0);
    tracep->declBus(c+8,"read_mem", false,-1, 2,0);
    tracep->declBus(c+9,"extOP", false,-1, 2,0);
    tracep->declBus(c+10,"pcImm_NEXTPC_rs1Imm", false,-1, 1,0);
    tracep->declBus(c+11,"ebreak_or_ecall", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DATA_MEM ");
    tracep->declBit(c+53,"clk", false,-1);
    tracep->declBit(c+54,"rst", false,-1);
    tracep->declBus(c+7,"write_mem", false,-1, 1,0);
    tracep->declBus(c+8,"read_mem", false,-1, 2,0);
    tracep->declBus(c+17,"address", false,-1, 31,0);
    tracep->declBus(c+57,"write_data", false,-1, 31,0);
    tracep->declBus(c+18,"out_mem", false,-1, 31,0);
    tracep->declBus(c+66,"data_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+55,"instr", false,-1, 31,0);
    tracep->declBus(c+62,"opcode", false,-1, 6,0);
    tracep->declBus(c+63,"func3", false,-1, 2,0);
    tracep->declBus(c+64,"func7", false,-1, 6,0);
    tracep->declBus(c+59,"rd", false,-1, 4,0);
    tracep->declBus(c+60,"rs1", false,-1, 4,0);
    tracep->declBus(c+61,"rs2", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+55,"instr", false,-1, 31,0);
    tracep->declBus(c+9,"extOP", false,-1, 2,0);
    tracep->declBus(c+1,"imm_32", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MUX_EBRAK ");
    tracep->declBit(c+11,"signal", false,-1);
    tracep->declBus(c+60,"a", false,-1, 4,0);
    tracep->declBus(c+67,"b", false,-1, 4,0);
    tracep->declBus(c+12,"out", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MUX_EX_A ");
    tracep->declBit(c+4,"signal", false,-1);
    tracep->declBus(c+14,"a", false,-1, 31,0);
    tracep->declBus(c+56,"b", false,-1, 31,0);
    tracep->declBus(c+15,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MUX_EX_B ");
    tracep->declBus(c+5,"signal", false,-1, 1,0);
    tracep->declBus(c+57,"a", false,-1, 31,0);
    tracep->declBus(c+1,"b", false,-1, 31,0);
    tracep->declBus(c+68,"c", false,-1, 31,0);
    tracep->declBus(c+16,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MUX_WB ");
    tracep->declBit(c+3,"signal", false,-1);
    tracep->declBus(c+17,"a", false,-1, 31,0);
    tracep->declBus(c+18,"b", false,-1, 31,0);
    tracep->declBus(c+13,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("NEXT_PC ");
    tracep->declBus(c+10,"pcImm_NEXTPC_rs1Imm", false,-1, 1,0);
    tracep->declBit(c+19,"condition_branch", false,-1);
    tracep->declBus(c+56,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"offset", false,-1, 31,0);
    tracep->declBus(c+14,"rs1Data", false,-1, 31,0);
    tracep->declBus(c+58,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+54,"rst", false,-1);
    tracep->declBit(c+53,"clk", false,-1);
    tracep->declBus(c+58,"next_pc", false,-1, 31,0);
    tracep->declBus(c+56,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("REG_FILE ");
    tracep->declBit(c+54,"rst", false,-1);
    tracep->declBit(c+53,"clk", false,-1);
    tracep->declBit(c+6,"write_reg", false,-1);
    tracep->declBus(c+12,"rs1", false,-1, 4,0);
    tracep->declBus(c+61,"rs2", false,-1, 4,0);
    tracep->declBus(c+59,"target_reg", false,-1, 4,0);
    tracep->declBus(c+13,"write_rd_data", false,-1, 31,0);
    tracep->declBus(c+14,"read_rs1_data", false,-1, 31,0);
    tracep->declBus(c+57,"read_rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+20+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+52,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__imm_32),32);
    bufp->fullCData(oldp+2,(vlSelf->cpu__DOT__aluc),5);
    bufp->fullBit(oldp+3,(vlSelf->cpu__DOT__aluOut_WB_memOut));
    bufp->fullBit(oldp+4,(vlSelf->cpu__DOT__rs1Data_EX_PC));
    bufp->fullCData(oldp+5,(vlSelf->cpu__DOT__rs2Data_EX_imm32_4),2);
    bufp->fullBit(oldp+6,(vlSelf->cpu__DOT__write_reg));
    bufp->fullCData(oldp+7,(vlSelf->cpu__DOT__write_mem),2);
    bufp->fullCData(oldp+8,(vlSelf->cpu__DOT__read_mem),3);
    bufp->fullCData(oldp+9,(vlSelf->cpu__DOT__extOP),3);
    bufp->fullCData(oldp+10,(vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm),2);
    bufp->fullBit(oldp+11,(vlSelf->cpu__DOT__ebreak_or_ecall));
    bufp->fullCData(oldp+12,(vlSelf->cpu__DOT__rs1_p),5);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__write_rd_data),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__read_rs1_data),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__in_alu_a),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__in_alu_b),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__out_alu),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__out_mem),32);
    bufp->fullBit(oldp+19,(vlSelf->cpu__DOT__condition_branch));
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[0]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[1]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[2]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[3]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[4]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[5]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[6]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[7]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[8]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[9]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[10]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[11]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[12]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[13]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[14]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[15]),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[16]),32);
    bufp->fullIData(oldp+37,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[17]),32);
    bufp->fullIData(oldp+38,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[18]),32);
    bufp->fullIData(oldp+39,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[19]),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[20]),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[21]),32);
    bufp->fullIData(oldp+42,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[22]),32);
    bufp->fullIData(oldp+43,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[23]),32);
    bufp->fullIData(oldp+44,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[24]),32);
    bufp->fullIData(oldp+45,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[25]),32);
    bufp->fullIData(oldp+46,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[26]),32);
    bufp->fullIData(oldp+47,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[27]),32);
    bufp->fullIData(oldp+48,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[28]),32);
    bufp->fullIData(oldp+49,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[29]),32);
    bufp->fullIData(oldp+50,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[30]),32);
    bufp->fullIData(oldp+51,(vlSelf->cpu__DOT__REG_FILE__DOT__regs[31]),32);
    bufp->fullIData(oldp+52,(vlSelf->cpu__DOT__REG_FILE__DOT__i),32);
    bufp->fullBit(oldp+53,(vlSelf->clk));
    bufp->fullBit(oldp+54,(vlSelf->rst));
    bufp->fullIData(oldp+55,(vlSelf->instruction),32);
    bufp->fullIData(oldp+56,(vlSelf->pc),32);
    bufp->fullIData(oldp+57,(((0U == (0x1fU & (vlSelf->instruction 
                                               >> 0x14U)))
                               ? 0U : vlSelf->cpu__DOT__REG_FILE__DOT__regs
                              [(0x1fU & (vlSelf->instruction 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+58,(((1U == (IData)(vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm))
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
    bufp->fullCData(oldp+59,((0x1fU & (vlSelf->instruction 
                                       >> 7U))),5);
    bufp->fullCData(oldp+60,((0x1fU & (vlSelf->instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+61,((0x1fU & (vlSelf->instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+62,((0x7fU & vlSelf->instruction)),7);
    bufp->fullCData(oldp+63,((7U & (vlSelf->instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+64,((vlSelf->instruction >> 0x19U)),7);
    bufp->fullBit(oldp+65,((1U & (vlSelf->instruction 
                                  >> 0x14U))));
    bufp->fullIData(oldp+66,(vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp),32);
    bufp->fullCData(oldp+67,(0xaU),5);
    bufp->fullIData(oldp+68,(4U),32);
}
