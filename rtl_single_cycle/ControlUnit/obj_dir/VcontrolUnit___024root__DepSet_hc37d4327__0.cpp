// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VcontrolUnit.h for the primary calling header

#include "verilated.h"

#include "VcontrolUnit___024root.h"

extern const VlUnpacked<CData/*3:0*/, 128> VcontrolUnit__ConstPool__TABLE_h2f1e8d19_0;

VL_INLINE_OPT void VcontrolUnit___024root___combo__TOP__0(VcontrolUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root___combo__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    if ((0x40U & vlSelf->Instr)) {
        vlSelf->RegWrite = (1U & (IData)(((0x20U == 
                                           (0x30U & vlSelf->Instr)) 
                                          & ((8U & vlSelf->Instr)
                                              ? (IData)(
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->Instr)))
                                              : (IData)(
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->Instr)))))));
        if ((0x20U & vlSelf->Instr)) {
            if ((0x10U & vlSelf->Instr)) {
                vlSelf->ImmSrc = 7U;
                vlSelf->ResultSrc = 3U;
                vlSelf->PCSrc = 0U;
                vlSelf->controlUnit__DOT__Store = 0U;
                vlSelf->controlUnit__DOT__Load = 0U;
                vlSelf->controlUnit__DOT__ALUOp = 3U;
            } else if ((8U & vlSelf->Instr)) {
                if ((4U & vlSelf->Instr)) {
                    if ((2U & vlSelf->Instr)) {
                        if ((1U & vlSelf->Instr)) {
                            vlSelf->ImmSrc = 4U;
                            vlSelf->ResultSrc = 2U;
                            vlSelf->PCSrc = 1U;
                            vlSelf->controlUnit__DOT__Store = 0U;
                            vlSelf->controlUnit__DOT__Load = 0U;
                        } else {
                            vlSelf->ImmSrc = 7U;
                            vlSelf->ResultSrc = 3U;
                            vlSelf->PCSrc = 0U;
                            vlSelf->controlUnit__DOT__Store = 0U;
                            vlSelf->controlUnit__DOT__Load = 0U;
                        }
                    } else {
                        vlSelf->ImmSrc = 7U;
                        vlSelf->ResultSrc = 3U;
                        vlSelf->PCSrc = 0U;
                        vlSelf->controlUnit__DOT__Store = 0U;
                        vlSelf->controlUnit__DOT__Load = 0U;
                    }
                } else {
                    vlSelf->ImmSrc = 7U;
                    vlSelf->ResultSrc = 3U;
                    vlSelf->PCSrc = 0U;
                    vlSelf->controlUnit__DOT__Store = 0U;
                    vlSelf->controlUnit__DOT__Load = 0U;
                }
                vlSelf->controlUnit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelf->Instr)) {
                if ((2U & vlSelf->Instr)) {
                    if ((1U & vlSelf->Instr)) {
                        vlSelf->ImmSrc = 5U;
                        vlSelf->ResultSrc = 2U;
                        vlSelf->PCSrc = 3U;
                        vlSelf->controlUnit__DOT__Store = 0U;
                        vlSelf->controlUnit__DOT__Load = 0U;
                        vlSelf->controlUnit__DOT__ALUOp = 0U;
                    } else {
                        vlSelf->ImmSrc = 7U;
                        vlSelf->ResultSrc = 3U;
                        vlSelf->PCSrc = 0U;
                        vlSelf->controlUnit__DOT__Store = 0U;
                        vlSelf->controlUnit__DOT__Load = 0U;
                        vlSelf->controlUnit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelf->ImmSrc = 7U;
                    vlSelf->ResultSrc = 3U;
                    vlSelf->PCSrc = 0U;
                    vlSelf->controlUnit__DOT__Store = 0U;
                    vlSelf->controlUnit__DOT__Load = 0U;
                    vlSelf->controlUnit__DOT__ALUOp = 3U;
                }
            } else if ((2U & vlSelf->Instr)) {
                if ((1U & vlSelf->Instr)) {
                    vlSelf->ImmSrc = 2U;
                    vlSelf->ResultSrc = 0U;
                    vlSelf->PCSrc = 2U;
                    vlSelf->controlUnit__DOT__Store = 0U;
                    vlSelf->controlUnit__DOT__Load = 0U;
                    vlSelf->controlUnit__DOT__ALUOp = 1U;
                } else {
                    vlSelf->ImmSrc = 7U;
                    vlSelf->ResultSrc = 3U;
                    vlSelf->PCSrc = 0U;
                    vlSelf->controlUnit__DOT__Store = 0U;
                    vlSelf->controlUnit__DOT__Load = 0U;
                    vlSelf->controlUnit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->ImmSrc = 7U;
                vlSelf->ResultSrc = 3U;
                vlSelf->PCSrc = 0U;
                vlSelf->controlUnit__DOT__Store = 0U;
                vlSelf->controlUnit__DOT__Load = 0U;
                vlSelf->controlUnit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelf->ImmSrc = 7U;
            vlSelf->ResultSrc = 3U;
            vlSelf->PCSrc = 0U;
            vlSelf->controlUnit__DOT__Store = 0U;
            vlSelf->controlUnit__DOT__Load = 0U;
            vlSelf->controlUnit__DOT__ALUOp = 3U;
        }
        vlSelf->ALUSrc = (1U & (1U & ((0x20U != (0x30U 
                                                 & vlSelf->Instr)) 
                                      | ((8U & vlSelf->Instr)
                                          ? (IData)(
                                                    (7U 
                                                     != 
                                                     (7U 
                                                      & vlSelf->Instr)))
                                          : (IData)(
                                                    (3U 
                                                     != 
                                                     (7U 
                                                      & vlSelf->Instr)))))));
    } else {
        if ((0x20U & vlSelf->Instr)) {
            vlSelf->RegWrite = (1U & (IData)(((0x10U 
                                               == (0x18U 
                                                   & vlSelf->Instr)) 
                                              & ((4U 
                                                  & vlSelf->Instr)
                                                  ? 
                                                 ((vlSelf->Instr 
                                                   >> 1U) 
                                                  & vlSelf->Instr)
                                                  : 
                                                 ((vlSelf->Instr 
                                                   >> 1U) 
                                                  & vlSelf->Instr)))));
            if ((0x10U & vlSelf->Instr)) {
                if ((8U & vlSelf->Instr)) {
                    vlSelf->ImmSrc = 7U;
                    vlSelf->ResultSrc = 3U;
                    vlSelf->controlUnit__DOT__Store = 0U;
                    vlSelf->controlUnit__DOT__Load = 0U;
                    vlSelf->controlUnit__DOT__ALUOp = 3U;
                } else if ((4U & vlSelf->Instr)) {
                    if ((2U & vlSelf->Instr)) {
                        if ((1U & vlSelf->Instr)) {
                            vlSelf->ImmSrc = 3U;
                            vlSelf->ResultSrc = 0U;
                            vlSelf->controlUnit__DOT__Store = 0U;
                            vlSelf->controlUnit__DOT__Load = 0U;
                        } else {
                            vlSelf->ImmSrc = 7U;
                            vlSelf->ResultSrc = 3U;
                            vlSelf->controlUnit__DOT__Store = 0U;
                            vlSelf->controlUnit__DOT__Load = 0U;
                        }
                    } else {
                        vlSelf->ImmSrc = 7U;
                        vlSelf->ResultSrc = 3U;
                        vlSelf->controlUnit__DOT__Store = 0U;
                        vlSelf->controlUnit__DOT__Load = 0U;
                    }
                    vlSelf->controlUnit__DOT__ALUOp = 3U;
                } else {
                    vlSelf->ImmSrc = 7U;
                    if ((2U & vlSelf->Instr)) {
                        if ((1U & vlSelf->Instr)) {
                            vlSelf->ResultSrc = 0U;
                            vlSelf->controlUnit__DOT__Store = 0U;
                            vlSelf->controlUnit__DOT__Load = 0U;
                            vlSelf->controlUnit__DOT__ALUOp = 2U;
                        } else {
                            vlSelf->ResultSrc = 3U;
                            vlSelf->controlUnit__DOT__Store = 0U;
                            vlSelf->controlUnit__DOT__Load = 0U;
                            vlSelf->controlUnit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelf->ResultSrc = 3U;
                        vlSelf->controlUnit__DOT__Store = 0U;
                        vlSelf->controlUnit__DOT__Load = 0U;
                        vlSelf->controlUnit__DOT__ALUOp = 3U;
                    }
                }
            } else if ((8U & vlSelf->Instr)) {
                vlSelf->ImmSrc = 7U;
                vlSelf->ResultSrc = 3U;
                vlSelf->controlUnit__DOT__Store = 0U;
                vlSelf->controlUnit__DOT__Load = 0U;
                vlSelf->controlUnit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelf->Instr)) {
                vlSelf->ImmSrc = 7U;
                vlSelf->ResultSrc = 3U;
                vlSelf->controlUnit__DOT__Store = 0U;
                vlSelf->controlUnit__DOT__Load = 0U;
                vlSelf->controlUnit__DOT__ALUOp = 3U;
            } else if ((2U & vlSelf->Instr)) {
                if ((1U & vlSelf->Instr)) {
                    vlSelf->ImmSrc = 1U;
                    vlSelf->ResultSrc = 0U;
                    vlSelf->controlUnit__DOT__Store = 1U;
                    vlSelf->controlUnit__DOT__Load = 0U;
                    vlSelf->controlUnit__DOT__ALUOp = 0U;
                } else {
                    vlSelf->ImmSrc = 7U;
                    vlSelf->ResultSrc = 3U;
                    vlSelf->controlUnit__DOT__Store = 0U;
                    vlSelf->controlUnit__DOT__Load = 0U;
                    vlSelf->controlUnit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->ImmSrc = 7U;
                vlSelf->ResultSrc = 3U;
                vlSelf->controlUnit__DOT__Store = 0U;
                vlSelf->controlUnit__DOT__Load = 0U;
                vlSelf->controlUnit__DOT__ALUOp = 3U;
            }
        } else if ((0x10U & vlSelf->Instr)) {
            vlSelf->RegWrite = (1U & ((~ (vlSelf->Instr 
                                          >> 3U)) & 
                                      ((4U & vlSelf->Instr)
                                        ? ((vlSelf->Instr 
                                            >> 1U) 
                                           & vlSelf->Instr)
                                        : ((vlSelf->Instr 
                                            >> 1U) 
                                           & vlSelf->Instr))));
            if ((8U & vlSelf->Instr)) {
                vlSelf->ImmSrc = 7U;
                vlSelf->ResultSrc = 3U;
                vlSelf->controlUnit__DOT__Store = 0U;
                vlSelf->controlUnit__DOT__Load = 0U;
                vlSelf->controlUnit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelf->Instr)) {
                if ((2U & vlSelf->Instr)) {
                    if ((1U & vlSelf->Instr)) {
                        vlSelf->ImmSrc = 3U;
                        vlSelf->ResultSrc = 0U;
                        vlSelf->controlUnit__DOT__Store = 0U;
                        vlSelf->controlUnit__DOT__Load = 0U;
                    } else {
                        vlSelf->ImmSrc = 7U;
                        vlSelf->ResultSrc = 3U;
                        vlSelf->controlUnit__DOT__Store = 0U;
                        vlSelf->controlUnit__DOT__Load = 0U;
                    }
                } else {
                    vlSelf->ImmSrc = 7U;
                    vlSelf->ResultSrc = 3U;
                    vlSelf->controlUnit__DOT__Store = 0U;
                    vlSelf->controlUnit__DOT__Load = 0U;
                }
                vlSelf->controlUnit__DOT__ALUOp = 3U;
            } else if ((2U & vlSelf->Instr)) {
                if ((1U & vlSelf->Instr)) {
                    vlSelf->ImmSrc = 0U;
                    vlSelf->ResultSrc = 0U;
                    vlSelf->controlUnit__DOT__Store = 0U;
                    vlSelf->controlUnit__DOT__Load = 0U;
                    vlSelf->controlUnit__DOT__ALUOp = 2U;
                } else {
                    vlSelf->ImmSrc = 7U;
                    vlSelf->ResultSrc = 3U;
                    vlSelf->controlUnit__DOT__Store = 0U;
                    vlSelf->controlUnit__DOT__Load = 0U;
                    vlSelf->controlUnit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->ImmSrc = 7U;
                vlSelf->ResultSrc = 3U;
                vlSelf->controlUnit__DOT__Store = 0U;
                vlSelf->controlUnit__DOT__Load = 0U;
                vlSelf->controlUnit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelf->RegWrite = (1U & (IData)((3U == 
                                              (0xfU 
                                               & vlSelf->Instr))));
            if ((8U & vlSelf->Instr)) {
                vlSelf->ImmSrc = 7U;
                vlSelf->ResultSrc = 3U;
                vlSelf->controlUnit__DOT__Store = 0U;
                vlSelf->controlUnit__DOT__Load = 0U;
                vlSelf->controlUnit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelf->Instr)) {
                vlSelf->ImmSrc = 7U;
                vlSelf->ResultSrc = 3U;
                vlSelf->controlUnit__DOT__Store = 0U;
                vlSelf->controlUnit__DOT__Load = 0U;
                vlSelf->controlUnit__DOT__ALUOp = 3U;
            } else if ((2U & vlSelf->Instr)) {
                if ((1U & vlSelf->Instr)) {
                    vlSelf->ImmSrc = 0U;
                    vlSelf->ResultSrc = 1U;
                    vlSelf->controlUnit__DOT__Store = 0U;
                    vlSelf->controlUnit__DOT__Load = 1U;
                    vlSelf->controlUnit__DOT__ALUOp = 0U;
                } else {
                    vlSelf->ImmSrc = 7U;
                    vlSelf->ResultSrc = 3U;
                    vlSelf->controlUnit__DOT__Store = 0U;
                    vlSelf->controlUnit__DOT__Load = 0U;
                    vlSelf->controlUnit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->ImmSrc = 7U;
                vlSelf->ResultSrc = 3U;
                vlSelf->controlUnit__DOT__Store = 0U;
                vlSelf->controlUnit__DOT__Load = 0U;
                vlSelf->controlUnit__DOT__ALUOp = 3U;
            }
        }
        vlSelf->ALUSrc = (1U & (IData)((0x33U != (0x3fU 
                                                  & vlSelf->Instr))));
        vlSelf->PCSrc = 0U;
    }
    vlSelf->MemWrite = (IData)((0x23U == (0x7fU & vlSelf->Instr)));
    vlSelf->modeBU = ((IData)(vlSelf->controlUnit__DOT__Store)
                       ? ((0U == (7U & (vlSelf->Instr 
                                        >> 0xcU))) ? 3U
                           : ((1U == (7U & (vlSelf->Instr 
                                            >> 0xcU)))
                               ? 2U : ((2U == (7U & 
                                               (vlSelf->Instr 
                                                >> 0xcU)))
                                        ? 1U : 0U)))
                       : ((IData)(vlSelf->controlUnit__DOT__Load)
                           ? ((0x4000U & vlSelf->Instr)
                               ? ((0x2000U & vlSelf->Instr)
                                   ? 0U : ((0x1000U 
                                            & vlSelf->Instr)
                                            ? 4U : 5U))
                               : ((0x2000U & vlSelf->Instr)
                                   ? ((0x1000U & vlSelf->Instr)
                                       ? 0U : 1U) : 
                                  ((0x1000U & vlSelf->Instr)
                                    ? 2U : 3U))) : 0U));
    __Vtableidx1 = ((0x40U & (vlSelf->Instr >> 0x18U)) 
                    | ((0x20U & vlSelf->Instr) | ((0x1cU 
                                                   & (vlSelf->Instr 
                                                      >> 0xaU)) 
                                                  | (IData)(vlSelf->controlUnit__DOT__ALUOp))));
    vlSelf->ALUCtrl = VcontrolUnit__ConstPool__TABLE_h2f1e8d19_0
        [__Vtableidx1];
}

void VcontrolUnit___024root___eval(VcontrolUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root___eval\n"); );
    // Body
    VcontrolUnit___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void VcontrolUnit___024root___eval_debug_assertions(VcontrolUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
