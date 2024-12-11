// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcached_datamem.h for the primary calling header

#include "Vcached_datamem__pch.h"
#include "Vcached_datamem___024root.h"

VL_ATTR_COLD void Vcached_datamem___024root___eval_static(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcached_datamem___024root___eval_initial__TOP(Vcached_datamem___024root* vlSelf);

VL_ATTR_COLD void Vcached_datamem___024root___eval_initial(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcached_datamem___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

extern const VlWide<9>/*287:0*/ Vcached_datamem__ConstPool__CONST_h27b19929_0;

VL_ATTR_COLD void Vcached_datamem___024root___eval_initial__TOP(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(9, Vcached_datamem__ConstPool__CONST_h27b19929_0)
                 ,  &(vlSelfRef.cached_datamem__DOT__cache__DOT__ram_array)
                 , 0U, 0x1ffffU);
}

VL_ATTR_COLD void Vcached_datamem___024root___eval_final(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcached_datamem___024root___dump_triggers__stl(Vcached_datamem___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcached_datamem___024root___eval_phase__stl(Vcached_datamem___024root* vlSelf);

VL_ATTR_COLD void Vcached_datamem___024root___eval_settle(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vcached_datamem___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("cached_datamem.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcached_datamem___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcached_datamem___024root___dump_triggers__stl(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcached_datamem___024root___ico_sequent__TOP__0(Vcached_datamem___024root* vlSelf);
VL_ATTR_COLD void Vcached_datamem___024root____Vm_traceActivitySetAll(Vcached_datamem___024root* vlSelf);

VL_ATTR_COLD void Vcached_datamem___024root___eval_stl(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcached_datamem___024root___ico_sequent__TOP__0(vlSelf);
        Vcached_datamem___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vcached_datamem___024root___eval_triggers__stl(Vcached_datamem___024root* vlSelf);

VL_ATTR_COLD bool Vcached_datamem___024root___eval_phase__stl(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcached_datamem___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcached_datamem___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcached_datamem___024root___dump_triggers__ico(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcached_datamem___024root___dump_triggers__act(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcached_datamem___024root___dump_triggers__nba(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcached_datamem___024root____Vm_traceActivitySetAll(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vcached_datamem___024root___ctor_var_reset(Vcached_datamem___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcached_datamem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcached_datamem___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->WE = VL_RAND_RESET_I(1);
    vlSelf->RE = VL_RAND_RESET_I(1);
    vlSelf->modeAddr = VL_RAND_RESET_I(3);
    vlSelf->addr = VL_RAND_RESET_I(32);
    vlSelf->write_data = VL_RAND_RESET_I(32);
    vlSelf->miss_stall = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(32);
    vlSelf->cached_datamem__DOT__out_cache = VL_RAND_RESET_I(32);
    vlSelf->cached_datamem__DOT__byte3 = VL_RAND_RESET_I(8);
    vlSelf->cached_datamem__DOT__byte2 = VL_RAND_RESET_I(8);
    vlSelf->cached_datamem__DOT__byte1 = VL_RAND_RESET_I(8);
    vlSelf->cached_datamem__DOT__byte0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->cached_datamem__DOT__cache__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        VL_RAND_RESET_W(87, vlSelf->cached_datamem__DOT__cache__DOT__cache_mem[__Vi0]);
    }
    vlSelf->cached_datamem__DOT__cache__DOT__current_state = 0;
    vlSelf->cached_datamem__DOT__cache__DOT__next_state = 0;
    VL_RAND_RESET_W(87, vlSelf->cached_datamem__DOT__cache__DOT__cache_line);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
