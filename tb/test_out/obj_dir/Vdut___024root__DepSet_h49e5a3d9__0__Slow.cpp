// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"
#include "Vdut___024unit.h"

extern const VlUnpacked<CData/*3:0*/, 128> Vdut__ConstPool__TABLE_h45f37922_0;

VL_ATTR_COLD void Vdut___024root___stl_sequent__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.a5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xfU];
    vlSelfRef.a4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xeU];
    vlSelfRef.a3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xdU];
    vlSelfRef.a2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xcU];
    vlSelfRef.a1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xbU];
    vlSelfRef.s1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [9U];
    vlSelfRef.t2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [7U];
    vlSelfRef.t1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [6U];
    vlSelfRef.t0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [5U];
    vlSelfRef.a0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xaU];
    vlSelfRef.s2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x12U];
    vlSelfRef.s0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [8U];
    vlSelfRef.a6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x10U];
    vlSelfRef.a7 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x11U];
    vlSelfRef.s3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x13U];
    vlSelfRef.s4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x14U];
    vlSelfRef.s5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x15U];
    vlSelfRef.s6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x16U];
    vlSelfRef.s7 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x17U];
    vlSelfRef.s8 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x18U];
    vlSelfRef.s9 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x19U];
    vlSelfRef.s10 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1aU];
    vlSelfRef.s11 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1bU];
    vlSelfRef.t3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1cU];
    vlSelfRef.t4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1dU];
    vlSelfRef.t5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1eU];
    vlSelfRef.t6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1fU];
    if ((0x40U & vlSelfRef.top__DOT__InstrD)) {
        vlSelfRef.top__DOT__RegWriteD = ((1U & (vlSelfRef.top__DOT__InstrD 
                                                >> 5U)) 
                                         && ((1U & 
                                              (~ (vlSelfRef.top__DOT__InstrD 
                                                  >> 4U))) 
                                             && ((8U 
                                                  & vlSelfRef.top__DOT__InstrD)
                                                  ? 
                                                 ((1U 
                                                   & (vlSelfRef.top__DOT__InstrD 
                                                      >> 2U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.top__DOT__InstrD 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & vlSelfRef.top__DOT__InstrD)))
                                                  : 
                                                 ((1U 
                                                   & (vlSelfRef.top__DOT__InstrD 
                                                      >> 2U)) 
                                                  && ((1U 
                                                       & (vlSelfRef.top__DOT__InstrD 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & vlSelfRef.top__DOT__InstrD))))));
        if ((0x20U & vlSelfRef.top__DOT__InstrD)) {
            if ((0x10U & vlSelfRef.top__DOT__InstrD)) {
                vlSelfRef.top__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((8U & vlSelfRef.top__DOT__InstrD)) {
                if ((4U & vlSelfRef.top__DOT__InstrD)) {
                    if ((2U & vlSelfRef.top__DOT__InstrD)) {
                        if ((1U & vlSelfRef.top__DOT__InstrD)) {
                            vlSelfRef.top__DOT__ResultSrcD = 2U;
                            vlSelfRef.top__DOT__ImmSrc = 4U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        } else {
                            vlSelfRef.top__DOT__ResultSrcD = 3U;
                            vlSelfRef.top__DOT__ImmSrc = 7U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        }
                    } else {
                        vlSelfRef.top__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    }
                } else {
                    vlSelfRef.top__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                }
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelfRef.top__DOT__InstrD)) {
                if ((2U & vlSelfRef.top__DOT__InstrD)) {
                    if ((1U & vlSelfRef.top__DOT__InstrD)) {
                        vlSelfRef.top__DOT__ResultSrcD = 2U;
                        vlSelfRef.top__DOT__ImmSrc = 4U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelfRef.top__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelfRef.top__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & vlSelfRef.top__DOT__InstrD)) {
                if ((1U & vlSelfRef.top__DOT__InstrD)) {
                    vlSelfRef.top__DOT__ResultSrcD = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 2U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 1U;
                } else {
                    vlSelfRef.top__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelfRef.top__DOT__ResultSrcD = 3U;
            vlSelfRef.top__DOT__ImmSrc = 7U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    } else if ((0x20U & vlSelfRef.top__DOT__InstrD)) {
        vlSelfRef.top__DOT__RegWriteD = ((1U & (vlSelfRef.top__DOT__InstrD 
                                                >> 4U)) 
                                         && ((1U & 
                                              (~ (vlSelfRef.top__DOT__InstrD 
                                                  >> 3U))) 
                                             && ((4U 
                                                  & vlSelfRef.top__DOT__InstrD)
                                                  ? 
                                                 ((1U 
                                                   & (vlSelfRef.top__DOT__InstrD 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.top__DOT__InstrD))
                                                  : 
                                                 ((1U 
                                                   & (vlSelfRef.top__DOT__InstrD 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & vlSelfRef.top__DOT__InstrD)))));
        if ((0x10U & vlSelfRef.top__DOT__InstrD)) {
            if ((8U & vlSelfRef.top__DOT__InstrD)) {
                vlSelfRef.top__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelfRef.top__DOT__InstrD)) {
                if ((2U & vlSelfRef.top__DOT__InstrD)) {
                    if ((1U & vlSelfRef.top__DOT__InstrD)) {
                        vlSelfRef.top__DOT__ResultSrcD = 0U;
                        vlSelfRef.top__DOT__ImmSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelfRef.top__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelfRef.top__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                if ((2U & vlSelfRef.top__DOT__InstrD)) {
                    if ((1U & vlSelfRef.top__DOT__InstrD)) {
                        vlSelfRef.top__DOT__ResultSrcD = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                    } else {
                        vlSelfRef.top__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelfRef.top__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
        } else if ((8U & vlSelfRef.top__DOT__InstrD)) {
            vlSelfRef.top__DOT__ResultSrcD = 3U;
            vlSelfRef.top__DOT__ImmSrc = 7U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((4U & vlSelfRef.top__DOT__InstrD)) {
            vlSelfRef.top__DOT__ResultSrcD = 3U;
            vlSelfRef.top__DOT__ImmSrc = 7U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((2U & vlSelfRef.top__DOT__InstrD)) {
            if ((1U & vlSelfRef.top__DOT__InstrD)) {
                vlSelfRef.top__DOT__ResultSrcD = 0U;
                vlSelfRef.top__DOT__ImmSrc = 1U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 1U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
            } else {
                vlSelfRef.top__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelfRef.top__DOT__ResultSrcD = 3U;
            vlSelfRef.top__DOT__ImmSrc = 7U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    } else if ((0x10U & vlSelfRef.top__DOT__InstrD)) {
        vlSelfRef.top__DOT__RegWriteD = ((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                                   >> 3U))) 
                                         && ((4U & vlSelfRef.top__DOT__InstrD)
                                              ? ((1U 
                                                  & (vlSelfRef.top__DOT__InstrD 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSelfRef.top__DOT__InstrD))
                                              : ((1U 
                                                  & (vlSelfRef.top__DOT__InstrD 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSelfRef.top__DOT__InstrD))));
        if ((8U & vlSelfRef.top__DOT__InstrD)) {
            vlSelfRef.top__DOT__ResultSrcD = 3U;
            vlSelfRef.top__DOT__ImmSrc = 7U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((4U & vlSelfRef.top__DOT__InstrD)) {
            if ((2U & vlSelfRef.top__DOT__InstrD)) {
                if ((1U & vlSelfRef.top__DOT__InstrD)) {
                    vlSelfRef.top__DOT__ResultSrcD = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelfRef.top__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else if ((2U & vlSelfRef.top__DOT__InstrD)) {
            if ((1U & vlSelfRef.top__DOT__InstrD)) {
                vlSelfRef.top__DOT__ResultSrcD = 0U;
                vlSelfRef.top__DOT__ImmSrc = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
            } else {
                vlSelfRef.top__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelfRef.top__DOT__ResultSrcD = 3U;
            vlSelfRef.top__DOT__ImmSrc = 7U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    } else {
        vlSelfRef.top__DOT__RegWriteD = ((1U & (~ (vlSelfRef.top__DOT__InstrD 
                                                   >> 3U))) 
                                         && ((1U & 
                                              (~ (vlSelfRef.top__DOT__InstrD 
                                                  >> 2U))) 
                                             && ((1U 
                                                  & (vlSelfRef.top__DOT__InstrD 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSelfRef.top__DOT__InstrD))));
        if ((8U & vlSelfRef.top__DOT__InstrD)) {
            vlSelfRef.top__DOT__ResultSrcD = 3U;
            vlSelfRef.top__DOT__ImmSrc = 7U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((4U & vlSelfRef.top__DOT__InstrD)) {
            vlSelfRef.top__DOT__ResultSrcD = 3U;
            vlSelfRef.top__DOT__ImmSrc = 7U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((2U & vlSelfRef.top__DOT__InstrD)) {
            if ((1U & vlSelfRef.top__DOT__InstrD)) {
                vlSelfRef.top__DOT__ResultSrcD = 1U;
                vlSelfRef.top__DOT__ImmSrc = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 1U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
            } else {
                vlSelfRef.top__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelfRef.top__DOT__ResultSrcD = 3U;
            vlSelfRef.top__DOT__ImmSrc = 7U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    }
    vlSelfRef.top__DOT__modeAddrD = ((IData)(vlSelfRef.top__DOT__control_unit__DOT__Store)
                                      ? ((0U == (7U 
                                                 & (vlSelfRef.top__DOT__InstrD 
                                                    >> 0xcU)))
                                          ? 3U : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.top__DOT__InstrD 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.top__DOT__InstrD 
                                                        >> 0xcU)))
                                                    ? 1U
                                                    : 0U)))
                                      : ((IData)(vlSelfRef.top__DOT__control_unit__DOT__Load)
                                          ? ((0x4000U 
                                              & vlSelfRef.top__DOT__InstrD)
                                              ? ((0x2000U 
                                                  & vlSelfRef.top__DOT__InstrD)
                                                  ? 0U
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelfRef.top__DOT__InstrD)
                                                   ? 4U
                                                   : 5U))
                                              : ((0x2000U 
                                                  & vlSelfRef.top__DOT__InstrD)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelfRef.top__DOT__InstrD)
                                                   ? 0U
                                                   : 1U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelfRef.top__DOT__InstrD)
                                                   ? 2U
                                                   : 3U)))
                                          : 0U));
    vlSelfRef.top__DOT__InstrF = (((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                    [(0xffffU & ((IData)(3U) 
                                                 + vlSelfRef.top__DOT__PCF))] 
                                    << 0x18U) | (vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.top__DOT__PCF))] 
                                                 << 0x10U)) 
                                  | ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                      [(0xffffU & ((IData)(1U) 
                                                   + vlSelfRef.top__DOT__PCF))] 
                                      << 8U) | vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                     [(0xffffU & vlSelfRef.top__DOT__PCF)]));
    vlSelfRef.top__DOT__ForwardAE = 0U;
    if ((((IData)(vlSelfRef.top__DOT__MemReadM) & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                                                   == (IData)(vlSelfRef.top__DOT__RdM))) 
         & (0U != (IData)(vlSelfRef.top__DOT__Rs1E)))) {
        vlSelfRef.top__DOT__ForwardAE = 3U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteM) 
                 & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                    == (IData)(vlSelfRef.top__DOT__RdM))) 
                & (0U != (IData)(vlSelfRef.top__DOT__Rs1E)))) {
        vlSelfRef.top__DOT__ForwardAE = 2U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteW) 
                 & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                    == (IData)(vlSelfRef.top__DOT__RdW))) 
                & (0U != (IData)(vlSelfRef.top__DOT__Rs1E)))) {
        vlSelfRef.top__DOT__ForwardAE = 1U;
    }
    vlSelfRef.top__DOT__ForwardBE = 0U;
    if ((((IData)(vlSelfRef.top__DOT__MemReadM) & ((IData)(vlSelfRef.top__DOT__Rs2E) 
                                                   == (IData)(vlSelfRef.top__DOT__RdM))) 
         & (0U != (IData)(vlSelfRef.top__DOT__Rs2E)))) {
        vlSelfRef.top__DOT__ForwardBE = 3U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteM) 
                 & ((IData)(vlSelfRef.top__DOT__Rs2E) 
                    == (IData)(vlSelfRef.top__DOT__RdM))) 
                & (0U != (IData)(vlSelfRef.top__DOT__Rs2E)))) {
        vlSelfRef.top__DOT__ForwardBE = 2U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteW) 
                 & ((IData)(vlSelfRef.top__DOT__Rs2E) 
                    == (IData)(vlSelfRef.top__DOT__RdW))) 
                & (0U != (IData)(vlSelfRef.top__DOT__Rs2E)))) {
        vlSelfRef.top__DOT__ForwardBE = 1U;
    }
    vlSelfRef.top__DOT__ResultW = ((0U == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                    ? vlSelfRef.top__DOT__ALUResultW
                                    : ((1U == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                        ? vlSelfRef.top__DOT__ReadDataW
                                        : ((2U == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                            ? vlSelfRef.top__DOT__PCPlus4W
                                            : vlSelfRef.top__DOT__ALUResultW)));
    if ((0x100U == vlSelfRef.top__DOT__ALUResultM)) {
        vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
            = vlSelfRef.trigger;
    } else {
        vlSelfRef.top__DOT__miss_stall = 0U;
        vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache = 0U;
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0 
            = ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                [(0xffU & (vlSelfRef.top__DOT__ALUResultM 
                           >> 3U))].__PVT__way[0U][2U] 
                >> 0x15U) & ((0x1fffffU & vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                              [(0xffU & (vlSelfRef.top__DOT__ALUResultM 
                                         >> 3U))].__PVT__way
                              [0U][2U]) == (vlSelfRef.top__DOT__ALUResultM 
                                            >> 0xbU)));
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit1 
            = ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                [(0xffU & (vlSelfRef.top__DOT__ALUResultM 
                           >> 3U))].__PVT__way[1U][2U] 
                >> 0x15U) & ((0x1fffffU & vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                              [(0xffU & (vlSelfRef.top__DOT__ALUResultM 
                                         >> 3U))].__PVT__way
                              [1U][2U]) == (vlSelfRef.top__DOT__ALUResultM 
                                            >> 0xbU)));
        if (((IData)(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0) 
             | (IData)(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit1))) {
            if (vlSelfRef.top__DOT__MemReadM) {
                vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                    = ((IData)(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0)
                        ? ((4U & vlSelfRef.top__DOT__ALUResultM)
                            ? vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                           [(0xffU & (vlSelfRef.top__DOT__ALUResultM 
                                      >> 3U))].__PVT__way
                           [0U][1U] : vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                           [(0xffU & (vlSelfRef.top__DOT__ALUResultM 
                                      >> 3U))].__PVT__way
                           [0U][0U]) : ((4U & vlSelfRef.top__DOT__ALUResultM)
                                         ? vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                                        [(0xffU & (vlSelfRef.top__DOT__ALUResultM 
                                                   >> 3U))]
                                        .__PVT__way
                                        [1U][1U] : 
                                        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                                        [(0xffU & (vlSelfRef.top__DOT__ALUResultM 
                                                   >> 3U))]
                                        .__PVT__way
                                        [1U][0U]));
            }
            if (vlSelfRef.top__DOT__MemWriteM) {
                vlSelfRef.top__DOT__miss_stall = 0U;
            }
        } else if (((IData)(vlSelfRef.top__DOT__MemWriteM) 
                    | (IData)(vlSelfRef.top__DOT__MemReadM))) {
            vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                = (((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                     [(0x1ffffU & ((IData)(3U) + vlSelfRef.top__DOT__ALUResultM))] 
                     << 0x18U) | (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                  [(0x1ffffU & ((IData)(2U) 
                                                + vlSelfRef.top__DOT__ALUResultM))] 
                                  << 0x10U)) | ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                 [(0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__ALUResultM))] 
                                                 << 8U) 
                                                | vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                [(0x1ffffU 
                                                  & vlSelfRef.top__DOT__ALUResultM)]));
            vlSelfRef.top__DOT__miss_stall = 1U;
        }
    }
    vlSelfRef.top__DOT__ExtImmD = ((4U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                    ? ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                                 ? 
                                                (((- (IData)(
                                                             (vlSelfRef.top__DOT__InstrD 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelfRef.top__DOT__InstrD 
                                                    >> 0x14U))
                                                 : 
                                                (((- (IData)(
                                                             (vlSelfRef.top__DOT__InstrD 
                                                              >> 0x1fU))) 
                                                  << 0x14U) 
                                                 | (((0xff000U 
                                                      & vlSelfRef.top__DOT__InstrD) 
                                                     | (0x800U 
                                                        & (vlSelfRef.top__DOT__InstrD 
                                                           >> 9U))) 
                                                    | (0x7feU 
                                                       & (vlSelfRef.top__DOT__InstrD 
                                                          >> 0x14U))))))
                                    : ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                        ? ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                            ? (0xfffff000U 
                                               & vlSelfRef.top__DOT__InstrD)
                                            : (((- (IData)(
                                                           (vlSelfRef.top__DOT__InstrD 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & (vlSelfRef.top__DOT__InstrD 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelfRef.top__DOT__InstrD 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelfRef.top__DOT__InstrD 
                                                           >> 7U))))))
                                        : ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                            ? (((- (IData)(
                                                           (vlSelfRef.top__DOT__InstrD 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelfRef.top__DOT__InstrD 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.top__DOT__InstrD 
                                                        >> 7U))))
                                            : (((- (IData)(
                                                           (vlSelfRef.top__DOT__InstrD 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.top__DOT__InstrD 
                                                  >> 0x14U)))));
    __Vtableidx1 = (((0x40U & (vlSelfRef.top__DOT__InstrD 
                               >> 0x18U)) | (0x20U 
                                             & vlSelfRef.top__DOT__InstrD)) 
                    | ((0x1cU & (vlSelfRef.top__DOT__InstrD 
                                 >> 0xaU)) | (IData)(vlSelfRef.top__DOT__control_unit__DOT__ALUOp)));
    vlSelfRef.top__DOT__ALUControlD = Vdut__ConstPool__TABLE_h45f37922_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__ReadDataM = ((1U == (IData)(vlSelfRef.top__DOT__modeAddrM))
                                      ? vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache
                                      : ((3U == (IData)(vlSelfRef.top__DOT__modeAddrM))
                                          ? ((2U & vlSelfRef.top__DOT__ALUResultM)
                                              ? ((1U 
                                                  & vlSelfRef.top__DOT__ALUResultM)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                                               >> 0x1fU))) 
                                                   << 8U) 
                                                  | (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                                     >> 0x18U))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                                                  >> 0x17U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                                        >> 0x10U))))
                                              : ((1U 
                                                  & vlSelfRef.top__DOT__ALUResultM)
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                                                  >> 0xfU)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                                        >> 8U)))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache))))
                                          : ((5U == (IData)(vlSelfRef.top__DOT__modeAddrM))
                                              ? ((2U 
                                                  & vlSelfRef.top__DOT__ALUResultM)
                                                  ? 
                                                 ((1U 
                                                   & vlSelfRef.top__DOT__ALUResultM)
                                                   ? 
                                                  (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                                   >> 0x18U)
                                                   : 
                                                  (0xffU 
                                                   & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                                      >> 0x10U)))
                                                  : 
                                                 ((1U 
                                                   & vlSelfRef.top__DOT__ALUResultM)
                                                   ? 
                                                  (0xffU 
                                                   & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                                      >> 8U))
                                                   : 
                                                  (0xffU 
                                                   & vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache)))
                                              : vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache)));
    vlSelfRef.top__DOT__SrcAE = ((2U & (IData)(vlSelfRef.top__DOT__ForwardAE))
                                  ? ((1U & (IData)(vlSelfRef.top__DOT__ForwardAE))
                                      ? vlSelfRef.top__DOT__ReadDataM
                                      : vlSelfRef.top__DOT__ALUResultM)
                                  : ((1U & (IData)(vlSelfRef.top__DOT__ForwardAE))
                                      ? vlSelfRef.top__DOT__ResultW
                                      : vlSelfRef.top__DOT__RD1E));
    vlSelfRef.top__DOT__WriteDataE = ((2U & (IData)(vlSelfRef.top__DOT__ForwardBE))
                                       ? ((1U & (IData)(vlSelfRef.top__DOT__ForwardBE))
                                           ? vlSelfRef.top__DOT__ReadDataM
                                           : vlSelfRef.top__DOT__ALUResultM)
                                       : ((1U & (IData)(vlSelfRef.top__DOT__ForwardBE))
                                           ? vlSelfRef.top__DOT__ResultW
                                           : vlSelfRef.top__DOT__RD2E));
    vlSelfRef.top__DOT____Vcellinp__alu__SrcB = ((IData)(vlSelfRef.top__DOT__ALUSrcE)
                                                  ? vlSelfRef.top__DOT__ExtImmE
                                                  : vlSelfRef.top__DOT__WriteDataE);
    vlSelfRef.top__DOT__ALUResultE = ((8U & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                       ? ((4U & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    ((vlSelfRef.top__DOT__SrcAE 
                                                      < vlSelfRef.top__DOT____Vcellinp__alu__SrcB)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTS_III(32, vlSelfRef.top__DOT__SrcAE, vlSelfRef.top__DOT____Vcellinp__alu__SrcB)
                                                      ? 1U
                                                      : 0U))))
                                       : ((4U & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                           ? ((2U & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__SrcAE, 
                                                                 (0x1fU 
                                                                  & vlSelfRef.top__DOT____Vcellinp__alu__SrcB))
                                                   : 
                                                  (vlSelfRef.top__DOT__SrcAE 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelfRef.top__DOT____Vcellinp__alu__SrcB)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                   ? 
                                                  (vlSelfRef.top__DOT__SrcAE 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelfRef.top__DOT____Vcellinp__alu__SrcB))
                                                   : 
                                                  (vlSelfRef.top__DOT__SrcAE 
                                                   & vlSelfRef.top__DOT____Vcellinp__alu__SrcB)))
                                           : ((2U & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                   ? 
                                                  (vlSelfRef.top__DOT__SrcAE 
                                                   | vlSelfRef.top__DOT____Vcellinp__alu__SrcB)
                                                   : 
                                                  (vlSelfRef.top__DOT__SrcAE 
                                                   ^ vlSelfRef.top__DOT____Vcellinp__alu__SrcB))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                   ? 
                                                  (vlSelfRef.top__DOT__SrcAE 
                                                   - vlSelfRef.top__DOT____Vcellinp__alu__SrcB)
                                                   : 
                                                  (vlSelfRef.top__DOT__SrcAE 
                                                   + vlSelfRef.top__DOT____Vcellinp__alu__SrcB)))));
    vlSelfRef.top__DOT__Zero = ((1U & ((IData)(vlSelfRef.top__DOT__ALUControlE) 
                                       >> 3U)) && (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      >= vlSelfRef.top__DOT____Vcellinp__alu__SrcB)
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      < vlSelfRef.top__DOT____Vcellinp__alu__SrcB))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     VL_GTES_III(32, vlSelfRef.top__DOT__SrcAE, vlSelfRef.top__DOT____Vcellinp__alu__SrcB)
                                                      : 
                                                     VL_LTS_III(32, vlSelfRef.top__DOT__SrcAE, vlSelfRef.top__DOT____Vcellinp__alu__SrcB)))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top__DOT__ALUControlE) 
                                                        >> 1U)) 
                                                    && ((1U 
                                                         & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                         ? 
                                                        (vlSelfRef.top__DOT__SrcAE 
                                                         != vlSelfRef.top__DOT____Vcellinp__alu__SrcB)
                                                         : 
                                                        (vlSelfRef.top__DOT__SrcAE 
                                                         == vlSelfRef.top__DOT____Vcellinp__alu__SrcB)))));
    vlSelfRef.top__DOT__PC = ((IData)(4U) + vlSelfRef.top__DOT__PCF);
    if (vlSelfRef.top__DOT__JumpE) {
        vlSelfRef.top__DOT__PC = ((IData)(vlSelfRef.top__DOT__JALRE)
                                   ? vlSelfRef.top__DOT__ALUResultE
                                   : (vlSelfRef.top__DOT__ExtImmE 
                                      + vlSelfRef.top__DOT__PCE));
    }
    if (((0x63U == (0x7fU & vlSelfRef.top__DOT__InstrF)) 
         & (~ (IData)(vlSelfRef.top__DOT__JumpE)))) {
        vlSelfRef.top__DOT__PC_predict = (vlSelfRef.top__DOT__PCF 
                                          + (((- (IData)(
                                                         (vlSelfRef.top__DOT__InstrF 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelfRef.top__DOT__InstrF 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelfRef.top__DOT__InstrF 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelfRef.top__DOT__InstrF 
                                                         >> 7U))))));
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[1U] 
            = ((3U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[1U]) 
               | (vlSelfRef.top__DOT__PCF << 2U));
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[2U] 
            = (vlSelfRef.top__DOT__PCF >> 0x1eU);
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
            = ((3U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]) 
               | ((vlSelfRef.top__DOT__PCF + (((- (IData)(
                                                          (vlSelfRef.top__DOT__InstrF 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelfRef.top__DOT__InstrF 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelfRef.top__DOT__InstrF 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelfRef.top__DOT__InstrF 
                                                          >> 7U)))))) 
                  << 2U));
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[1U] 
            = ((0xfffffffcU & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[1U]) 
               | ((vlSelfRef.top__DOT__PCF + (((- (IData)(
                                                          (vlSelfRef.top__DOT__InstrF 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelfRef.top__DOT__InstrF 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelfRef.top__DOT__InstrF 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelfRef.top__DOT__InstrF 
                                                          >> 7U)))))) 
                  >> 0x1eU));
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
            = ((0xfffffffdU & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]) 
               | (2U & (vlSelfRef.top__DOT__InstrF 
                        >> 0x1eU)));
        if ((vlSelfRef.top__DOT__InstrF >> 0x1fU)) {
            if ((2U <= (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))) {
                vlSelfRef.top__DOT__BPU_Src = 1U;
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                    = (1U | vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
            } else {
                vlSelfRef.top__DOT__BPU_Src = 0U;
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                    = (0xfffffffeU & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
            }
        } else if ((2U <= (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))) {
            vlSelfRef.top__DOT__BPU_Src = 1U;
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                = (1U | vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
        } else {
            vlSelfRef.top__DOT__BPU_Src = 0U;
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                = (0xfffffffeU & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
        }
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue.push_back(
                                                                                VL_CVT_W_A(vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch, vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue
                                                                                .atDefault()));
    } else {
        vlSelfRef.top__DOT__BPU_Src = 0U;
    }
    if (vlSelfRef.top__DOT__BranchE) {
        if (((1U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U]) 
             == (IData)(vlSelfRef.top__DOT__Zero))) {
            vlSelfRef.top__DOT__flushBranch = 0U;
        }
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue.pop_front();
        if (((1U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U]) 
             != (IData)(vlSelfRef.top__DOT__Zero))) {
            vlSelfRef.top__DOT__flushBranch = 1U;
            vlSelfRef.top__DOT__BPU_Src = 1U;
            vlSelfRef.top__DOT__PC_predict = ((IData)(vlSelfRef.top__DOT__Zero)
                                               ? ((
                                                   vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
                                                   << 0x1eU) 
                                                  | (vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U] 
                                                     >> 2U))
                                               : ((IData)(4U) 
                                                  + 
                                                  ((vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[2U] 
                                                    << 0x1eU) 
                                                   | (vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
                                                      >> 2U))));
        }
    } else {
        vlSelfRef.top__DOT__flushBranch = 0U;
    }
    vlSelfRef.top__DOT__flushDE = ((IData)(vlSelfRef.top__DOT__flushBranch) 
                                   | (IData)(vlSelfRef.top__DOT__JumpE));
    vlSelfRef.top__DOT__stall = (((IData)(vlSelfRef.top__DOT__MemReadE) 
                                  & (((IData)(vlSelfRef.top__DOT__RdE) 
                                      == (0x1fU & (vlSelfRef.top__DOT__InstrD 
                                                   >> 0xfU))) 
                                     | ((IData)(vlSelfRef.top__DOT__RdE) 
                                        == (0x1fU & 
                                            (vlSelfRef.top__DOT__InstrD 
                                             >> 0x14U))))) 
                                 | (IData)(vlSelfRef.top__DOT__miss_stall));
    vlSelfRef.top__DOT__flush = (((IData)(vlSelfRef.top__DOT__stall) 
                                  | (IData)(vlSelfRef.top__DOT__flushBranch)) 
                                 | (IData)(vlSelfRef.top__DOT__JumpE));
}
