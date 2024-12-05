// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VcontrolUnit.h for the primary calling header

#include "verilated.h"

#include "VcontrolUnit___024root.h"

VL_ATTR_COLD void VcontrolUnit___024root___eval_initial(VcontrolUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root___eval_initial\n"); );
}

void VcontrolUnit___024root___combo__TOP__0(VcontrolUnit___024root* vlSelf);

VL_ATTR_COLD void VcontrolUnit___024root___eval_settle(VcontrolUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root___eval_settle\n"); );
    // Body
    VcontrolUnit___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VcontrolUnit___024root___final(VcontrolUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root___final\n"); );
}

VL_ATTR_COLD void VcontrolUnit___024root___ctor_var_reset(VcontrolUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Instr = VL_RAND_RESET_I(32);
    vlSelf->PCSrc = VL_RAND_RESET_I(2);
    vlSelf->ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->MemWrite = VL_RAND_RESET_I(1);
    vlSelf->ALUCtrl = VL_RAND_RESET_I(4);
    vlSelf->ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->RegWrite = VL_RAND_RESET_I(1);
    vlSelf->modeBU = VL_RAND_RESET_I(3);
    vlSelf->controlUnit__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->controlUnit__DOT__Store = VL_RAND_RESET_I(1);
    vlSelf->controlUnit__DOT__Load = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
