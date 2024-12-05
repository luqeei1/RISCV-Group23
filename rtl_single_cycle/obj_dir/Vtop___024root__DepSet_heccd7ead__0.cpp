// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__regfile__DOT__registerfile_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__regfile__DOT__registerfile_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile__DOT__registerfile_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v1;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v2;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v3;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v4;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v5;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v6;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v7;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v8;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v8;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v9;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v10;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v10;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v11;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v11;
    // Body
    __Vdlyvset__top__DOT__regfile__DOT__registerfile_array__v0 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v0 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v1 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v2 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v4 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v5 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v7 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v11 = 0U;
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->top__DOT__pc__DOT__out);
    if (vlSelf->top__DOT__RegWrite) {
        __Vdlyvval__top__DOT__regfile__DOT__registerfile_array__v0 
            = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                >> 7U))) ? 0U : vlSelf->top__DOT__Result);
        __Vdlyvset__top__DOT__regfile__DOT__registerfile_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__regfile__DOT__registerfile_array__v0 
            = (0x1fU & (vlSelf->top__DOT__instr >> 7U));
    }
    if ((0x1ffffU > vlSelf->top__DOT__ALUResult)) {
        if (VL_UNLIKELY((0x1ffffU <= vlSelf->top__DOT__ALUResult))) {
            VL_WRITEF("Out of bounds\n");
        }
        if ((IData)((0x23U == (0x7fU & vlSelf->top__DOT__instr)))) {
            if ((4U & (IData)(vlSelf->top__DOT__modeBU))) {
                if ((2U & (IData)(vlSelf->top__DOT__modeBU))) {
                    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v0 = 1U;
                    __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v0 
                        = (0x1fffcU & vlSelf->top__DOT__ALUResult);
                } else if ((1U & (IData)(vlSelf->top__DOT__modeBU))) {
                    __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v1 
                        = (0xffU & vlSelf->top__DOT__RD2);
                    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v1 = 1U;
                    __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v1 
                        = (0x1fffcU & vlSelf->top__DOT__ALUResult);
                } else {
                    __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v2 
                        = (0xffU & (vlSelf->top__DOT__RD2 
                                    >> 8U));
                    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v2 = 1U;
                    __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v2 
                        = (0x1fffcU & vlSelf->top__DOT__ALUResult);
                    __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v3 
                        = (0xffU & vlSelf->top__DOT__RD2);
                    __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v3 
                        = (0x1ffffU & ((IData)(1U) 
                                       + (0x1fffcU 
                                          & vlSelf->top__DOT__ALUResult)));
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__modeBU))) {
                if ((1U & (IData)(vlSelf->top__DOT__modeBU))) {
                    __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v4 
                        = (0xffU & vlSelf->top__DOT__RD2);
                    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v4 = 1U;
                    __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v4 
                        = (0x1fffcU & vlSelf->top__DOT__ALUResult);
                } else {
                    __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v5 
                        = (0xffU & (vlSelf->top__DOT__RD2 
                                    >> 8U));
                    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v5 = 1U;
                    __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v5 
                        = (0x1fffcU & vlSelf->top__DOT__ALUResult);
                    __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v6 
                        = (0xffU & vlSelf->top__DOT__RD2);
                    __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v6 
                        = (0x1ffffU & ((IData)(1U) 
                                       + (0x1fffcU 
                                          & vlSelf->top__DOT__ALUResult)));
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__modeBU))) {
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v7 
                    = (vlSelf->top__DOT__RD2 >> 0x18U);
                __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v7 = 1U;
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v7 
                    = (0x1fffcU & vlSelf->top__DOT__ALUResult);
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v8 
                    = (0xffU & (vlSelf->top__DOT__RD2 
                                >> 0x10U));
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v8 
                    = (0x1ffffU & ((IData)(1U) + (0x1fffcU 
                                                  & vlSelf->top__DOT__ALUResult)));
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v9 
                    = (0xffU & (vlSelf->top__DOT__RD2 
                                >> 8U));
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v9 
                    = (0x1ffffU & ((IData)(2U) + (0x1fffcU 
                                                  & vlSelf->top__DOT__ALUResult)));
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v10 
                    = (0xffU & vlSelf->top__DOT__RD2);
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v10 
                    = (0x1ffffU & ((IData)(3U) + (0x1fffcU 
                                                  & vlSelf->top__DOT__ALUResult)));
            } else {
                __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v11 = 1U;
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v11 
                    = (0x1fffcU & vlSelf->top__DOT__ALUResult);
            }
        }
    }
    if (__Vdlyvset__top__DOT__regfile__DOT__registerfile_array__v0) {
        vlSelf->top__DOT__regfile__DOT__registerfile_array[__Vdlyvdim0__top__DOT__regfile__DOT__registerfile_array__v0] 
            = __Vdlyvval__top__DOT__regfile__DOT__registerfile_array__v0;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v0) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v0] = 0U;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v1) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v1] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v1;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v2) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v2] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v2;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v3] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v3;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v4) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v4] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v4;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v5) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v5] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v5;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v6] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v6;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v7) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v7] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v7;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v8] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v8;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v9] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v9;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v10] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v10;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v11) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v11] = 0U;
    }
    vlSelf->top__DOT____Vcellinp__pc__PCTarget = (vlSelf->top__DOT__PC 
                                                  + vlSelf->top__DOT__ExtImm);
    vlSelf->a0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xaU];
    vlSelf->a1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xbU];
    vlSelf->a7 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x11U];
    vlSelf->top__DOT__RD1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
    vlSelf->top__DOT__RD2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [(0x1fU & (vlSelf->top__DOT__instr >> 0x14U))];
    vlSelf->top__DOT__SrcB = ((1U & ((0x40U & vlSelf->top__DOT__instr)
                                      ? (1U & ((0x20U 
                                                != 
                                                (0x30U 
                                                 & vlSelf->top__DOT__instr)) 
                                               | ((8U 
                                                   & vlSelf->top__DOT__instr)
                                                   ? (IData)(
                                                             (7U 
                                                              != 
                                                              (7U 
                                                               & vlSelf->top__DOT__instr)))
                                                   : (IData)(
                                                             (3U 
                                                              != 
                                                              (7U 
                                                               & vlSelf->top__DOT__instr))))))
                                      : (IData)((0x33U 
                                                 != 
                                                 (0x3fU 
                                                  & vlSelf->top__DOT__instr)))))
                               ? vlSelf->top__DOT__ExtImm
                               : vlSelf->top__DOT__RD2);
    vlSelf->top__DOT__ALUResult = ((8U & (IData)(vlSelf->top__DOT__ALUctrl))
                                    ? ((4U & (IData)(vlSelf->top__DOT__ALUctrl))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->top__DOT__ALUctrl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__ALUctrl))
                                                  ? 
                                                 ((vlSelf->top__DOT__RD1 
                                                   != vlSelf->top__DOT__SrcB)
                                                   ? 1U
                                                   : 0U)
                                                  : 0U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__ALUctrl))
                                                  ? 
                                                 ((vlSelf->top__DOT__RD1 
                                                   < vlSelf->top__DOT__SrcB)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (VL_LTS_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)
                                                   ? 1U
                                                   : 0U))))
                                    : ((4U & (IData)(vlSelf->top__DOT__ALUctrl))
                                        ? ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__ALUctrl))
                                                ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__RD1, 
                                                                 (0x1fU 
                                                                  & vlSelf->top__DOT__SrcB))
                                                : (vlSelf->top__DOT__RD1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__SrcB)))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__ALUctrl))
                                                ? (vlSelf->top__DOT__RD1 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__SrcB))
                                                : (vlSelf->top__DOT__RD1 
                                                   & vlSelf->top__DOT__SrcB)))
                                        : ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__ALUctrl))
                                                ? (vlSelf->top__DOT__RD1 
                                                   | vlSelf->top__DOT__SrcB)
                                                : (vlSelf->top__DOT__RD1 
                                                   ^ vlSelf->top__DOT__SrcB))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__ALUctrl))
                                                ? (vlSelf->top__DOT__RD1 
                                                   - vlSelf->top__DOT__SrcB)
                                                : (vlSelf->top__DOT__RD1 
                                                   + vlSelf->top__DOT__SrcB)))));
    vlSelf->top__DOT__pc__DOT__out = ((2U & (IData)(vlSelf->top__DOT__PCSrc))
                                       ? ((1U & (IData)(vlSelf->top__DOT__PCSrc))
                                           ? vlSelf->top__DOT__ALUResult
                                           : ((((IData)(vlSelf->top__DOT__ALUctrl) 
                                                >> 3U) 
                                               & ((4U 
                                                   & (IData)(vlSelf->top__DOT__ALUctrl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__ALUctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__ALUctrl))
                                                     ? 
                                                    (vlSelf->top__DOT__RD1 
                                                     >= vlSelf->top__DOT__SrcB)
                                                     : 
                                                    (vlSelf->top__DOT__RD1 
                                                     < vlSelf->top__DOT__SrcB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__ALUctrl))
                                                     ? 
                                                    VL_GTES_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)))
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__ALUctrl) 
                                                    >> 1U) 
                                                   & ((1U 
                                                       & (IData)(vlSelf->top__DOT__ALUctrl))
                                                       ? 
                                                      (vlSelf->top__DOT__RD1 
                                                       != vlSelf->top__DOT__SrcB)
                                                       : 
                                                      (vlSelf->top__DOT__RD1 
                                                       == vlSelf->top__DOT__SrcB)))))
                                               ? vlSelf->top__DOT____Vcellinp__pc__PCTarget
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC)))
                                       : ((1U & (IData)(vlSelf->top__DOT__PCSrc))
                                           ? vlSelf->top__DOT____Vcellinp__pc__PCTarget
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__PC)));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__Result = ((0U == (IData)(vlSelf->top__DOT__ResultSrc))
                                 ? vlSelf->top__DOT__ALUResult
                                 : ((1U == (IData)(vlSelf->top__DOT__ResultSrc))
                                     ? vlSelf->top__DOT__RD
                                     : ((2U == (IData)(vlSelf->top__DOT__ResultSrc))
                                         ? ((IData)(4U) 
                                            + vlSelf->top__DOT__PC)
                                         : vlSelf->top__DOT__ALUResult)));
    if ((0x1ffffU > vlSelf->top__DOT__ALUResult)) {
        if ((1U == (IData)(vlSelf->top__DOT__ResultSrc))) {
            if ((4U & (IData)(vlSelf->top__DOT__modeBU))) {
                if ((2U & (IData)(vlSelf->top__DOT__modeBU))) {
                    vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
                } else if ((1U & (IData)(vlSelf->top__DOT__modeBU))) {
                    vlSelf->top__DOT__RD = vlSelf->top__DOT__data_memory__DOT__ram_array
                        [(0x1fffcU & vlSelf->top__DOT__ALUResult)];
                    vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
                } else {
                    vlSelf->top__DOT__RD = ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                             [(0x1fffcU 
                                               & vlSelf->top__DOT__ALUResult)] 
                                             << 8U) 
                                            | vlSelf->top__DOT__data_memory__DOT__ram_array
                                            [(0x1ffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0x1fffcU 
                                                  & vlSelf->top__DOT__ALUResult)))]);
                    vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__modeBU))) {
                if ((1U & (IData)(vlSelf->top__DOT__modeBU))) {
                    vlSelf->top__DOT__RD = (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                                            [
                                                            (0x1fffcU 
                                                             & vlSelf->top__DOT__ALUResult)] 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | vlSelf->top__DOT__data_memory__DOT__ram_array
                                            [(0x1fffcU 
                                              & vlSelf->top__DOT__ALUResult)]);
                    vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
                } else {
                    vlSelf->top__DOT__RD = (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                                            [
                                                            (0x1fffcU 
                                                             & vlSelf->top__DOT__ALUResult)] 
                                                            >> 7U)))) 
                                             << 0x10U) 
                                            | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                [(0x1fffcU 
                                                  & vlSelf->top__DOT__ALUResult)] 
                                                << 8U) 
                                               | vlSelf->top__DOT__data_memory__DOT__ram_array
                                               [(0x1ffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0x1fffcU 
                                                     & vlSelf->top__DOT__ALUResult)))]));
                    vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__modeBU))) {
                vlSelf->top__DOT__RD = ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                         [(0x1fffcU 
                                           & vlSelf->top__DOT__ALUResult)] 
                                         << 0x18U) 
                                        | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                            [(0x1ffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0x1fffcU 
                                                  & vlSelf->top__DOT__ALUResult)))] 
                                            << 0x10U) 
                                           | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                               [(0x1ffffU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x1fffcU 
                                                     & vlSelf->top__DOT__ALUResult)))] 
                                               << 8U) 
                                              | vlSelf->top__DOT__data_memory__DOT__ram_array
                                              [(0x1ffffU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (0x1fffcU 
                                                    & vlSelf->top__DOT__ALUResult)))])));
                vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
            } else {
                vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
            }
        } else if ((0U == (IData)(vlSelf->top__DOT__ResultSrc))) {
            vlSelf->top__DOT__Result = vlSelf->top__DOT__ALUResult;
        } else if ((2U == (IData)(vlSelf->top__DOT__ResultSrc))) {
            vlSelf->top__DOT__Result = ((IData)(4U) 
                                        + vlSelf->top__DOT__ALUResult);
        }
        if (VL_UNLIKELY((0x1ffffU <= vlSelf->top__DOT__ALUResult))) {
            VL_WRITEF("Out of bounds\n");
            vlSelf->top__DOT__Result = 0U;
        }
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__RD ^ vlSelf->__Vchglast__TOP__top__DOT__RD));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__RD ^ vlSelf->__Vchglast__TOP__top__DOT__RD))) VL_DBG_MSGF("        CHANGE: top.sv:49: top.RD\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__RD = vlSelf->top__DOT__RD;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
