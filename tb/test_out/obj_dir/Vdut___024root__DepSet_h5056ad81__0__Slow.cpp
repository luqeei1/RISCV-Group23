// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "verilated.h"

#include "Vdut___024root.h"

VL_ATTR_COLD void Vdut___024root___initial__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hfb5a4ebb__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    VL_READMEM_N(true, 8, 65536, 0, std::string{"pdf.hex"}
                 ,  &(vlSelf->top__DOT__instruction_memory__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF("ROM loaded successfully.\n");
    __Vtemp_hfb5a4ebb__0[0U] = 0x2e686578U;
    __Vtemp_hfb5a4ebb__0[1U] = 0x6d6f7279U;
    __Vtemp_hfb5a4ebb__0[2U] = 0x615f6d65U;
    __Vtemp_hfb5a4ebb__0[3U] = 0x646174U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hfb5a4ebb__0)
                 ,  &(vlSelf->top__DOT__data_memory__DOT__ram_array)
                 , 0x10000U, ~0ULL);
    vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter = 2U;
    vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter = 2U;
    vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front = 0U;
    vlSelf->top__DOT__branch_prediction_unit__DOT__queue_back = 0U;
    vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count = 0U;
}

extern const VlUnpacked<CData/*3:0*/, 128> Vdut__ConstPool__TABLE_h2f1e8d19_0;

