// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcached_datamem.h for the primary calling header

#include "Vcached_datamem__pch.h"
#include "Vcached_datamem___024root.h"

void Vcached_datamem___024root___ico_sequent__TOP__0(Vcached_datamem___024root* vlSelf);

void Vcached_datamem___024root___eval_ico(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcached_datamem___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vcached_datamem___024root___ico_sequent__TOP__0(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cached_datamem__DOT__cache__DOT__next_state 
        = vlSelfRef.cached_datamem__DOT__cache__DOT__current_state;
    vlSelfRef.miss_stall = 0U;
    if ((0U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
        vlSelfRef.cached_datamem__DOT__cache__DOT__next_state = 1U;
        vlSelfRef.miss_stall = 0U;
    } else if ((1U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
        vlSelfRef.cached_datamem__DOT__cache__DOT__next_state 
            = (((vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                 >> 0x16U) & ((0x1fffffU & vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U]) 
                              == (vlSelfRef.addr >> 0xbU)))
                ? 0U : ((0x200000U & vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U])
                         ? 3U : 2U));
        if ((1U & (~ ((vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                       >> 0x16U) & ((0x1fffffU & vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U]) 
                                    == (vlSelfRef.addr 
                                        >> 0xbU)))))) {
            vlSelfRef.miss_stall = 1U;
        }
    } else if ((2U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
        vlSelfRef.cached_datamem__DOT__cache__DOT__next_state = 1U;
        vlSelfRef.miss_stall = 1U;
    } else if ((3U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
        vlSelfRef.cached_datamem__DOT__cache__DOT__next_state = 2U;
        vlSelfRef.miss_stall = 1U;
    }
    vlSelfRef.cached_datamem__DOT__out_cache = 0U;
    if ((0U != vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
        if ((1U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
            if (((vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                  >> 0x16U) & ((0x1fffffU & vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U]) 
                               == (vlSelfRef.addr >> 0xbU)))) {
                if (vlSelfRef.RE) {
                    vlSelfRef.cached_datamem__DOT__out_cache 
                        = ((4U & vlSelfRef.addr) ? 
                           vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[1U]
                            : vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[0U]);
                }
            }
        }
    }
    vlSelfRef.cached_datamem__DOT__byte3 = (vlSelfRef.cached_datamem__DOT__out_cache 
                                            >> 0x18U);
    vlSelfRef.cached_datamem__DOT__byte2 = (0xffU & 
                                            (vlSelfRef.cached_datamem__DOT__out_cache 
                                             >> 0x10U));
    vlSelfRef.cached_datamem__DOT__byte1 = (0xffU & 
                                            (vlSelfRef.cached_datamem__DOT__out_cache 
                                             >> 8U));
    vlSelfRef.cached_datamem__DOT__byte0 = (0xffU & vlSelfRef.cached_datamem__DOT__out_cache);
    vlSelfRef.data_out = ((1U == (IData)(vlSelfRef.modeAddr))
                           ? vlSelfRef.cached_datamem__DOT__out_cache
                           : ((3U == (IData)(vlSelfRef.modeAddr))
                               ? ((2U & vlSelfRef.addr)
                                   ? ((1U & vlSelfRef.addr)
                                       ? (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.cached_datamem__DOT__byte3) 
                                                          >> 7U)))) 
                                           << 8U) | (IData)(vlSelfRef.cached_datamem__DOT__byte3))
                                       : (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.cached_datamem__DOT__byte2) 
                                                          >> 7U)))) 
                                           << 8U) | (IData)(vlSelfRef.cached_datamem__DOT__byte2)))
                                   : ((1U & vlSelfRef.addr)
                                       ? (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.cached_datamem__DOT__byte1) 
                                                          >> 7U)))) 
                                           << 8U) | (IData)(vlSelfRef.cached_datamem__DOT__byte1))
                                       : (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.cached_datamem__DOT__byte0) 
                                                          >> 7U)))) 
                                           << 8U) | (IData)(vlSelfRef.cached_datamem__DOT__byte0))))
                               : ((5U == (IData)(vlSelfRef.modeAddr))
                                   ? ((2U & vlSelfRef.addr)
                                       ? ((1U & vlSelfRef.addr)
                                           ? (IData)(vlSelfRef.cached_datamem__DOT__byte3)
                                           : (IData)(vlSelfRef.cached_datamem__DOT__byte2))
                                       : ((1U & vlSelfRef.addr)
                                           ? (IData)(vlSelfRef.cached_datamem__DOT__byte1)
                                           : (IData)(vlSelfRef.cached_datamem__DOT__byte0)))
                                   : vlSelfRef.cached_datamem__DOT__out_cache)));
}

