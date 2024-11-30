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
    IData/*16:0*/ __Vdlyvdim0__DataMemory__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__DataMemory__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__DataMemory__DOT__ram_array__v0;
    IData/*16:0*/ __Vdlyvdim0__DataMemory__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__DataMemory__DOT__ram_array__v1;
    CData/*0:0*/ __Vdlyvset__DataMemory__DOT__ram_array__v1;
    // Body
    __Vdlyvset__DataMemory__DOT__ram_array__v0 = 0U;
    __Vdlyvset__DataMemory__DOT__ram_array__v1 = 0U;
    if (vlSelf->WE) {
        vlSelf->DataMemory__DOT__RD = vlSelf->DataMemory__DOT__ram_array
            [(0x1ffffU & vlSelf->A)];
        __Vdlyvval__DataMemory__DOT__ram_array__v0 
            = (0xffU & vlSelf->WD);
        __Vdlyvset__DataMemory__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__DataMemory__DOT__ram_array__v0 
            = (0x1ffffU & vlSelf->A);
    } else if (vlSelf->WE) {
        __Vdlyvval__DataMemory__DOT__ram_array__v1 
            = vlSelf->DataMemory__DOT__ram_array[(0x1ffffU 
                                                  & vlSelf->A)];
        __Vdlyvset__DataMemory__DOT__ram_array__v1 = 1U;
        __Vdlyvdim0__DataMemory__DOT__ram_array__v1 
            = (0x1ffffU & vlSelf->A);
        vlSelf->DataMemory__DOT__RD = vlSelf->DataMemory__DOT__ram_array
            [(0x1ffffU & vlSelf->A)];
    }
    if (__Vdlyvset__DataMemory__DOT__ram_array__v0) {
        vlSelf->DataMemory__DOT__ram_array[__Vdlyvdim0__DataMemory__DOT__ram_array__v0] 
            = __Vdlyvval__DataMemory__DOT__ram_array__v0;
    }
    if (__Vdlyvset__DataMemory__DOT__ram_array__v1) {
        vlSelf->DataMemory__DOT__ram_array[__Vdlyvdim0__DataMemory__DOT__ram_array__v1] 
            = __Vdlyvval__DataMemory__DOT__ram_array__v1;
    }
}

VL_INLINE_OPT void VDataPath___024root___combo__TOP__0(VDataPath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root___combo__TOP__0\n"); );
    // Body
    if ((1U == (IData)(vlSelf->ResultSrc))) {
        vlSelf->Result = vlSelf->DataMemory__DOT__RD;
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
    if (VL_UNLIKELY((vlSelf->address_mode & 0xfcU))) {
        Verilated::overWidthError("address_mode");}
    if (VL_UNLIKELY((vlSelf->ResultSrc & 0xfcU))) {
        Verilated::overWidthError("ResultSrc");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->WE & 0xfeU))) {
        Verilated::overWidthError("WE");}
}
#endif  // VL_DEBUG
