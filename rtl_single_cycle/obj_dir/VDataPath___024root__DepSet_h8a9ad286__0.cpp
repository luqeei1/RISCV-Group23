// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDataPath.h for the primary calling header

#include "verilated.h"

#include "VDataPath___024root.h"

VL_INLINE_OPT void VDataPath___024root___sequent__TOP__0(VDataPath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root___sequent__TOP__0\n"); );
    // Init
    IData/*16:0*/ __Vdlyvdim0__DataPath__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__DataPath__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__DataPath__DOT__ram_array__v0;
    IData/*16:0*/ __Vdlyvdim0__DataPath__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__DataPath__DOT__ram_array__v1;
    IData/*16:0*/ __Vdlyvdim0__DataPath__DOT__ram_array__v2;
    CData/*7:0*/ __Vdlyvval__DataPath__DOT__ram_array__v2;
    IData/*16:0*/ __Vdlyvdim0__DataPath__DOT__ram_array__v3;
    CData/*7:0*/ __Vdlyvval__DataPath__DOT__ram_array__v3;
    IData/*16:0*/ __Vdlyvdim0__DataPath__DOT__ram_array__v4;
    CData/*7:0*/ __Vdlyvval__DataPath__DOT__ram_array__v4;
    CData/*0:0*/ __Vdlyvset__DataPath__DOT__ram_array__v4;
    IData/*16:0*/ __Vdlyvdim0__DataPath__DOT__ram_array__v5;
    CData/*7:0*/ __Vdlyvval__DataPath__DOT__ram_array__v5;
    IData/*16:0*/ __Vdlyvdim0__DataPath__DOT__ram_array__v6;
    CData/*7:0*/ __Vdlyvval__DataPath__DOT__ram_array__v6;
    CData/*0:0*/ __Vdlyvset__DataPath__DOT__ram_array__v6;
    // Body
    __Vdlyvset__DataPath__DOT__ram_array__v0 = 0U;
    __Vdlyvset__DataPath__DOT__ram_array__v4 = 0U;
    __Vdlyvset__DataPath__DOT__ram_array__v6 = 0U;
    if (vlSelf->WE) {
        if ((1U == (IData)(vlSelf->modeBU))) {
            __Vdlyvval__DataPath__DOT__ram_array__v0 
                = (vlSelf->WD >> 0x18U);
            __Vdlyvset__DataPath__DOT__ram_array__v0 = 1U;
            __Vdlyvdim0__DataPath__DOT__ram_array__v0 
                = (0x1fffcU & vlSelf->A);
            __Vdlyvval__DataPath__DOT__ram_array__v1 
                = (0xffU & (vlSelf->WD >> 0x10U));
            __Vdlyvdim0__DataPath__DOT__ram_array__v1 
                = (0x1ffffU & ((IData)(1U) + (0x1fffcU 
                                              & vlSelf->A)));
            __Vdlyvval__DataPath__DOT__ram_array__v2 
                = (0xffU & (vlSelf->WD >> 8U));
            __Vdlyvdim0__DataPath__DOT__ram_array__v2 
                = (0x1ffffU & ((IData)(2U) + (0x1fffcU 
                                              & vlSelf->A)));
            __Vdlyvval__DataPath__DOT__ram_array__v3 
                = (0xffU & vlSelf->WD);
            __Vdlyvdim0__DataPath__DOT__ram_array__v3 
                = (0x1ffffU & ((IData)(3U) + (0x1fffcU 
                                              & vlSelf->A)));
        } else if ((2U == (IData)(vlSelf->modeBU))) {
            __Vdlyvval__DataPath__DOT__ram_array__v4 
                = (0xffU & (vlSelf->WD >> 8U));
            __Vdlyvset__DataPath__DOT__ram_array__v4 = 1U;
            __Vdlyvdim0__DataPath__DOT__ram_array__v4 
                = (0x1fffcU & vlSelf->A);
            __Vdlyvval__DataPath__DOT__ram_array__v5 
                = (0xffU & vlSelf->WD);
            __Vdlyvdim0__DataPath__DOT__ram_array__v5 
                = (0x1ffffU & ((IData)(1U) + (0x1fffcU 
                                              & vlSelf->A)));
        } else if ((3U == (IData)(vlSelf->modeBU))) {
            __Vdlyvval__DataPath__DOT__ram_array__v6 
                = (0xffU & vlSelf->WD);
            __Vdlyvset__DataPath__DOT__ram_array__v6 = 1U;
            __Vdlyvdim0__DataPath__DOT__ram_array__v6 
                = (0x1fffcU & vlSelf->A);
        }
    }
    if (__Vdlyvset__DataPath__DOT__ram_array__v0) {
        vlSelf->DataPath__DOT__ram_array[__Vdlyvdim0__DataPath__DOT__ram_array__v0] 
            = __Vdlyvval__DataPath__DOT__ram_array__v0;
        vlSelf->DataPath__DOT__ram_array[__Vdlyvdim0__DataPath__DOT__ram_array__v1] 
            = __Vdlyvval__DataPath__DOT__ram_array__v1;
        vlSelf->DataPath__DOT__ram_array[__Vdlyvdim0__DataPath__DOT__ram_array__v2] 
            = __Vdlyvval__DataPath__DOT__ram_array__v2;
        vlSelf->DataPath__DOT__ram_array[__Vdlyvdim0__DataPath__DOT__ram_array__v3] 
            = __Vdlyvval__DataPath__DOT__ram_array__v3;
    }
    if (__Vdlyvset__DataPath__DOT__ram_array__v4) {
        vlSelf->DataPath__DOT__ram_array[__Vdlyvdim0__DataPath__DOT__ram_array__v4] 
            = __Vdlyvval__DataPath__DOT__ram_array__v4;
        vlSelf->DataPath__DOT__ram_array[__Vdlyvdim0__DataPath__DOT__ram_array__v5] 
            = __Vdlyvval__DataPath__DOT__ram_array__v5;
    }
    if (__Vdlyvset__DataPath__DOT__ram_array__v6) {
        vlSelf->DataPath__DOT__ram_array[__Vdlyvdim0__DataPath__DOT__ram_array__v6] 
            = __Vdlyvval__DataPath__DOT__ram_array__v6;
    }
}