void Vcached_datamem___024root___eval_triggers__ico(Vcached_datamem___024root* vlSelf);

bool Vcached_datamem___024root___eval_phase__ico(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcached_datamem___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcached_datamem___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcached_datamem___024root___eval_act(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcached_datamem___024root___nba_sequent__TOP__0(Vcached_datamem___024root* vlSelf);

void Vcached_datamem___024root___eval_nba(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcached_datamem___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vcached_datamem___024root___nba_sequent__TOP__0(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*86:0*/ __Vdly__cached_datamem__DOT__cache__DOT__cache_line;
    VL_ZERO_W(87, __Vdly__cached_datamem__DOT__cache__DOT__cache_line);
    VlWide<3>/*86:0*/ __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v0;
    VL_ZERO_W(87, __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v0);
    CData/*7:0*/ __VdlyDim0__cached_datamem__DOT__cache__DOT__cache_mem__v0;
    __VdlyDim0__cached_datamem__DOT__cache__DOT__cache_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cached_datamem__DOT__cache__DOT__cache_mem__v0;
    __VdlySet__cached_datamem__DOT__cache__DOT__cache_mem__v0 = 0;
    VlWide<3>/*86:0*/ __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v1;
    VL_ZERO_W(87, __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v1);
    CData/*7:0*/ __VdlyDim0__cached_datamem__DOT__cache__DOT__cache_mem__v1;
    __VdlyDim0__cached_datamem__DOT__cache__DOT__cache_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cached_datamem__DOT__cache__DOT__cache_mem__v1;
    __VdlySet__cached_datamem__DOT__cache__DOT__cache_mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v0;
    __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v0 = 0;
    IData/*16:0*/ __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v0;
    __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cached_datamem__DOT__cache__DOT__ram_array__v0;
    __VdlySet__cached_datamem__DOT__cache__DOT__ram_array__v0 = 0;
    CData/*7:0*/ __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v1;
    __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v1 = 0;
    IData/*16:0*/ __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v1;
    __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v1 = 0;
    CData/*7:0*/ __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v2;
    __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v2 = 0;
    IData/*16:0*/ __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v2;
    __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v2 = 0;
    CData/*7:0*/ __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v3;
    __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v3 = 0;
    IData/*16:0*/ __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v3;
    __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v3 = 0;
    CData/*7:0*/ __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v4;
    __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v4 = 0;
    IData/*16:0*/ __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v4;
    __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v4 = 0;
    CData/*7:0*/ __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v5;
    __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v5 = 0;
    IData/*16:0*/ __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v5;
    __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v5 = 0;
    CData/*7:0*/ __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v6;
    __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v6 = 0;
    IData/*16:0*/ __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v6;
    __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v6 = 0;
    CData/*7:0*/ __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v7;
    __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v7 = 0;
    IData/*16:0*/ __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v7;
    __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v7 = 0;
    // Body
    __VdlySet__cached_datamem__DOT__cache__DOT__cache_mem__v0 = 0U;
    __VdlySet__cached_datamem__DOT__cache__DOT__cache_mem__v1 = 0U;
    __VdlySet__cached_datamem__DOT__cache__DOT__ram_array__v0 = 0U;
    __Vdly__cached_datamem__DOT__cache__DOT__cache_line[0U] 
        = vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[0U];
    __Vdly__cached_datamem__DOT__cache__DOT__cache_line[1U] 
        = vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[1U];
    __Vdly__cached_datamem__DOT__cache__DOT__cache_line[2U] 
        = vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U];
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        __Vdly__cached_datamem__DOT__cache__DOT__cache_line[0U] 
            = vlSelfRef.cached_datamem__DOT__cache__DOT__cache_mem
            [(0xffU & (vlSelfRef.addr >> 3U))][0U];
        __Vdly__cached_datamem__DOT__cache__DOT__cache_line[1U] 
            = vlSelfRef.cached_datamem__DOT__cache__DOT__cache_mem
            [(0xffU & (vlSelfRef.addr >> 3U))][1U];
        __Vdly__cached_datamem__DOT__cache__DOT__cache_line[2U] 
            = vlSelfRef.cached_datamem__DOT__cache__DOT__cache_mem
            [(0xffU & (vlSelfRef.addr >> 3U))][2U];
        if ((1U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
            if ((((IData)(vlSelfRef.WE) & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                                           >> 0x16U)) 
                 & ((0x1fffffU & vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U]) 
                    == (vlSelfRef.addr >> 0xbU)))) {
                __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v0[0U] 
                    = vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[0U];
                __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v0[1U] 
                    = vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[1U];
                __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v0[2U] 
                    = vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U];
                __VdlyDim0__cached_datamem__DOT__cache__DOT__cache_mem__v0 
                    = (0xffU & (vlSelfRef.addr >> 3U));
                __VdlySet__cached_datamem__DOT__cache__DOT__cache_mem__v0 = 1U;
                __Vdly__cached_datamem__DOT__cache__DOT__cache_line[2U] 
                    = (0x200000U | __Vdly__cached_datamem__DOT__cache__DOT__cache_line[2U]);
                if (((3U == (IData)(vlSelfRef.modeAddr)) 
                     || (5U == (IData)(vlSelfRef.modeAddr)))) {
                    VL_ASSIGNSEL_WI(87,8,(0x3fU & VL_SHIFTL_III(6,32,32, 
                                                                (7U 
                                                                 & vlSelfRef.addr), 3U)), __Vdly__cached_datamem__DOT__cache__DOT__cache_line, 
                                    (0xffU & vlSelfRef.write_data));
                } else if ((4U & vlSelfRef.addr)) {
                    __Vdly__cached_datamem__DOT__cache__DOT__cache_line[1U] 
                        = vlSelfRef.write_data;
                } else {
                    __Vdly__cached_datamem__DOT__cache__DOT__cache_line[0U] 
                        = vlSelfRef.write_data;
                }
            }
        } else if ((2U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
            __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v1[0U] 
                = vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[0U];
            __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v1[1U] 
                = vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[1U];
            __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v1[2U] 
                = vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U];
            __VdlyDim0__cached_datamem__DOT__cache__DOT__cache_mem__v1 
                = (0xffU & (vlSelfRef.addr >> 3U));
            __VdlySet__cached_datamem__DOT__cache__DOT__cache_mem__v1 = 1U;
            __Vdly__cached_datamem__DOT__cache__DOT__cache_line[0U] 
                = (((vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array
                     [(0x1ffffU & ((IData)(3U) + vlSelfRef.addr))] 
                     << 0x18U) | (vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array
                                  [(0x1ffffU & ((IData)(2U) 
                                                + vlSelfRef.addr))] 
                                  << 0x10U)) | ((vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array
                                                 [(0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.addr))] 
                                                 << 8U) 
                                                | vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array
                                                [(0x1ffffU 
                                                  & vlSelfRef.addr)]));
            __Vdly__cached_datamem__DOT__cache__DOT__cache_line[1U] 
                = (((vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array
                     [(0x1ffffU & ((IData)(7U) + vlSelfRef.addr))] 
                     << 0x18U) | (vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array
                                  [(0x1ffffU & ((IData)(6U) 
                                                + vlSelfRef.addr))] 
                                  << 0x10U)) | ((vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array
                                                 [(0x1ffffU 
                                                   & ((IData)(5U) 
                                                      + vlSelfRef.addr))] 
                                                 << 8U) 
                                                | vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array
                                                [(0x1ffffU 
                                                  & ((IData)(4U) 
                                                     + vlSelfRef.addr))]));
            __Vdly__cached_datamem__DOT__cache__DOT__cache_line[2U] 
                = (0x7fffffU & (0x400000U | (vlSelfRef.addr 
                                             >> 0xbU)));
        } else if ((3U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
            __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v0 
                = (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[1U] 
                   >> 0x18U);
            __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v0 
                = ((0x1f800U & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                                << 0xbU)) | (0x7f8U 
                                             & vlSelfRef.addr));
            __VdlySet__cached_datamem__DOT__cache__DOT__ram_array__v0 = 1U;
            __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v1 
                = (0xffU & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[1U] 
                            >> 0x10U));
            __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v1 
                = (1U | ((0x1f800U & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                                      << 0xbU)) | (0x7f8U 
                                                   & vlSelfRef.addr)));
            __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v2 
                = (0xffU & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[1U] 
                            >> 8U));
            __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v2 
                = (2U | ((0x1f800U & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                                      << 0xbU)) | (0x7f8U 
                                                   & vlSelfRef.addr)));
            __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v3 
                = (0xffU & vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[1U]);
            __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v3 
                = (3U | ((0x1f800U & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                                      << 0xbU)) | (0x7f8U 
                                                   & vlSelfRef.addr)));
            __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v4 
                = (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[0U] 
                   >> 0x18U);
            __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v4 
                = (4U | ((0x1f800U & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                                      << 0xbU)) | (0x7f8U 
                                                   & vlSelfRef.addr)));
            __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v5 
                = (0xffU & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[0U] 
                            >> 0x10U));
            __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v5 
                = (5U | ((0x1f800U & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                                      << 0xbU)) | (0x7f8U 
                                                   & vlSelfRef.addr)));
            __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v6 
                = (0xffU & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[0U] 
                            >> 8U));
            __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v6 
                = (6U | ((0x1f800U & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                                      << 0xbU)) | (0x7f8U 
                                                   & vlSelfRef.addr)));
            __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v7 
                = (0xffU & vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[0U]);
            __VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v7 
                = (7U | ((0x1f800U & (vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                                      << 0xbU)) | (0x7f8U 
                                                   & vlSelfRef.addr)));
        }
    }
    if (__VdlySet__cached_datamem__DOT__cache__DOT__cache_mem__v0) {
        vlSelfRef.cached_datamem__DOT__cache__DOT__cache_mem[__VdlyDim0__cached_datamem__DOT__cache__DOT__cache_mem__v0][0U] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v0[0U];
        vlSelfRef.cached_datamem__DOT__cache__DOT__cache_mem[__VdlyDim0__cached_datamem__DOT__cache__DOT__cache_mem__v0][1U] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v0[1U];
        vlSelfRef.cached_datamem__DOT__cache__DOT__cache_mem[__VdlyDim0__cached_datamem__DOT__cache__DOT__cache_mem__v0][2U] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v0[2U];
    }
    if (__VdlySet__cached_datamem__DOT__cache__DOT__cache_mem__v1) {
        vlSelfRef.cached_datamem__DOT__cache__DOT__cache_mem[__VdlyDim0__cached_datamem__DOT__cache__DOT__cache_mem__v1][0U] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v1[0U];
        vlSelfRef.cached_datamem__DOT__cache__DOT__cache_mem[__VdlyDim0__cached_datamem__DOT__cache__DOT__cache_mem__v1][1U] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v1[1U];
        vlSelfRef.cached_datamem__DOT__cache__DOT__cache_mem[__VdlyDim0__cached_datamem__DOT__cache__DOT__cache_mem__v1][2U] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__cache_mem__v1[2U];
    }
    if (__VdlySet__cached_datamem__DOT__cache__DOT__ram_array__v0) {
        vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array[__VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v0] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v0;
        vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array[__VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v1] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v1;
        vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array[__VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v2] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v2;
        vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array[__VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v3] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v3;
        vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array[__VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v4] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v4;
        vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array[__VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v5] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v5;
        vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array[__VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v6] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v6;
        vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array[__VdlyDim0__cached_datamem__DOT__cache__DOT__ram_array__v7] 
            = __VdlyVal__cached_datamem__DOT__cache__DOT__ram_array__v7;
    }
    vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[0U] 
        = __Vdly__cached_datamem__DOT__cache__DOT__cache_line[0U];
    vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[1U] 
        = __Vdly__cached_datamem__DOT__cache__DOT__cache_line[1U];
    vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
        = __Vdly__cached_datamem__DOT__cache__DOT__cache_line[2U];
    vlSelfRef.cached_datamem__DOT__cache__DOT__current_state 
        = ((IData)(vlSelfRef.rst) ? 0U : vlSelfRef.cached_datamem__DOT__cache__DOT__next_state);
    vlSelfRef.cached_datamem__DOT__cache__DOT__next_state 
        = vlSelfRef.cached_datamem__DOT__cache__DOT__current_state;
    vlSelfRef.miss_stall = 0U;
    if ((0U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
        vlSelfRef.cached_datamem__DOT__cache__DOT__next_state = 1U;
        vlSelfRef.miss_stall = 0U;
    } else if ((1U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
        vlSelfRef.cached_datamem__DOT__cache__DOT__next_state 
            = (((vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                 >> 0x16U) & ((0x1fffffU & vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U]) 
                              == (vlSelfRef.addr >> 0xbU)))
                ? 0U : ((0x200000U & vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U])
                         ? 3U : 2U));
        if ((1U & (~ ((vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                       >> 0x16U) & ((0x1fffffU & vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U]) 
                                    == (vlSelfRef.addr 
                                        >> 0xbU)))))) {
            vlSelfRef.miss_stall = 1U;
        }
    } else if ((2U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
        vlSelfRef.cached_datamem__DOT__cache__DOT__next_state = 1U;
        vlSelfRef.miss_stall = 1U;
    } else if ((3U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
        vlSelfRef.cached_datamem__DOT__cache__DOT__next_state = 2U;
        vlSelfRef.miss_stall = 1U;
    }
    vlSelfRef.cached_datamem__DOT__out_cache = 0U;
    if ((0U != vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
        if ((1U == vlSelfRef.cached_datamem__DOT__cache__DOT__current_state)) {
            if (((vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U] 
                  >> 0x16U) & ((0x1fffffU & vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[2U]) 
                               == (vlSelfRef.addr >> 0xbU)))) {
                if (vlSelfRef.RE) {
                    vlSelfRef.cached_datamem__DOT__out_cache 
                        = ((4U & vlSelfRef.addr) ? 
                           vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[1U]
                            : vlSelfRef.cached_datamem__DOT__cache__DOT__cache_line[0U]);
                }
            }
        }
    }
    vlSelfRef.cached_datamem__DOT__byte3 = (vlSelfRef.cached_datamem__DOT__out_cache 
                                            >> 0x18U);
    vlSelfRef.cached_datamem__DOT__byte2 = (0xffU & 
                                            (vlSelfRef.cached_datamem__DOT__out_cache 
                                             >> 0x10U));
    vlSelfRef.cached_datamem__DOT__byte1 = (0xffU & 
                                            (vlSelfRef.cached_datamem__DOT__out_cache 
                                             >> 8U));
    vlSelfRef.cached_datamem__DOT__byte0 = (0xffU & vlSelfRef.cached_datamem__DOT__out_cache);
    vlSelfRef.data_out = ((1U == (IData)(vlSelfRef.modeAddr))
                           ? vlSelfRef.cached_datamem__DOT__out_cache
                           : ((3U == (IData)(vlSelfRef.modeAddr))
                               ? ((2U & vlSelfRef.addr)
                                   ? ((1U & vlSelfRef.addr)
                                       ? (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.cached_datamem__DOT__byte3) 
                                                          >> 7U)))) 
                                           << 8U) | (IData)(vlSelfRef.cached_datamem__DOT__byte3))
                                       : (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.cached_datamem__DOT__byte2) 
                                                          >> 7U)))) 
                                           << 8U) | (IData)(vlSelfRef.cached_datamem__DOT__byte2)))
                                   : ((1U & vlSelfRef.addr)
                                       ? (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.cached_datamem__DOT__byte1) 
                                                          >> 7U)))) 
                                           << 8U) | (IData)(vlSelfRef.cached_datamem__DOT__byte1))
                                       : (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.cached_datamem__DOT__byte0) 
                                                          >> 7U)))) 
                                           << 8U) | (IData)(vlSelfRef.cached_datamem__DOT__byte0))))
                               : ((5U == (IData)(vlSelfRef.modeAddr))
                                   ? ((2U & vlSelfRef.addr)
                                       ? ((1U & vlSelfRef.addr)
                                           ? (IData)(vlSelfRef.cached_datamem__DOT__byte3)
                                           : (IData)(vlSelfRef.cached_datamem__DOT__byte2))
                                       : ((1U & vlSelfRef.addr)
                                           ? (IData)(vlSelfRef.cached_datamem__DOT__byte1)
                                           : (IData)(vlSelfRef.cached_datamem__DOT__byte0)))
                                   : vlSelfRef.cached_datamem__DOT__out_cache)));
}

void Vcached_datamem___024root___eval_triggers__act(Vcached_datamem___024root* vlSelf);

bool Vcached_datamem___024root___eval_phase__act(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcached_datamem___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcached_datamem___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcached_datamem___024root___eval_phase__nba(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcached_datamem___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcached_datamem___024root___dump_triggers__ico(Vcached_datamem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcached_datamem___024root___dump_triggers__nba(Vcached_datamem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcached_datamem___024root___dump_triggers__act(Vcached_datamem___024root* vlSelf);
#endif  // VL_DEBUG

void Vcached_datamem___024root___eval(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vcached_datamem___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("cached_datamem.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcached_datamem___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcached_datamem___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("cached_datamem.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcached_datamem___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("cached_datamem.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcached_datamem___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcached_datamem___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcached_datamem___024root___eval_debug_assertions(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.WE & 0xfeU))) {
        Verilated::overWidthError("WE");}
    if (VL_UNLIKELY((vlSelfRef.RE & 0xfeU))) {
        Verilated::overWidthError("RE");}
    if (VL_UNLIKELY((vlSelfRef.modeAddr & 0xf8U))) {
        Verilated::overWidthError("modeAddr");}
}
#endif  // VL_DEBUG
