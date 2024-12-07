// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___combo__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->ALUResult = ((8U & (IData)(vlSelf->ALUctrl))
                          ? ((4U & (IData)(vlSelf->ALUctrl))
                              ? 0U : ((2U & (IData)(vlSelf->ALUctrl))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->ALUctrl))
                                                ? (
                                                   (vlSelf->SrcA 
                                                    < vlSelf->SrcB)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   VL_LTS_III(32, vlSelf->SrcA, vlSelf->SrcB)
                                                    ? 1U
                                                    : 0U))))
                          : ((4U & (IData)(vlSelf->ALUctrl))
                              ? ((2U & (IData)(vlSelf->ALUctrl))
                                  ? ((1U & (IData)(vlSelf->ALUctrl))
                                      ? VL_SHIFTRS_III(32,32,5, vlSelf->SrcA, 
                                                       (0x1fU 
                                                        & vlSelf->SrcB))
                                      : (vlSelf->SrcA 
                                         >> (0x1fU 
                                             & vlSelf->SrcB)))
                                  : ((1U & (IData)(vlSelf->ALUctrl))
                                      ? (vlSelf->SrcA 
                                         << (0x1fU 
                                             & vlSelf->SrcB))
                                      : (vlSelf->SrcA 
                                         & vlSelf->SrcB)))
                              : ((2U & (IData)(vlSelf->ALUctrl))
                                  ? ((1U & (IData)(vlSelf->ALUctrl))
                                      ? (vlSelf->SrcA 
                                         | vlSelf->SrcB)
                                      : (vlSelf->SrcA 
                                         ^ vlSelf->SrcB))
                                  : ((1U & (IData)(vlSelf->ALUctrl))
                                      ? (vlSelf->SrcA 
                                         - vlSelf->SrcB)
                                      : (vlSelf->SrcA 
                                         + vlSelf->SrcB)))));
    vlSelf->Zero = (((IData)(vlSelf->ALUctrl) >> 3U) 
                    & ((4U & (IData)(vlSelf->ALUctrl))
                        ? ((2U & (IData)(vlSelf->ALUctrl))
                            ? ((1U & (IData)(vlSelf->ALUctrl))
                                ? (vlSelf->SrcA >= vlSelf->SrcB)
                                : (vlSelf->SrcA < vlSelf->SrcB))
                            : ((1U & (IData)(vlSelf->ALUctrl))
                                ? VL_GTES_III(32, vlSelf->SrcA, vlSelf->SrcB)
                                : VL_LTS_III(32, vlSelf->SrcA, vlSelf->SrcB)))
                        : (((IData)(vlSelf->ALUctrl) 
                            >> 1U) & ((1U & (IData)(vlSelf->ALUctrl))
                                       ? (vlSelf->SrcA 
                                          != vlSelf->SrcB)
                                       : (vlSelf->SrcA 
                                          == vlSelf->SrcB)))));
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Body
    Valu___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ALUctrl & 0xf0U))) {
        Verilated::overWidthError("ALUctrl");}
}
#endif  // VL_DEBUG
