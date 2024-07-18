// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"rst", false,-1);
    tracep->declBus(c+39,"inst", false,-1, 31,0);
    tracep->declBus(c+40,"data_in1", false,-1, 31,0);
    tracep->declBus(c+41,"data_in2", false,-1, 31,0);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+43,"data_out", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"rst", false,-1);
    tracep->declBus(c+39,"inst", false,-1, 31,0);
    tracep->declBus(c+40,"data_in1", false,-1, 31,0);
    tracep->declBus(c+41,"data_in2", false,-1, 31,0);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+43,"data_out", false,-1, 31,0);
    tracep->declBus(c+44,"opcode", false,-1, 6,0);
    tracep->declBus(c+1,"rd", false,-1, 4,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"imm", false,-1, 11,0);
    tracep->declBus(c+4,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+45,"tmp_data", false,-1, 31,0);
    tracep->declBus(c+46,"alu_res", false,-1, 31,0);
    tracep->declBus(c+47,"func3", false,-1, 2,0);
    tracep->pushNamePrefix("alu0 ");
    tracep->declBus(c+47,"func3", false,-1, 2,0);
    tracep->declBus(c+4,"data_in1", false,-1, 31,0);
    tracep->declBus(c+3,"data_in2", false,-1, 11,0);
    tracep->declBus(c+46,"data_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode0 ");
    tracep->declBus(c+39,"inst", false,-1, 31,0);
    tracep->declBus(c+44,"opcode", false,-1, 6,0);
    tracep->declBus(c+1,"rd", false,-1, 4,0);
    tracep->declBus(c+47,"func3", false,-1, 2,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"imm", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc0 ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"rst", false,-1);
    tracep->declBus(c+42,"last_addr", false,-1, 31,0);
    tracep->declBus(c+42,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register0 ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBus(c+46,"wdata", false,-1, 31,0);
    tracep->declBus(c+1,"waddr", false,-1, 4,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->declBus(c+2,"raddr", false,-1, 4,0);
    tracep->declBus(c+4,"outdata", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+50,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBus(c+46,"wdata", false,-1, 31,0);
    tracep->declBus(c+1,"waddr", false,-1, 4,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->declBus(c+2,"raddr", false,-1, 4,0);
    tracep->declBus(c+4,"outdata", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+52+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register1 ");
    tracep->declBit(c+48,"clk", false,-1);
    tracep->declBus(c+46,"wdata", false,-1, 31,0);
    tracep->declBus(c+1,"waddr", false,-1, 4,0);
    tracep->declBit(c+84,"wen", false,-1);
    tracep->declBus(c+2,"raddr", false,-1, 4,0);
    tracep->declBus(c+45,"outdata", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+50,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+48,"clk", false,-1);
    tracep->declBus(c+46,"wdata", false,-1, 31,0);
    tracep->declBus(c+1,"waddr", false,-1, 4,0);
    tracep->declBit(c+84,"wen", false,-1);
    tracep->declBus(c+2,"raddr", false,-1, 4,0);
    tracep->declBus(c+45,"outdata", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+5+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__rd),5);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__rs1),5);
    bufp->fullSData(oldp+3,(vlSelf->top__DOT__imm),12);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf
                            [vlSelf->top__DOT__rs1]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[3]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[4]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[5]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[6]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[7]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[8]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[9]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[10]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[11]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[12]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[13]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[14]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[15]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[16]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[17]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[18]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[19]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[20]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[21]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[22]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[23]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[24]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[25]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[26]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[27]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[28]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[29]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[30]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[31]),32);
    bufp->fullBit(oldp+37,(vlSelf->clk));
    bufp->fullBit(oldp+38,(vlSelf->rst));
    bufp->fullIData(oldp+39,(vlSelf->inst),32);
    bufp->fullIData(oldp+40,(vlSelf->data_in1),32);
    bufp->fullIData(oldp+41,(vlSelf->data_in2),32);
    bufp->fullIData(oldp+42,(vlSelf->pc),32);
    bufp->fullIData(oldp+43,(vlSelf->data_out),32);
    bufp->fullCData(oldp+44,((0x7fU & vlSelf->inst)),7);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf
                             [vlSelf->top__DOT__rs1]),32);
    bufp->fullIData(oldp+46,(((0U == (7U & (vlSelf->inst 
                                            >> 0xcU)))
                               ? (vlSelf->top__DOT__register0__DOT__i0__DOT__rf
                                  [vlSelf->top__DOT__rs1] 
                                  + (IData)(vlSelf->top__DOT__imm))
                               : 0U)),32);
    bufp->fullCData(oldp+47,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullBit(oldp+48,((1U & (~ (IData)(vlSelf->clk)))));
    bufp->fullBit(oldp+49,(0U));
    bufp->fullIData(oldp+50,(5U),32);
    bufp->fullIData(oldp+51,(0x20U),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[0]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[1]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[2]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[3]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[4]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[5]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[6]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[7]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[8]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[9]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[10]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[11]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[12]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[13]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[14]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[15]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[16]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[17]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[18]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[19]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[20]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[21]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[22]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[23]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[24]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[25]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[26]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[27]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[28]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[29]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[30]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[31]),32);
    bufp->fullBit(oldp+84,(1U));
}
