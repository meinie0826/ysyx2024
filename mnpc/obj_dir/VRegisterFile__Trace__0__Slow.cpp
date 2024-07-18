// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegisterFile__Syms.h"


VL_ATTR_COLD void VRegisterFile___024root__trace_init_sub__TOP__0(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+34,"clk", false,-1);
    tracep->declBit(c+35,"rst", false,-1);
    tracep->declBus(c+36,"data_in1", false,-1, 31,0);
    tracep->declBus(c+37,"data_in2", false,-1, 31,0);
    tracep->declBus(c+38,"data_out", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+34,"clk", false,-1);
    tracep->declBit(c+35,"rst", false,-1);
    tracep->declBus(c+36,"data_in1", false,-1, 31,0);
    tracep->declBus(c+37,"data_in2", false,-1, 31,0);
    tracep->declBus(c+38,"data_out", false,-1, 31,0);
    tracep->declBus(c+39,"pc", false,-1, 31,0);
    tracep->declBus(c+41,"inst", false,-1, 31,0);
    tracep->declBus(c+42,"opcode", false,-1, 6,0);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->declBus(c+44,"rs1", false,-1, 4,0);
    tracep->declBus(c+45,"imm", false,-1, 11,0);
    tracep->declBus(c+46,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1,"tmp_data", false,-1, 31,0);
    tracep->declBus(c+47,"alu_res", false,-1, 31,0);
    tracep->declBus(c+48,"func3", false,-1, 2,0);
    tracep->pushNamePrefix("alu0 ");
    tracep->declBus(c+48,"func3", false,-1, 2,0);
    tracep->declBus(c+46,"data_in1", false,-1, 31,0);
    tracep->declBus(c+45,"data_in2", false,-1, 11,0);
    tracep->declBus(c+47,"data_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode0 ");
    tracep->declBus(c+41,"inst", false,-1, 31,0);
    tracep->declBus(c+42,"opcode", false,-1, 6,0);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->declBus(c+48,"func3", false,-1, 2,0);
    tracep->declBus(c+44,"rs1", false,-1, 4,0);
    tracep->declBus(c+45,"imm", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc0 ");
    tracep->declBit(c+34,"clk", false,-1);
    tracep->declBit(c+35,"rst", false,-1);
    tracep->declBus(c+39,"last_addr", false,-1, 31,0);
    tracep->declBus(c+39,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register0 ");
    tracep->declBit(c+34,"clk", false,-1);
    tracep->declBus(c+47,"wdata", false,-1, 31,0);
    tracep->declBus(c+43,"waddr", false,-1, 4,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->declBit(c+50,"ren", false,-1);
    tracep->declBus(c+44,"raddr", false,-1, 4,0);
    tracep->declBus(c+46,"outdata", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+51,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+34,"clk", false,-1);
    tracep->declBus(c+47,"wdata", false,-1, 31,0);
    tracep->declBus(c+43,"waddr", false,-1, 4,0);
    tracep->declBit(c+49,"wen", false,-1);
    tracep->declBit(c+50,"ren", false,-1);
    tracep->declBus(c+44,"raddr", false,-1, 4,0);
    tracep->declBus(c+46,"outdata", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+53+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("register1 ");
    tracep->declBit(c+40,"clk", false,-1);
    tracep->declBus(c+47,"wdata", false,-1, 31,0);
    tracep->declBus(c+43,"waddr", false,-1, 4,0);
    tracep->declBit(c+50,"wen", false,-1);
    tracep->declBit(c+49,"ren", false,-1);
    tracep->declBus(c+44,"raddr", false,-1, 4,0);
    tracep->declBus(c+1,"outdata", false,-1, 31,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+51,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+40,"clk", false,-1);
    tracep->declBus(c+47,"wdata", false,-1, 31,0);
    tracep->declBus(c+43,"waddr", false,-1, 4,0);
    tracep->declBit(c+50,"wen", false,-1);
    tracep->declBit(c+49,"ren", false,-1);
    tracep->declBus(c+44,"raddr", false,-1, 4,0);
    tracep->declBus(c+1,"outdata", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VRegisterFile___024root__trace_init_top(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root__trace_init_top\n"); );
    // Body
    VRegisterFile___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRegisterFile___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRegisterFile___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRegisterFile___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRegisterFile___024root__trace_register(VRegisterFile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRegisterFile___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRegisterFile___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRegisterFile___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRegisterFile___024root__trace_full_sub_0(VRegisterFile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRegisterFile___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root__trace_full_top_0\n"); );
    // Init
    VRegisterFile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRegisterFile___024root*>(voidSelf);
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRegisterFile___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRegisterFile___024root__trace_full_sub_0(VRegisterFile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf
                            [(0x1fU & (vlSelf->top__DOT__inst 
                                       >> 0xfU))]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[13]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[14]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[15]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[16]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[17]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[18]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[19]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[20]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[21]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[22]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[23]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[24]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[25]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[26]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[27]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[28]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[29]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[30]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__register1__DOT__i0__DOT__rf[31]),32);
    bufp->fullBit(oldp+34,(vlSelf->clk));
    bufp->fullBit(oldp+35,(vlSelf->rst));
    bufp->fullIData(oldp+36,(vlSelf->data_in1),32);
    bufp->fullIData(oldp+37,(vlSelf->data_in2),32);
    bufp->fullIData(oldp+38,(vlSelf->data_out),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__pc),32);
    bufp->fullBit(oldp+40,((1U & (~ (IData)(vlSelf->clk)))));
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__inst),32);
    bufp->fullCData(oldp+42,((0x7fU & vlSelf->top__DOT__inst)),7);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelf->top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullSData(oldp+45,((vlSelf->top__DOT__inst 
                              >> 0x14U)),12);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf
                             [(0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+47,(((0U == (7U & (vlSelf->top__DOT__inst 
                                            >> 0xcU)))
                               ? (vlSelf->top__DOT__register0__DOT__i0__DOT__rf
                                  [(0x1fU & (vlSelf->top__DOT__inst 
                                             >> 0xfU))] 
                                  + (vlSelf->top__DOT__inst 
                                     >> 0x14U)) : 0U)),32);
    bufp->fullCData(oldp+48,((7U & (vlSelf->top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+49,(0U));
    bufp->fullBit(oldp+50,(1U));
    bufp->fullIData(oldp+51,(5U),32);
    bufp->fullIData(oldp+52,(0x20U),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[0]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[1]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[2]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[3]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[4]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[5]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[6]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[7]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[8]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[9]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[10]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[11]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[12]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[13]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[14]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[15]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[16]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[17]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[18]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[19]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[20]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[21]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[22]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[23]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[24]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[25]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[26]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[27]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[28]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[29]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[30]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__register0__DOT__i0__DOT__rf[31]),32);
}
