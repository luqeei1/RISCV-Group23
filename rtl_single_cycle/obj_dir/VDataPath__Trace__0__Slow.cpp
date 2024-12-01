// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDataPath__Syms.h"


VL_ATTR_COLD void VDataPath___024root__trace_init_sub__TOP__0(VDataPath___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+2,"modeBU", false,-1, 1,0);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBus(c+4,"A", false,-1, 31,0);
    tracep->declBus(c+5,"WD", false,-1, 31,0);
    tracep->declBit(c+6,"WE", false,-1);
    tracep->declBus(c+7,"Result", false,-1, 31,0);
    tracep->pushNamePrefix("DataPath ");
    tracep->declBus(c+9,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"ResultSrc", false,-1, 1,0);
    tracep->declBus(c+2,"modeBU", false,-1, 1,0);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBus(c+4,"A", false,-1, 31,0);
    tracep->declBus(c+5,"WD", false,-1, 31,0);
    tracep->declBit(c+6,"WE", false,-1);
    tracep->declBus(c+7,"Result", false,-1, 31,0);
    tracep->declBus(c+8,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VDataPath___024root__trace_init_top(VDataPath___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root__trace_init_top\n"); );
    // Body
    VDataPath___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VDataPath___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VDataPath___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VDataPath___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VDataPath___024root__trace_register(VDataPath___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VDataPath___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VDataPath___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VDataPath___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VDataPath___024root__trace_full_sub_0(VDataPath___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VDataPath___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root__trace_full_top_0\n"); );
    // Init
    VDataPath___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDataPath___024root*>(voidSelf);
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDataPath___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VDataPath___024root__trace_full_sub_0(VDataPath___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VDataPath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDataPath___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ResultSrc),2);
    bufp->fullCData(oldp+2,(vlSelf->modeBU),2);
    bufp->fullBit(oldp+3,(vlSelf->clk));
    bufp->fullIData(oldp+4,(vlSelf->A),32);
    bufp->fullIData(oldp+5,(vlSelf->WD),32);
    bufp->fullBit(oldp+6,(vlSelf->WE));
    bufp->fullIData(oldp+7,(vlSelf->Result),32);
    bufp->fullIData(oldp+8,(vlSelf->DataPath__DOT__RD),32);
    bufp->fullIData(oldp+9,(0x20U),32);
}
