// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdata_memory__Syms.h"


VL_ATTR_COLD void Vdata_memory___024root__trace_init_sub__TOP__0(Vdata_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"modeBU", false,-1, 2,0);
    tracep->declBus(c+2,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBus(c+4,"A", false,-1, 31,0);
    tracep->declBus(c+5,"WD", false,-1, 31,0);
    tracep->declBit(c+6,"WE", false,-1);
    tracep->declBus(c+7,"RD", false,-1, 31,0);
    tracep->declBus(c+8,"Result", false,-1, 31,0);
    tracep->pushNamePrefix("data_memory ");
    tracep->declBus(c+9,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"modeBU", false,-1, 2,0);
    tracep->declBus(c+2,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBus(c+4,"A", false,-1, 31,0);
    tracep->declBus(c+5,"WD", false,-1, 31,0);
    tracep->declBit(c+6,"WE", false,-1);
    tracep->declBus(c+7,"RD", false,-1, 31,0);
    tracep->declBus(c+8,"Result", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdata_memory___024root__trace_init_top(Vdata_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_init_top\n"); );
    // Body
    Vdata_memory___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdata_memory___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdata_memory___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdata_memory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdata_memory___024root__trace_register(Vdata_memory___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdata_memory___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdata_memory___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdata_memory___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdata_memory___024root__trace_full_sub_0(Vdata_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdata_memory___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_full_top_0\n"); );
    // Init
    Vdata_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_memory___024root*>(voidSelf);
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdata_memory___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdata_memory___024root__trace_full_sub_0(Vdata_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->modeBU),3);
    bufp->fullCData(oldp+2,(vlSelf->ResultSrc),2);
    bufp->fullBit(oldp+3,(vlSelf->clk));
    bufp->fullIData(oldp+4,(vlSelf->A),32);
    bufp->fullIData(oldp+5,(vlSelf->WD),32);
    bufp->fullBit(oldp+6,(vlSelf->WE));
    bufp->fullIData(oldp+7,(vlSelf->RD),32);
    bufp->fullIData(oldp+8,(vlSelf->Result),32);
    bufp->fullIData(oldp+9,(0x20U),32);
}
