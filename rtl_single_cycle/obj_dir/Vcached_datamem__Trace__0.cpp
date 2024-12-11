// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcached_datamem__Syms.h"


void Vcached_datamem___024root__trace_chg_0_sub_0(Vcached_datamem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcached_datamem___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root__trace_chg_0\n"); );
    // Init
    Vcached_datamem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcached_datamem___024root*>(voidSelf);
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcached_datamem___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcached_datamem___024root__trace_chg_0_sub_0(Vcached_datamem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.cached_datamem__DOT__out_cache),32);
        bufp->chgCData(oldp+1,(vlSelfRef.cached_datamem__DOT__byte3),8);
        bufp->chgCData(oldp+2,(vlSelfRef.cached_datamem__DOT__byte2),8);
        bufp->chgCData(oldp+3,(vlSelfRef.cached_datamem__DOT__byte1),8);
        bufp->chgCData(oldp+4,(vlSelfRef.cached_datamem__DOT__byte0),8);
        bufp->chgIData(oldp+5,(vlSelfRef.cached_datamem__DOT__cache__DOT__next_state),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+6,(vlSelfRef.cached_datamem__DOT__cache__DOT__current_state),32);
        bufp->chgWData(oldp+7,(vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line),87);
    }
    bufp->chgBit(oldp+10,(vlSelfRef.clk));
    bufp->chgBit(oldp+11,(vlSelfRef.rst));
    bufp->chgBit(oldp+12,(vlSelfRef.WE));
    bufp->chgBit(oldp+13,(vlSelfRef.RE));
    bufp->chgCData(oldp+14,(vlSelfRef.modeAddr),3);
    bufp->chgIData(oldp+15,(vlSelfRef.addr),32);
    bufp->chgIData(oldp+16,(vlSelfRef.write_data),32);
    bufp->chgBit(oldp+17,(vlSelfRef.miss_stall));
    bufp->chgIData(oldp+18,(vlSelfRef.data_out),32);
    bufp->chgCData(oldp+19,((0xffU & (vlSelfRef.addr 
                                      >> 3U))),8);
}

void Vcached_datamem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root__trace_cleanup\n"); );
    // Init
    Vcached_datamem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcached_datamem___024root*>(voidSelf);
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
