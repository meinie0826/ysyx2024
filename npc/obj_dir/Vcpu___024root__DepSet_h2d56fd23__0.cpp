// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcpu___024root.h"

void Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &data);

VL_INLINE_OPT void Vcpu___024root___ico_sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__ebreak_or_ecall = 0U;
    if ((0x40U & vlSelf->instruction)) {
        if ((0x20U & vlSelf->instruction)) {
            if ((0x10U & vlSelf->instruction)) {
                if ((1U & (~ (vlSelf->instruction >> 3U)))) {
                    if ((1U & (~ (vlSelf->instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelf->instruction)) {
                            if ((1U & vlSelf->instruction)) {
                                vlSelf->cpu__DOT__write_mem = 0U;
                                vlSelf->cpu__DOT__write_reg = 0U;
                                vlSelf->cpu__DOT__aluOut_WB_memOut = 0U;
                                vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                                vlSelf->cpu__DOT__read_mem = 0U;
                                vlSelf->cpu__DOT__rs1Data_EX_PC = 0U;
                                vlSelf->cpu__DOT__rs2Data_EX_imm32_4 = 0U;
                                if ((0x100000U & vlSelf->instruction)) {
                                    if ((0x100000U 
                                         & vlSelf->instruction)) {
                                        vlSelf->cpu__DOT__ebreak_or_ecall = 1U;
                                    }
                                } else {
                                    vlSelf->cpu__DOT__ebreak_or_ecall = 0U;
                                }
                                vlSelf->cpu__DOT__extOP = 0U;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->instruction)) {
                if ((4U & vlSelf->instruction)) {
                    if ((2U & vlSelf->instruction)) {
                        if ((1U & vlSelf->instruction)) {
                            vlSelf->cpu__DOT__write_mem = 0U;
                            vlSelf->cpu__DOT__write_reg = 1U;
                            vlSelf->cpu__DOT__aluOut_WB_memOut = 0U;
                            vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm = 1U;
                            vlSelf->cpu__DOT__read_mem = 0U;
                            vlSelf->cpu__DOT__rs1Data_EX_PC = 1U;
                            vlSelf->cpu__DOT__rs2Data_EX_imm32_4 = 3U;
                            vlSelf->cpu__DOT__extOP = 4U;
                        }
                    }
                }
            } else if ((4U & vlSelf->instruction)) {
                if ((2U & vlSelf->instruction)) {
                    if ((1U & vlSelf->instruction)) {
                        vlSelf->cpu__DOT__write_mem = 0U;
                        vlSelf->cpu__DOT__write_reg = 1U;
                        vlSelf->cpu__DOT__aluOut_WB_memOut = 0U;
                        vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm = 2U;
                        vlSelf->cpu__DOT__read_mem = 0U;
                        vlSelf->cpu__DOT__rs1Data_EX_PC = 1U;
                        vlSelf->cpu__DOT__rs2Data_EX_imm32_4 = 3U;
                        vlSelf->cpu__DOT__extOP = 0U;
                    }
                }
            } else if ((2U & vlSelf->instruction)) {
                if ((1U & vlSelf->instruction)) {
                    vlSelf->cpu__DOT__write_mem = 0U;
                    vlSelf->cpu__DOT__write_reg = 0U;
                    vlSelf->cpu__DOT__aluOut_WB_memOut = 0U;
                    vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                    vlSelf->cpu__DOT__read_mem = 0U;
                    vlSelf->cpu__DOT__rs1Data_EX_PC = 0U;
                    vlSelf->cpu__DOT__rs2Data_EX_imm32_4 = 0U;
                    vlSelf->cpu__DOT__extOP = 3U;
                }
            }
            if ((1U & (~ (vlSelf->instruction >> 4U)))) {
                if ((8U & vlSelf->instruction)) {
                    if ((4U & vlSelf->instruction)) {
                        if ((2U & vlSelf->instruction)) {
                            if ((1U & vlSelf->instruction)) {
                                vlSelf->cpu__DOT__aluc = 0U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->instruction)) {
                    if ((2U & vlSelf->instruction)) {
                        if ((1U & vlSelf->instruction)) {
                            vlSelf->cpu__DOT__aluc = 0xaU;
                        }
                    }
                } else if ((2U & vlSelf->instruction)) {
                    if ((1U & vlSelf->instruction)) {
                        if ((0x4000U & vlSelf->instruction)) {
                            vlSelf->cpu__DOT__aluc 
                                = ((0x2000U & vlSelf->instruction)
                                    ? ((0x1000U & vlSelf->instruction)
                                        ? 0x10U : 0xfU)
                                    : ((0x1000U & vlSelf->instruction)
                                        ? 0xeU : 0xdU));
                        } else if ((1U & (~ (vlSelf->instruction 
                                             >> 0xdU)))) {
                            vlSelf->cpu__DOT__aluc 
                                = ((0x1000U & vlSelf->instruction)
                                    ? 0xcU : 0xbU);
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->instruction)) {
        if ((0x10U & vlSelf->instruction)) {
            if ((1U & (~ (vlSelf->instruction >> 3U)))) {
                if ((4U & vlSelf->instruction)) {
                    if ((2U & vlSelf->instruction)) {
                        if ((1U & vlSelf->instruction)) {
                            vlSelf->cpu__DOT__write_mem = 0U;
                            vlSelf->cpu__DOT__write_reg = 1U;
                            vlSelf->cpu__DOT__aluOut_WB_memOut = 0U;
                            vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                            vlSelf->cpu__DOT__read_mem = 0U;
                            vlSelf->cpu__DOT__aluc = 0U;
                            vlSelf->cpu__DOT__rs1Data_EX_PC = 0U;
                            vlSelf->cpu__DOT__rs2Data_EX_imm32_4 = 1U;
                            vlSelf->cpu__DOT__extOP = 1U;
                        }
                    }
                } else if ((2U & vlSelf->instruction)) {
                    if ((1U & vlSelf->instruction)) {
                        vlSelf->cpu__DOT__write_mem = 0U;
                        vlSelf->cpu__DOT__write_reg = 1U;
                        vlSelf->cpu__DOT__aluOut_WB_memOut = 0U;
                        vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                        vlSelf->cpu__DOT__read_mem = 0U;
                        vlSelf->cpu__DOT__aluc = ((0x4000U 
                                                   & vlSelf->instruction)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->instruction)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->instruction)
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->instruction)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->instruction)
                                                      ? 9U
                                                      : 8U)
                                                     : 4U))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->instruction)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->instruction)
                                                     ? 7U
                                                     : 6U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->instruction)
                                                     ? 5U
                                                     : 
                                                    ((0x40000000U 
                                                      & vlSelf->instruction)
                                                      ? 1U
                                                      : 0U))));
                        vlSelf->cpu__DOT__rs1Data_EX_PC = 0U;
                        vlSelf->cpu__DOT__rs2Data_EX_imm32_4 = 0U;
                        vlSelf->cpu__DOT__extOP = 7U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->instruction >> 3U)))) {
            if ((1U & (~ (vlSelf->instruction >> 2U)))) {
                if ((2U & vlSelf->instruction)) {
                    if ((1U & vlSelf->instruction)) {
                        vlSelf->cpu__DOT__write_mem = 0U;
                        if ((2U == (7U & (vlSelf->instruction 
                                          >> 0xcU)))) {
                            vlSelf->cpu__DOT__write_mem = 1U;
                        } else if ((1U == (7U & (vlSelf->instruction 
                                                 >> 0xcU)))) {
                            vlSelf->cpu__DOT__write_mem = 2U;
                        } else if ((0U == (7U & (vlSelf->instruction 
                                                 >> 0xcU)))) {
                            vlSelf->cpu__DOT__write_mem = 3U;
                        }
                        vlSelf->cpu__DOT__write_reg = 0U;
                        vlSelf->cpu__DOT__aluOut_WB_memOut = 0U;
                        vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                        vlSelf->cpu__DOT__read_mem = 0U;
                        vlSelf->cpu__DOT__aluc = 0U;
                        vlSelf->cpu__DOT__rs1Data_EX_PC = 0U;
                        vlSelf->cpu__DOT__rs2Data_EX_imm32_4 = 1U;
                        vlSelf->cpu__DOT__extOP = 2U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->instruction)) {
        if ((1U & (~ (vlSelf->instruction >> 3U)))) {
            if ((4U & vlSelf->instruction)) {
                if ((2U & vlSelf->instruction)) {
                    if ((1U & vlSelf->instruction)) {
                        vlSelf->cpu__DOT__write_mem = 0U;
                        vlSelf->cpu__DOT__write_reg = 1U;
                        vlSelf->cpu__DOT__aluOut_WB_memOut = 0U;
                        vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                        vlSelf->cpu__DOT__read_mem = 0U;
                        vlSelf->cpu__DOT__aluc = 0U;
                        vlSelf->cpu__DOT__rs1Data_EX_PC = 1U;
                        vlSelf->cpu__DOT__rs2Data_EX_imm32_4 = 1U;
                        vlSelf->cpu__DOT__extOP = 1U;
                    }
                }
            } else if ((2U & vlSelf->instruction)) {
                if ((1U & vlSelf->instruction)) {
                    vlSelf->cpu__DOT__write_mem = 0U;
                    vlSelf->cpu__DOT__write_reg = 1U;
                    vlSelf->cpu__DOT__aluOut_WB_memOut = 0U;
                    vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                    vlSelf->cpu__DOT__read_mem = 0U;
                    vlSelf->cpu__DOT__rs1Data_EX_PC = 0U;
                    vlSelf->cpu__DOT__rs2Data_EX_imm32_4 = 1U;
                    vlSelf->cpu__DOT__extOP = 0U;
                    if ((0x4000U & vlSelf->instruction)) {
                        vlSelf->cpu__DOT__aluc = ((0x2000U 
                                                   & vlSelf->instruction)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->instruction)
                                                    ? 2U
                                                    : 3U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->instruction)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->instruction)
                                                     ? 9U
                                                     : 8U)
                                                    : 4U));
                        if ((1U & (~ (vlSelf->instruction 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSelf->instruction)) {
                                if ((0x40000000U & vlSelf->instruction)) {
                                    vlSelf->cpu__DOT__extOP = 5U;
                                }
                            }
                        }
                    } else {
                        vlSelf->cpu__DOT__aluc = ((0x2000U 
                                                   & vlSelf->instruction)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->instruction)
                                                    ? 7U
                                                    : 6U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->instruction)
                                                    ? 5U
                                                    : 0U));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->instruction >> 3U)))) {
        if ((1U & (~ (vlSelf->instruction >> 2U)))) {
            if ((2U & vlSelf->instruction)) {
                if ((1U & vlSelf->instruction)) {
                    vlSelf->cpu__DOT__write_mem = 0U;
                    vlSelf->cpu__DOT__write_reg = 1U;
                    vlSelf->cpu__DOT__aluOut_WB_memOut = 1U;
                    vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm = 0U;
                    vlSelf->cpu__DOT__read_mem = 0U;
                    if ((0x4000U & vlSelf->instruction)) {
                        if ((1U & (~ (vlSelf->instruction 
                                      >> 0xdU)))) {
                            vlSelf->cpu__DOT__read_mem 
                                = ((0x1000U & vlSelf->instruction)
                                    ? 2U : 3U);
                        }
                    } else if ((0x2000U & vlSelf->instruction)) {
                        if ((1U & (~ (vlSelf->instruction 
                                      >> 0xcU)))) {
                            vlSelf->cpu__DOT__read_mem = 1U;
                        }
                    } else {
                        vlSelf->cpu__DOT__read_mem 
                            = ((0x1000U & vlSelf->instruction)
                                ? 6U : 7U);
                    }
                    vlSelf->cpu__DOT__aluc = 0U;
                    vlSelf->cpu__DOT__rs1Data_EX_PC = 0U;
                    vlSelf->cpu__DOT__rs2Data_EX_imm32_4 = 1U;
                    vlSelf->cpu__DOT__extOP = 0U;
                }
            }
        }
    }
    vlSelf->cpu__DOT__rs1_p = ((IData)(vlSelf->cpu__DOT__ebreak_or_ecall)
                                ? 0xaU : (0x1fU & (vlSelf->instruction 
                                                   >> 0xfU)));
    if ((4U & (IData)(vlSelf->cpu__DOT__extOP))) {
        if ((2U & (IData)(vlSelf->cpu__DOT__extOP))) {
            vlSelf->cpu__DOT__imm_32 = 0U;
        } else if ((1U & (IData)(vlSelf->cpu__DOT__extOP))) {
            vlSelf->cpu__DOT__imm_32 = (((- (IData)(
                                                    (vlSelf->instruction 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->instruction 
                                         >> 0x14U));
            vlSelf->cpu__DOT__imm_32 = (0xfffffbffU 
                                        & vlSelf->cpu__DOT__imm_32);
        } else {
            vlSelf->cpu__DOT__imm_32 = (((- (IData)(
                                                    (vlSelf->instruction 
                                                     >> 0x1fU))) 
                                         << 0x14U) 
                                        | ((0xff000U 
                                            & vlSelf->instruction) 
                                           | ((0x800U 
                                               & (vlSelf->instruction 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->instruction 
                                                    >> 0x14U)))));
        }
    } else {
        vlSelf->cpu__DOT__imm_32 = ((2U & (IData)(vlSelf->cpu__DOT__extOP))
                                     ? ((1U & (IData)(vlSelf->cpu__DOT__extOP))
                                         ? (((- (IData)(
                                                        (vlSelf->instruction 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->instruction 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->instruction 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->instruction 
                                                        >> 7U)))))
                                         : (((- (IData)(
                                                        (vlSelf->instruction 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->instruction 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->instruction 
                                                     >> 7U)))))
                                     : ((1U & (IData)(vlSelf->cpu__DOT__extOP))
                                         ? (0xfffff000U 
                                            & vlSelf->instruction)
                                         : (((- (IData)(
                                                        (vlSelf->instruction 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->instruction 
                                               >> 0x14U))));
    }
    vlSelf->cpu__DOT__read_rs1_data = ((0U == (IData)(vlSelf->cpu__DOT__rs1_p))
                                        ? 0U : vlSelf->cpu__DOT__REG_FILE__DOT__regs
                                       [vlSelf->cpu__DOT__rs1_p]);
    vlSelf->cpu__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0 
        = (vlSelf->cpu__DOT__imm_32 + vlSelf->pc);
    vlSelf->cpu__DOT__in_alu_b = ((0U == (IData)(vlSelf->cpu__DOT__rs2Data_EX_imm32_4))
                                   ? ((0U == (0x1fU 
                                              & (vlSelf->instruction 
                                                 >> 0x14U)))
                                       ? 0U : vlSelf->cpu__DOT__REG_FILE__DOT__regs
                                      [(0x1fU & (vlSelf->instruction 
                                                 >> 0x14U))])
                                   : ((1U == (IData)(vlSelf->cpu__DOT__rs2Data_EX_imm32_4))
                                       ? vlSelf->cpu__DOT__imm_32
                                       : 4U));
    vlSelf->cpu__DOT__in_alu_a = ((IData)(vlSelf->cpu__DOT__rs1Data_EX_PC)
                                   ? vlSelf->pc : vlSelf->cpu__DOT__read_rs1_data);
    vlSelf->cpu__DOT__condition_branch = 0U;
    vlSelf->cpu__DOT__out_alu = 0U;
    if ((0x10U & (IData)(vlSelf->cpu__DOT__aluc))) {
        if ((1U & (~ ((IData)(vlSelf->cpu__DOT__aluc) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->cpu__DOT__aluc) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu__DOT__aluc) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->cpu__DOT__aluc)))) {
                        vlSelf->cpu__DOT__condition_branch 
                            = (vlSelf->cpu__DOT__in_alu_a 
                               >= vlSelf->cpu__DOT__in_alu_b);
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelf->cpu__DOT__aluc))) {
            vlSelf->cpu__DOT__out_alu = 0U;
        } else if ((4U & (IData)(vlSelf->cpu__DOT__aluc))) {
            vlSelf->cpu__DOT__out_alu = 0U;
        } else if ((2U & (IData)(vlSelf->cpu__DOT__aluc))) {
            vlSelf->cpu__DOT__out_alu = 0U;
        } else if ((1U & (IData)(vlSelf->cpu__DOT__aluc))) {
            vlSelf->cpu__DOT__out_alu = 0U;
        }
    } else if ((8U & (IData)(vlSelf->cpu__DOT__aluc))) {
        if ((4U & (IData)(vlSelf->cpu__DOT__aluc))) {
            vlSelf->cpu__DOT__condition_branch = ((2U 
                                                   & (IData)(vlSelf->cpu__DOT__aluc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu__DOT__aluc))
                                                    ? 
                                                   (vlSelf->cpu__DOT__in_alu_a 
                                                    < vlSelf->cpu__DOT__in_alu_b)
                                                    : 
                                                   VL_GTES_III(32, vlSelf->cpu__DOT__in_alu_a, vlSelf->cpu__DOT__in_alu_b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu__DOT__aluc))
                                                    ? 
                                                   VL_LTS_III(32, vlSelf->cpu__DOT__in_alu_a, vlSelf->cpu__DOT__in_alu_b)
                                                    : 
                                                   (vlSelf->cpu__DOT__in_alu_a 
                                                    != vlSelf->cpu__DOT__in_alu_b)));
        } else if ((2U & (IData)(vlSelf->cpu__DOT__aluc))) {
            if ((1U & (IData)(vlSelf->cpu__DOT__aluc))) {
                vlSelf->cpu__DOT__condition_branch 
                    = (vlSelf->cpu__DOT__in_alu_a == vlSelf->cpu__DOT__in_alu_b);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->cpu__DOT__aluc) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->cpu__DOT__aluc))) {
                if ((1U & (~ (IData)(vlSelf->cpu__DOT__aluc)))) {
                    vlSelf->cpu__DOT__out_alu = (vlSelf->cpu__DOT__in_alu_a 
                                                 + vlSelf->cpu__DOT__in_alu_b);
                    vlSelf->cpu__DOT__out_alu = (0xfffffffeU 
                                                 & vlSelf->cpu__DOT__out_alu);
                }
            } else {
                vlSelf->cpu__DOT__out_alu = ((1U & (IData)(vlSelf->cpu__DOT__aluc))
                                              ? ((0x1fU 
                                                  >= vlSelf->cpu__DOT__in_alu_b)
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,32, vlSelf->cpu__DOT__in_alu_a, vlSelf->cpu__DOT__in_alu_b)
                                                  : 
                                                 (- 
                                                  (vlSelf->cpu__DOT__in_alu_a 
                                                   >> 0x1fU)))
                                              : ((0x1fU 
                                                  >= vlSelf->cpu__DOT__in_alu_b)
                                                  ? 
                                                 (vlSelf->cpu__DOT__in_alu_a 
                                                  >> vlSelf->cpu__DOT__in_alu_b)
                                                  : 0U));
            }
        }
    } else {
        vlSelf->cpu__DOT__out_alu = ((4U & (IData)(vlSelf->cpu__DOT__aluc))
                                      ? ((2U & (IData)(vlSelf->cpu__DOT__aluc))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__aluc))
                                              ? ((vlSelf->cpu__DOT__in_alu_a 
                                                  < vlSelf->cpu__DOT__in_alu_b)
                                                  ? 1U
                                                  : 0U)
                                              : (VL_LTS_III(32, vlSelf->cpu__DOT__in_alu_a, vlSelf->cpu__DOT__in_alu_b)
                                                  ? 1U
                                                  : 0U))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__aluc))
                                              ? ((0x1fU 
                                                  >= vlSelf->cpu__DOT__in_alu_b)
                                                  ? 
                                                 (vlSelf->cpu__DOT__in_alu_a 
                                                  << vlSelf->cpu__DOT__in_alu_b)
                                                  : 0U)
                                              : (vlSelf->cpu__DOT__in_alu_a 
                                                 ^ vlSelf->cpu__DOT__in_alu_b)))
                                      : ((2U & (IData)(vlSelf->cpu__DOT__aluc))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__aluc))
                                              ? (vlSelf->cpu__DOT__in_alu_a 
                                                 | vlSelf->cpu__DOT__in_alu_b)
                                              : (vlSelf->cpu__DOT__in_alu_a 
                                                 & vlSelf->cpu__DOT__in_alu_b))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__aluc))
                                              ? (vlSelf->cpu__DOT__in_alu_a 
                                                 - vlSelf->cpu__DOT__in_alu_b)
                                              : (vlSelf->cpu__DOT__in_alu_a 
                                                 + vlSelf->cpu__DOT__in_alu_b))));
    }
    vlSelf->cpu__DOT__next_pc = ((1U == (IData)(vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm))
                                  ? vlSelf->cpu__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0
                                  : ((2U == (IData)(vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm))
                                      ? (vlSelf->cpu__DOT__imm_32 
                                         + vlSelf->cpu__DOT__read_rs1_data)
                                      : ((IData)(vlSelf->cpu__DOT__condition_branch)
                                          ? vlSelf->cpu__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0
                                          : ((0x6cU 
                                              == vlSelf->pc)
                                              ? 0x6cU
                                              : ((IData)(4U) 
                                                 + vlSelf->pc)))));
    vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp = 0U;
    if ((2U & (IData)(vlSelf->cpu__DOT__read_mem))) {
        if ((1U & (IData)(vlSelf->cpu__DOT__read_mem))) {
            Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_read_TOP(vlSelf->cpu__DOT__out_alu, 1U, vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__3__data);
            vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp 
                = vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__3__data;
            vlSelf->cpu__DOT__out_mem = ((4U & (IData)(vlSelf->cpu__DOT__read_mem))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp))
                                          : (0xffU 
                                             & vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp));
        } else {
            Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_read_TOP(vlSelf->cpu__DOT__out_alu, 2U, vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__4__data);
            vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp 
                = vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__4__data;
            vlSelf->cpu__DOT__out_mem = ((4U & (IData)(vlSelf->cpu__DOT__read_mem))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp))
                                          : (0xffffU 
                                             & vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp));
        }
    } else if ((1U & (IData)(vlSelf->cpu__DOT__read_mem))) {
        Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_read_TOP(vlSelf->cpu__DOT__out_alu, 4U, vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__5__data);
        vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp = vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__5__data;
        vlSelf->cpu__DOT__out_mem = vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp;
    } else {
        vlSelf->cpu__DOT__out_mem = 0U;
    }
    vlSelf->cpu__DOT__write_rd_data = ((IData)(vlSelf->cpu__DOT__aluOut_WB_memOut)
                                        ? vlSelf->cpu__DOT__out_mem
                                        : vlSelf->cpu__DOT__out_alu);
}

