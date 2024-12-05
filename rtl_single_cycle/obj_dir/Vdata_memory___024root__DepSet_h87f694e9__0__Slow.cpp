// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_memory.h for the primary calling header

#include "verilated.h"

#include "Vdata_memory___024root.h"

VL_ATTR_COLD void Vdata_memory___024root___initial__TOP__0(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hefa43a3a__0;
    // Body
    __Vtemp_hefa43a3a__0[0U] = 0x2e686578U;
    __Vtemp_hefa43a3a__0[1U] = 0x616d656dU;
    __Vtemp_hefa43a3a__0[2U] = 0x646174U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hefa43a3a__0)
                 ,  &(vlSelf->data_memory__DOT__ram_array)
                 , 0x10000U, 0x1ffffU);
}

VL_ATTR_COLD void Vdata_memory___024root___eval_initial(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_initial\n"); );
    // Body
    Vdata_memory___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vdata_memory___024root___combo__TOP__0(Vdata_memory___024root* vlSelf);

VL_ATTR_COLD void Vdata_memory___024root___eval_settle(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_settle\n"); );
    // Body
    Vdata_memory___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vdata_memory___024root___final(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___final\n"); );
}

VL_ATTR_COLD void Vdata_memory___024root___ctor_var_reset(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->modeBU = VL_RAND_RESET_I(3);
    vlSelf->ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->A = VL_RAND_RESET_I(32);
    vlSelf->WD = VL_RAND_RESET_I(32);
    vlSelf->WE = VL_RAND_RESET_I(1);
    vlSelf->RD = VL_RAND_RESET_I(32);
    vlSelf->Result = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->data_memory__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
}