VL_ATTR_COLD void Vdut___024root___settle__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->a5 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xfU];
    vlSelf->a4 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xeU];
    vlSelf->a3 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xdU];
    vlSelf->a2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xcU];
    vlSelf->a1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xbU];
    vlSelf->s1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [9U];
    vlSelf->t2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [7U];
    vlSelf->t1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [6U];
    vlSelf->t0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [5U];
    vlSelf->a0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xaU];
    vlSelf->s2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x12U];
    vlSelf->s0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [8U];
    vlSelf->a6 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x10U];
    vlSelf->a7 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x11U];
    vlSelf->s3 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x13U];
    vlSelf->s4 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x14U];
    vlSelf->s5 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x15U];
    vlSelf->s6 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x16U];
    vlSelf->s7 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x17U];
    vlSelf->s8 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x18U];
    vlSelf->s9 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x19U];
    vlSelf->s10 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1aU];
    vlSelf->s11 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1bU];
    vlSelf->t3 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1cU];
    vlSelf->t4 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1dU];
    vlSelf->t5 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1eU];
    vlSelf->t6 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1fU];
    vlSelf->top__DOT__ResultW = ((0U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                  ? vlSelf->top__DOT__ALUResultW
                                  : ((1U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                      ? vlSelf->top__DOT__ReadDataW
                                      : ((2U == (IData)(vlSelf->top__DOT__ResultSrcW))
                                          ? vlSelf->top__DOT__PCPlus4W
                                          : vlSelf->top__DOT__ALUResultW)));
    vlSelf->top__DOT__ForwardAE = 0U;
    if ((((IData)(vlSelf->top__DOT__MemReadM) & ((IData)(vlSelf->top__DOT__Rs1E) 
                                                 == (IData)(vlSelf->top__DOT__RdM))) 
         & (0U != (IData)(vlSelf->top__DOT__Rs1E)))) {
        vlSelf->top__DOT__ForwardAE = 3U;
    } else if ((((IData)(vlSelf->top__DOT__RegWriteM) 
                 & ((IData)(vlSelf->top__DOT__Rs1E) 
                    == (IData)(vlSelf->top__DOT__RdM))) 
                & (0U != (IData)(vlSelf->top__DOT__Rs1E)))) {
        vlSelf->top__DOT__ForwardAE = 2U;
    } else if ((((IData)(vlSelf->top__DOT__RegWriteW) 
                 & ((IData)(vlSelf->top__DOT__Rs1E) 
                    == (IData)(vlSelf->top__DOT__RdW))) 
                & (0U != (IData)(vlSelf->top__DOT__Rs1E)))) {
        vlSelf->top__DOT__ForwardAE = 1U;
    }
    vlSelf->top__DOT__ForwardBE = 0U;
    if ((((IData)(vlSelf->top__DOT__MemReadM) & ((IData)(vlSelf->top__DOT__Rs2E) 
                                                 == (IData)(vlSelf->top__DOT__RdM))) 
         & (0U != (IData)(vlSelf->top__DOT__Rs2E)))) {
        vlSelf->top__DOT__ForwardBE = 3U;
    } else if ((((IData)(vlSelf->top__DOT__RegWriteM) 
                 & ((IData)(vlSelf->top__DOT__Rs2E) 
                    == (IData)(vlSelf->top__DOT__RdM))) 
                & (0U != (IData)(vlSelf->top__DOT__Rs2E)))) {
        vlSelf->top__DOT__ForwardBE = 2U;
    } else if ((((IData)(vlSelf->top__DOT__RegWriteW) 
                 & ((IData)(vlSelf->top__DOT__Rs2E) 
                    == (IData)(vlSelf->top__DOT__RdW))) 
                & (0U != (IData)(vlSelf->top__DOT__Rs2E)))) {
        vlSelf->top__DOT__ForwardBE = 1U;
    }
    if ((0x40U & vlSelf->top__DOT__InstrD)) {
        vlSelf->top__DOT__RegWriteD = (1U & (IData)(
                                                    ((0x20U 
                                                      == 
                                                      (0x30U 
                                                       & vlSelf->top__DOT__InstrD)) 
                                                     & ((8U 
                                                         & vlSelf->top__DOT__InstrD)
                                                         ? (IData)(
                                                                   (7U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->top__DOT__InstrD)))
                                                         : (IData)(
                                                                   (7U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->top__DOT__InstrD)))))));
        if ((0x20U & vlSelf->top__DOT__InstrD)) {
            if ((0x10U & vlSelf->top__DOT__InstrD)) {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((8U & vlSelf->top__DOT__InstrD)) {
                if ((4U & vlSelf->top__DOT__InstrD)) {
                    if ((2U & vlSelf->top__DOT__InstrD)) {
                        if ((1U & vlSelf->top__DOT__InstrD)) {
                            vlSelf->top__DOT__ResultSrcD = 2U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ImmSrc = 4U;
                        } else {
                            vlSelf->top__DOT__ResultSrcD = 3U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelf->top__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelf->top__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelf->top__DOT__InstrD)) {
                if ((2U & vlSelf->top__DOT__InstrD)) {
                    if ((1U & vlSelf->top__DOT__InstrD)) {
                        vlSelf->top__DOT__ResultSrcD = 2U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ImmSrc = 4U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelf->top__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelf->top__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & vlSelf->top__DOT__InstrD)) {
                if ((1U & vlSelf->top__DOT__InstrD)) {
                    vlSelf->top__DOT__ResultSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 2U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 1U;
                } else {
                    vlSelf->top__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    } else if ((0x20U & vlSelf->top__DOT__InstrD)) {
        vlSelf->top__DOT__RegWriteD = (1U & (IData)(
                                                    ((0x10U 
                                                      == 
                                                      (0x18U 
                                                       & vlSelf->top__DOT__InstrD)) 
                                                     & ((4U 
                                                         & vlSelf->top__DOT__InstrD)
                                                         ? 
                                                        ((vlSelf->top__DOT__InstrD 
                                                          >> 1U) 
                                                         & vlSelf->top__DOT__InstrD)
                                                         : 
                                                        ((vlSelf->top__DOT__InstrD 
                                                          >> 1U) 
                                                         & vlSelf->top__DOT__InstrD)))));
        if ((0x10U & vlSelf->top__DOT__InstrD)) {
            if ((8U & vlSelf->top__DOT__InstrD)) {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelf->top__DOT__InstrD)) {
                if ((2U & vlSelf->top__DOT__InstrD)) {
                    if ((1U & vlSelf->top__DOT__InstrD)) {
                        vlSelf->top__DOT__ResultSrcD = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ImmSrc = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelf->top__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelf->top__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                if ((2U & vlSelf->top__DOT__InstrD)) {
                    if ((1U & vlSelf->top__DOT__InstrD)) {
                        vlSelf->top__DOT__ResultSrcD = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 2U;
                    } else {
                        vlSelf->top__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelf->top__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
                vlSelf->top__DOT__ImmSrc = 7U;
            }
        } else if ((8U & vlSelf->top__DOT__InstrD)) {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((4U & vlSelf->top__DOT__InstrD)) {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((2U & vlSelf->top__DOT__InstrD)) {
            if ((1U & vlSelf->top__DOT__InstrD)) {
                vlSelf->top__DOT__ResultSrcD = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 1U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 1U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
            } else {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    } else if ((0x10U & vlSelf->top__DOT__InstrD)) {
        vlSelf->top__DOT__RegWriteD = (1U & ((~ (vlSelf->top__DOT__InstrD 
                                                 >> 3U)) 
                                             & ((4U 
                                                 & vlSelf->top__DOT__InstrD)
                                                 ? 
                                                ((vlSelf->top__DOT__InstrD 
                                                  >> 1U) 
                                                 & vlSelf->top__DOT__InstrD)
                                                 : 
                                                ((vlSelf->top__DOT__InstrD 
                                                  >> 1U) 
                                                 & vlSelf->top__DOT__InstrD))));
        if ((8U & vlSelf->top__DOT__InstrD)) {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((4U & vlSelf->top__DOT__InstrD)) {
            if ((2U & vlSelf->top__DOT__InstrD)) {
                if ((1U & vlSelf->top__DOT__InstrD)) {
                    vlSelf->top__DOT__ResultSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelf->top__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else if ((2U & vlSelf->top__DOT__InstrD)) {
            if ((1U & vlSelf->top__DOT__InstrD)) {
                vlSelf->top__DOT__ResultSrcD = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 0U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 2U;
            } else {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    } else {
        vlSelf->top__DOT__RegWriteD = (1U & (IData)(
                                                    (3U 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->top__DOT__InstrD))));
        if ((8U & vlSelf->top__DOT__InstrD)) {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((4U & vlSelf->top__DOT__InstrD)) {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        } else if ((2U & vlSelf->top__DOT__InstrD)) {
            if ((1U & vlSelf->top__DOT__InstrD)) {
                vlSelf->top__DOT__ResultSrcD = 1U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 1U;
                vlSelf->top__DOT__ImmSrc = 0U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
            } else {
                vlSelf->top__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ImmSrc = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelf->top__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ImmSrc = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    }
    vlSelf->top__DOT__modeAddrD = ((IData)(vlSelf->top__DOT__control_unit__DOT__Store)
                                    ? ((0U == (7U & 
                                               (vlSelf->top__DOT__InstrD 
                                                >> 0xcU)))
                                        ? 3U : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__InstrD 
                                                     >> 0xcU)))
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__InstrD 
                                                      >> 0xcU)))
                                                  ? 1U
                                                  : 0U)))
                                    : ((IData)(vlSelf->top__DOT__control_unit__DOT__Load)
                                        ? ((0x4000U 
                                            & vlSelf->top__DOT__InstrD)
                                            ? ((0x2000U 
                                                & vlSelf->top__DOT__InstrD)
                                                ? 0U
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? 4U
                                                    : 5U))
                                            : ((0x2000U 
                                                & vlSelf->top__DOT__InstrD)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? 0U
                                                    : 1U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__InstrD)
                                                    ? 2U
                                                    : 3U)))
                                        : 0U));
    vlSelf->top__DOT__InstrF = ((vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                 [(0xffffU & ((IData)(3U) 
                                              + vlSelf->top__DOT__PCF))] 
                                 << 0x18U) | ((vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                               [(0xffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->top__DOT__PCF))] 
                                               << 0x10U) 
                                              | ((vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                                  [
                                                  (0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__PCF))] 
                                                  << 8U) 
                                                 | vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & vlSelf->top__DOT__PCF)])));
    vlSelf->top__DOT__ReadDataM = ((0x100U == vlSelf->top__DOT__ALUResultM)
                                    ? (IData)(vlSelf->trigger)
                                    : ((4U & (IData)(vlSelf->top__DOT__modeAddrM))
                                        ? ((2U & (IData)(vlSelf->top__DOT__modeAddrM))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->top__DOT__modeAddrM))
                                             ? vlSelf->top__DOT__data_memory__DOT__ram_array
                                            [(0x1ffffU 
                                              & vlSelf->top__DOT__ALUResultM)]
                                             : ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                 [(0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__ALUResultM))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__data_memory__DOT__ram_array
                                                [(0x1ffffU 
                                                  & vlSelf->top__DOT__ALUResultM)])))
                                        : ((2U & (IData)(vlSelf->top__DOT__modeAddrM))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__modeAddrM))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                                                   [
                                                                   (0x1ffffU 
                                                                    & vlSelf->top__DOT__ALUResultM)] 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | vlSelf->top__DOT__data_memory__DOT__ram_array
                                                   [
                                                   (0x1ffffU 
                                                    & vlSelf->top__DOT__ALUResultM)])
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                                                   [
                                                                   (0x1ffffU 
                                                                    & vlSelf->top__DOT__ALUResultM)] 
                                                                   >> 7U)))) 
                                                    << 0x10U) 
                                                   | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->top__DOT__ALUResultM))] 
                                                       << 8U) 
                                                      | vlSelf->top__DOT__data_memory__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & vlSelf->top__DOT__ALUResultM)])))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__modeAddrM))
                                                ? (
                                                   (vlSelf->top__DOT__data_memory__DOT__ram_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->top__DOT__ALUResultM))] 
                                                    << 0x18U) 
                                                   | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->top__DOT__ALUResultM))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                          [
                                                          (0x1ffffU 
                                                           & ((IData)(1U) 
                                                              + vlSelf->top__DOT__ALUResultM))] 
                                                          << 8U) 
                                                         | vlSelf->top__DOT__data_memory__DOT__ram_array
                                                         [
                                                         (0x1ffffU 
                                                          & vlSelf->top__DOT__ALUResultM)])))
                                                : 0U))));
    vlSelf->top__DOT__ExtImmD = ((4U & (IData)(vlSelf->top__DOT__ImmSrc))
                                  ? ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                      ? 0U : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                               ? ((
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__InstrD 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->top__DOT__InstrD 
                                                     >> 0x14U))
                                               : ((
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__InstrD 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & vlSelf->top__DOT__InstrD) 
                                                     | ((0x800U 
                                                         & (vlSelf->top__DOT__InstrD 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->top__DOT__InstrD 
                                                              >> 0x14U)))))))
                                  : ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                      ? ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                          ? (0xfffff000U 
                                             & vlSelf->top__DOT__InstrD)
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->top__DOT__InstrD 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->top__DOT__InstrD 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->top__DOT__InstrD 
                                                         >> 7U))))))
                                      : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                          ? (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->top__DOT__InstrD 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__InstrD 
                                                      >> 7U))))
                                          : (((- (IData)(
                                                         (vlSelf->top__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->top__DOT__InstrD 
                                                >> 0x14U)))));
    __Vtableidx1 = ((0x40U & (vlSelf->top__DOT__InstrD 
                              >> 0x18U)) | ((0x20U 
                                             & vlSelf->top__DOT__InstrD) 
                                            | ((0x1cU 
                                                & (vlSelf->top__DOT__InstrD 
                                                   >> 0xaU)) 
                                               | (IData)(vlSelf->top__DOT__control_unit__DOT__ALUOp))));
    vlSelf->top__DOT__ALUControlD = Vdut__ConstPool__TABLE_h2f1e8d19_0
        [__Vtableidx1];
    vlSelf->top__DOT__SrcAE = ((2U & (IData)(vlSelf->top__DOT__ForwardAE))
                                ? ((1U & (IData)(vlSelf->top__DOT__ForwardAE))
                                    ? vlSelf->top__DOT__ReadDataM
                                    : vlSelf->top__DOT__ALUResultM)
                                : ((1U & (IData)(vlSelf->top__DOT__ForwardAE))
                                    ? vlSelf->top__DOT__ResultW
                                    : vlSelf->top__DOT__RD1E));
    vlSelf->top__DOT__WriteDataE = ((2U & (IData)(vlSelf->top__DOT__ForwardBE))
                                     ? ((1U & (IData)(vlSelf->top__DOT__ForwardBE))
                                         ? vlSelf->top__DOT__ReadDataM
                                         : vlSelf->top__DOT__ALUResultM)
                                     : ((1U & (IData)(vlSelf->top__DOT__ForwardBE))
                                         ? vlSelf->top__DOT__ResultW
                                         : vlSelf->top__DOT__RD2E));
    vlSelf->top__DOT____Vcellinp__alu__SrcB = ((IData)(vlSelf->top__DOT__ALUSrcE)
                                                ? vlSelf->top__DOT__ExtImmE
                                                : vlSelf->top__DOT__WriteDataE);
    vlSelf->top__DOT__ALUResultE = ((8U & (IData)(vlSelf->top__DOT__ALUControlE))
                                     ? ((4U & (IData)(vlSelf->top__DOT__ALUControlE))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->top__DOT__ALUControlE))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUControlE))
                                                   ? 
                                                  ((vlSelf->top__DOT__SrcAE 
                                                    < vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (VL_LTS_III(32, vlSelf->top__DOT__SrcAE, vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                    ? 1U
                                                    : 0U))))
                                     : ((4U & (IData)(vlSelf->top__DOT__ALUControlE))
                                         ? ((2U & (IData)(vlSelf->top__DOT__ALUControlE))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__ALUControlE))
                                                 ? 
                                                VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__SrcAE, 
                                                               (0x1fU 
                                                                & vlSelf->top__DOT____Vcellinp__alu__SrcB))
                                                 : 
                                                (vlSelf->top__DOT__SrcAE 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT____Vcellinp__alu__SrcB)))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__ALUControlE))
                                                 ? 
                                                (vlSelf->top__DOT__SrcAE 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT____Vcellinp__alu__SrcB))
                                                 : 
                                                (vlSelf->top__DOT__SrcAE 
                                                 & vlSelf->top__DOT____Vcellinp__alu__SrcB)))
                                         : ((2U & (IData)(vlSelf->top__DOT__ALUControlE))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__ALUControlE))
                                                 ? 
                                                (vlSelf->top__DOT__SrcAE 
                                                 | vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                 : 
                                                (vlSelf->top__DOT__SrcAE 
                                                 ^ vlSelf->top__DOT____Vcellinp__alu__SrcB))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__ALUControlE))
                                                 ? 
                                                (vlSelf->top__DOT__SrcAE 
                                                 - vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                 : 
                                                (vlSelf->top__DOT__SrcAE 
                                                 + vlSelf->top__DOT____Vcellinp__alu__SrcB)))));
    vlSelf->top__DOT__Zero = (((IData)(vlSelf->top__DOT__ALUControlE) 
                               >> 3U) & ((4U & (IData)(vlSelf->top__DOT__ALUControlE))
                                          ? ((2U & (IData)(vlSelf->top__DOT__ALUControlE))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__ALUControlE))
                                                  ? 
                                                 (vlSelf->top__DOT__SrcAE 
                                                  >= vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                  : 
                                                 (vlSelf->top__DOT__SrcAE 
                                                  < vlSelf->top__DOT____Vcellinp__alu__SrcB))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__ALUControlE))
                                                  ? 
                                                 VL_GTES_III(32, vlSelf->top__DOT__SrcAE, vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                  : 
                                                 VL_LTS_III(32, vlSelf->top__DOT__SrcAE, vlSelf->top__DOT____Vcellinp__alu__SrcB)))
                                          : (((IData)(vlSelf->top__DOT__ALUControlE) 
                                              >> 1U) 
                                             & ((1U 
                                                 & (IData)(vlSelf->top__DOT__ALUControlE))
                                                 ? 
                                                (vlSelf->top__DOT__SrcAE 
                                                 != vlSelf->top__DOT____Vcellinp__alu__SrcB)
                                                 : 
                                                (vlSelf->top__DOT__SrcAE 
                                                 == vlSelf->top__DOT____Vcellinp__alu__SrcB)))));
    vlSelf->top__DOT__PC = ((IData)(4U) + vlSelf->top__DOT__PCF);
    if (vlSelf->top__DOT__JumpE) {
        vlSelf->top__DOT__PC = ((IData)(vlSelf->top__DOT__JALRE)
                                 ? vlSelf->top__DOT__ALUResultE
                                 : (vlSelf->top__DOT__PCE 
                                    + vlSelf->top__DOT__ExtImmE));
    }
    if (((0x63U == (0x7fU & vlSelf->top__DOT__InstrF)) 
         & (~ (IData)(vlSelf->top__DOT__JumpE)))) {
        vlSelf->top__DOT__PC_predict = (vlSelf->top__DOT__PCF 
                                        + (((- (IData)(
                                                       (vlSelf->top__DOT__InstrF 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSelf->top__DOT__InstrF 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->top__DOT__InstrF 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->top__DOT__InstrF 
                                                       >> 7U))))));
        vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
            = ((1U & vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U]) 
               | (((IData)((((QData)((IData)(vlSelf->top__DOT__PCF)) 
                             << 0x20U) | (QData)((IData)(vlSelf->top__DOT__PC_predict)))) 
                   << 2U) | (2U & (vlSelf->top__DOT__InstrF 
                                   >> 0x1eU))));
        vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[1U] 
            = ((1U & ((IData)((((QData)((IData)(vlSelf->top__DOT__PCF)) 
                                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__PC_predict)))) 
                      >> 0x1eU)) | ((2U & ((IData)(
                                                   (((QData)((IData)(vlSelf->top__DOT__PCF)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__PC_predict)))) 
                                           >> 0x1eU)) 
                                    | ((IData)(((((QData)((IData)(vlSelf->top__DOT__PCF)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__PC_predict))) 
                                                >> 0x20U)) 
                                       << 2U)));
        vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[2U] 
            = (3U & ((1U & ((IData)(((((QData)((IData)(vlSelf->top__DOT__PCF)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__PC_predict))) 
                                     >> 0x20U)) >> 0x1eU)) 
                     | (2U & ((IData)(((((QData)((IData)(vlSelf->top__DOT__PCF)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__PC_predict))) 
                                       >> 0x20U)) >> 0x1eU))));
        if ((vlSelf->top__DOT__InstrF >> 0x1fU)) {
            vlSelf->top__DOT__BPU_Src = (2U <= (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter));
            vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                = ((0xfffffffeU & vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U]) 
                   | (IData)(vlSelf->top__DOT__BPU_Src));
        } else {
            vlSelf->top__DOT__BPU_Src = (2U <= (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter));
            vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                = ((0xfffffffeU & vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U]) 
                   | (IData)(vlSelf->top__DOT__BPU_Src));
        }
    } else {
        vlSelf->top__DOT__BPU_Src = 0U;
    }
    vlSelf->top__DOT__flushBranch = 0U;
    if (((IData)(vlSelf->top__DOT__BranchE) & (0U < (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count)))) {
        vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U] 
            = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front][0U];
        vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
            = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front][1U];
        vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[2U] 
            = vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
            [vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front][2U];
        if (((1U & vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U]) 
             != (IData)(vlSelf->top__DOT__Zero))) {
            vlSelf->top__DOT__flushBranch = 1U;
            vlSelf->top__DOT__BPU_Src = 1U;
            vlSelf->top__DOT__PC_predict = ((IData)(vlSelf->top__DOT__Zero)
                                             ? ((vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
                                                 << 0x1eU) 
                                                | (vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U] 
                                                   >> 2U))
                                             : ((IData)(4U) 
                                                + (
                                                   (vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[2U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
                                                      >> 2U))));
        }
    }
    vlSelf->top__DOT__flushDE = ((IData)(vlSelf->top__DOT__flushBranch) 
                                 | (IData)(vlSelf->top__DOT__JumpE));
    vlSelf->top__DOT__stall = ((IData)(vlSelf->top__DOT__MemReadE) 
                               & (((IData)(vlSelf->top__DOT__RdE) 
                                   == (0x1fU & (vlSelf->top__DOT__InstrD 
                                                >> 0xfU))) 
                                  | ((IData)(vlSelf->top__DOT__RdE) 
                                     == (0x1fU & (vlSelf->top__DOT__InstrD 
                                                  >> 0x14U)))));
    vlSelf->top__DOT__flush = (((IData)(vlSelf->top__DOT__stall) 
                                | (IData)(vlSelf->top__DOT__flushBranch)) 
                               | (IData)(vlSelf->top__DOT__JumpE));
}

