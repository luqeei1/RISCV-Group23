// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

void Vdut___024root___ico_sequent__TOP__0(Vdut___024root* vlSelf);

void Vdut___024root___eval_ico(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdut___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdut___024root___ico_sequent__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100U == vlSelfRef.top__DOT__ALUResult)) {
        vlSelfRef.top__DOT__RD = vlSelfRef.trigger;
        vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
    } else if ((1U == (IData)(vlSelfRef.top__DOT__ResultSrc))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__modeBU))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__modeBU))) {
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            } else if ((1U & (IData)(vlSelfRef.top__DOT__modeBU))) {
                vlSelfRef.top__DOT__RD = vlSelfRef.top__DOT__data_memory__DOT__ram_array
                    [(0x1ffffU & vlSelfRef.top__DOT__ALUResult)];
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            } else {
                vlSelfRef.top__DOT__RD = ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                           [(0x1ffffU 
                                             & vlSelfRef.top__DOT__ALUResult)] 
                                           << 8U) | 
                                          vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                          [(0x1ffffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.top__DOT__ALUResult))]);
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__modeBU))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__modeBU))) {
                vlSelfRef.top__DOT__RD = (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                                          [
                                                          (0x1ffffU 
                                                           & vlSelfRef.top__DOT__ALUResult)] 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                          [(0x1ffffU 
                                            & vlSelfRef.top__DOT__ALUResult)]);
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            } else {
                vlSelfRef.top__DOT__RD = (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                                          [
                                                          (0x1ffffU 
                                                           & vlSelfRef.top__DOT__ALUResult)] 
                                                          >> 7U)))) 
                                           << 0x10U) 
                                          | ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                              [(0x1ffffU 
                                                & vlSelfRef.top__DOT__ALUResult)] 
                                              << 8U) 
                                             | vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                             [(0x1ffffU 
                                               & ((IData)(1U) 
                                                  + vlSelfRef.top__DOT__ALUResult))]));
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__modeBU))) {
            vlSelfRef.top__DOT__RD = (((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                        [(0x1ffffU 
                                          & vlSelfRef.top__DOT__ALUResult)] 
                                        << 0x18U) | 
                                       (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                        [(0x1ffffU 
                                          & ((IData)(1U) 
                                             + vlSelfRef.top__DOT__ALUResult))] 
                                        << 0x10U)) 
                                      | ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                          [(0x1ffffU 
                                            & ((IData)(2U) 
                                               + vlSelfRef.top__DOT__ALUResult))] 
                                          << 8U) | 
                                         vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                         [(0x1ffffU 
                                           & ((IData)(3U) 
                                              + vlSelfRef.top__DOT__ALUResult))]));
            vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
        } else {
            vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
        }
    } else {
        vlSelfRef.top__DOT__Result = ((0U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                       ? vlSelfRef.top__DOT__ALUResult
                                       : ((2U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                           ? ((IData)(4U) 
                                              + vlSelfRef.top__DOT__ALUResult)
                                           : vlSelfRef.top__DOT__ALUResult));
    }
    vlSelfRef.top__DOT__Result = ((0U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                   ? vlSelfRef.top__DOT__ALUResult
                                   : ((1U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                       ? vlSelfRef.top__DOT__RD
                                       : ((2U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                           ? ((IData)(4U) 
                                              + vlSelfRef.top__DOT__PC)
                                           : vlSelfRef.top__DOT__ALUResult)));
}

void Vdut___024root___eval_triggers__ico(Vdut___024root* vlSelf);

bool Vdut___024root___eval_phase__ico(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdut___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdut___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdut___024root___eval_act(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdut___024root___nba_sequent__TOP__0(Vdut___024root* vlSelf);

void Vdut___024root___eval_nba(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdut___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 128> Vdut__ConstPool__TABLE_h45f37922_0;

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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
    __VdlySet__top__DOT__regfile__DOT__registerfile_array__v0 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v0 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v1 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v2 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v4 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v5 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v7 = 0U;
    __VdlySet__top__DOT__data_memory__DOT__ram_array__v11 = 0U;
    if (vlSelfRef.top__DOT__RegWrite) {
        __VdlyVal__top__DOT__regfile__DOT__registerfile_array__v0 
            = ((0U == (0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                                >> 7U))) ? 0U : vlSelfRef.top__DOT__Result);
        __VdlyDim0__top__DOT__regfile__DOT__registerfile_array__v0 
            = (0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                        >> 7U));
        __VdlySet__top__DOT__regfile__DOT__registerfile_array__v0 = 1U;
    }
    if (((1U & (~ (vlSelfRef.top__DOT__instr >> 6U))) 
         && ((1U & (vlSelfRef.top__DOT__instr >> 5U)) 
             && ((1U & (~ (vlSelfRef.top__DOT__instr 
                           >> 4U))) && ((1U & (~ (vlSelfRef.top__DOT__instr 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__instr 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__instr 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__instr)))))))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__modeBU))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__modeBU))) {
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v0 
                    = (0x1ffffU & vlSelfRef.top__DOT__ALUResult);
                __VdlySet__top__DOT__data_memory__DOT__ram_array__v0 = 1U;
            } else if ((1U & (IData)(vlSelfRef.top__DOT__modeBU))) {
                __VdlyVal__top__DOT__data_memory__DOT__ram_array__v1 
                    = (0xffU & vlSelfRef.top__DOT__RD2);
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v1 
                    = (0x1ffffU & vlSelfRef.top__DOT__ALUResult);
                __VdlySet__top__DOT__data_memory__DOT__ram_array__v1 = 1U;
            } else {
                __VdlyVal__top__DOT__data_memory__DOT__ram_array__v2 
                    = (0xffU & (vlSelfRef.top__DOT__RD2 
                                >> 8U));
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v2 
                    = (0x1ffffU & vlSelfRef.top__DOT__ALUResult);
                __VdlySet__top__DOT__data_memory__DOT__ram_array__v2 = 1U;
                __VdlyVal__top__DOT__data_memory__DOT__ram_array__v3 
                    = (0xffU & vlSelfRef.top__DOT__RD2);
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v3 
                    = (0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__ALUResult));
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__modeBU))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__modeBU))) {
                __VdlyVal__top__DOT__data_memory__DOT__ram_array__v4 
                    = (0xffU & vlSelfRef.top__DOT__RD2);
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v4 
                    = (0x1ffffU & vlSelfRef.top__DOT__ALUResult);
                __VdlySet__top__DOT__data_memory__DOT__ram_array__v4 = 1U;
            } else {
                __VdlyVal__top__DOT__data_memory__DOT__ram_array__v5 
                    = (0xffU & (vlSelfRef.top__DOT__RD2 
                                >> 8U));
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v5 
                    = (0x1ffffU & vlSelfRef.top__DOT__ALUResult);
                __VdlySet__top__DOT__data_memory__DOT__ram_array__v5 = 1U;
                __VdlyVal__top__DOT__data_memory__DOT__ram_array__v6 
                    = (0xffU & vlSelfRef.top__DOT__RD2);
                __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v6 
                    = (0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__ALUResult));
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__modeBU))) {
            __VdlyVal__top__DOT__data_memory__DOT__ram_array__v7 
                = (vlSelfRef.top__DOT__RD2 >> 0x18U);
            __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v7 
                = (0x1ffffU & vlSelfRef.top__DOT__ALUResult);
            __VdlySet__top__DOT__data_memory__DOT__ram_array__v7 = 1U;
            __VdlyVal__top__DOT__data_memory__DOT__ram_array__v8 
                = (0xffU & (vlSelfRef.top__DOT__RD2 
                            >> 0x10U));
            __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v8 
                = (0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__ALUResult));
            __VdlyVal__top__DOT__data_memory__DOT__ram_array__v9 
                = (0xffU & (vlSelfRef.top__DOT__RD2 
                            >> 8U));
            __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v9 
                = (0x1ffffU & ((IData)(2U) + vlSelfRef.top__DOT__ALUResult));
            __VdlyVal__top__DOT__data_memory__DOT__ram_array__v10 
                = (0xffU & vlSelfRef.top__DOT__RD2);
            __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v10 
                = (0x1ffffU & ((IData)(3U) + vlSelfRef.top__DOT__ALUResult));
        } else {
            __VdlyDim0__top__DOT__data_memory__DOT__ram_array__v11 
                = (0x1ffffU & vlSelfRef.top__DOT__ALUResult);
            __VdlySet__top__DOT__data_memory__DOT__ram_array__v11 = 1U;
        }
    }
    vlSelfRef.top__DOT__PC = ((IData)(vlSelfRef.rst)
                               ? 0U : vlSelfRef.top__DOT__pc__DOT__out);
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
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                                [(0xffffU 
                                                  & vlSelfRef.top__DOT__PC)]);
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.top__DOT__PC))] 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0));
    vlSelfRef.top__DOT__RD1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [(0x1fU & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   >> 0xfU))];
    vlSelfRef.top__DOT__instr = ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                  [(0xffffU & ((IData)(3U) 
                                               + vlSelfRef.top__DOT__PC))] 
                                  << 0x18U) | vlSelfRef.__VdfgRegularize_hd87f99a1_0_1);
    if ((0x40U & vlSelfRef.top__DOT__instr)) {
        vlSelfRef.top__DOT__RegWrite = ((1U & (vlSelfRef.top__DOT__instr 
                                               >> 5U)) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__instr 
                                                    >> 4U))) 
                                            && ((8U 
                                                 & vlSelfRef.top__DOT__instr)
                                                 ? 
                                                ((1U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 2U)) 
                                                 && ((1U 
                                                      & (vlSelfRef.top__DOT__instr 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.top__DOT__instr)))
                                                 : 
                                                ((1U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 2U)) 
                                                 && ((1U 
                                                      & (vlSelfRef.top__DOT__instr 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.top__DOT__instr))))));
        if ((0x20U & vlSelfRef.top__DOT__instr)) {
            if ((0x10U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__PCSrc = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((8U & vlSelfRef.top__DOT__instr)) {
                if ((4U & vlSelfRef.top__DOT__instr)) {
                    if ((2U & vlSelfRef.top__DOT__instr)) {
                        if ((1U & vlSelfRef.top__DOT__instr)) {
                            vlSelfRef.top__DOT__PCSrc = 1U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ResultSrc = 2U;
                            vlSelfRef.top__DOT__ImmSrc = 4U;
                        } else {
                            vlSelfRef.top__DOT__PCSrc = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ResultSrc = 3U;
                            vlSelfRef.top__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelfRef.top__DOT__PCSrc = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelfRef.top__DOT__PCSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelfRef.top__DOT__instr)) {
                if ((2U & vlSelfRef.top__DOT__instr)) {
                    if ((1U & vlSelfRef.top__DOT__instr)) {
                        vlSelfRef.top__DOT__PCSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 2U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                        vlSelfRef.top__DOT__ImmSrc = 5U;
                    } else {
                        vlSelfRef.top__DOT__PCSrc = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelfRef.top__DOT__PCSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else if ((2U & vlSelfRef.top__DOT__instr)) {
                if ((1U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__PCSrc = 2U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 1U;
                    vlSelfRef.top__DOT__ImmSrc = 2U;
                } else {
                    vlSelfRef.top__DOT__PCSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelfRef.top__DOT__PCSrc = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
        } else {
            vlSelfRef.top__DOT__PCSrc = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__ResultSrc = 3U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            vlSelfRef.top__DOT__ImmSrc = 7U;
        }
    } else {
        if ((0x20U & vlSelfRef.top__DOT__instr)) {
            vlSelfRef.top__DOT__RegWrite = ((1U & (vlSelfRef.top__DOT__instr 
                                                   >> 4U)) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top__DOT__instr 
                                                     >> 3U))) 
                                                && ((4U 
                                                     & vlSelfRef.top__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & (vlSelfRef.top__DOT__instr 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.top__DOT__instr))
                                                     : 
                                                    ((1U 
                                                      & (vlSelfRef.top__DOT__instr 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.top__DOT__instr)))));
            if ((0x10U & vlSelfRef.top__DOT__instr)) {
                if ((8U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                } else if ((4U & vlSelfRef.top__DOT__instr)) {
                    if ((2U & vlSelfRef.top__DOT__instr)) {
                        if ((1U & vlSelfRef.top__DOT__instr)) {
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ResultSrc = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                            vlSelfRef.top__DOT__ImmSrc = 3U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ResultSrc = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                            vlSelfRef.top__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                    }
                } else {
                    if ((2U & vlSelfRef.top__DOT__instr)) {
                        if ((1U & vlSelfRef.top__DOT__instr)) {
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ResultSrc = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ResultSrc = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else if ((8U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((2U & vlSelfRef.top__DOT__instr)) {
                if ((1U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 1U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
        } else if ((0x10U & vlSelfRef.top__DOT__instr)) {
            vlSelfRef.top__DOT__RegWrite = ((1U & (~ 
                                                   (vlSelfRef.top__DOT__instr 
                                                    >> 3U))) 
                                            && ((4U 
                                                 & vlSelfRef.top__DOT__instr)
                                                 ? 
                                                ((1U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSelfRef.top__DOT__instr))
                                                 : 
                                                ((1U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSelfRef.top__DOT__instr))));
            if ((8U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelfRef.top__DOT__instr)) {
                if ((2U & vlSelfRef.top__DOT__instr)) {
                    if ((1U & vlSelfRef.top__DOT__instr)) {
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                        vlSelfRef.top__DOT__ImmSrc = 3U;
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else if ((2U & vlSelfRef.top__DOT__instr)) {
                if ((1U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
        } else {
            vlSelfRef.top__DOT__RegWrite = ((1U & (~ 
                                                   (vlSelfRef.top__DOT__instr 
                                                    >> 3U))) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top__DOT__instr 
                                                     >> 2U))) 
                                                && ((1U 
                                                     & (vlSelfRef.top__DOT__instr 
                                                        >> 1U)) 
                                                    && (1U 
                                                        & vlSelfRef.top__DOT__instr))));
            if ((8U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((2U & vlSelfRef.top__DOT__instr)) {
                if ((1U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 1U;
                    vlSelfRef.top__DOT__ResultSrc = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
        }
        vlSelfRef.top__DOT__PCSrc = 0U;
    }
    vlSelfRef.top__DOT__modeBU = ((IData)(vlSelfRef.top__DOT__control_unit__DOT__Store)
                                   ? ((0U == (7U & 
                                              (vlSelfRef.top__DOT__instr 
                                               >> 0xcU)))
                                       ? 3U : ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top__DOT__instr 
                                                    >> 0xcU)))
                                                ? 2U
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.top__DOT__instr 
                                                        >> 0xcU)))
                                                    ? 1U
                                                    : 0U)))
                                   : ((IData)(vlSelfRef.top__DOT__control_unit__DOT__Load)
                                       ? ((0x4000U 
                                           & vlSelfRef.top__DOT__instr)
                                           ? ((0x2000U 
                                               & vlSelfRef.top__DOT__instr)
                                               ? 0U
                                               : ((0x1000U 
                                                   & vlSelfRef.top__DOT__instr)
                                                   ? 4U
                                                   : 5U))
                                           : ((0x2000U 
                                               & vlSelfRef.top__DOT__instr)
                                               ? ((0x1000U 
                                                   & vlSelfRef.top__DOT__instr)
                                                   ? 0U
                                                   : 1U)
                                               : ((0x1000U 
                                                   & vlSelfRef.top__DOT__instr)
                                                   ? 2U
                                                   : 3U)))
                                       : 0U));
    vlSelfRef.top__DOT__RD2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [(0x1fU & (vlSelfRef.top__DOT__instr >> 0x14U))];
    __Vtableidx1 = (((0x40U & (vlSelfRef.top__DOT__instr 
                               >> 0x18U)) | (0x20U 
                                             & vlSelfRef.top__DOT__instr)) 
                    | ((0x1cU & (vlSelfRef.top__DOT__instr 
                                 >> 0xaU)) | (IData)(vlSelfRef.top__DOT__control_unit__DOT__ALUOp)));
    vlSelfRef.top__DOT__ALUctrl = Vdut__ConstPool__TABLE_h45f37922_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__ExtImm = ((4U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                   ? ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelfRef.top__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.top__DOT__instr 
                                                      >> 0x14U))
                                                : (
                                                   ((- (IData)(
                                                               (vlSelfRef.top__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | (((0xff000U 
                                                        & vlSelfRef.top__DOT__instr) 
                                                       | (0x800U 
                                                          & (vlSelfRef.top__DOT__instr 
                                                             >> 9U))) 
                                                      | (0x7feU 
                                                         & (vlSelfRef.top__DOT__instr 
                                                            >> 0x14U))))))
                                   : ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                       ? ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                           ? (0xfffff000U 
                                              & vlSelfRef.top__DOT__instr)
                                           : (((- (IData)(
                                                          (vlSelfRef.top__DOT__instr 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelfRef.top__DOT__instr 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelfRef.top__DOT__instr 
                                                          >> 7U))))))
                                       : ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                           ? (((- (IData)(
                                                          (vlSelfRef.top__DOT__instr 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0xfe0U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelfRef.top__DOT__instr 
                                                       >> 7U))))
                                           : (((- (IData)(
                                                          (vlSelfRef.top__DOT__instr 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSelfRef.top__DOT__instr 
                                                 >> 0x14U)))));
    vlSelfRef.top__DOT____Vcellinp__pc__PCTarget = 
        (vlSelfRef.top__DOT__ExtImm + vlSelfRef.top__DOT__PC);
    vlSelfRef.top__DOT__SrcB = (((0x40U & vlSelfRef.top__DOT__instr)
                                  ? ((1U & (~ (vlSelfRef.top__DOT__instr 
                                               >> 5U))) 
                                     || ((1U & (vlSelfRef.top__DOT__instr 
                                                >> 4U)) 
                                         || ((8U & vlSelfRef.top__DOT__instr)
                                              ? ((1U 
                                                  & (~ 
                                                     (vlSelfRef.top__DOT__instr 
                                                      >> 2U))) 
                                                 || ((1U 
                                                      & (~ 
                                                         (vlSelfRef.top__DOT__instr 
                                                          >> 1U))) 
                                                     || (1U 
                                                         & (~ vlSelfRef.top__DOT__instr))))
                                              : ((1U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 2U)) 
                                                 || ((1U 
                                                      & (~ 
                                                         (vlSelfRef.top__DOT__instr 
                                                          >> 1U))) 
                                                     || (1U 
                                                         & (~ vlSelfRef.top__DOT__instr)))))))
                                  : ((1U & (~ (vlSelfRef.top__DOT__instr 
                                               >> 5U))) 
                                     || ((1U & (~ (vlSelfRef.top__DOT__instr 
                                                   >> 4U))) 
                                         || ((1U & 
                                              (vlSelfRef.top__DOT__instr 
                                               >> 3U)) 
                                             || ((1U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 2U)) 
                                                 || ((1U 
                                                      & (~ 
                                                         (vlSelfRef.top__DOT__instr 
                                                          >> 1U))) 
                                                     || (1U 
                                                         & (~ vlSelfRef.top__DOT__instr))))))))
                                 ? vlSelfRef.top__DOT__ExtImm
                                 : vlSelfRef.top__DOT__RD2);
    vlSelfRef.top__DOT__ALUResult = ((8U & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                      ? ((4U & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                          ? 0U : ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                    ? 
                                                   ((vlSelfRef.top__DOT__RD1 
                                                     < vlSelfRef.top__DOT__SrcB)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelfRef.top__DOT__RD1, vlSelfRef.top__DOT__SrcB)
                                                     ? 1U
                                                     : 0U))))
                                      : ((4U & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                          ? ((2U & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__RD1, 
                                                                (0x1fU 
                                                                 & vlSelfRef.top__DOT__SrcB))
                                                  : 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelfRef.top__DOT__SrcB)))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                  ? 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelfRef.top__DOT__SrcB))
                                                  : 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  & vlSelfRef.top__DOT__SrcB)))
                                          : ((2U & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                  ? 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  | vlSelfRef.top__DOT__SrcB)
                                                  : 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  ^ vlSelfRef.top__DOT__SrcB))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                  ? 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  - vlSelfRef.top__DOT__SrcB)
                                                  : 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  + vlSelfRef.top__DOT__SrcB)))));
    vlSelfRef.top__DOT__pc__DOT__out = ((2U & (IData)(vlSelfRef.top__DOT__PCSrc))
                                         ? ((1U & (IData)(vlSelfRef.top__DOT__PCSrc))
                                             ? vlSelfRef.top__DOT__ALUResult
                                             : (((1U 
                                                  & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
                                                     >> 3U)) 
                                                 && ((4U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                        ? 
                                                       (vlSelfRef.top__DOT__RD1 
                                                        >= vlSelfRef.top__DOT__SrcB)
                                                        : 
                                                       (vlSelfRef.top__DOT__RD1 
                                                        < vlSelfRef.top__DOT__SrcB))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                        ? 
                                                       VL_GTES_III(32, vlSelfRef.top__DOT__RD1, vlSelfRef.top__DOT__SrcB)
                                                        : 
                                                       VL_LTS_III(32, vlSelfRef.top__DOT__RD1, vlSelfRef.top__DOT__SrcB)))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
                                                          >> 1U)) 
                                                      && ((1U 
                                                           & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                           ? 
                                                          (vlSelfRef.top__DOT__RD1 
                                                           != vlSelfRef.top__DOT__SrcB)
                                                           : 
                                                          (vlSelfRef.top__DOT__RD1 
                                                           == vlSelfRef.top__DOT__SrcB)))))
                                                 ? vlSelfRef.top__DOT____Vcellinp__pc__PCTarget
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelfRef.top__DOT__PC)))
                                         : ((1U & (IData)(vlSelfRef.top__DOT__PCSrc))
                                             ? vlSelfRef.top__DOT____Vcellinp__pc__PCTarget
                                             : ((IData)(4U) 
                                                + vlSelfRef.top__DOT__PC)));
    if ((0x100U == vlSelfRef.top__DOT__ALUResult)) {
        vlSelfRef.top__DOT__RD = vlSelfRef.trigger;
        vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
    } else if ((1U == (IData)(vlSelfRef.top__DOT__ResultSrc))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__modeBU))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__modeBU))) {
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            } else if ((1U & (IData)(vlSelfRef.top__DOT__modeBU))) {
                vlSelfRef.top__DOT__RD = vlSelfRef.top__DOT__data_memory__DOT__ram_array
                    [(0x1ffffU & vlSelfRef.top__DOT__ALUResult)];
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            } else {
                vlSelfRef.top__DOT__RD = ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                           [(0x1ffffU 
                                             & vlSelfRef.top__DOT__ALUResult)] 
                                           << 8U) | 
                                          vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                          [(0x1ffffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.top__DOT__ALUResult))]);
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__modeBU))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__modeBU))) {
                vlSelfRef.top__DOT__RD = (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                                          [
                                                          (0x1ffffU 
                                                           & vlSelfRef.top__DOT__ALUResult)] 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                          [(0x1ffffU 
                                            & vlSelfRef.top__DOT__ALUResult)]);
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            } else {
                vlSelfRef.top__DOT__RD = (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                                          [
                                                          (0x1ffffU 
                                                           & vlSelfRef.top__DOT__ALUResult)] 
                                                          >> 7U)))) 
                                           << 0x10U) 
                                          | ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                              [(0x1ffffU 
                                                & vlSelfRef.top__DOT__ALUResult)] 
                                              << 8U) 
                                             | vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                             [(0x1ffffU 
                                               & ((IData)(1U) 
                                                  + vlSelfRef.top__DOT__ALUResult))]));
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__modeBU))) {
            vlSelfRef.top__DOT__RD = (((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                        [(0x1ffffU 
                                          & vlSelfRef.top__DOT__ALUResult)] 
                                        << 0x18U) | 
                                       (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                        [(0x1ffffU 
                                          & ((IData)(1U) 
                                             + vlSelfRef.top__DOT__ALUResult))] 
                                        << 0x10U)) 
                                      | ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                          [(0x1ffffU 
                                            & ((IData)(2U) 
                                               + vlSelfRef.top__DOT__ALUResult))] 
                                          << 8U) | 
                                         vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                         [(0x1ffffU 
                                           & ((IData)(3U) 
                                              + vlSelfRef.top__DOT__ALUResult))]));
            vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
        } else {
            vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
        }
    } else {
        vlSelfRef.top__DOT__Result = ((0U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                       ? vlSelfRef.top__DOT__ALUResult
                                       : ((2U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                           ? ((IData)(4U) 
                                              + vlSelfRef.top__DOT__ALUResult)
                                           : vlSelfRef.top__DOT__ALUResult));
    }
    vlSelfRef.top__DOT__Result = ((0U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                   ? vlSelfRef.top__DOT__ALUResult
                                   : ((1U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                       ? vlSelfRef.top__DOT__RD
                                       : ((2U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                           ? ((IData)(4U) 
                                              + vlSelfRef.top__DOT__PC)
                                           : vlSelfRef.top__DOT__ALUResult)));
}

void Vdut___024root___eval_triggers__act(Vdut___024root* vlSelf);

bool Vdut___024root___eval_phase__act(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdut___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdut___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdut___024root___eval_phase__nba(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdut___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__ico(Vdut___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__nba(Vdut___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__act(Vdut___024root* vlSelf);
#endif  // VL_DEBUG

void Vdut___024root___eval(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval\n"); );
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
            Vdut___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/root/Documents/RISCV-Group23/rtl_single_cycle/top.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdut___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdut___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/root/Documents/RISCV-Group23/rtl_single_cycle/top.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdut___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/root/Documents/RISCV-Group23/rtl_single_cycle/top.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdut___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdut___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdut___024root___eval_debug_assertions(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_debug_assertions\n"); );
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