VL_INLINE_OPT void VDataPath___024root___combo__TOP__0(VDataPath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root___combo__TOP__0\n"); );
    // Body
    if ((1U == (IData)(vlSelf->ResultSrc))) {
        if ((1U == (IData)(vlSelf->modeBU))) {
            vlSelf->DataPath__DOT__RD = ((vlSelf->DataPath__DOT__ram_array
                                          [(0x1fffcU 
                                            & vlSelf->A)] 
                                          << 0x18U) 
                                         | ((vlSelf->DataPath__DOT__ram_array
                                             [(0x1ffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0x1fffcU 
                                                   & vlSelf->A)))] 
                                             << 0x10U) 
                                            | ((vlSelf->DataPath__DOT__ram_array
                                                [(0x1ffffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x1fffcU 
                                                      & vlSelf->A)))] 
                                                << 8U) 
                                               | vlSelf->DataPath__DOT__ram_array
                                               [(0x1ffffU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (0x1fffcU 
                                                     & vlSelf->A)))])));
            vlSelf->Result = vlSelf->DataPath__DOT__RD;
        } else if ((2U == (IData)(vlSelf->modeBU))) {
            vlSelf->DataPath__DOT__RD = ((vlSelf->DataPath__DOT__ram_array
                                          [(0x1fffcU 
                                            & vlSelf->A)] 
                                          << 8U) | 
                                         vlSelf->DataPath__DOT__ram_array
                                         [(0x1ffffU 
                                           & ((IData)(1U) 
                                              + (0x1fffcU 
                                                 & vlSelf->A)))]);
            vlSelf->Result = vlSelf->DataPath__DOT__RD;
        } else if ((3U == (IData)(vlSelf->modeBU))) {
            vlSelf->DataPath__DOT__RD = vlSelf->DataPath__DOT__ram_array
                [(0x1fffcU & vlSelf->A)];
            vlSelf->Result = vlSelf->DataPath__DOT__RD;
        }
    } else if ((0U == (IData)(vlSelf->ResultSrc))) {
        vlSelf->Result = vlSelf->A;
    } else if ((2U == (IData)(vlSelf->ResultSrc))) {
        vlSelf->Result = ((IData)(4U) + vlSelf->A);
    }
}

void VDataPath___024root___eval(VDataPath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VDataPath___024root___sequent__TOP__0(vlSelf);
    }
    VDataPath___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VDataPath___024root___eval_debug_assertions(VDataPath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ResultSrc & 0xf8U))) {
        Verilated::overWidthError("ResultSrc");}
    if (VL_UNLIKELY((vlSelf->modeBU & 0xfcU))) {
        Verilated::overWidthError("modeBU");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->WE & 0xfeU))) {
        Verilated::overWidthError("WE");}
}
#endif  // VL_DEBUG
