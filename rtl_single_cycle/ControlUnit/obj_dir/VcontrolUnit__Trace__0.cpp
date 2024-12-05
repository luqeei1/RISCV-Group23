// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VcontrolUnit__Syms.h"


void VcontrolUnit___024root__trace_chg_sub_0(VcontrolUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VcontrolUnit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root__trace_chg_top_0\n"); );
    // Init
    VcontrolUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VcontrolUnit___024root*>(voidSelf);
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VcontrolUnit___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VcontrolUnit___024root__trace_chg_sub_0(VcontrolUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->controlUnit__DOT__ALUOp),2);
        bufp->chgBit(oldp+1,(vlSelf->controlUnit__DOT__Store));
        bufp->chgBit(oldp+2,(vlSelf->controlUnit__DOT__Load));
    }
    bufp->chgIData(oldp+3,(vlSelf->Instr),32);
    bufp->chgCData(oldp+4,(vlSelf->PCSrc),2);
    bufp->chgCData(oldp+5,(vlSelf->ResultSrc),2);
    bufp->chgBit(oldp+6,(vlSelf->MemWrite));
    bufp->chgCData(oldp+7,(vlSelf->ALUCtrl),4);
    bufp->chgBit(oldp+8,(vlSelf->ALUSrc));
    bufp->chgCData(oldp+9,(vlSelf->ImmSrc),3);
    bufp->chgBit(oldp+10,(vlSelf->RegWrite));
    bufp->chgCData(oldp+11,(vlSelf->modeBU),3);
    bufp->chgCData(oldp+12,((0x7fU & vlSelf->Instr)),7);
    bufp->chgCData(oldp+13,((7U & (vlSelf->Instr >> 0xcU))),3);
    bufp->chgBit(oldp+14,((1U & (vlSelf->Instr >> 0x1eU))));
    bufp->chgBit(oldp+15,((1U & (vlSelf->Instr >> 5U))));
}

void VcontrolUnit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VcontrolUnit___024root__trace_cleanup\n"); );
    // Init
    VcontrolUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VcontrolUnit___024root*>(voidSelf);
    VcontrolUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
