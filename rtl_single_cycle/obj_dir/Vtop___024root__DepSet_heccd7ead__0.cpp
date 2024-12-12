// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h45f37922_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0;
    __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0;
    __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0;
    __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v1;
    __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v1;
    __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v1 = 0;
    IData/*20:0*/ __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v2;
    __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v2;
    __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v3;
    __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4;
    __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4 = 0;
    IData/*31:0*/ __VdlyLsb__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4;
    __VdlyLsb__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4 = 0;
    CData/*7:0*/ __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4;
    __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4;
    __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5;
    __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5 = 0;
    CData/*7:0*/ __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5;
    __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5;
    __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6;
    __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6 = 0;
    CData/*7:0*/ __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6;
    __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6;
    __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0;
    __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0;
    __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0;
    __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v1;
    __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v1 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v1;
    __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v2;
    __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v2 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v2;
    __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v3;
    __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v3 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v3;
    __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v3 = 0;
    // Body
    __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0 = 0U;
    __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0 = 0U;
    __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4 = 0U;
    __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5 = 0U;
    __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__miss_stall)))) {
        if (vlSelfRef.top__DOT__MemWrite) {
            __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0 
                = (vlSelfRef.top__DOT__RD2 >> 0x18U);
            __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0 
                = (0x1ffffU & vlSelfRef.top__DOT__ALUResult);
            __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0 = 1U;
            __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v1 
                = (0xffU & (vlSelfRef.top__DOT__RD2 
                            >> 0x10U));
            __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v1 
                = (0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__ALUResult));
            __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v2 
                = (0xffU & (vlSelfRef.top__DOT__RD2 
                            >> 8U));
            __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v2 
                = (0x1ffffU & ((IData)(2U) + vlSelfRef.top__DOT__ALUResult));
            __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v3 
                = (0xffU & vlSelfRef.top__DOT__RD2);
            __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v3 
                = (0x1ffffU & ((IData)(3U) + vlSelfRef.top__DOT__ALUResult));
        }
    }
    if (vlSelfRef.top__DOT__miss_stall) {
        __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0 
            = (((vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array
                 [(0x1ffffU & ((IData)(3U) + vlSelfRef.top__DOT__ALUResult))] 
                 << 0x18U) | (vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array
                              [(0x1ffffU & ((IData)(2U) 
                                            + vlSelfRef.top__DOT__ALUResult))] 
                              << 0x10U)) | ((vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array
                                             [(0x1ffffU 
                                               & ((IData)(1U) 
                                                  + vlSelfRef.top__DOT__ALUResult))] 
                                             << 8U) 
                                            | vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array
                                            [(0x1ffffU 
                                              & vlSelfRef.top__DOT__ALUResult)]));
        __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0 
            = (0xffU & (vlSelfRef.top__DOT__ALUResult 
                        >> 3U));
        __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0 = 1U;
        __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v1 
            = (((vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array
                 [(0x1ffffU & ((IData)(7U) + vlSelfRef.top__DOT__ALUResult))] 
                 << 0x18U) | (vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array
                              [(0x1ffffU & ((IData)(6U) 
                                            + vlSelfRef.top__DOT__ALUResult))] 
                              << 0x10U)) | ((vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array
                                             [(0x1ffffU 
                                               & ((IData)(5U) 
                                                  + vlSelfRef.top__DOT__ALUResult))] 
                                             << 8U) 
                                            | vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array
                                            [(0x1ffffU 
                                              & ((IData)(4U) 
                                                 + vlSelfRef.top__DOT__ALUResult))]));
        __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v1 
            = (0xffU & (vlSelfRef.top__DOT__ALUResult 
                        >> 3U));
        __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v2 
            = (vlSelfRef.top__DOT__ALUResult >> 0xbU);
        __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v2 
            = (0xffU & (vlSelfRef.top__DOT__ALUResult 
                        >> 3U));
        __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v3 
            = (0xffU & (vlSelfRef.top__DOT__ALUResult 
                        >> 3U));
    } else if (vlSelfRef.top__DOT__MemWrite) {
        if (((3U == (IData)(vlSelfRef.top__DOT__modeBU)) 
             || (5U == (IData)(vlSelfRef.top__DOT__modeBU)))) {
            __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4 
                = (0xffU & vlSelfRef.top__DOT__RD2);
            __VdlyLsb__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4 
                = (0x3fU & VL_SHIFTL_III(6,32,32, (7U 
                                                   & vlSelfRef.top__DOT__ALUResult), 3U));
            __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4 
                = (0xffU & (vlSelfRef.top__DOT__ALUResult 
                            >> 3U));
            __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4 = 1U;
        } else if ((4U & vlSelfRef.top__DOT__ALUResult)) {
            __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5 
                = vlSelfRef.top__DOT__RD2;
            __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5 
                = (0xffU & (vlSelfRef.top__DOT__ALUResult 
                            >> 3U));
            __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5 = 1U;
        } else {
            __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6 
                = vlSelfRef.top__DOT__RD2;
            __VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6 
                = (0xffU & (vlSelfRef.top__DOT__ALUResult 
                            >> 3U));
            __VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6 = 1U;
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.top__DOT__PC = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__miss_stall)))) {
        vlSelfRef.top__DOT__PC = vlSelfRef.top__DOT__pc__DOT__out;
    }
    if (__VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0) {
        vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array[__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0] 
            = __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v0;
        vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array[__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v1] 
            = __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v1;
        vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array[__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v2] 
            = __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v2;
        vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array[__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v3] 
            = __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__ram_array__v3;
    }
    if (__VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0) {
        vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem[__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0][0U] 
            = __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v0;
        vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem[__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v1][1U] 
            = __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v1;
        vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem[__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v2][2U] 
            = ((0x600000U & vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem
                [__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v2][2U]) 
               | (0x7fffffU & __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v2));
        vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem[__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v3][2U] 
            = (0x400000U | vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem
               [__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v3][2U]);
    }
    if (__VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4) {
        VL_ASSIGNSEL_WI(87,8,__VdlyLsb__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4, 
                        vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem
                        [__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4], __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v4);
    }
    if (__VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5) {
        vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem[__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5][1U] 
            = __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v5;
    }
    if (__VdlySet__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6) {
        vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem[__VdlyDim0__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6][0U] 
            = __VdlyVal__top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem__v6;
    }
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                                [(0xffffU 
                                                  & vlSelfRef.top__DOT__PC)]);
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.top__DOT__PC))] 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0));
    vlSelfRef.top__DOT__instr = ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                  [(0xffffU & ((IData)(3U) 
                                               + vlSelfRef.top__DOT__PC))] 
                                  << 0x18U) | vlSelfRef.__VdfgRegularize_hd87f99a1_0_1);
    if ((0x40U & vlSelfRef.top__DOT__instr)) {
        if ((0x20U & vlSelfRef.top__DOT__instr)) {
            if ((0x10U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__PCSrc = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((8U & vlSelfRef.top__DOT__instr)) {
                if ((4U & vlSelfRef.top__DOT__instr)) {
                    if ((2U & vlSelfRef.top__DOT__instr)) {
                        if ((1U & vlSelfRef.top__DOT__instr)) {
                            vlSelfRef.top__DOT__ResultSrc = 2U;
                            vlSelfRef.top__DOT__PCSrc = 1U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ImmSrc = 4U;
                        } else {
                            vlSelfRef.top__DOT__ResultSrc = 3U;
                            vlSelfRef.top__DOT__PCSrc = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__PCSrc = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__PCSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelfRef.top__DOT__instr)) {
                if ((2U & vlSelfRef.top__DOT__instr)) {
                    if ((1U & vlSelfRef.top__DOT__instr)) {
                        vlSelfRef.top__DOT__ResultSrc = 2U;
                        vlSelfRef.top__DOT__PCSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                        vlSelfRef.top__DOT__ImmSrc = 5U;
                    } else {
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__PCSrc = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__PCSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else if ((2U & vlSelfRef.top__DOT__instr)) {
                if ((1U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__ResultSrc = 0U;
                    vlSelfRef.top__DOT__PCSrc = 2U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 1U;
                    vlSelfRef.top__DOT__ImmSrc = 2U;
                } else {
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__PCSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__PCSrc = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
        } else {
            vlSelfRef.top__DOT__ResultSrc = 3U;
            vlSelfRef.top__DOT__PCSrc = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            vlSelfRef.top__DOT__ImmSrc = 7U;
        }
        vlSelfRef.top__DOT__RegWrite = ((1U & (vlSelfRef.top__DOT__instr 
                                               >> 5U)) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__instr 
                                                    >> 4U))) 
                                            && ((8U 
                                                 & vlSelfRef.top__DOT__instr)
                                                 ? 
                                                ((1U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 2U)) 
                                                 && ((1U 
                                                      & (vlSelfRef.top__DOT__instr 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.top__DOT__instr)))
                                                 : 
                                                ((1U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 2U)) 
                                                 && ((1U 
                                                      & (vlSelfRef.top__DOT__instr 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.top__DOT__instr))))));
    } else {
        if ((0x20U & vlSelfRef.top__DOT__instr)) {
            if ((0x10U & vlSelfRef.top__DOT__instr)) {
                if ((8U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                } else if ((4U & vlSelfRef.top__DOT__instr)) {
                    if ((2U & vlSelfRef.top__DOT__instr)) {
                        if ((1U & vlSelfRef.top__DOT__instr)) {
                            vlSelfRef.top__DOT__ResultSrc = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                            vlSelfRef.top__DOT__ImmSrc = 3U;
                        } else {
                            vlSelfRef.top__DOT__ResultSrc = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                            vlSelfRef.top__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                    }
                } else {
                    if ((2U & vlSelfRef.top__DOT__instr)) {
                        if ((1U & vlSelfRef.top__DOT__instr)) {
                            vlSelfRef.top__DOT__ResultSrc = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                        } else {
                            vlSelfRef.top__DOT__ResultSrc = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else if ((8U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((2U & vlSelfRef.top__DOT__instr)) {
                if ((1U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__ResultSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 1U;
                } else {
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
            vlSelfRef.top__DOT__RegWrite = ((1U & (vlSelfRef.top__DOT__instr 
                                                   >> 4U)) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top__DOT__instr 
                                                     >> 3U))) 
                                                && ((4U 
                                                     & vlSelfRef.top__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & (vlSelfRef.top__DOT__instr 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.top__DOT__instr))
                                                     : 
                                                    ((1U 
                                                      & (vlSelfRef.top__DOT__instr 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & vlSelfRef.top__DOT__instr)))));
        } else if ((0x10U & vlSelfRef.top__DOT__instr)) {
            if ((8U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelfRef.top__DOT__instr)) {
                if ((2U & vlSelfRef.top__DOT__instr)) {
                    if ((1U & vlSelfRef.top__DOT__instr)) {
                        vlSelfRef.top__DOT__ResultSrc = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                        vlSelfRef.top__DOT__ImmSrc = 3U;
                    } else {
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else if ((2U & vlSelfRef.top__DOT__instr)) {
                if ((1U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__ResultSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                } else {
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
            vlSelfRef.top__DOT__RegWrite = ((1U & (~ 
                                                   (vlSelfRef.top__DOT__instr 
                                                    >> 3U))) 
                                            && ((4U 
                                                 & vlSelfRef.top__DOT__instr)
                                                 ? 
                                                ((1U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSelfRef.top__DOT__instr))
                                                 : 
                                                ((1U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 1U)) 
                                                 && (1U 
                                                     & vlSelfRef.top__DOT__instr))));
        } else {
            if ((8U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((2U & vlSelfRef.top__DOT__instr)) {
                if ((1U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__ResultSrc = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                } else {
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
            vlSelfRef.top__DOT__RegWrite = ((1U & (~ 
                                                   (vlSelfRef.top__DOT__instr 
                                                    >> 3U))) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top__DOT__instr 
                                                     >> 2U))) 
                                                && ((1U 
                                                     & (vlSelfRef.top__DOT__instr 
                                                        >> 1U)) 
                                                    && (1U 
                                                        & vlSelfRef.top__DOT__instr))));
        }
        vlSelfRef.top__DOT__PCSrc = 0U;
    }
    vlSelfRef.top__DOT__MemWrite = ((1U & (~ (vlSelfRef.top__DOT__instr 
                                              >> 6U))) 
                                    && ((1U & (vlSelfRef.top__DOT__instr 
                                               >> 5U)) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__instr 
                                                    >> 4U))) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top__DOT__instr 
                                                     >> 3U))) 
                                                && ((1U 
                                                     & (~ 
                                                        (vlSelfRef.top__DOT__instr 
                                                         >> 2U))) 
                                                    && ((1U 
                                                         & (vlSelfRef.top__DOT__instr 
                                                            >> 1U)) 
                                                        && (1U 
                                                            & vlSelfRef.top__DOT__instr)))))));
    vlSelfRef.top__DOT__modeBU = ((IData)(vlSelfRef.top__DOT__control_unit__DOT__Store)
                                   ? ((0U == (7U & 
                                              (vlSelfRef.top__DOT__instr 
                                               >> 0xcU)))
                                       ? 3U : ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top__DOT__instr 
                                                    >> 0xcU)))
                                                ? 2U
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.top__DOT__instr 
                                                        >> 0xcU)))
                                                    ? 1U
                                                    : 0U)))
                                   : ((IData)(vlSelfRef.top__DOT__control_unit__DOT__Load)
                                       ? ((0x4000U 
                                           & vlSelfRef.top__DOT__instr)
                                           ? ((0x2000U 
                                               & vlSelfRef.top__DOT__instr)
                                               ? 0U
                                               : ((0x1000U 
                                                   & vlSelfRef.top__DOT__instr)
                                                   ? 4U
                                                   : 5U))
                                           : ((0x2000U 
                                               & vlSelfRef.top__DOT__instr)
                                               ? ((0x1000U 
                                                   & vlSelfRef.top__DOT__instr)
                                                   ? 0U
                                                   : 1U)
                                               : ((0x1000U 
                                                   & vlSelfRef.top__DOT__instr)
                                                   ? 2U
                                                   : 3U)))
                                       : 0U));
    __Vtableidx1 = (((0x40U & (vlSelfRef.top__DOT__instr 
                               >> 0x18U)) | (0x20U 
                                             & vlSelfRef.top__DOT__instr)) 
                    | ((0x1cU & (vlSelfRef.top__DOT__instr 
                                 >> 0xaU)) | (IData)(vlSelfRef.top__DOT__control_unit__DOT__ALUOp)));
    vlSelfRef.top__DOT__ALUctrl = Vtop__ConstPool__TABLE_h45f37922_0
        [__Vtableidx1];
    vlSelfRef.top__DOT__ExtImm = ((4U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                   ? ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelfRef.top__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelfRef.top__DOT__instr 
                                                      >> 0x14U))
                                                : (
                                                   ((- (IData)(
                                                               (vlSelfRef.top__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | (((0xff000U 
                                                        & vlSelfRef.top__DOT__instr) 
                                                       | (0x800U 
                                                          & (vlSelfRef.top__DOT__instr 
                                                             >> 9U))) 
                                                      | (0x7feU 
                                                         & (vlSelfRef.top__DOT__instr 
                                                            >> 0x14U))))))
                                   : ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                       ? ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                           ? (0xfffff000U 
                                              & vlSelfRef.top__DOT__instr)
                                           : (((- (IData)(
                                                          (vlSelfRef.top__DOT__instr 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelfRef.top__DOT__instr 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelfRef.top__DOT__instr 
                                                          >> 7U))))))
                                       : ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                                           ? (((- (IData)(
                                                          (vlSelfRef.top__DOT__instr 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0xfe0U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelfRef.top__DOT__instr 
                                                       >> 7U))))
                                           : (((- (IData)(
                                                          (vlSelfRef.top__DOT__instr 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSelfRef.top__DOT__instr 
                                                 >> 0x14U)))));
    vlSelfRef.top__DOT____Vcellinp__pc__PCTarget = 
        (vlSelfRef.top__DOT__ExtImm + vlSelfRef.top__DOT__PC);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__top__DOT__regfile__DOT__registerfile_array__v0;
    __VdlyVal__top__DOT__regfile__DOT__registerfile_array__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__regfile__DOT__registerfile_array__v0;
    __VdlyDim0__top__DOT__regfile__DOT__registerfile_array__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__regfile__DOT__registerfile_array__v0;
    __VdlySet__top__DOT__regfile__DOT__registerfile_array__v0 = 0;
    // Body
    __VdlySet__top__DOT__regfile__DOT__registerfile_array__v0 = 0U;
    if (vlSelfRef.top__DOT__RegWrite) {
        __VdlyVal__top__DOT__regfile__DOT__registerfile_array__v0 
            = ((0U == (0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                                >> 7U))) ? 0U : ((0U 
                                                  == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                                  ? vlSelfRef.top__DOT__ALUResult
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                                   ? vlSelfRef.top__DOT__RD
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.top__DOT__PC)
                                                    : vlSelfRef.top__DOT__ALUResult))));
        __VdlyDim0__top__DOT__regfile__DOT__registerfile_array__v0 
            = (0x1fU & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0) 
                        >> 7U));
        __VdlySet__top__DOT__regfile__DOT__registerfile_array__v0 = 1U;
    }
    if (__VdlySet__top__DOT__regfile__DOT__registerfile_array__v0) {
        vlSelfRef.top__DOT__regfile__DOT__registerfile_array[__VdlyDim0__top__DOT__regfile__DOT__registerfile_array__v0] 
            = __VdlyVal__top__DOT__regfile__DOT__registerfile_array__v0;
    }
    vlSelfRef.a5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xfU];
    vlSelfRef.a4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xeU];
    vlSelfRef.a3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xdU];
    vlSelfRef.a2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xcU];
    vlSelfRef.a1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xbU];
    vlSelfRef.s1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [9U];
    vlSelfRef.t2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [7U];
    vlSelfRef.t1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [6U];
    vlSelfRef.t0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [5U];
    vlSelfRef.a0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xaU];
    vlSelfRef.s2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x12U];
    vlSelfRef.s0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [8U];
    vlSelfRef.a6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x10U];
    vlSelfRef.a7 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x11U];
    vlSelfRef.s3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x13U];
    vlSelfRef.s4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x14U];
    vlSelfRef.s5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x15U];
    vlSelfRef.s6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x16U];
    vlSelfRef.s7 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x17U];
    vlSelfRef.s8 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x18U];
    vlSelfRef.s9 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x19U];
    vlSelfRef.s10 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1aU];
    vlSelfRef.s11 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1bU];
    vlSelfRef.t3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1cU];
    vlSelfRef.t4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1dU];
    vlSelfRef.t5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1eU];
    vlSelfRef.t6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1fU];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__RD1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [(0x1fU & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   >> 0xfU))];
    vlSelfRef.top__DOT__RD2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [(0x1fU & (vlSelfRef.top__DOT__instr >> 0x14U))];
    vlSelfRef.top__DOT__SrcB = (((0x40U & vlSelfRef.top__DOT__instr)
                                  ? ((1U & (~ (vlSelfRef.top__DOT__instr 
                                               >> 5U))) 
                                     || ((1U & (vlSelfRef.top__DOT__instr 
                                                >> 4U)) 
                                         || ((8U & vlSelfRef.top__DOT__instr)
                                              ? ((1U 
                                                  & (~ 
                                                     (vlSelfRef.top__DOT__instr 
                                                      >> 2U))) 
                                                 || ((1U 
                                                      & (~ 
                                                         (vlSelfRef.top__DOT__instr 
                                                          >> 1U))) 
                                                     || (1U 
                                                         & (~ vlSelfRef.top__DOT__instr))))
                                              : ((1U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 2U)) 
                                                 || ((1U 
                                                      & (~ 
                                                         (vlSelfRef.top__DOT__instr 
                                                          >> 1U))) 
                                                     || (1U 
                                                         & (~ vlSelfRef.top__DOT__instr)))))))
                                  : ((1U & (~ (vlSelfRef.top__DOT__instr 
                                               >> 5U))) 
                                     || ((1U & (~ (vlSelfRef.top__DOT__instr 
                                                   >> 4U))) 
                                         || ((1U & 
                                              (vlSelfRef.top__DOT__instr 
                                               >> 3U)) 
                                             || ((1U 
                                                  & (vlSelfRef.top__DOT__instr 
                                                     >> 2U)) 
                                                 || ((1U 
                                                      & (~ 
                                                         (vlSelfRef.top__DOT__instr 
                                                          >> 1U))) 
                                                     || (1U 
                                                         & (~ vlSelfRef.top__DOT__instr))))))))
                                 ? vlSelfRef.top__DOT__ExtImm
                                 : vlSelfRef.top__DOT__RD2);
    vlSelfRef.top__DOT__ALUResult = ((8U & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                      ? ((4U & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                          ? 0U : ((2U 
                                                   & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                    ? 
                                                   ((vlSelfRef.top__DOT__RD1 
                                                     < vlSelfRef.top__DOT__SrcB)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelfRef.top__DOT__RD1, vlSelfRef.top__DOT__SrcB)
                                                     ? 1U
                                                     : 0U))))
                                      : ((4U & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                          ? ((2U & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__RD1, 
                                                                (0x1fU 
                                                                 & vlSelfRef.top__DOT__SrcB))
                                                  : 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelfRef.top__DOT__SrcB)))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                  ? 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelfRef.top__DOT__SrcB))
                                                  : 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  & vlSelfRef.top__DOT__SrcB)))
                                          : ((2U & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                  ? 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  | vlSelfRef.top__DOT__SrcB)
                                                  : 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  ^ vlSelfRef.top__DOT__SrcB))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                  ? 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  - vlSelfRef.top__DOT__SrcB)
                                                  : 
                                                 (vlSelfRef.top__DOT__RD1 
                                                  + vlSelfRef.top__DOT__SrcB)))));
    vlSelfRef.top__DOT__miss_stall = 0U;
    vlSelfRef.top__DOT__pc__DOT__out = ((2U & (IData)(vlSelfRef.top__DOT__PCSrc))
                                         ? ((1U & (IData)(vlSelfRef.top__DOT__PCSrc))
                                             ? vlSelfRef.top__DOT__ALUResult
                                             : (((1U 
                                                  & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
                                                     >> 3U)) 
                                                 && ((4U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                        ? 
                                                       (vlSelfRef.top__DOT__RD1 
                                                        >= vlSelfRef.top__DOT__SrcB)
                                                        : 
                                                       (vlSelfRef.top__DOT__RD1 
                                                        < vlSelfRef.top__DOT__SrcB))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                        ? 
                                                       VL_GTES_III(32, vlSelfRef.top__DOT__RD1, vlSelfRef.top__DOT__SrcB)
                                                        : 
                                                       VL_LTS_III(32, vlSelfRef.top__DOT__RD1, vlSelfRef.top__DOT__SrcB)))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.top__DOT__ALUctrl) 
                                                          >> 1U)) 
                                                      && ((1U 
                                                           & (IData)(vlSelfRef.top__DOT__ALUctrl))
                                                           ? 
                                                          (vlSelfRef.top__DOT__RD1 
                                                           != vlSelfRef.top__DOT__SrcB)
                                                           : 
                                                          (vlSelfRef.top__DOT__RD1 
                                                           == vlSelfRef.top__DOT__SrcB)))))
                                                 ? vlSelfRef.top__DOT____Vcellinp__pc__PCTarget
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelfRef.top__DOT__PC)))
                                         : ((1U & (IData)(vlSelfRef.top__DOT__PCSrc))
                                             ? vlSelfRef.top__DOT____Vcellinp__pc__PCTarget
                                             : ((IData)(4U) 
                                                + vlSelfRef.top__DOT__PC)));
    vlSelfRef.top__DOT__cached_datamem__DOT__out_cache = 0U;
    if (((vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem
          [(0xffU & (vlSelfRef.top__DOT__ALUResult 
                     >> 3U))][2U] >> 0x16U) & ((0x1fffffU 
                                                & vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem
                                                [(0xffU 
                                                  & (vlSelfRef.top__DOT__ALUResult 
                                                     >> 3U))][2U]) 
                                               == (vlSelfRef.top__DOT__ALUResult 
                                                   >> 0xbU)))) {
        if (vlSelfRef.top__DOT__MemWrite) {
            vlSelfRef.top__DOT__miss_stall = 0U;
        }
        if (((1U & (~ (vlSelfRef.top__DOT__instr >> 6U))) 
             && ((1U & (~ (vlSelfRef.top__DOT__instr 
                           >> 5U))) && ((1U & (~ (vlSelfRef.top__DOT__instr 
                                                  >> 4U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__instr 
                                                    >> 3U))) 
                                            && ((1U 
                                                 & (~ 
                                                    (vlSelfRef.top__DOT__instr 
                                                     >> 2U))) 
                                                && ((1U 
                                                     & (vlSelfRef.top__DOT__instr 
                                                        >> 1U)) 
                                                    && (1U 
                                                        & vlSelfRef.top__DOT__instr)))))))) {
            vlSelfRef.top__DOT__cached_datamem__DOT__out_cache 
                = ((4U & vlSelfRef.top__DOT__ALUResult)
                    ? vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem
                   [(0xffU & (vlSelfRef.top__DOT__ALUResult 
                              >> 3U))][1U] : vlSelfRef.top__DOT__cached_datamem__DOT__write_through_cache__DOT__cache_mem
                   [(0xffU & (vlSelfRef.top__DOT__ALUResult 
                              >> 3U))][0U]);
        }
    } else {
        vlSelfRef.top__DOT__miss_stall = 1U;
    }
    vlSelfRef.top__DOT__cached_datamem__DOT__byte3 
        = (vlSelfRef.top__DOT__cached_datamem__DOT__out_cache 
           >> 0x18U);
    vlSelfRef.top__DOT__cached_datamem__DOT__byte2 
        = (0xffU & (vlSelfRef.top__DOT__cached_datamem__DOT__out_cache 
                    >> 0x10U));
    vlSelfRef.top__DOT__cached_datamem__DOT__byte1 
        = (0xffU & (vlSelfRef.top__DOT__cached_datamem__DOT__out_cache 
                    >> 8U));
    vlSelfRef.top__DOT__cached_datamem__DOT__byte0 
        = (0xffU & vlSelfRef.top__DOT__cached_datamem__DOT__out_cache);
    vlSelfRef.top__DOT__RD = ((1U == (IData)(vlSelfRef.top__DOT__modeBU))
                               ? vlSelfRef.top__DOT__cached_datamem__DOT__out_cache
                               : ((3U == (IData)(vlSelfRef.top__DOT__modeBU))
                                   ? ((2U & vlSelfRef.top__DOT__ALUResult)
                                       ? ((1U & vlSelfRef.top__DOT__ALUResult)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.top__DOT__cached_datamem__DOT__byte3) 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.top__DOT__cached_datamem__DOT__byte3))
                                           : (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.top__DOT__cached_datamem__DOT__byte2) 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.top__DOT__cached_datamem__DOT__byte2)))
                                       : ((1U & vlSelfRef.top__DOT__ALUResult)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.top__DOT__cached_datamem__DOT__byte1) 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.top__DOT__cached_datamem__DOT__byte1))
                                           : (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.top__DOT__cached_datamem__DOT__byte0) 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.top__DOT__cached_datamem__DOT__byte0))))
                                   : ((5U == (IData)(vlSelfRef.top__DOT__modeBU))
                                       ? ((2U & vlSelfRef.top__DOT__ALUResult)
                                           ? ((1U & vlSelfRef.top__DOT__ALUResult)
                                               ? (IData)(vlSelfRef.top__DOT__cached_datamem__DOT__byte3)
                                               : (IData)(vlSelfRef.top__DOT__cached_datamem__DOT__byte2))
                                           : ((1U & vlSelfRef.top__DOT__ALUResult)
                                               ? (IData)(vlSelfRef.top__DOT__cached_datamem__DOT__byte1)
                                               : (IData)(vlSelfRef.top__DOT__cached_datamem__DOT__byte0)))
                                       : vlSelfRef.top__DOT__cached_datamem__DOT__out_cache)));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