void Vcpu___024root___eval_ico(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vcpu___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vcpu___024root___eval_act(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_act\n"); );
}

void Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data);
void Vcpu___024root____Vdpiimwrap_cpu__DOT__exit_m_TOP();
void Vcpu___024root____Vdpiimwrap_cpu__DOT__set_npc_state_TOP(IData/*31:0*/ halt_ret);

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__REG_FILE__DOT__regs__v0;
    __Vdlyvdim0__cpu__DOT__REG_FILE__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__REG_FILE__DOT__regs__v0;
    __Vdlyvval__cpu__DOT__REG_FILE__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__REG_FILE__DOT__regs__v0;
    __Vdlyvset__cpu__DOT__REG_FILE__DOT__regs__v0 = 0;
    // Body
    if ((1U == (IData)(vlSelf->cpu__DOT__write_mem))) {
        Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_write_TOP(vlSelf->cpu__DOT__out_alu, 4U, 
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->instruction 
                                                                                >> 0x14U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                vlSelf->cpu__DOT__REG_FILE__DOT__regs
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelf->instruction 
                                                                                >> 0x14U))]));
    } else if ((2U == (IData)(vlSelf->cpu__DOT__write_mem))) {
        Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_write_TOP(vlSelf->cpu__DOT__out_alu, 2U, 
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->instruction 
                                                                                >> 0x14U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                vlSelf->cpu__DOT__REG_FILE__DOT__regs
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelf->instruction 
                                                                                >> 0x14U))]));
    } else if ((3U == (IData)(vlSelf->cpu__DOT__write_mem))) {
        Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_write_TOP(vlSelf->cpu__DOT__out_alu, 1U, 
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->instruction 
                                                                                >> 0x14U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                vlSelf->cpu__DOT__REG_FILE__DOT__regs
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelf->instruction 
                                                                                >> 0x14U))]));
    }
    if (VL_UNLIKELY(vlSelf->cpu__DOT__ebreak_or_ecall)) {
        Vcpu___024root____Vdpiimwrap_cpu__DOT__exit_m_TOP();
        VL_WRITEF("rs1_p : %2# , read_rs1_data :  %10#\n\n",
                  5,vlSelf->cpu__DOT__rs1_p,32,vlSelf->cpu__DOT__read_rs1_data);
        Vcpu___024root____Vdpiimwrap_cpu__DOT__set_npc_state_TOP(vlSelf->cpu__DOT__read_rs1_data);
    }
    __Vdlyvset__cpu__DOT__REG_FILE__DOT__regs__v0 = 0U;
    vlSelf->cpu__DOT__REG_FILE__DOT__i = 0x20U;
    vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp = 0U;
    if (VL_UNLIKELY(((IData)(vlSelf->cpu__DOT__write_reg) 
                     & (0U != (0x1fU & (vlSelf->instruction 
                                        >> 7U)))))) {
        VL_WRITEF("---- write reg[%02x]:%x \n",5,(0x1fU 
                                                  & (vlSelf->instruction 
                                                     >> 7U)),
                  32,vlSelf->cpu__DOT__write_rd_data);
        __Vdlyvval__cpu__DOT__REG_FILE__DOT__regs__v0 
            = vlSelf->cpu__DOT__write_rd_data;
        __Vdlyvset__cpu__DOT__REG_FILE__DOT__regs__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__REG_FILE__DOT__regs__v0 
            = (0x1fU & (vlSelf->instruction >> 7U));
    }
    VL_WRITEF("reg[00]:%x reg[01]:%x reg[02]:%x reg[03]:%x reg[04]:%x reg[05]:%x \nreg[06]:%x reg[07]:%x reg[08]:%x reg[09]:%x reg[0a]:%x reg[0b]:%x \nreg[0c]:%x reg[0d]:%x reg[0e]:%x reg[0f]:%x reg[10]:%x reg[11]:%x \nreg[12]:%x reg[13]:%x reg[14]:%x reg[15]:%x reg[16]:%x reg[17]:%x \nreg[18]:%x reg[19]:%x reg[1a]:%x reg[1b]:%x reg[1c]:%x reg[1d]:%x \nreg[1e]:%x reg[1f]:%x \n",
              32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [1U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [2U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [3U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [4U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [5U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [6U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [7U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [8U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [9U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0xaU],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0xbU],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0xcU],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0xdU],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0xeU],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0xfU],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x10U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x11U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x12U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x13U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x14U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x15U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x16U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x17U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x18U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x19U],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x1aU],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x1bU],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x1cU],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x1dU],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x1eU],32,vlSelf->cpu__DOT__REG_FILE__DOT__regs
              [0x1fU]);
    vlSelf->pc = ((IData)(vlSelf->rst) ? vlSelf->cpu__DOT__next_pc
                   : 0x80000000U);
    if (__Vdlyvset__cpu__DOT__REG_FILE__DOT__regs__v0) {
        vlSelf->cpu__DOT__REG_FILE__DOT__regs[__Vdlyvdim0__cpu__DOT__REG_FILE__DOT__regs__v0] 
            = __Vdlyvval__cpu__DOT__REG_FILE__DOT__regs__v0;
    }
}

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->cpu__DOT__REG_FILE__DOT__i = 0x21U;
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
    vlSelf->cpu__DOT__REG_FILE__DOT__regs[0U] = 0U;
}

