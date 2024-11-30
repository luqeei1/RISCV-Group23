// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDataPath.h for the primary calling header

#include "verilated.h"

#include "VDataPath___024root.h"

VL_ATTR_COLD void VDataPath___024root___initial__TOP__0(VDataPath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h4b288a68__0;
    // Body
    __Vtemp_h4b288a68__0[0U] = 0x2e6d656dU;
    __Vtemp_h4b288a68__0[1U] = 0x616d656dU;
    __Vtemp_h4b288a68__0[2U] = 0x646174U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h4b288a68__0)
                 ,  &(vlSelf->DataMemory__DOT__ram_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VDataPath___024root___eval_initial(VDataPath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    VDataPath___024root___initial__TOP__0(vlSelf);
}

void VDataPath___024root___combo__TOP__0(VDataPath___024root* vlSelf);

VL_ATTR_COLD void VDataPath___024root___eval_settle(VDataPath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root___eval_settle\n"); );
    // Body
    VDataPath___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VDataPath___024root___final(VDataPath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root___final\n"); );
}

VL_ATTR_COLD void VDataPath___024root___ctor_var_reset(VDataPath___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->address_mode = VL_RAND_RESET_I(2);
    vlSelf->ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->A = VL_RAND_RESET_I(32);
    vlSelf->WD = VL_RAND_RESET_I(32);
    vlSelf->WE = VL_RAND_RESET_I(1);
    vlSelf->Result = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->DataMemory__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->DataMemory__DOT__RD = VL_RAND_RESET_I(32);
}