VL_ATTR_COLD void Vdut___024root___eval_initial(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_initial\n"); );
    // Body
    Vdut___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vdut___024root___eval_settle(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_settle\n"); );
    // Body
    Vdut___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vdut___024root___final(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___final\n"); );
}

VL_ATTR_COLD void Vdut___024root___ctor_var_reset(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->a1 = VL_RAND_RESET_I(32);
    vlSelf->a2 = VL_RAND_RESET_I(32);
    vlSelf->a3 = VL_RAND_RESET_I(32);
    vlSelf->a4 = VL_RAND_RESET_I(32);
    vlSelf->a5 = VL_RAND_RESET_I(32);
    vlSelf->a6 = VL_RAND_RESET_I(32);
    vlSelf->a7 = VL_RAND_RESET_I(32);
    vlSelf->t0 = VL_RAND_RESET_I(32);
    vlSelf->t1 = VL_RAND_RESET_I(32);
    vlSelf->t2 = VL_RAND_RESET_I(32);
    vlSelf->t3 = VL_RAND_RESET_I(32);
    vlSelf->t4 = VL_RAND_RESET_I(32);
    vlSelf->t5 = VL_RAND_RESET_I(32);
    vlSelf->t6 = VL_RAND_RESET_I(32);
    vlSelf->s0 = VL_RAND_RESET_I(32);
    vlSelf->s1 = VL_RAND_RESET_I(32);
    vlSelf->s2 = VL_RAND_RESET_I(32);
    vlSelf->s3 = VL_RAND_RESET_I(32);
    vlSelf->s4 = VL_RAND_RESET_I(32);
    vlSelf->s5 = VL_RAND_RESET_I(32);
    vlSelf->s6 = VL_RAND_RESET_I(32);
    vlSelf->s7 = VL_RAND_RESET_I(32);
    vlSelf->s8 = VL_RAND_RESET_I(32);
    vlSelf->s9 = VL_RAND_RESET_I(32);
    vlSelf->s10 = VL_RAND_RESET_I(32);
    vlSelf->s11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD1E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__modeAddrE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__JALRE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__modeAddrM = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ReadDataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ReadDataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcW = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__PCPlus4W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ExtImmD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ExtImmE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__RegWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUControlD = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ALUControlE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__modeAddrD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__Zero = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemReadE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemReadM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WriteDataE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ResultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SrcAE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ForwardAE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ForwardBE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flushDE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flushBranch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BPU_Src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PC_predict = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellinp__alu__SrcB = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue[__Vi0]);
    }
    vlSelf->top__DOT__branch_prediction_unit__DOT__queue_front = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__branch_prediction_unit__DOT__queue_back = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__branch_prediction_unit__DOT__queue_count = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(66, vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch);
    VL_RAND_RESET_W(66, vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch);
    vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->top__DOT__instruction_memory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__regfile__DOT__registerfile_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__control_unit__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__control_unit__DOT__Store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__Load = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