VL_INLINE_OPT void Vcpu___024root___nba_comb__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__in_alu_b = ((0U == (IData)(vlSelf->cpu__DOT__rs2Data_EX_imm32_4))
                                   ? ((0U == (0x1fU 
                                              & (vlSelf->instruction 
                                                 >> 0x14U)))
                                       ? 0U : vlSelf->cpu__DOT__REG_FILE__DOT__regs
                                      [(0x1fU & (vlSelf->instruction 
                                                 >> 0x14U))])
                                   : ((1U == (IData)(vlSelf->cpu__DOT__rs2Data_EX_imm32_4))
                                       ? vlSelf->cpu__DOT__imm_32
                                       : 4U));
    vlSelf->cpu__DOT__read_rs1_data = ((0U == (IData)(vlSelf->cpu__DOT__rs1_p))
                                        ? 0U : vlSelf->cpu__DOT__REG_FILE__DOT__regs
                                       [vlSelf->cpu__DOT__rs1_p]);
    vlSelf->cpu__DOT__in_alu_a = ((IData)(vlSelf->cpu__DOT__rs1Data_EX_PC)
                                   ? vlSelf->pc : vlSelf->cpu__DOT__read_rs1_data);
    vlSelf->cpu__DOT__condition_branch = 0U;
    vlSelf->cpu__DOT__out_alu = 0U;
    if ((0x10U & (IData)(vlSelf->cpu__DOT__aluc))) {
        if ((1U & (~ ((IData)(vlSelf->cpu__DOT__aluc) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->cpu__DOT__aluc) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->cpu__DOT__aluc) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->cpu__DOT__aluc)))) {
                        vlSelf->cpu__DOT__condition_branch 
                            = (vlSelf->cpu__DOT__in_alu_a 
                               >= vlSelf->cpu__DOT__in_alu_b);
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelf->cpu__DOT__aluc))) {
            vlSelf->cpu__DOT__out_alu = 0U;
        } else if ((4U & (IData)(vlSelf->cpu__DOT__aluc))) {
            vlSelf->cpu__DOT__out_alu = 0U;
        } else if ((2U & (IData)(vlSelf->cpu__DOT__aluc))) {
            vlSelf->cpu__DOT__out_alu = 0U;
        } else if ((1U & (IData)(vlSelf->cpu__DOT__aluc))) {
            vlSelf->cpu__DOT__out_alu = 0U;
        }
    } else if ((8U & (IData)(vlSelf->cpu__DOT__aluc))) {
        if ((4U & (IData)(vlSelf->cpu__DOT__aluc))) {
            vlSelf->cpu__DOT__condition_branch = ((2U 
                                                   & (IData)(vlSelf->cpu__DOT__aluc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu__DOT__aluc))
                                                    ? 
                                                   (vlSelf->cpu__DOT__in_alu_a 
                                                    < vlSelf->cpu__DOT__in_alu_b)
                                                    : 
                                                   VL_GTES_III(32, vlSelf->cpu__DOT__in_alu_a, vlSelf->cpu__DOT__in_alu_b))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu__DOT__aluc))
                                                    ? 
                                                   VL_LTS_III(32, vlSelf->cpu__DOT__in_alu_a, vlSelf->cpu__DOT__in_alu_b)
                                                    : 
                                                   (vlSelf->cpu__DOT__in_alu_a 
                                                    != vlSelf->cpu__DOT__in_alu_b)));
        } else if ((2U & (IData)(vlSelf->cpu__DOT__aluc))) {
            if ((1U & (IData)(vlSelf->cpu__DOT__aluc))) {
                vlSelf->cpu__DOT__condition_branch 
                    = (vlSelf->cpu__DOT__in_alu_a == vlSelf->cpu__DOT__in_alu_b);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->cpu__DOT__aluc) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->cpu__DOT__aluc))) {
                if ((1U & (~ (IData)(vlSelf->cpu__DOT__aluc)))) {
                    vlSelf->cpu__DOT__out_alu = (vlSelf->cpu__DOT__in_alu_a 
                                                 + vlSelf->cpu__DOT__in_alu_b);
                    vlSelf->cpu__DOT__out_alu = (0xfffffffeU 
                                                 & vlSelf->cpu__DOT__out_alu);
                }
            } else {
                vlSelf->cpu__DOT__out_alu = ((1U & (IData)(vlSelf->cpu__DOT__aluc))
                                              ? ((0x1fU 
                                                  >= vlSelf->cpu__DOT__in_alu_b)
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,32, vlSelf->cpu__DOT__in_alu_a, vlSelf->cpu__DOT__in_alu_b)
                                                  : 
                                                 (- 
                                                  (vlSelf->cpu__DOT__in_alu_a 
                                                   >> 0x1fU)))
                                              : ((0x1fU 
                                                  >= vlSelf->cpu__DOT__in_alu_b)
                                                  ? 
                                                 (vlSelf->cpu__DOT__in_alu_a 
                                                  >> vlSelf->cpu__DOT__in_alu_b)
                                                  : 0U));
            }
        }
    } else {
        vlSelf->cpu__DOT__out_alu = ((4U & (IData)(vlSelf->cpu__DOT__aluc))
                                      ? ((2U & (IData)(vlSelf->cpu__DOT__aluc))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__aluc))
                                              ? ((vlSelf->cpu__DOT__in_alu_a 
                                                  < vlSelf->cpu__DOT__in_alu_b)
                                                  ? 1U
                                                  : 0U)
                                              : (VL_LTS_III(32, vlSelf->cpu__DOT__in_alu_a, vlSelf->cpu__DOT__in_alu_b)
                                                  ? 1U
                                                  : 0U))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__aluc))
                                              ? ((0x1fU 
                                                  >= vlSelf->cpu__DOT__in_alu_b)
                                                  ? 
                                                 (vlSelf->cpu__DOT__in_alu_a 
                                                  << vlSelf->cpu__DOT__in_alu_b)
                                                  : 0U)
                                              : (vlSelf->cpu__DOT__in_alu_a 
                                                 ^ vlSelf->cpu__DOT__in_alu_b)))
                                      : ((2U & (IData)(vlSelf->cpu__DOT__aluc))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__aluc))
                                              ? (vlSelf->cpu__DOT__in_alu_a 
                                                 | vlSelf->cpu__DOT__in_alu_b)
                                              : (vlSelf->cpu__DOT__in_alu_a 
                                                 & vlSelf->cpu__DOT__in_alu_b))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__aluc))
                                              ? (vlSelf->cpu__DOT__in_alu_a 
                                                 - vlSelf->cpu__DOT__in_alu_b)
                                              : (vlSelf->cpu__DOT__in_alu_a 
                                                 + vlSelf->cpu__DOT__in_alu_b))));
    }
    vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp = 0U;
    if ((2U & (IData)(vlSelf->cpu__DOT__read_mem))) {
        if ((1U & (IData)(vlSelf->cpu__DOT__read_mem))) {
            Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_read_TOP(vlSelf->cpu__DOT__out_alu, 1U, vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__3__data);
            vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp 
                = vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__3__data;
            vlSelf->cpu__DOT__out_mem = ((4U & (IData)(vlSelf->cpu__DOT__read_mem))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp))
                                          : (0xffU 
                                             & vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp));
        } else {
            Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_read_TOP(vlSelf->cpu__DOT__out_alu, 2U, vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__4__data);
            vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp 
                = vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__4__data;
            vlSelf->cpu__DOT__out_mem = ((4U & (IData)(vlSelf->cpu__DOT__read_mem))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp))
                                          : (0xffffU 
                                             & vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp));
        }
    } else if ((1U & (IData)(vlSelf->cpu__DOT__read_mem))) {
        Vcpu___024root____Vdpiimwrap_cpu__DOT__DATA_MEM__DOT__npc_host_read_TOP(vlSelf->cpu__DOT__out_alu, 4U, vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__5__data);
        vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp = vlSelf->__Vtask_cpu__DOT__DATA_MEM__DOT__npc_host_read__5__data;
        vlSelf->cpu__DOT__out_mem = vlSelf->cpu__DOT__DATA_MEM__DOT__data_tmp;
    } else {
        vlSelf->cpu__DOT__out_mem = 0U;
    }
    vlSelf->cpu__DOT__write_rd_data = ((IData)(vlSelf->cpu__DOT__aluOut_WB_memOut)
                                        ? vlSelf->cpu__DOT__out_mem
                                        : vlSelf->cpu__DOT__out_alu);
}

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__2(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->cpu__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0 
        = (vlSelf->cpu__DOT__imm_32 + vlSelf->pc);
}

VL_INLINE_OPT void Vcpu___024root___nba_comb__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->cpu__DOT__next_pc = ((1U == (IData)(vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm))
                                  ? vlSelf->cpu__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0
                                  : ((2U == (IData)(vlSelf->cpu__DOT__pcImm_NEXTPC_rs1Imm))
                                      ? (vlSelf->cpu__DOT__imm_32 
                                         + vlSelf->cpu__DOT__read_rs1_data)
                                      : ((IData)(vlSelf->cpu__DOT__condition_branch)
                                          ? vlSelf->cpu__DOT__NEXT_PC__DOT____VdfgTmp_h05148406__0
                                          : ((0x6cU 
                                              == vlSelf->pc)
                                              ? 0x6cU
                                              : ((IData)(4U) 
                                                 + vlSelf->pc)))));
}

void Vcpu___024root___eval_nba(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vcpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vcpu___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vcpu___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vcpu___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vcpu___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vcpu___024root___eval_triggers__ico(Vcpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__ico(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vcpu___024root___eval_triggers__act(Vcpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__nba(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vcpu___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vcpu___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("cpu.v", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vcpu___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcpu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcpu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("cpu.v", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcpu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcpu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("cpu.v", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcpu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
