// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_he213c99d_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT____Vcellinp__PC_mux__PCTarget;
    top__DOT____Vcellinp__PC_mux__PCTarget = 0;
    IData/*31:0*/ top__DOT____Vcellinp__alu__SrcB;
    top__DOT____Vcellinp__alu__SrcB = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__op 
        = (1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                 >> 5U));
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__funct3 
        = vlSelfRef.top__DOT__control_unit__DOT__funct3;
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__funct7 
        = vlSelfRef.top__DOT__control_unit__DOT__funct7;
    vlSelfRef.top__DOT__ExtImmE = vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE;
    vlSelfRef.top__DOT__PCE = vlSelfRef.top__DOT__pipeline_DE__DOT__PCE;
    vlSelfRef.top__DOT__ALUSrcE = vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcE;
    vlSelfRef.top__DOT__rst = vlSelfRef.rst;
    vlSelfRef.top__DOT__trigger = vlSelfRef.trigger;
    vlSelfRef.top__DOT__RdD = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                        >> 7U));
    vlSelfRef.top__DOT__PC_predict = vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPU;
    vlSelfRef.top__DOT__BPU_Src = vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc;
    vlSelfRef.top__DOT__WriteDataM = vlSelfRef.top__DOT__pipeline_EM__DOT__WriteDataM;
    vlSelfRef.top__DOT__MemWriteM = vlSelfRef.top__DOT__pipeline_EM__DOT__MemWriteM;
    vlSelfRef.top__DOT__PCD = vlSelfRef.top__DOT__pipeline_FD__DOT__PCD;
    vlSelfRef.top__DOT__PCPlus4D = vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4D;
    vlSelfRef.top__DOT__RegWriteE = vlSelfRef.top__DOT__pipeline_DE__DOT__RegWriteE;
    vlSelfRef.top__DOT__ResultSrcE = vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcE;
    vlSelfRef.top__DOT__MemWriteE = vlSelfRef.top__DOT__pipeline_DE__DOT__MemWriteE;
    vlSelfRef.top__DOT__PCPlus4E = vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4E;
    vlSelfRef.top__DOT__modeAddrE = vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrE;
    vlSelfRef.top__DOT__PCPlus4M = vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4M;
    vlSelfRef.top__DOT__regfile__DOT__a5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xfU];
    vlSelfRef.top__DOT__regfile__DOT__a4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xeU];
    vlSelfRef.top__DOT__regfile__DOT__a3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xdU];
    vlSelfRef.top__DOT__regfile__DOT__a2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xcU];
    vlSelfRef.top__DOT__regfile__DOT__a1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xbU];
    vlSelfRef.top__DOT__regfile__DOT__s1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [9U];
    vlSelfRef.top__DOT__regfile__DOT__t2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [7U];
    vlSelfRef.top__DOT__regfile__DOT__t1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [6U];
    vlSelfRef.top__DOT__regfile__DOT__t0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [5U];
    vlSelfRef.top__DOT__regfile__DOT__a0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xaU];
    vlSelfRef.top__DOT__regfile__DOT__s2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x12U];
    vlSelfRef.top__DOT__regfile__DOT__s0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [8U];
    vlSelfRef.top__DOT__regfile__DOT__a6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x10U];
    vlSelfRef.top__DOT__regfile__DOT__a7 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x11U];
    vlSelfRef.top__DOT__regfile__DOT__s3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x13U];
    vlSelfRef.top__DOT__regfile__DOT__s4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x14U];
    vlSelfRef.top__DOT__regfile__DOT__s5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x15U];
    vlSelfRef.top__DOT__regfile__DOT__s6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x16U];
    vlSelfRef.top__DOT__regfile__DOT__s7 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x17U];
    vlSelfRef.top__DOT__regfile__DOT__s8 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x18U];
    vlSelfRef.top__DOT__regfile__DOT__s9 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x19U];
    vlSelfRef.top__DOT__regfile__DOT__s10 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1aU];
    vlSelfRef.top__DOT__regfile__DOT__s11 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1bU];
    vlSelfRef.top__DOT__regfile__DOT__t3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1cU];
    vlSelfRef.top__DOT__regfile__DOT__t4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1dU];
    vlSelfRef.top__DOT__regfile__DOT__t5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1eU];
    vlSelfRef.top__DOT__regfile__DOT__t6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1fU];
    if ((0x40U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
        if ((0x20U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 2U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 4U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    }
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                }
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 2U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 4U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 2U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 1U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
        }
        vlSelfRef.top__DOT__control_unit__DOT__RegWriteD 
            = ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                      >> 5U)) && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                            >> 4U))) 
                                  && ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                       ? ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                 >> 2U)) 
                                          && ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))
                                       : ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                 >> 2U)) 
                                          && ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))))));
        vlSelfRef.top__DOT__control_unit__DOT__ALUSrcD 
            = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                         >> 5U))) || ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                             >> 4U)) 
                                      || ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                           ? ((1U & 
                                               (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 2U))) 
                                              || ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                       >> 1U))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))))
                                           : ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                               ? ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                       >> 1U))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))
                                               : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                       >> 1U))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    } else {
        if ((0x20U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                }
            } else if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
            vlSelfRef.top__DOT__control_unit__DOT__RegWriteD 
                = ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                          >> 4U)) && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 3U))) 
                                      && ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                           ? ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))
                                           : ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))));
        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
            if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
            vlSelfRef.top__DOT__control_unit__DOT__RegWriteD 
                = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                             >> 3U))) && ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                           ? ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))
                                           : ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))));
        } else {
            if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
            vlSelfRef.top__DOT__control_unit__DOT__RegWriteD 
                = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))));
        }
        vlSelfRef.top__DOT__control_unit__DOT__ALUSrcD 
            = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                         >> 5U))) || ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 4U))) 
                                      || ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                 >> 3U)) 
                                          || ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 2U)) 
                                              || ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                       >> 1U))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    }
    vlSelfRef.top__DOT__control_unit__DOT__MemWriteD 
        = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                     >> 6U))) && ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                         >> 5U)) && 
                                  ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                             >> 4U))) 
                                   && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                 >> 3U))) 
                                       && ((1U & (~ 
                                                  ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 1U)) 
                                               && (1U 
                                                   & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__JumpD = 
        ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                >> 6U)) && ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                   >> 5U)) && ((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                    >> 4U))) 
                                               && ((8U 
                                                    & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                        >> 2U)) 
                                                    && ((1U 
                                                         & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                            >> 1U)) 
                                                        && (1U 
                                                            & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                        >> 2U)) 
                                                    && ((1U 
                                                         & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                            >> 1U)) 
                                                        && (1U 
                                                            & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__BranchD 
        = ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                  >> 6U)) && ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                     >> 5U)) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                      >> 4U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                          >> 3U))) 
                                                     && ((1U 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                              >> 2U))) 
                                                         && ((1U 
                                                              & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                                 >> 1U)) 
                                                             && (1U 
                                                                 & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__MemReadD 
        = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                     >> 6U))) && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                            >> 5U))) 
                                  && ((0x10U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                       ? ((1U & (~ 
                                                 ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))))
                                       : ((1U & (~ 
                                                 ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__ResultSrcM = vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcM;
    vlSelfRef.top__DOT__PCF = vlSelfRef.top__DOT__program_counter__DOT__PCF;
    vlSelfRef.top__DOT__InstrF = (((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                    [(0xffffU & ((IData)(3U) 
                                                 + vlSelfRef.top__DOT__program_counter__DOT__PCF))] 
                                    << 0x18U) | (vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.top__DOT__program_counter__DOT__PCF))] 
                                                 << 0x10U)) 
                                  | ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                      [(0xffffU & ((IData)(1U) 
                                                   + vlSelfRef.top__DOT__program_counter__DOT__PCF))] 
                                      << 8U) | vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                     [(0xffffU & vlSelfRef.top__DOT__program_counter__DOT__PCF)]));
    vlSelfRef.top__DOT__control_unit__DOT__modeAddr 
        = ((IData)(vlSelfRef.top__DOT__control_unit__DOT__Store)
            ? ((0U == (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                ? 3U : ((1U == (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                         ? 2U : ((2U == (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                  ? 1U : 0U))) : ((IData)(vlSelfRef.top__DOT__control_unit__DOT__Load)
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                      ? 4U
                                                      : 5U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                      ? 0U
                                                      : 1U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                      ? 2U
                                                      : 3U)))
                                                   : 0U));
    vlSelfRef.top__DOT__RD2E = vlSelfRef.top__DOT__pipeline_DE__DOT__RD2E;
    vlSelfRef.top__DOT__modeAddrM = vlSelfRef.top__DOT__pipeline_EM__DOT__modeAddrM;
    vlSelfRef.top__DOT__InstrD = vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD;
    vlSelfRef.top__DOT__Rs1D = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                         >> 0xfU));
    vlSelfRef.top__DOT__Rs2D = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                         >> 0x14U));
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top__DOT__JumpE = vlSelfRef.top__DOT__pipeline_DE__DOT__JumpE;
    top__DOT____Vcellinp__PC_mux__PCTarget = (vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE 
                                              + vlSelfRef.top__DOT__pipeline_DE__DOT__PCE);
    vlSelfRef.top__DOT__MemReadE = vlSelfRef.top__DOT__pipeline_DE__DOT__MemReadE;
    vlSelfRef.top__DOT__flushBranch = vlSelfRef.top__DOT__branch_prediction_unit__DOT__flushBranch;
    vlSelfRef.top__DOT__PCPlus4F = ((IData)(4U) + vlSelfRef.top__DOT__program_counter__DOT__PCF);
    vlSelfRef.top__DOT__BranchE = vlSelfRef.top__DOT__pipeline_DE__DOT__BranchE;
    vlSelfRef.top__DOT__RdM = vlSelfRef.top__DOT__pipeline_EM__DOT__RdM;
    vlSelfRef.top__DOT__RegWriteM = vlSelfRef.top__DOT__pipeline_EM__DOT__RegWriteM;
    vlSelfRef.top__DOT__RdE = vlSelfRef.top__DOT__pipeline_DE__DOT__RdE;
    vlSelfRef.top__DOT__Rs2E = vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2E;
    vlSelfRef.top__DOT__ALUControlE = vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlE;
    top__DOT____Vcellinp__alu__SrcB = ((IData)(vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcE)
                                        ? vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE
                                        : vlSelfRef.top__DOT__pipeline_DE__DOT__RD2E);
    vlSelfRef.top__DOT__RD1E = vlSelfRef.top__DOT__pipeline_DE__DOT__RD1E;
    vlSelfRef.top__DOT__ResultSrcW = vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcW;
    vlSelfRef.top__DOT__ALUResultW = vlSelfRef.top__DOT__pipeline_MW__DOT__ALUResultW;
    vlSelfRef.top__DOT__ReadDataW = vlSelfRef.top__DOT__pipeline_MW__DOT__ReadDataW;
    vlSelfRef.top__DOT__PCPlus4W = vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4W;
    vlSelfRef.top__DOT__ALUResultM = vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultM;
    vlSelfRef.top__DOT__RdW = vlSelfRef.top__DOT__pipeline_MW__DOT__RdW;
    vlSelfRef.top__DOT__RegWriteW = vlSelfRef.top__DOT__pipeline_MW__DOT__RegWriteW;
    vlSelfRef.top__DOT__Rs1E = vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1E;
    vlSelfRef.top__DOT__program_counter__DOT__rst = vlSelfRef.top__DOT__rst;
    vlSelfRef.top__DOT__data_memory__DOT__trigger = vlSelfRef.top__DOT__trigger;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RdD = vlSelfRef.top__DOT__RdD;
    vlSelfRef.top__DOT__BPU_mux__DOT__in1 = vlSelfRef.top__DOT__PC_predict;
    vlSelfRef.top__DOT__BPU_mux__DOT__sel = vlSelfRef.top__DOT__BPU_Src;
    vlSelfRef.top__DOT__data_memory__DOT__WD = vlSelfRef.top__DOT__WriteDataM;
    vlSelfRef.top__DOT__data_memory__DOT__WE = vlSelfRef.top__DOT__MemWriteM;
    vlSelfRef.top__DOT__pipeline_DE__DOT__PCD = vlSelfRef.top__DOT__PCD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4D 
        = vlSelfRef.top__DOT__PCPlus4D;
    vlSelfRef.top__DOT__pipeline_EM__DOT__RegWriteE 
        = vlSelfRef.top__DOT__RegWriteE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcE 
        = vlSelfRef.top__DOT__ResultSrcE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__MemWriteE 
        = vlSelfRef.top__DOT__MemWriteE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4E 
        = vlSelfRef.top__DOT__PCPlus4E;
    vlSelfRef.top__DOT__pipeline_EM__DOT__modeAddrE 
        = vlSelfRef.top__DOT__modeAddrE;
    vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4M 
        = vlSelfRef.top__DOT__PCPlus4M;
    vlSelfRef.a5 = vlSelfRef.top__DOT__regfile__DOT__a5;
    vlSelfRef.top__DOT__a5 = vlSelfRef.top__DOT__regfile__DOT__a5;
    vlSelfRef.a4 = vlSelfRef.top__DOT__regfile__DOT__a4;
    vlSelfRef.top__DOT__a4 = vlSelfRef.top__DOT__regfile__DOT__a4;
    vlSelfRef.a3 = vlSelfRef.top__DOT__regfile__DOT__a3;
    vlSelfRef.top__DOT__a3 = vlSelfRef.top__DOT__regfile__DOT__a3;
    vlSelfRef.a2 = vlSelfRef.top__DOT__regfile__DOT__a2;
    vlSelfRef.top__DOT__a2 = vlSelfRef.top__DOT__regfile__DOT__a2;
    vlSelfRef.a1 = vlSelfRef.top__DOT__regfile__DOT__a1;
    vlSelfRef.top__DOT__a1 = vlSelfRef.top__DOT__regfile__DOT__a1;
    vlSelfRef.s1 = vlSelfRef.top__DOT__regfile__DOT__s1;
    vlSelfRef.top__DOT__s1 = vlSelfRef.top__DOT__regfile__DOT__s1;
    vlSelfRef.t2 = vlSelfRef.top__DOT__regfile__DOT__t2;
    vlSelfRef.top__DOT__t2 = vlSelfRef.top__DOT__regfile__DOT__t2;
    vlSelfRef.t1 = vlSelfRef.top__DOT__regfile__DOT__t1;
    vlSelfRef.top__DOT__t1 = vlSelfRef.top__DOT__regfile__DOT__t1;
    vlSelfRef.t0 = vlSelfRef.top__DOT__regfile__DOT__t0;
    vlSelfRef.top__DOT__t0 = vlSelfRef.top__DOT__regfile__DOT__t0;
    vlSelfRef.a0 = vlSelfRef.top__DOT__regfile__DOT__a0;
    vlSelfRef.top__DOT__a0 = vlSelfRef.top__DOT__regfile__DOT__a0;
    vlSelfRef.s2 = vlSelfRef.top__DOT__regfile__DOT__s2;
    vlSelfRef.top__DOT__s2 = vlSelfRef.top__DOT__regfile__DOT__s2;
    vlSelfRef.s0 = vlSelfRef.top__DOT__regfile__DOT__s0;
    vlSelfRef.top__DOT__s0 = vlSelfRef.top__DOT__regfile__DOT__s0;
    vlSelfRef.a6 = vlSelfRef.top__DOT__regfile__DOT__a6;
    vlSelfRef.top__DOT__a6 = vlSelfRef.top__DOT__regfile__DOT__a6;
    vlSelfRef.a7 = vlSelfRef.top__DOT__regfile__DOT__a7;
    vlSelfRef.top__DOT__a7 = vlSelfRef.top__DOT__regfile__DOT__a7;
    vlSelfRef.s3 = vlSelfRef.top__DOT__regfile__DOT__s3;
    vlSelfRef.top__DOT__s3 = vlSelfRef.top__DOT__regfile__DOT__s3;
    vlSelfRef.s4 = vlSelfRef.top__DOT__regfile__DOT__s4;
    vlSelfRef.top__DOT__s4 = vlSelfRef.top__DOT__regfile__DOT__s4;
    vlSelfRef.s5 = vlSelfRef.top__DOT__regfile__DOT__s5;
    vlSelfRef.top__DOT__s5 = vlSelfRef.top__DOT__regfile__DOT__s5;
    vlSelfRef.s6 = vlSelfRef.top__DOT__regfile__DOT__s6;
    vlSelfRef.top__DOT__s6 = vlSelfRef.top__DOT__regfile__DOT__s6;
    vlSelfRef.s7 = vlSelfRef.top__DOT__regfile__DOT__s7;
    vlSelfRef.top__DOT__s7 = vlSelfRef.top__DOT__regfile__DOT__s7;
    vlSelfRef.s8 = vlSelfRef.top__DOT__regfile__DOT__s8;
    vlSelfRef.top__DOT__s8 = vlSelfRef.top__DOT__regfile__DOT__s8;
    vlSelfRef.s9 = vlSelfRef.top__DOT__regfile__DOT__s9;
    vlSelfRef.top__DOT__s9 = vlSelfRef.top__DOT__regfile__DOT__s9;
    vlSelfRef.s10 = vlSelfRef.top__DOT__regfile__DOT__s10;
    vlSelfRef.top__DOT__s10 = vlSelfRef.top__DOT__regfile__DOT__s10;
    vlSelfRef.s11 = vlSelfRef.top__DOT__regfile__DOT__s11;
    vlSelfRef.top__DOT__s11 = vlSelfRef.top__DOT__regfile__DOT__s11;
    vlSelfRef.t3 = vlSelfRef.top__DOT__regfile__DOT__t3;
    vlSelfRef.top__DOT__t3 = vlSelfRef.top__DOT__regfile__DOT__t3;
    vlSelfRef.t4 = vlSelfRef.top__DOT__regfile__DOT__t4;
    vlSelfRef.top__DOT__t4 = vlSelfRef.top__DOT__regfile__DOT__t4;
    vlSelfRef.t5 = vlSelfRef.top__DOT__regfile__DOT__t5;
    vlSelfRef.top__DOT__t5 = vlSelfRef.top__DOT__regfile__DOT__t5;
    vlSelfRef.t6 = vlSelfRef.top__DOT__regfile__DOT__t6;
    vlSelfRef.top__DOT__t6 = vlSelfRef.top__DOT__regfile__DOT__t6;
    vlSelfRef.top__DOT__ResultSrcD = vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD;
    vlSelfRef.top__DOT__RegWriteD = vlSelfRef.top__DOT__control_unit__DOT__RegWriteD;
    vlSelfRef.top__DOT__ALUSrcD = vlSelfRef.top__DOT__control_unit__DOT__ALUSrcD;
    vlSelfRef.top__DOT__MemWriteD = vlSelfRef.top__DOT__control_unit__DOT__MemWriteD;
    vlSelfRef.top__DOT__JumpD = vlSelfRef.top__DOT__control_unit__DOT__JumpD;
    vlSelfRef.top__DOT__BranchD = vlSelfRef.top__DOT__control_unit__DOT__BranchD;
    vlSelfRef.top__DOT__MemReadD = vlSelfRef.top__DOT__control_unit__DOT__MemReadD;
    vlSelfRef.top__DOT__data_memory__DOT__ResultSrc 
        = vlSelfRef.top__DOT__ResultSrcM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcM 
        = vlSelfRef.top__DOT__ResultSrcM;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCF 
        = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__instruction_memory__DOT__PC 
        = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__pipeline_FD__DOT__PCF = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__RD 
        = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__pipeline_FD__DOT__RD = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__instruction_memory__DOT__instr 
        = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__modeAddrD = vlSelfRef.top__DOT__control_unit__DOT__modeAddr;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in0 = vlSelfRef.top__DOT__RD2E;
    vlSelfRef.top__DOT__data_memory__DOT__modeAddr 
        = vlSelfRef.top__DOT__modeAddrM;
    vlSelfRef.top__DOT__ImmSrc = vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD;
    vlSelfRef.top__DOT__control_unit__DOT__InstrD = vlSelfRef.top__DOT__InstrD;
    vlSelfRef.top__DOT__sign_extend__DOT__ImmInput 
        = vlSelfRef.top__DOT__InstrD;
    vlSelfRef.top__DOT__regfile__DOT__AD1 = vlSelfRef.top__DOT__Rs1D;
    vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1D = vlSelfRef.top__DOT__Rs1D;
    vlSelfRef.top__DOT__regfile__DOT__RD1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [vlSelfRef.top__DOT__Rs1D];
    vlSelfRef.top__DOT__regfile__DOT__AD2 = vlSelfRef.top__DOT__Rs2D;
    vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2D = vlSelfRef.top__DOT__Rs2D;
    vlSelfRef.top__DOT__regfile__DOT__RD2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [vlSelfRef.top__DOT__Rs2D];
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUOp 
        = vlSelfRef.top__DOT__control_unit__DOT__ALUOp;
    __Vtableidx1 = ((((IData)(vlSelfRef.top__DOT__control_unit__DOT__funct7) 
                      << 6U) | (0x20U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) 
                    | (((IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3) 
                        << 2U) | (IData)(vlSelfRef.top__DOT__control_unit__DOT__ALUOp)));
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl 
        = Vtop__ConstPool__TABLE_he213c99d_0[__Vtableidx1];
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__clk 
        = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__program_counter__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__regfile__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__data_memory__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__pipeline_FD__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__pipeline_DE__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__pipeline_EM__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__pipeline_MW__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__PC_mux__DOT__JumpE = vlSelfRef.top__DOT__JumpE;
    vlSelfRef.top__DOT__PC_mux__DOT__PCTarget = top__DOT____Vcellinp__PC_mux__PCTarget;
    vlSelfRef.top__DOT__hazard_unit__DOT__MemReadE 
        = vlSelfRef.top__DOT__MemReadE;
    vlSelfRef.top__DOT__hazard_unit__DOT__flushBranch 
        = vlSelfRef.top__DOT__flushBranch;
    vlSelfRef.top__DOT__PC_mux__DOT__PCPlus4F = vlSelfRef.top__DOT__PCPlus4F;
    vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4F 
        = vlSelfRef.top__DOT__PCPlus4F;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__BranchE 
        = vlSelfRef.top__DOT__BranchE;
    vlSelfRef.top__DOT__PC_mux__DOT__BranchE = vlSelfRef.top__DOT__BranchE;
    vlSelfRef.top__DOT__hazard_unit__DOT__RdM = vlSelfRef.top__DOT__RdM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__RdM = vlSelfRef.top__DOT__RdM;
    vlSelfRef.top__DOT__hazard_unit__DOT__RegWriteM 
        = vlSelfRef.top__DOT__RegWriteM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__RegWriteM 
        = vlSelfRef.top__DOT__RegWriteM;
    vlSelfRef.top__DOT__hazard_unit__DOT__RdE = vlSelfRef.top__DOT__RdE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__RdE = vlSelfRef.top__DOT__RdE;
    vlSelfRef.top__DOT__hazard_unit__DOT__Rs2E = vlSelfRef.top__DOT__Rs2E;
    vlSelfRef.top__DOT__alu__DOT__ALUctrl = vlSelfRef.top__DOT__ALUControlE;
    vlSelfRef.top__DOT__alu__DOT__SrcB = top__DOT____Vcellinp__alu__SrcB;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in0 = vlSelfRef.top__DOT__RD1E;
    vlSelfRef.top__DOT__regfile_mux__DOT__sel = vlSelfRef.top__DOT__ResultSrcW;
    vlSelfRef.top__DOT__regfile_mux__DOT__in0 = vlSelfRef.top__DOT__ALUResultW;
    vlSelfRef.top__DOT__regfile_mux__DOT__in1 = vlSelfRef.top__DOT__ReadDataW;
    vlSelfRef.top__DOT__regfile_mux__DOT__in2 = vlSelfRef.top__DOT__PCPlus4W;
    vlSelfRef.top__DOT__regfile_mux__DOT__out = ((0U 
                                                  == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                                  ? vlSelfRef.top__DOT__ALUResultW
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                                   ? vlSelfRef.top__DOT__ReadDataW
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                                    ? vlSelfRef.top__DOT__PCPlus4W
                                                    : vlSelfRef.top__DOT__ALUResultW)));
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in2 = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in2 = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__data_memory__DOT__A = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ALUResultM 
        = vlSelfRef.top__DOT__ALUResultM;
    if ((0x100U == vlSelfRef.top__DOT__ALUResultM)) {
        vlSelfRef.top__DOT__data_memory__DOT__RD = vlSelfRef.trigger;
    } else if ((1U == (IData)(vlSelfRef.top__DOT__modeAddrM))) {
        vlSelfRef.top__DOT__data_memory__DOT__RD = 
            (((vlSelfRef.top__DOT__data_memory__DOT__ram_array
               [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)] 
               << 0x18U) | (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                            [(0x1ffffU & ((IData)(1U) 
                                          + (0x1fffcU 
                                             & vlSelfRef.top__DOT__ALUResultM)))] 
                            << 0x10U)) | ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                           [(0x1ffffU 
                                             & ((IData)(2U) 
                                                + (0x1fffcU 
                                                   & vlSelfRef.top__DOT__ALUResultM)))] 
                                           << 8U) | 
                                          vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                          [(0x1ffffU 
                                            & ((IData)(3U) 
                                               + (0x1fffcU 
                                                  & vlSelfRef.top__DOT__ALUResultM)))]));
    } else if ((2U == (IData)(vlSelfRef.top__DOT__modeAddrM))) {
        vlSelfRef.top__DOT__data_memory__DOT__RD = 
            (((- (IData)((1U & (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)] 
                                >> 7U)))) << 0x10U) 
             | ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                 [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)] 
                 << 8U) | vlSelfRef.top__DOT__data_memory__DOT__ram_array
                [(0x1ffffU & ((IData)(1U) + (0x1fffcU 
                                             & vlSelfRef.top__DOT__ALUResultM)))]));
    } else if ((3U == (IData)(vlSelfRef.top__DOT__modeAddrM))) {
        vlSelfRef.top__DOT__data_memory__DOT__RD = 
            (((- (IData)((1U & (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)] 
                                >> 7U)))) << 8U) | 
             vlSelfRef.top__DOT__data_memory__DOT__ram_array
             [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)]);
    } else if ((4U == (IData)(vlSelfRef.top__DOT__modeAddrM))) {
        vlSelfRef.top__DOT__data_memory__DOT__RD = 
            ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
              [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)] 
              << 8U) | vlSelfRef.top__DOT__data_memory__DOT__ram_array
             [(0x1ffffU & ((IData)(1U) + (0x1fffcU 
                                          & vlSelfRef.top__DOT__ALUResultM)))]);
    } else if ((5U == (IData)(vlSelfRef.top__DOT__modeAddrM))) {
        vlSelfRef.top__DOT__data_memory__DOT__RD = 
            vlSelfRef.top__DOT__data_memory__DOT__ram_array
            [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)];
    }
    vlSelfRef.top__DOT__hazard_unit__DOT__RdW = vlSelfRef.top__DOT__RdW;
    vlSelfRef.top__DOT__regfile__DOT__AD3 = vlSelfRef.top__DOT__RdW;
    vlSelfRef.top__DOT__hazard_unit__DOT__RegWriteW 
        = vlSelfRef.top__DOT__RegWriteW;
    vlSelfRef.top__DOT__regfile__DOT__WE3 = vlSelfRef.top__DOT__RegWriteW;
    vlSelfRef.top__DOT__hazard_unit__DOT__Rs1E = vlSelfRef.top__DOT__Rs1E;
    vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 0U;
    if ((1U & (~ (((IData)(vlSelfRef.top__DOT__RegWriteW) 
                   & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                      == (IData)(vlSelfRef.top__DOT__RdW))) 
                  & (0U != (IData)(vlSelfRef.top__DOT__RdW)))))) {
        if ((((IData)(vlSelfRef.top__DOT__RegWriteM) 
              & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                 == (IData)(vlSelfRef.top__DOT__RdM))) 
             & (0U != (IData)(vlSelfRef.top__DOT__RdM)))) {
            vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 2U;
        }
    }
    if ((((IData)(vlSelfRef.top__DOT__RegWriteW) & 
          ((IData)(vlSelfRef.top__DOT__Rs2E) == (IData)(vlSelfRef.top__DOT__RdW))) 
         & (0U != (IData)(vlSelfRef.top__DOT__RdW)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 1U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteM) 
                 & ((IData)(vlSelfRef.top__DOT__Rs2E) 
                    == (IData)(vlSelfRef.top__DOT__RdM))) 
                & (0U != (IData)(vlSelfRef.top__DOT__RdM)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 2U;
    }
    vlSelfRef.top__DOT__hazard_unit__DOT__stall = 0U;
    vlSelfRef.top__DOT__hazard_unit__DOT__stall = ((IData)(vlSelfRef.top__DOT__MemReadE) 
                                                   & (((IData)(vlSelfRef.top__DOT__RdE) 
                                                       == (IData)(vlSelfRef.top__DOT__Rs1E)) 
                                                      | ((IData)(vlSelfRef.top__DOT__RdE) 
                                                         == (IData)(vlSelfRef.top__DOT__Rs2E))));
    vlSelfRef.top__DOT__hazard_unit__DOT__flush = ((IData)(vlSelfRef.top__DOT__hazard_unit__DOT__stall) 
                                                   | (IData)(vlSelfRef.top__DOT__flushBranch));
    vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE = 0U;
    if ((((IData)(vlSelfRef.top__DOT__RegWriteW) & 
          ((IData)(vlSelfRef.top__DOT__Rs1E) == (IData)(vlSelfRef.top__DOT__RdW))) 
         & (0U != (IData)(vlSelfRef.top__DOT__RdW)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE = 1U;
    }
    vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcD 
        = vlSelfRef.top__DOT__ResultSrcD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RegWriteD 
        = vlSelfRef.top__DOT__RegWriteD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcD = vlSelfRef.top__DOT__ALUSrcD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__MemWriteD 
        = vlSelfRef.top__DOT__MemWriteD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__JumpD = vlSelfRef.top__DOT__JumpD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__BranchD = vlSelfRef.top__DOT__BranchD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__MemReadD 
        = vlSelfRef.top__DOT__MemReadD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrD 
        = vlSelfRef.top__DOT__modeAddrD;
    vlSelfRef.top__DOT__sign_extend__DOT__ImmSrc = vlSelfRef.top__DOT__ImmSrc;
    vlSelfRef.top__DOT__sign_extend__DOT__ImmExt = 
        ((4U & (IData)(vlSelfRef.top__DOT__ImmSrc))
          ? ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
              ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                       ? (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                       >> 0x1fU))) 
                           << 0xcU) | (vlSelfRef.top__DOT__InstrD 
                                       >> 0x14U)) : 
                      (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                    >> 0x1fU))) << 0x14U) 
                       | (((0xff000U & vlSelfRef.top__DOT__InstrD) 
                           | (0x800U & (vlSelfRef.top__DOT__InstrD 
                                        >> 9U))) | 
                          (0x7feU & (vlSelfRef.top__DOT__InstrD 
                                     >> 0x14U))))))
          : ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
              ? ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                  ? (0xfffff000U & vlSelfRef.top__DOT__InstrD)
                  : (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0x800U & (vlSelfRef.top__DOT__InstrD 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelfRef.top__DOT__InstrD 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.top__DOT__InstrD 
                                                    >> 7U))))))
              : ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                  ? (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0xfe0U & (vlSelfRef.top__DOT__InstrD 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelfRef.top__DOT__InstrD 
                                                    >> 7U))))
                  : (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                  >> 0x1fU))) << 0xcU) 
                     | (vlSelfRef.top__DOT__InstrD 
                        >> 0x14U)))));
    vlSelfRef.top__DOT__RD1 = vlSelfRef.top__DOT__regfile__DOT__RD1;
    vlSelfRef.top__DOT__RD2 = vlSelfRef.top__DOT__regfile__DOT__RD2;
    vlSelfRef.top__DOT__control_unit__DOT__ALUControlD 
        = vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl;
    vlSelfRef.top__DOT__ALUControlD = vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl;
    vlSelfRef.top__DOT__ResultW = vlSelfRef.top__DOT__regfile_mux__DOT__out;
    vlSelfRef.top__DOT__ReadDataM = vlSelfRef.top__DOT__data_memory__DOT__RD;
    vlSelfRef.top__DOT__ForwardBE = vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE;
    vlSelfRef.top__DOT__stall = vlSelfRef.top__DOT__hazard_unit__DOT__stall;
    vlSelfRef.top__DOT__flush = vlSelfRef.top__DOT__hazard_unit__DOT__flush;
    vlSelfRef.top__DOT__ForwardAE = vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE;
    vlSelfRef.top__DOT__ExtImmD = vlSelfRef.top__DOT__sign_extend__DOT__ImmExt;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RD1 = vlSelfRef.top__DOT__RD1;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RD2 = vlSelfRef.top__DOT__RD2;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlD 
        = vlSelfRef.top__DOT__ALUControlD;
    vlSelfRef.top__DOT__regfile__DOT__WD3 = vlSelfRef.top__DOT__ResultW;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in1 = vlSelfRef.top__DOT__ResultW;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in1 = vlSelfRef.top__DOT__ResultW;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ReadDataM 
        = vlSelfRef.top__DOT__ReadDataM;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__sel = vlSelfRef.top__DOT__ForwardBE;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__out = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.top__DOT__ForwardBE))
                                                    ? vlSelfRef.top__DOT__RD2E
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.top__DOT__ForwardBE))
                                                     ? vlSelfRef.top__DOT__ResultW
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.top__DOT__ForwardBE))
                                                      ? vlSelfRef.top__DOT__ALUResultM
                                                      : vlSelfRef.top__DOT__RD2E)));
    vlSelfRef.top__DOT__program_counter__DOT__stall 
        = vlSelfRef.top__DOT__stall;
    vlSelfRef.top__DOT__pipeline_FD__DOT__stall = vlSelfRef.top__DOT__stall;
    vlSelfRef.top__DOT__pipeline_FD__DOT__flush = vlSelfRef.top__DOT__flush;
    vlSelfRef.top__DOT__pipeline_DE__DOT__flush = vlSelfRef.top__DOT__flush;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__sel = vlSelfRef.top__DOT__ForwardAE;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__out = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.top__DOT__ForwardAE))
                                                    ? vlSelfRef.top__DOT__RD1E
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.top__DOT__ForwardAE))
                                                     ? vlSelfRef.top__DOT__ResultW
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.top__DOT__ForwardAE))
                                                      ? vlSelfRef.top__DOT__ALUResultM
                                                      : vlSelfRef.top__DOT__RD1E)));
    vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmD = vlSelfRef.top__DOT__ExtImmD;
    vlSelfRef.top__DOT__WriteDataE = vlSelfRef.top__DOT__forwardBE_mux__DOT__out;
    vlSelfRef.top__DOT__SrcAE = vlSelfRef.top__DOT__forwardAE_mux__DOT__out;
    vlSelfRef.top__DOT__pipeline_EM__DOT__WriteDataE 
        = vlSelfRef.top__DOT__WriteDataE;
    vlSelfRef.top__DOT__alu__DOT__SrcA = vlSelfRef.top__DOT__SrcAE;
    vlSelfRef.top__DOT__alu__DOT__ALUResult = ((8U 
                                                & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     ((vlSelfRef.top__DOT__SrcAE 
                                                       < top__DOT____Vcellinp__alu__SrcB)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     (VL_LTS_III(32, vlSelfRef.top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)
                                                       ? 1U
                                                       : 0U))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__SrcAE, 
                                                                    (0x1fU 
                                                                     & top__DOT____Vcellinp__alu__SrcB))
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      >> 
                                                      (0x1fU 
                                                       & top__DOT____Vcellinp__alu__SrcB)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      << 
                                                      (0x1fU 
                                                       & top__DOT____Vcellinp__alu__SrcB))
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      & top__DOT____Vcellinp__alu__SrcB)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      | top__DOT____Vcellinp__alu__SrcB)
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      ^ top__DOT____Vcellinp__alu__SrcB))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      - top__DOT____Vcellinp__alu__SrcB)
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      + top__DOT____Vcellinp__alu__SrcB)))));
    vlSelfRef.top__DOT__alu__DOT__ZeroE = ((1U & ((IData)(vlSelfRef.top__DOT__ALUControlE) 
                                                  >> 3U)) 
                                           && ((4U 
                                                & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    (vlSelfRef.top__DOT__SrcAE 
                                                     >= top__DOT____Vcellinp__alu__SrcB)
                                                     : 
                                                    (vlSelfRef.top__DOT__SrcAE 
                                                     < top__DOT____Vcellinp__alu__SrcB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    VL_GTES_III(32, vlSelfRef.top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)
                                                     : 
                                                    VL_LTS_III(32, vlSelfRef.top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.top__DOT__ALUControlE) 
                                                       >> 1U)) 
                                                   && ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                        ? 
                                                       (vlSelfRef.top__DOT__SrcAE 
                                                        != top__DOT____Vcellinp__alu__SrcB)
                                                        : 
                                                       (vlSelfRef.top__DOT__SrcAE 
                                                        == top__DOT____Vcellinp__alu__SrcB)))));
    vlSelfRef.top__DOT__ALUResultE = vlSelfRef.top__DOT__alu__DOT__ALUResult;
    vlSelfRef.top__DOT__Zero = vlSelfRef.top__DOT__alu__DOT__ZeroE;
    vlSelfRef.top__DOT__PC_mux__DOT__ALUResult = vlSelfRef.top__DOT__ALUResultE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultE 
        = vlSelfRef.top__DOT__ALUResultE;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__ZeroE 
        = vlSelfRef.top__DOT__Zero;
    vlSelfRef.top__DOT__PC_mux__DOT__ZeroE = vlSelfRef.top__DOT__Zero;
    vlSelfRef.top__DOT__PC_mux__DOT__PC = vlSelfRef.top__DOT__PCPlus4F;
    if (vlSelfRef.top__DOT__JumpE) {
        vlSelfRef.top__DOT__PC_mux__DOT__PC = ((IData)(vlSelfRef.top__DOT__BranchE)
                                                ? vlSelfRef.top__DOT__ALUResultE
                                                : top__DOT____Vcellinp__PC_mux__PCTarget);
    } else if (((IData)(vlSelfRef.top__DOT__BranchE) 
                & (IData)(vlSelfRef.top__DOT__Zero))) {
        vlSelfRef.top__DOT__PC_mux__DOT__PC = top__DOT____Vcellinp__PC_mux__PCTarget;
    }
    vlSelfRef.top__DOT__PC = vlSelfRef.top__DOT__PC_mux__DOT__PC;
    vlSelfRef.top__DOT__PC_next = ((IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc)
                                    ? vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPU
                                    : vlSelfRef.top__DOT__PC_mux__DOT__PC);
    vlSelfRef.top__DOT__BPU_mux__DOT__in0 = vlSelfRef.top__DOT__PC;
    vlSelfRef.top__DOT__program_counter__DOT__PC = vlSelfRef.top__DOT__PC_next;
    vlSelfRef.top__DOT__BPU_mux__DOT__out = vlSelfRef.top__DOT__PC_next;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT____Vcellinp__PC_mux__PCTarget;
    top__DOT____Vcellinp__PC_mux__PCTarget = 0;
    IData/*31:0*/ top__DOT____Vcellinp__alu__SrcB;
    top__DOT____Vcellinp__alu__SrcB = 0;
    CData/*1:0*/ __Vdly__top__DOT__branch_prediction_unit__DOT__forwardJumpCounter;
    __Vdly__top__DOT__branch_prediction_unit__DOT__forwardJumpCounter = 0;
    CData/*1:0*/ __Vdly__top__DOT__branch_prediction_unit__DOT__backwardJumpCounter;
    __Vdly__top__DOT__branch_prediction_unit__DOT__backwardJumpCounter = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__regfile__DOT__registerfile_array__v0;
    __VdlyVal__top__DOT__regfile__DOT__registerfile_array__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__regfile__DOT__registerfile_array__v0;
    __VdlyDim0__top__DOT__regfile__DOT__registerfile_array__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__regfile__DOT__registerfile_array__v0;
    __VdlySet__top__DOT__regfile__DOT__registerfile_array__v0 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v0;
    __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_memory__DOT__ram_array__v0;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_memory__DOT__ram_array__v1;
    __VdlyVal__top__DOT__data_memory__DOT__ram_array__v1 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v1;
    __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_memory__DOT__ram_array__v1;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_memory__DOT__ram_array__v2;
    __VdlyVal__top__DOT__data_memory__DOT__ram_array__v2 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v2;
    __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v2 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_memory__DOT__ram_array__v2;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_memory__DOT__ram_array__v3;
    __VdlyVal__top__DOT__data_memory__DOT__ram_array__v3 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v3;
    __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v3 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_memory__DOT__ram_array__v4;
    __VdlyVal__top__DOT__data_memory__DOT__ram_array__v4 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v4;
    __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v4 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_memory__DOT__ram_array__v4;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v4 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_memory__DOT__ram_array__v5;
    __VdlyVal__top__DOT__data_memory__DOT__ram_array__v5 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v5;
    __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v5 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_memory__DOT__ram_array__v5;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v5 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_memory__DOT__ram_array__v6;
    __VdlyVal__top__DOT__data_memory__DOT__ram_array__v6 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v6;
    __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v6 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_memory__DOT__ram_array__v7;
    __VdlyVal__top__DOT__data_memory__DOT__ram_array__v7 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v7;
    __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v7 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_memory__DOT__ram_array__v7;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v7 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_memory__DOT__ram_array__v8;
    __VdlyVal__top__DOT__data_memory__DOT__ram_array__v8 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v8;
    __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v8 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_memory__DOT__ram_array__v9;
    __VdlyVal__top__DOT__data_memory__DOT__ram_array__v9 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v9;
    __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v9 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__data_memory__DOT__ram_array__v10;
    __VdlyVal__top__DOT__data_memory__DOT__ram_array__v10 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v10;
    __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v10 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v11;
    __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v11 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__data_memory__DOT__ram_array__v11;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v11 = 0;
    // Body
    __Vdly__top__DOT__branch_prediction_unit__DOT__forwardJumpCounter 
        = vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter;
    __Vdly__top__DOT__branch_prediction_unit__DOT__backwardJumpCounter 
        = vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter;
    __VdlySet__top__DOT__regfile__DOT__registerfile_array__v0 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v0 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v1 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v2 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v4 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v5 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v7 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v11 = 0U;
    if (vlSelfRef.top__DOT__RegWriteW) {
        __VdlyVal__top__DOT__regfile__DOT__registerfile_array__v0 
            = ((0U == (IData)(vlSelfRef.top__DOT__RdW))
                ? 0U : vlSelfRef.top__DOT__ResultW);
        __VdlyDim0__top__DOT__regfile__DOT__registerfile_array__v0 
            = vlSelfRef.top__DOT__RdW;
        __VdlySet__top__DOT__regfile__DOT__registerfile_array__v0 = 1U;
    }
    if (vlSelfRef.top__DOT__MemWriteM) {
        if ((4U & (IData)(vlSelfRef.top__DOT__modeAddrM))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__modeAddrM))) {
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v0 
                    = (0x1fffcU & vlSelfRef.top__DOT__ALUResultM);
                __VdlySet__top__DOT__data_memory__DOT__ram_array__v0 = 1U;
            } else if ((1U & (IData)(vlSelfRef.top__DOT__modeAddrM))) {
                __VdlyVal__top__DOT__data_memory__DOT__ram_array__v1 
                    = (0xffU & vlSelfRef.top__DOT__WriteDataM);
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v1 
                    = (0x1fffcU & vlSelfRef.top__DOT__ALUResultM);
                __VdlySet__top__DOT__data_memory__DOT__ram_array__v1 = 1U;
            } else {
                __VdlyVal__top__DOT__data_memory__DOT__ram_array__v2 
                    = (0xffU & (vlSelfRef.top__DOT__WriteDataM 
                                >> 8U));
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v2 
                    = (0x1fffcU & vlSelfRef.top__DOT__ALUResultM);
                __VdlySet__top__DOT__data_memory__DOT__ram_array__v2 = 1U;
                __VdlyVal__top__DOT__data_memory__DOT__ram_array__v3 
                    = (0xffU & vlSelfRef.top__DOT__WriteDataM);
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v3 
                    = (0x1ffffU & ((IData)(1U) + (0x1fffcU 
                                                  & vlSelfRef.top__DOT__ALUResultM)));
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__modeAddrM))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__modeAddrM))) {
                __VdlyVal__top__DOT__data_memory__DOT__ram_array__v4 
                    = (0xffU & vlSelfRef.top__DOT__WriteDataM);
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v4 
                    = (0x1fffcU & vlSelfRef.top__DOT__ALUResultM);
                __VdlySet__top__DOT__data_memory__DOT__ram_array__v4 = 1U;
            } else {
                __VdlyVal__top__DOT__data_memory__DOT__ram_array__v5 
                    = (0xffU & (vlSelfRef.top__DOT__WriteDataM 
                                >> 8U));
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v5 
                    = (0x1fffcU & vlSelfRef.top__DOT__ALUResultM);
                __VdlySet__top__DOT__data_memory__DOT__ram_array__v5 = 1U;
                __VdlyVal__top__DOT__data_memory__DOT__ram_array__v6 
                    = (0xffU & vlSelfRef.top__DOT__WriteDataM);
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v6 
                    = (0x1ffffU & ((IData)(1U) + (0x1fffcU 
                                                  & vlSelfRef.top__DOT__ALUResultM)));
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__modeAddrM))) {
            __VdlyVal__top__DOT__data_memory__DOT__ram_array__v7 
                = (vlSelfRef.top__DOT__WriteDataM >> 0x18U);
            __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v7 
                = (0x1fffcU & vlSelfRef.top__DOT__ALUResultM);
            __VdlySet__top__DOT__data_memory__DOT__ram_array__v7 = 1U;
            __VdlyVal__top__DOT__data_memory__DOT__ram_array__v8 
                = (0xffU & (vlSelfRef.top__DOT__WriteDataM 
                            >> 0x10U));
            __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v8 
                = (0x1ffffU & ((IData)(1U) + (0x1fffcU 
                                              & vlSelfRef.top__DOT__ALUResultM)));
            __VdlyVal__top__DOT__data_memory__DOT__ram_array__v9 
                = (0xffU & (vlSelfRef.top__DOT__WriteDataM 
                            >> 8U));
            __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v9 
                = (0x1ffffU & ((IData)(2U) + (0x1fffcU 
                                              & vlSelfRef.top__DOT__ALUResultM)));
            __VdlyVal__top__DOT__data_memory__DOT__ram_array__v10 
                = (0xffU & vlSelfRef.top__DOT__WriteDataM);
            __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v10 
                = (0x1ffffU & ((IData)(3U) + (0x1fffcU 
                                              & vlSelfRef.top__DOT__ALUResultM)));
        } else {
            __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v11 
                = (0x1fffcU & vlSelfRef.top__DOT__ALUResultM);
            __VdlySet__top__DOT__data_memory__DOT__ram_array__v11 = 1U;
        }
    }
    vlSelfRef.top__DOT__pipeline_EM__DOT__MemWriteM 
        = vlSelfRef.top__DOT__MemWriteE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__WriteDataM 
        = vlSelfRef.top__DOT__WriteDataE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4M 
        = vlSelfRef.top__DOT__PCPlus4E;
    vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcM 
        = vlSelfRef.top__DOT__ResultSrcE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__modeAddrM 
        = vlSelfRef.top__DOT__modeAddrE;
    vlSelfRef.top__DOT__pipeline_DE__DOT__MemWriteE 
        = ((1U & (~ (IData)(vlSelfRef.top__DOT__flush))) 
           && (IData)(vlSelfRef.top__DOT__MemWriteD));
    vlSelfRef.top__DOT__pipeline_DE__DOT__RegWriteE 
        = ((1U & (~ (IData)(vlSelfRef.top__DOT__flush))) 
           && (IData)(vlSelfRef.top__DOT__RegWriteD));
    vlSelfRef.top__DOT__pipeline_EM__DOT__RegWriteM 
        = vlSelfRef.top__DOT__RegWriteE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__RdM = vlSelfRef.top__DOT__RdE;
    vlSelfRef.top__DOT__pipeline_DE__DOT__JumpE = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.top__DOT__flush))) 
                                                   && (IData)(vlSelfRef.top__DOT__JumpD));
    vlSelfRef.top__DOT__pipeline_DE__DOT__MemReadE 
        = ((1U & (~ (IData)(vlSelfRef.top__DOT__flush))) 
           && (IData)(vlSelfRef.top__DOT__MemReadD));
    vlSelfRef.top__DOT__pipeline_DE__DOT__BranchE = 
        ((1U & (~ (IData)(vlSelfRef.top__DOT__flush))) 
         && (IData)(vlSelfRef.top__DOT__BranchD));
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__stall)))) {
        vlSelfRef.top__DOT__program_counter__DOT__PCF 
            = ((IData)(vlSelfRef.rst) ? 0U : vlSelfRef.top__DOT__PC_next);
    }
    vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcE = 
        ((1U & (~ (IData)(vlSelfRef.top__DOT__flush))) 
         && (IData)(vlSelfRef.top__DOT__ALUSrcD));
    vlSelfRef.top__DOT__pipeline_MW__DOT__ReadDataW 
        = vlSelfRef.top__DOT__ReadDataM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4W 
        = vlSelfRef.top__DOT__PCPlus4M;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcW 
        = vlSelfRef.top__DOT__ResultSrcM;
    if (vlSelfRef.top__DOT__flush) {
        vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcE = 0U;
        vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrE = 0U;
        vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4E = 0U;
        vlSelfRef.top__DOT__pipeline_FD__DOT__PCD = 0U;
        vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4D = 0U;
        vlSelfRef.top__DOT__pipeline_DE__DOT__PCE = 0U;
        vlSelfRef.top__DOT__pipeline_DE__DOT__RdE = 0U;
        vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2E = 0U;
        vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD = 0U;
        vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlE = 0U;
        vlSelfRef.top__DOT__pipeline_DE__DOT__RD1E = 0U;
    } else {
        vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcE 
            = vlSelfRef.top__DOT__ResultSrcD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrE 
            = vlSelfRef.top__DOT__modeAddrD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4E 
            = vlSelfRef.top__DOT__PCPlus4D;
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__stall)))) {
            vlSelfRef.top__DOT__pipeline_FD__DOT__PCD 
                = vlSelfRef.top__DOT__PCF;
            vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4D 
                = vlSelfRef.top__DOT__PCPlus4F;
            vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                = vlSelfRef.top__DOT__InstrF;
        }
        vlSelfRef.top__DOT__pipeline_DE__DOT__PCE = vlSelfRef.top__DOT__PCD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__RdE = vlSelfRef.top__DOT__RdD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2E 
            = vlSelfRef.top__DOT__Rs2D;
        vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlE 
            = vlSelfRef.top__DOT__ALUControlD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__RD1E 
            = vlSelfRef.top__DOT__RD1;
    }
    if ((0x63U == (0x7fU & vlSelfRef.top__DOT__InstrF))) {
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue.push_back(vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch);
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPU 
            = (vlSelfRef.top__DOT__PCF + (((- (IData)(
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
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch.__PVT__branchAddr 
            = vlSelfRef.top__DOT__PCF;
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch.__PVT__targetAddr 
            = (vlSelfRef.top__DOT__PCF + (((- (IData)(
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
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch.__PVT__direction 
            = (vlSelfRef.top__DOT__InstrF >> 0x1fU);
        if ((1U & (~ (vlSelfRef.top__DOT__InstrF >> 0x1fU)))) {
            if ((2U <= (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))) {
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 1U;
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch.__PVT__prediction = 1U;
            }
            if ((1U >= (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))) {
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 0U;
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch.__PVT__prediction = 0U;
            }
        }
        if ((vlSelfRef.top__DOT__InstrF >> 0x1fU)) {
            if ((2U <= (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))) {
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 1U;
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch.__PVT__prediction = 1U;
            }
            if ((1U >= (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))) {
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 0U;
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch.__PVT__prediction = 0U;
            }
        }
    } else {
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 0U;
    }
    if (vlSelfRef.top__DOT__BranchE) {
        if ((vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch
             .__PVT__prediction == (IData)(vlSelfRef.top__DOT__Zero))) {
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch
                                 .__PVT__direction)))) {
                __Vdly__top__DOT__branch_prediction_unit__DOT__forwardJumpCounter 
                    = ((3U == (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))
                        ? 3U : (3U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))));
            }
            if (vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch
                .__PVT__direction) {
                __Vdly__top__DOT__branch_prediction_unit__DOT__backwardJumpCounter 
                    = ((3U == (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))
                        ? 3U : (3U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))));
            }
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__flushBranch = 0U;
        }
        if ((vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch
             .__PVT__prediction != (IData)(vlSelfRef.top__DOT__Zero))) {
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__flushBranch = 1U;
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPU 
                = ((IData)(vlSelfRef.top__DOT__Zero)
                    ? vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch
                   .__PVT__targetAddr : ((IData)(4U) 
                                         + (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch
                                                   .__PVT__branchAddr)));
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch
                                 .__PVT__direction)))) {
                __Vdly__top__DOT__branch_prediction_unit__DOT__forwardJumpCounter 
                    = ((0U == (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))
                        ? 0U : (3U & ((IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter) 
                                      - (IData)(1U))));
            }
            if (vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch
                .__PVT__direction) {
                __Vdly__top__DOT__branch_prediction_unit__DOT__backwardJumpCounter 
                    = ((0U == (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))
                        ? 0U : (3U & ((IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter) 
                                      - (IData)(1U))));
            }
        }
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch 
            = vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue.at(0U);
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue.pop_front();
    } else {
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__flushBranch = 0U;
    }
    if (vlSelfRef.top__DOT__flush) {
        vlSelfRef.top__DOT__pipeline_DE__DOT__RD2E = 0U;
        vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE = 0U;
        vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1E = 0U;
    } else {
        vlSelfRef.top__DOT__pipeline_DE__DOT__RD2E 
            = vlSelfRef.top__DOT__RD2;
        vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE 
            = vlSelfRef.top__DOT__ExtImmD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1E 
            = vlSelfRef.top__DOT__Rs1D;
    }
    vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultM 
        = vlSelfRef.top__DOT__ALUResultE;
    vlSelfRef.top__DOT__pipeline_MW__DOT__RegWriteW 
        = vlSelfRef.top__DOT__RegWriteM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__RdW = vlSelfRef.top__DOT__RdM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ALUResultW 
        = vlSelfRef.top__DOT__ALUResultM;
    if (__VdlySet__top__DOT__regfile__DOT__registerfile_array__v0) {
        vlSelfRef.top__DOT__regfile__DOT__registerfile_array[__VdlyDim0__top__DOT__regfile__DOT__registerfile_array__v0] 
            = __VdlyVal__top__DOT__regfile__DOT__registerfile_array__v0;
    }
    if (__VdlySet__top__DOT__data_memory__DOT__ram_array__v0) {
        vlSelfRef.top__DOT__data_memory__DOT__ram_array[__VdlyDim0__top__DOT__data_memory__DOT__ram_array__v0] = 0U;
    }
    if (__VdlySet__top__DOT__data_memory__DOT__ram_array__v1) {
        vlSelfRef.top__DOT__data_memory__DOT__ram_array[__VdlyDim0__top__DOT__data_memory__DOT__ram_array__v1] 
            = __VdlyVal__top__DOT__data_memory__DOT__ram_array__v1;
    }
    if (__VdlySet__top__DOT__data_memory__DOT__ram_array__v2) {
        vlSelfRef.top__DOT__data_memory__DOT__ram_array[__VdlyDim0__top__DOT__data_memory__DOT__ram_array__v2] 
            = __VdlyVal__top__DOT__data_memory__DOT__ram_array__v2;
        vlSelfRef.top__DOT__data_memory__DOT__ram_array[__VdlyDim0__top__DOT__data_memory__DOT__ram_array__v3] 
            = __VdlyVal__top__DOT__data_memory__DOT__ram_array__v3;
    }
    if (__VdlySet__top__DOT__data_memory__DOT__ram_array__v4) {
        vlSelfRef.top__DOT__data_memory__DOT__ram_array[__VdlyDim0__top__DOT__data_memory__DOT__ram_array__v4] 
            = __VdlyVal__top__DOT__data_memory__DOT__ram_array__v4;
    }
    if (__VdlySet__top__DOT__data_memory__DOT__ram_array__v5) {
        vlSelfRef.top__DOT__data_memory__DOT__ram_array[__VdlyDim0__top__DOT__data_memory__DOT__ram_array__v5] 
            = __VdlyVal__top__DOT__data_memory__DOT__ram_array__v5;
        vlSelfRef.top__DOT__data_memory__DOT__ram_array[__VdlyDim0__top__DOT__data_memory__DOT__ram_array__v6] 
            = __VdlyVal__top__DOT__data_memory__DOT__ram_array__v6;
    }
    if (__VdlySet__top__DOT__data_memory__DOT__ram_array__v7) {
        vlSelfRef.top__DOT__data_memory__DOT__ram_array[__VdlyDim0__top__DOT__data_memory__DOT__ram_array__v7] 
            = __VdlyVal__top__DOT__data_memory__DOT__ram_array__v7;
        vlSelfRef.top__DOT__data_memory__DOT__ram_array[__VdlyDim0__top__DOT__data_memory__DOT__ram_array__v8] 
            = __VdlyVal__top__DOT__data_memory__DOT__ram_array__v8;
        vlSelfRef.top__DOT__data_memory__DOT__ram_array[__VdlyDim0__top__DOT__data_memory__DOT__ram_array__v9] 
            = __VdlyVal__top__DOT__data_memory__DOT__ram_array__v9;
        vlSelfRef.top__DOT__data_memory__DOT__ram_array[__VdlyDim0__top__DOT__data_memory__DOT__ram_array__v10] 
            = __VdlyVal__top__DOT__data_memory__DOT__ram_array__v10;
    }
    if (__VdlySet__top__DOT__data_memory__DOT__ram_array__v11) {
        vlSelfRef.top__DOT__data_memory__DOT__ram_array[__VdlyDim0__top__DOT__data_memory__DOT__ram_array__v11] = 0U;
    }
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter 
        = __Vdly__top__DOT__branch_prediction_unit__DOT__forwardJumpCounter;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter 
        = __Vdly__top__DOT__branch_prediction_unit__DOT__backwardJumpCounter;
    vlSelfRef.top__DOT__regfile__DOT__a5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xfU];
    vlSelfRef.top__DOT__regfile__DOT__a4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xeU];
    vlSelfRef.top__DOT__regfile__DOT__a3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xdU];
    vlSelfRef.top__DOT__regfile__DOT__a2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xcU];
    vlSelfRef.top__DOT__regfile__DOT__a1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xbU];
    vlSelfRef.top__DOT__regfile__DOT__s1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [9U];
    vlSelfRef.top__DOT__regfile__DOT__t2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [7U];
    vlSelfRef.top__DOT__regfile__DOT__t1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [6U];
    vlSelfRef.top__DOT__regfile__DOT__t0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [5U];
    vlSelfRef.top__DOT__regfile__DOT__a0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xaU];
    vlSelfRef.top__DOT__regfile__DOT__s2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x12U];
    vlSelfRef.top__DOT__regfile__DOT__s0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [8U];
    vlSelfRef.top__DOT__regfile__DOT__a6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x10U];
    vlSelfRef.top__DOT__regfile__DOT__a7 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x11U];
    vlSelfRef.top__DOT__regfile__DOT__s3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x13U];
    vlSelfRef.top__DOT__regfile__DOT__s4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x14U];
    vlSelfRef.top__DOT__regfile__DOT__s5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x15U];
    vlSelfRef.top__DOT__regfile__DOT__s6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x16U];
    vlSelfRef.top__DOT__regfile__DOT__s7 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x17U];
    vlSelfRef.top__DOT__regfile__DOT__s8 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x18U];
    vlSelfRef.top__DOT__regfile__DOT__s9 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x19U];
    vlSelfRef.top__DOT__regfile__DOT__s10 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1aU];
    vlSelfRef.top__DOT__regfile__DOT__s11 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1bU];
    vlSelfRef.top__DOT__regfile__DOT__t3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1cU];
    vlSelfRef.top__DOT__regfile__DOT__t4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1dU];
    vlSelfRef.top__DOT__regfile__DOT__t5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1eU];
    vlSelfRef.top__DOT__regfile__DOT__t6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1fU];
    vlSelfRef.top__DOT__MemWriteM = vlSelfRef.top__DOT__pipeline_EM__DOT__MemWriteM;
    vlSelfRef.top__DOT__WriteDataM = vlSelfRef.top__DOT__pipeline_EM__DOT__WriteDataM;
    vlSelfRef.top__DOT__PCPlus4M = vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4M;
    vlSelfRef.top__DOT__ResultSrcM = vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcM;
    vlSelfRef.top__DOT__modeAddrM = vlSelfRef.top__DOT__pipeline_EM__DOT__modeAddrM;
    vlSelfRef.top__DOT__MemWriteE = vlSelfRef.top__DOT__pipeline_DE__DOT__MemWriteE;
    vlSelfRef.top__DOT__ResultSrcE = vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcE;
    vlSelfRef.top__DOT__RegWriteE = vlSelfRef.top__DOT__pipeline_DE__DOT__RegWriteE;
    vlSelfRef.top__DOT__modeAddrE = vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrE;
    vlSelfRef.top__DOT__PCPlus4E = vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4E;
    vlSelfRef.top__DOT__RegWriteM = vlSelfRef.top__DOT__pipeline_EM__DOT__RegWriteM;
    vlSelfRef.top__DOT__PCD = vlSelfRef.top__DOT__pipeline_FD__DOT__PCD;
    vlSelfRef.top__DOT__RdM = vlSelfRef.top__DOT__pipeline_EM__DOT__RdM;
    vlSelfRef.top__DOT__PCPlus4D = vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4D;
    vlSelfRef.top__DOT__JumpE = vlSelfRef.top__DOT__pipeline_DE__DOT__JumpE;
    vlSelfRef.top__DOT__MemReadE = vlSelfRef.top__DOT__pipeline_DE__DOT__MemReadE;
    vlSelfRef.top__DOT__BranchE = vlSelfRef.top__DOT__pipeline_DE__DOT__BranchE;
    vlSelfRef.top__DOT__PCE = vlSelfRef.top__DOT__pipeline_DE__DOT__PCE;
    vlSelfRef.top__DOT__RdE = vlSelfRef.top__DOT__pipeline_DE__DOT__RdE;
    vlSelfRef.top__DOT__PCF = vlSelfRef.top__DOT__program_counter__DOT__PCF;
    vlSelfRef.top__DOT__InstrF = (((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                    [(0xffffU & ((IData)(3U) 
                                                 + vlSelfRef.top__DOT__program_counter__DOT__PCF))] 
                                    << 0x18U) | (vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.top__DOT__program_counter__DOT__PCF))] 
                                                 << 0x10U)) 
                                  | ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                      [(0xffffU & ((IData)(1U) 
                                                   + vlSelfRef.top__DOT__program_counter__DOT__PCF))] 
                                      << 8U) | vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                     [(0xffffU & vlSelfRef.top__DOT__program_counter__DOT__PCF)]));
    vlSelfRef.top__DOT__PCPlus4F = ((IData)(4U) + vlSelfRef.top__DOT__program_counter__DOT__PCF);
    vlSelfRef.top__DOT__Rs2E = vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2E;
    vlSelfRef.top__DOT__RdD = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                        >> 7U));
    vlSelfRef.top__DOT__InstrD = vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD;
    vlSelfRef.top__DOT__Rs1D = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                         >> 0xfU));
    vlSelfRef.top__DOT__Rs2D = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                         >> 0x14U));
    vlSelfRef.top__DOT__ALUControlE = vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlE;
    vlSelfRef.top__DOT__ALUSrcE = vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcE;
    vlSelfRef.top__DOT__RD1E = vlSelfRef.top__DOT__pipeline_DE__DOT__RD1E;
    vlSelfRef.top__DOT__ReadDataW = vlSelfRef.top__DOT__pipeline_MW__DOT__ReadDataW;
    vlSelfRef.top__DOT__PCPlus4W = vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4W;
    vlSelfRef.top__DOT__ResultSrcW = vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcW;
    vlSelfRef.top__DOT__PC_predict = vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPU;
    vlSelfRef.top__DOT__BPU_Src = vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc;
    vlSelfRef.top__DOT__flushBranch = vlSelfRef.top__DOT__branch_prediction_unit__DOT__flushBranch;
    vlSelfRef.top__DOT__RD2E = vlSelfRef.top__DOT__pipeline_DE__DOT__RD2E;
    vlSelfRef.top__DOT__ALUResultM = vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultM;
    vlSelfRef.top__DOT__ExtImmE = vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE;
    top__DOT____Vcellinp__PC_mux__PCTarget = (vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE 
                                              + vlSelfRef.top__DOT__pipeline_DE__DOT__PCE);
    top__DOT____Vcellinp__alu__SrcB = ((IData)(vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcE)
                                        ? vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE
                                        : vlSelfRef.top__DOT__pipeline_DE__DOT__RD2E);
    vlSelfRef.top__DOT__RegWriteW = vlSelfRef.top__DOT__pipeline_MW__DOT__RegWriteW;
    vlSelfRef.top__DOT__RdW = vlSelfRef.top__DOT__pipeline_MW__DOT__RdW;
    vlSelfRef.top__DOT__ALUResultW = vlSelfRef.top__DOT__pipeline_MW__DOT__ALUResultW;
    vlSelfRef.top__DOT__Rs1E = vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1E;
    vlSelfRef.a5 = vlSelfRef.top__DOT__regfile__DOT__a5;
    vlSelfRef.top__DOT__a5 = vlSelfRef.top__DOT__regfile__DOT__a5;
    vlSelfRef.a4 = vlSelfRef.top__DOT__regfile__DOT__a4;
    vlSelfRef.top__DOT__a4 = vlSelfRef.top__DOT__regfile__DOT__a4;
    vlSelfRef.a3 = vlSelfRef.top__DOT__regfile__DOT__a3;
    vlSelfRef.top__DOT__a3 = vlSelfRef.top__DOT__regfile__DOT__a3;
    vlSelfRef.a2 = vlSelfRef.top__DOT__regfile__DOT__a2;
    vlSelfRef.top__DOT__a2 = vlSelfRef.top__DOT__regfile__DOT__a2;
    vlSelfRef.a1 = vlSelfRef.top__DOT__regfile__DOT__a1;
    vlSelfRef.top__DOT__a1 = vlSelfRef.top__DOT__regfile__DOT__a1;
    vlSelfRef.s1 = vlSelfRef.top__DOT__regfile__DOT__s1;
    vlSelfRef.top__DOT__s1 = vlSelfRef.top__DOT__regfile__DOT__s1;
    vlSelfRef.t2 = vlSelfRef.top__DOT__regfile__DOT__t2;
    vlSelfRef.top__DOT__t2 = vlSelfRef.top__DOT__regfile__DOT__t2;
    vlSelfRef.t1 = vlSelfRef.top__DOT__regfile__DOT__t1;
    vlSelfRef.top__DOT__t1 = vlSelfRef.top__DOT__regfile__DOT__t1;
    vlSelfRef.t0 = vlSelfRef.top__DOT__regfile__DOT__t0;
    vlSelfRef.top__DOT__t0 = vlSelfRef.top__DOT__regfile__DOT__t0;
    vlSelfRef.a0 = vlSelfRef.top__DOT__regfile__DOT__a0;
    vlSelfRef.top__DOT__a0 = vlSelfRef.top__DOT__regfile__DOT__a0;
    vlSelfRef.s2 = vlSelfRef.top__DOT__regfile__DOT__s2;
    vlSelfRef.top__DOT__s2 = vlSelfRef.top__DOT__regfile__DOT__s2;
    vlSelfRef.s0 = vlSelfRef.top__DOT__regfile__DOT__s0;
    vlSelfRef.top__DOT__s0 = vlSelfRef.top__DOT__regfile__DOT__s0;
    vlSelfRef.a6 = vlSelfRef.top__DOT__regfile__DOT__a6;
    vlSelfRef.top__DOT__a6 = vlSelfRef.top__DOT__regfile__DOT__a6;
    vlSelfRef.a7 = vlSelfRef.top__DOT__regfile__DOT__a7;
    vlSelfRef.top__DOT__a7 = vlSelfRef.top__DOT__regfile__DOT__a7;
    vlSelfRef.s3 = vlSelfRef.top__DOT__regfile__DOT__s3;
    vlSelfRef.top__DOT__s3 = vlSelfRef.top__DOT__regfile__DOT__s3;
    vlSelfRef.s4 = vlSelfRef.top__DOT__regfile__DOT__s4;
    vlSelfRef.top__DOT__s4 = vlSelfRef.top__DOT__regfile__DOT__s4;
    vlSelfRef.s5 = vlSelfRef.top__DOT__regfile__DOT__s5;
    vlSelfRef.top__DOT__s5 = vlSelfRef.top__DOT__regfile__DOT__s5;
    vlSelfRef.s6 = vlSelfRef.top__DOT__regfile__DOT__s6;
    vlSelfRef.top__DOT__s6 = vlSelfRef.top__DOT__regfile__DOT__s6;
    vlSelfRef.s7 = vlSelfRef.top__DOT__regfile__DOT__s7;
    vlSelfRef.top__DOT__s7 = vlSelfRef.top__DOT__regfile__DOT__s7;
    vlSelfRef.s8 = vlSelfRef.top__DOT__regfile__DOT__s8;
    vlSelfRef.top__DOT__s8 = vlSelfRef.top__DOT__regfile__DOT__s8;
    vlSelfRef.s9 = vlSelfRef.top__DOT__regfile__DOT__s9;
    vlSelfRef.top__DOT__s9 = vlSelfRef.top__DOT__regfile__DOT__s9;
    vlSelfRef.s10 = vlSelfRef.top__DOT__regfile__DOT__s10;
    vlSelfRef.top__DOT__s10 = vlSelfRef.top__DOT__regfile__DOT__s10;
    vlSelfRef.s11 = vlSelfRef.top__DOT__regfile__DOT__s11;
    vlSelfRef.top__DOT__s11 = vlSelfRef.top__DOT__regfile__DOT__s11;
    vlSelfRef.t3 = vlSelfRef.top__DOT__regfile__DOT__t3;
    vlSelfRef.top__DOT__t3 = vlSelfRef.top__DOT__regfile__DOT__t3;
    vlSelfRef.t4 = vlSelfRef.top__DOT__regfile__DOT__t4;
    vlSelfRef.top__DOT__t4 = vlSelfRef.top__DOT__regfile__DOT__t4;
    vlSelfRef.t5 = vlSelfRef.top__DOT__regfile__DOT__t5;
    vlSelfRef.top__DOT__t5 = vlSelfRef.top__DOT__regfile__DOT__t5;
    vlSelfRef.t6 = vlSelfRef.top__DOT__regfile__DOT__t6;
    vlSelfRef.top__DOT__t6 = vlSelfRef.top__DOT__regfile__DOT__t6;
    vlSelfRef.top__DOT__data_memory__DOT__WE = vlSelfRef.top__DOT__MemWriteM;
    vlSelfRef.top__DOT__data_memory__DOT__WD = vlSelfRef.top__DOT__WriteDataM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4M 
        = vlSelfRef.top__DOT__PCPlus4M;
    vlSelfRef.top__DOT__data_memory__DOT__ResultSrc 
        = vlSelfRef.top__DOT__ResultSrcM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcM 
        = vlSelfRef.top__DOT__ResultSrcM;
    vlSelfRef.top__DOT__data_memory__DOT__modeAddr 
        = vlSelfRef.top__DOT__modeAddrM;
    vlSelfRef.top__DOT__pipeline_EM__DOT__MemWriteE 
        = vlSelfRef.top__DOT__MemWriteE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcE 
        = vlSelfRef.top__DOT__ResultSrcE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__RegWriteE 
        = vlSelfRef.top__DOT__RegWriteE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__modeAddrE 
        = vlSelfRef.top__DOT__modeAddrE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4E 
        = vlSelfRef.top__DOT__PCPlus4E;
    vlSelfRef.top__DOT__hazard_unit__DOT__RegWriteM 
        = vlSelfRef.top__DOT__RegWriteM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__RegWriteM 
        = vlSelfRef.top__DOT__RegWriteM;
    vlSelfRef.top__DOT__pipeline_DE__DOT__PCD = vlSelfRef.top__DOT__PCD;
    vlSelfRef.top__DOT__hazard_unit__DOT__RdM = vlSelfRef.top__DOT__RdM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__RdM = vlSelfRef.top__DOT__RdM;
    vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4D 
        = vlSelfRef.top__DOT__PCPlus4D;
    vlSelfRef.top__DOT__PC_mux__DOT__JumpE = vlSelfRef.top__DOT__JumpE;
    vlSelfRef.top__DOT__hazard_unit__DOT__MemReadE 
        = vlSelfRef.top__DOT__MemReadE;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__BranchE 
        = vlSelfRef.top__DOT__BranchE;
    vlSelfRef.top__DOT__PC_mux__DOT__BranchE = vlSelfRef.top__DOT__BranchE;
    vlSelfRef.top__DOT__hazard_unit__DOT__RdE = vlSelfRef.top__DOT__RdE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__RdE = vlSelfRef.top__DOT__RdE;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCF 
        = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__instruction_memory__DOT__PC 
        = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__pipeline_FD__DOT__PCF = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__RD 
        = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__pipeline_FD__DOT__RD = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__instruction_memory__DOT__instr 
        = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__PC_mux__DOT__PCPlus4F = vlSelfRef.top__DOT__PCPlus4F;
    vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4F 
        = vlSelfRef.top__DOT__PCPlus4F;
    vlSelfRef.top__DOT__hazard_unit__DOT__Rs2E = vlSelfRef.top__DOT__Rs2E;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RdD = vlSelfRef.top__DOT__RdD;
    vlSelfRef.top__DOT__control_unit__DOT__InstrD = vlSelfRef.top__DOT__InstrD;
    vlSelfRef.top__DOT__sign_extend__DOT__ImmInput 
        = vlSelfRef.top__DOT__InstrD;
    vlSelfRef.top__DOT__sign_extend__DOT__ImmExt = 
        ((4U & (IData)(vlSelfRef.top__DOT__ImmSrc))
          ? ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
              ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                       ? (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                       >> 0x1fU))) 
                           << 0xcU) | (vlSelfRef.top__DOT__InstrD 
                                       >> 0x14U)) : 
                      (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                    >> 0x1fU))) << 0x14U) 
                       | (((0xff000U & vlSelfRef.top__DOT__InstrD) 
                           | (0x800U & (vlSelfRef.top__DOT__InstrD 
                                        >> 9U))) | 
                          (0x7feU & (vlSelfRef.top__DOT__InstrD 
                                     >> 0x14U))))))
          : ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
              ? ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                  ? (0xfffff000U & vlSelfRef.top__DOT__InstrD)
                  : (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0x800U & (vlSelfRef.top__DOT__InstrD 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelfRef.top__DOT__InstrD 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.top__DOT__InstrD 
                                                    >> 7U))))))
              : ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                  ? (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0xfe0U & (vlSelfRef.top__DOT__InstrD 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelfRef.top__DOT__InstrD 
                                                    >> 7U))))
                  : (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                  >> 0x1fU))) << 0xcU) 
                     | (vlSelfRef.top__DOT__InstrD 
                        >> 0x14U)))));
    vlSelfRef.top__DOT__regfile__DOT__AD1 = vlSelfRef.top__DOT__Rs1D;
    vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1D = vlSelfRef.top__DOT__Rs1D;
    vlSelfRef.top__DOT__regfile__DOT__RD1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [vlSelfRef.top__DOT__Rs1D];
    vlSelfRef.top__DOT__regfile__DOT__AD2 = vlSelfRef.top__DOT__Rs2D;
    vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2D = vlSelfRef.top__DOT__Rs2D;
    vlSelfRef.top__DOT__regfile__DOT__RD2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [vlSelfRef.top__DOT__Rs2D];
    vlSelfRef.top__DOT__alu__DOT__ALUctrl = vlSelfRef.top__DOT__ALUControlE;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in0 = vlSelfRef.top__DOT__RD1E;
    vlSelfRef.top__DOT__regfile_mux__DOT__in1 = vlSelfRef.top__DOT__ReadDataW;
    vlSelfRef.top__DOT__regfile_mux__DOT__in2 = vlSelfRef.top__DOT__PCPlus4W;
    vlSelfRef.top__DOT__regfile_mux__DOT__sel = vlSelfRef.top__DOT__ResultSrcW;
    vlSelfRef.top__DOT__BPU_mux__DOT__in1 = vlSelfRef.top__DOT__PC_predict;
    vlSelfRef.top__DOT__BPU_mux__DOT__sel = vlSelfRef.top__DOT__BPU_Src;
    vlSelfRef.top__DOT__hazard_unit__DOT__flushBranch 
        = vlSelfRef.top__DOT__flushBranch;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in0 = vlSelfRef.top__DOT__RD2E;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in2 = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in2 = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__data_memory__DOT__A = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ALUResultM 
        = vlSelfRef.top__DOT__ALUResultM;
    if ((0x100U == vlSelfRef.top__DOT__ALUResultM)) {
        vlSelfRef.top__DOT__data_memory__DOT__RD = vlSelfRef.trigger;
    } else if ((1U == (IData)(vlSelfRef.top__DOT__modeAddrM))) {
        vlSelfRef.top__DOT__data_memory__DOT__RD = 
            (((vlSelfRef.top__DOT__data_memory__DOT__ram_array
               [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)] 
               << 0x18U) | (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                            [(0x1ffffU & ((IData)(1U) 
                                          + (0x1fffcU 
                                             & vlSelfRef.top__DOT__ALUResultM)))] 
                            << 0x10U)) | ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                           [(0x1ffffU 
                                             & ((IData)(2U) 
                                                + (0x1fffcU 
                                                   & vlSelfRef.top__DOT__ALUResultM)))] 
                                           << 8U) | 
                                          vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                          [(0x1ffffU 
                                            & ((IData)(3U) 
                                               + (0x1fffcU 
                                                  & vlSelfRef.top__DOT__ALUResultM)))]));
    } else if ((2U == (IData)(vlSelfRef.top__DOT__modeAddrM))) {
        vlSelfRef.top__DOT__data_memory__DOT__RD = 
            (((- (IData)((1U & (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)] 
                                >> 7U)))) << 0x10U) 
             | ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                 [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)] 
                 << 8U) | vlSelfRef.top__DOT__data_memory__DOT__ram_array
                [(0x1ffffU & ((IData)(1U) + (0x1fffcU 
                                             & vlSelfRef.top__DOT__ALUResultM)))]));
    } else if ((3U == (IData)(vlSelfRef.top__DOT__modeAddrM))) {
        vlSelfRef.top__DOT__data_memory__DOT__RD = 
            (((- (IData)((1U & (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)] 
                                >> 7U)))) << 8U) | 
             vlSelfRef.top__DOT__data_memory__DOT__ram_array
             [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)]);
    } else if ((4U == (IData)(vlSelfRef.top__DOT__modeAddrM))) {
        vlSelfRef.top__DOT__data_memory__DOT__RD = 
            ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
              [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)] 
              << 8U) | vlSelfRef.top__DOT__data_memory__DOT__ram_array
             [(0x1ffffU & ((IData)(1U) + (0x1fffcU 
                                          & vlSelfRef.top__DOT__ALUResultM)))]);
    } else if ((5U == (IData)(vlSelfRef.top__DOT__modeAddrM))) {
        vlSelfRef.top__DOT__data_memory__DOT__RD = 
            vlSelfRef.top__DOT__data_memory__DOT__ram_array
            [(0x1fffcU & vlSelfRef.top__DOT__ALUResultM)];
    }
    vlSelfRef.top__DOT__PC_mux__DOT__PCTarget = top__DOT____Vcellinp__PC_mux__PCTarget;
    vlSelfRef.top__DOT__alu__DOT__SrcB = top__DOT____Vcellinp__alu__SrcB;
    vlSelfRef.top__DOT__hazard_unit__DOT__RegWriteW 
        = vlSelfRef.top__DOT__RegWriteW;
    vlSelfRef.top__DOT__regfile__DOT__WE3 = vlSelfRef.top__DOT__RegWriteW;
    vlSelfRef.top__DOT__hazard_unit__DOT__RdW = vlSelfRef.top__DOT__RdW;
    vlSelfRef.top__DOT__regfile__DOT__AD3 = vlSelfRef.top__DOT__RdW;
    vlSelfRef.top__DOT__regfile_mux__DOT__in0 = vlSelfRef.top__DOT__ALUResultW;
    vlSelfRef.top__DOT__regfile_mux__DOT__out = ((0U 
                                                  == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                                  ? vlSelfRef.top__DOT__ALUResultW
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                                   ? vlSelfRef.top__DOT__ReadDataW
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                                    ? vlSelfRef.top__DOT__PCPlus4W
                                                    : vlSelfRef.top__DOT__ALUResultW)));
    vlSelfRef.top__DOT__hazard_unit__DOT__Rs1E = vlSelfRef.top__DOT__Rs1E;
    vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 0U;
    if ((1U & (~ (((IData)(vlSelfRef.top__DOT__RegWriteW) 
                   & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                      == (IData)(vlSelfRef.top__DOT__RdW))) 
                  & (0U != (IData)(vlSelfRef.top__DOT__RdW)))))) {
        if ((((IData)(vlSelfRef.top__DOT__RegWriteM) 
              & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                 == (IData)(vlSelfRef.top__DOT__RdM))) 
             & (0U != (IData)(vlSelfRef.top__DOT__RdM)))) {
            vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 2U;
        }
    }
    if ((((IData)(vlSelfRef.top__DOT__RegWriteW) & 
          ((IData)(vlSelfRef.top__DOT__Rs2E) == (IData)(vlSelfRef.top__DOT__RdW))) 
         & (0U != (IData)(vlSelfRef.top__DOT__RdW)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 1U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteM) 
                 & ((IData)(vlSelfRef.top__DOT__Rs2E) 
                    == (IData)(vlSelfRef.top__DOT__RdM))) 
                & (0U != (IData)(vlSelfRef.top__DOT__RdM)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 2U;
    }
    vlSelfRef.top__DOT__hazard_unit__DOT__stall = 0U;
    vlSelfRef.top__DOT__hazard_unit__DOT__stall = ((IData)(vlSelfRef.top__DOT__MemReadE) 
                                                   & (((IData)(vlSelfRef.top__DOT__RdE) 
                                                       == (IData)(vlSelfRef.top__DOT__Rs1E)) 
                                                      | ((IData)(vlSelfRef.top__DOT__RdE) 
                                                         == (IData)(vlSelfRef.top__DOT__Rs2E))));
    vlSelfRef.top__DOT__hazard_unit__DOT__flush = ((IData)(vlSelfRef.top__DOT__hazard_unit__DOT__stall) 
                                                   | (IData)(vlSelfRef.top__DOT__flushBranch));
    vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE = 0U;
    if ((((IData)(vlSelfRef.top__DOT__RegWriteW) & 
          ((IData)(vlSelfRef.top__DOT__Rs1E) == (IData)(vlSelfRef.top__DOT__RdW))) 
         & (0U != (IData)(vlSelfRef.top__DOT__RdW)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE = 1U;
    }
    vlSelfRef.top__DOT__ExtImmD = vlSelfRef.top__DOT__sign_extend__DOT__ImmExt;
    vlSelfRef.top__DOT__RD1 = vlSelfRef.top__DOT__regfile__DOT__RD1;
    vlSelfRef.top__DOT__RD2 = vlSelfRef.top__DOT__regfile__DOT__RD2;
    vlSelfRef.top__DOT__ReadDataM = vlSelfRef.top__DOT__data_memory__DOT__RD;
    vlSelfRef.top__DOT__ResultW = vlSelfRef.top__DOT__regfile_mux__DOT__out;
    vlSelfRef.top__DOT__ForwardBE = vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE;
    vlSelfRef.top__DOT__stall = vlSelfRef.top__DOT__hazard_unit__DOT__stall;
    vlSelfRef.top__DOT__flush = vlSelfRef.top__DOT__hazard_unit__DOT__flush;
    vlSelfRef.top__DOT__ForwardAE = vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmD = vlSelfRef.top__DOT__ExtImmD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RD1 = vlSelfRef.top__DOT__RD1;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RD2 = vlSelfRef.top__DOT__RD2;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ReadDataM 
        = vlSelfRef.top__DOT__ReadDataM;
    vlSelfRef.top__DOT__regfile__DOT__WD3 = vlSelfRef.top__DOT__ResultW;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in1 = vlSelfRef.top__DOT__ResultW;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in1 = vlSelfRef.top__DOT__ResultW;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__sel = vlSelfRef.top__DOT__ForwardBE;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__out = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.top__DOT__ForwardBE))
                                                    ? vlSelfRef.top__DOT__RD2E
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.top__DOT__ForwardBE))
                                                     ? vlSelfRef.top__DOT__ResultW
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.top__DOT__ForwardBE))
                                                      ? vlSelfRef.top__DOT__ALUResultM
                                                      : vlSelfRef.top__DOT__RD2E)));
    vlSelfRef.top__DOT__program_counter__DOT__stall 
        = vlSelfRef.top__DOT__stall;
    vlSelfRef.top__DOT__pipeline_FD__DOT__stall = vlSelfRef.top__DOT__stall;
    vlSelfRef.top__DOT__pipeline_FD__DOT__flush = vlSelfRef.top__DOT__flush;
    vlSelfRef.top__DOT__pipeline_DE__DOT__flush = vlSelfRef.top__DOT__flush;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__sel = vlSelfRef.top__DOT__ForwardAE;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__out = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.top__DOT__ForwardAE))
                                                    ? vlSelfRef.top__DOT__RD1E
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.top__DOT__ForwardAE))
                                                     ? vlSelfRef.top__DOT__ResultW
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.top__DOT__ForwardAE))
                                                      ? vlSelfRef.top__DOT__ALUResultM
                                                      : vlSelfRef.top__DOT__RD1E)));
    vlSelfRef.top__DOT__WriteDataE = vlSelfRef.top__DOT__forwardBE_mux__DOT__out;
    vlSelfRef.top__DOT__SrcAE = vlSelfRef.top__DOT__forwardAE_mux__DOT__out;
    vlSelfRef.top__DOT__pipeline_EM__DOT__WriteDataE 
        = vlSelfRef.top__DOT__WriteDataE;
    vlSelfRef.top__DOT__alu__DOT__SrcA = vlSelfRef.top__DOT__SrcAE;
    vlSelfRef.top__DOT__alu__DOT__ALUResult = ((8U 
                                                & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     ((vlSelfRef.top__DOT__SrcAE 
                                                       < top__DOT____Vcellinp__alu__SrcB)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     (VL_LTS_III(32, vlSelfRef.top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)
                                                       ? 1U
                                                       : 0U))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__SrcAE, 
                                                                    (0x1fU 
                                                                     & top__DOT____Vcellinp__alu__SrcB))
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      >> 
                                                      (0x1fU 
                                                       & top__DOT____Vcellinp__alu__SrcB)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      << 
                                                      (0x1fU 
                                                       & top__DOT____Vcellinp__alu__SrcB))
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      & top__DOT____Vcellinp__alu__SrcB)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      | top__DOT____Vcellinp__alu__SrcB)
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      ^ top__DOT____Vcellinp__alu__SrcB))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      - top__DOT____Vcellinp__alu__SrcB)
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      + top__DOT____Vcellinp__alu__SrcB)))));
    vlSelfRef.top__DOT__alu__DOT__ZeroE = ((1U & ((IData)(vlSelfRef.top__DOT__ALUControlE) 
                                                  >> 3U)) 
                                           && ((4U 
                                                & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    (vlSelfRef.top__DOT__SrcAE 
                                                     >= top__DOT____Vcellinp__alu__SrcB)
                                                     : 
                                                    (vlSelfRef.top__DOT__SrcAE 
                                                     < top__DOT____Vcellinp__alu__SrcB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    VL_GTES_III(32, vlSelfRef.top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)
                                                     : 
                                                    VL_LTS_III(32, vlSelfRef.top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.top__DOT__ALUControlE) 
                                                       >> 1U)) 
                                                   && ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                        ? 
                                                       (vlSelfRef.top__DOT__SrcAE 
                                                        != top__DOT____Vcellinp__alu__SrcB)
                                                        : 
                                                       (vlSelfRef.top__DOT__SrcAE 
                                                        == top__DOT____Vcellinp__alu__SrcB)))));
    vlSelfRef.top__DOT__ALUResultE = vlSelfRef.top__DOT__alu__DOT__ALUResult;
    vlSelfRef.top__DOT__Zero = vlSelfRef.top__DOT__alu__DOT__ZeroE;
    vlSelfRef.top__DOT__PC_mux__DOT__ALUResult = vlSelfRef.top__DOT__ALUResultE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultE 
        = vlSelfRef.top__DOT__ALUResultE;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__ZeroE 
        = vlSelfRef.top__DOT__Zero;
    vlSelfRef.top__DOT__PC_mux__DOT__ZeroE = vlSelfRef.top__DOT__Zero;
    vlSelfRef.top__DOT__PC_mux__DOT__PC = vlSelfRef.top__DOT__PCPlus4F;
    if (vlSelfRef.top__DOT__JumpE) {
        vlSelfRef.top__DOT__PC_mux__DOT__PC = ((IData)(vlSelfRef.top__DOT__BranchE)
                                                ? vlSelfRef.top__DOT__ALUResultE
                                                : top__DOT____Vcellinp__PC_mux__PCTarget);
    } else if (((IData)(vlSelfRef.top__DOT__BranchE) 
                & (IData)(vlSelfRef.top__DOT__Zero))) {
        vlSelfRef.top__DOT__PC_mux__DOT__PC = top__DOT____Vcellinp__PC_mux__PCTarget;
    }
    vlSelfRef.top__DOT__PC = vlSelfRef.top__DOT__PC_mux__DOT__PC;
    vlSelfRef.top__DOT__PC_next = ((IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc)
                                    ? vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPU
                                    : vlSelfRef.top__DOT__PC_mux__DOT__PC);
    vlSelfRef.top__DOT__BPU_mux__DOT__in0 = vlSelfRef.top__DOT__PC;
    vlSelfRef.top__DOT__program_counter__DOT__PC = vlSelfRef.top__DOT__PC_next;
    vlSelfRef.top__DOT__BPU_mux__DOT__out = vlSelfRef.top__DOT__PC_next;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG

std::string VL_TO_STRING(const Vtop_top__DOT__branch_prediction_unit__DOT__BranchInfo__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{branchAddr:" + VL_TO_STRING(obj.__PVT__branchAddr);
        out += ", targetAddr:" + VL_TO_STRING(obj.__PVT__targetAddr);
        out += ", direction:" + VL_TO_STRING(obj.__PVT__direction);
        out += ", prediction:" + VL_TO_STRING(obj.__PVT__prediction);
        out += "}";
    return out;
}
