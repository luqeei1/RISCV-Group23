// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdata_memory__Syms.h"


void Vdata_memory___024root__trace_chg_sub_0(Vdata_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdata_memory___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_chg_top_0\n"); );
    // Init
    Vdata_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_memory___024root*>(voidSelf);
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdata_memory___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdata_memory___024root__trace_chg_sub_0(Vdata_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->modeBU),3);
    bufp->chgCData(oldp+1,(vlSelf->ResultSrc),2);
    bufp->chgBit(oldp+2,(vlSelf->clk));
    bufp->chgIData(oldp+3,(vlSelf->A),32);
    bufp->chgIData(oldp+4,(vlSelf->WD),32);
    bufp->chgBit(oldp+5,(vlSelf->WE));
    bufp->chgIData(oldp+6,(vlSelf->RD),32);
    bufp->chgIData(oldp+7,(vlSelf->Result),32);
}

void Vdata_memory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root__trace_cleanup\n"); );
    // Init
    Vdata_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_memory___024root*>(voidSelf);
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
