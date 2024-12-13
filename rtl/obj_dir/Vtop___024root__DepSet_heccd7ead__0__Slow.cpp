// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_hdc5b14f5_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter = 2U;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter = 2U;
    VL_WRITEF_NX("Loading rom.\n",0);
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(9, Vtop__ConstPool__CONST_hdc5b14f5_0)
                 ,  &(vlSelfRef.top__DOT__instruction_memory__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF_NX("ROM loaded successfully.\n",0);
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x7369616eU;
    __Vtemp_1[2U] = 0x67617573U;
    __Vtemp_1[3U] = 0x6c65732fU;
    __Vtemp_1[4U] = 0x72794669U;
    __Vtemp_1[5U] = 0x4d656d6fU;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                 ,  &(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array)
                 , 0x10000U, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
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
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->a1 = VL_RAND_RESET_I(32);
    vlSelf->a2 = VL_RAND_RESET_I(32);
    vlSelf->a3 = VL_RAND_RESET_I(32);
    vlSelf->a4 = VL_RAND_RESET_I(32);
    vlSelf->a5 = VL_RAND_RESET_I(32);
    vlSelf->a6 = VL_RAND_RESET_I(32);
    vlSelf->a7 = VL_RAND_RESET_I(32);
    vlSelf->t0 = VL_RAND_RESET_I(32);
    vlSelf->t1 = VL_RAND_RESET_I(32);
    vlSelf->t2 = VL_RAND_RESET_I(32);
    vlSelf->t3 = VL_RAND_RESET_I(32);
    vlSelf->t4 = VL_RAND_RESET_I(32);
    vlSelf->t5 = VL_RAND_RESET_I(32);
    vlSelf->t6 = VL_RAND_RESET_I(32);
    vlSelf->s0 = VL_RAND_RESET_I(32);
    vlSelf->s1 = VL_RAND_RESET_I(32);
    vlSelf->s2 = VL_RAND_RESET_I(32);
    vlSelf->s3 = VL_RAND_RESET_I(32);
    vlSelf->s4 = VL_RAND_RESET_I(32);
    vlSelf->s5 = VL_RAND_RESET_I(32);
    vlSelf->s6 = VL_RAND_RESET_I(32);
    vlSelf->s7 = VL_RAND_RESET_I(32);
    vlSelf->s8 = VL_RAND_RESET_I(32);
    vlSelf->s9 = VL_RAND_RESET_I(32);
    vlSelf->s10 = VL_RAND_RESET_I(32);
    vlSelf->s11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__trigger = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__a1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__a2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__a3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__a4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__a5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__a6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__a7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__t0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__t1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__t2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__t3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__t4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__t5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__t6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__s0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__s1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__s2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__s3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__s4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__s5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__s6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__s7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__s8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__s9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__s10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__s11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD1E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__modeAddrE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__JALRE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__modeAddrM = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ReadDataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ReadDataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcW = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__PCPlus4W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ExtImmD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ExtImmE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__RegWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUControlD = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ALUControlE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ALUSrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__MemWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__modeAddrD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__Zero = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemReadD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemReadE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemReadM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JumpD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BranchD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JALRD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WriteDataE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Rs1D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Rs2D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdD = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ResultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SrcAE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ForwardAE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ForwardBE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flushDE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__miss_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flushBranch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BPU_Src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PC_predict = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__hazard_unit__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__hazard_unit__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__hazard_unit__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__hazard_unit__DOT__Rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__hazard_unit__DOT__Rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__hazard_unit__DOT__Rs1D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__hazard_unit__DOT__Rs2D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__hazard_unit__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__MemReadE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__MemReadM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__flushBranch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__miss_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__ForwardAE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__hazard_unit__DOT__ForwardBE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__hazard_unit__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__flushDE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_prediction_unit__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_prediction_unit__DOT__RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__branch_prediction_unit__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__branch_prediction_unit__DOT__ZeroE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_prediction_unit__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_prediction_unit__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_prediction_unit__DOT__flushBranch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPU = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPUSrc = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue.atDefault().data());
    VL_RAND_RESET_W(66, vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch);
    VL_RAND_RESET_W(66, vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch);
    vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__PC_mux__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PC_mux__DOT__JALRE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PC_mux__DOT__PCPlus4F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_mux__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_mux__DOT__PCTarget = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_mux__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__BPU_mux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BPU_mux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__BPU_mux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__BPU_mux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__program_counter__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__program_counter__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__program_counter__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__program_counter__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__program_counter__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instruction_memory__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instruction_memory__DOT__instr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->top__DOT__instruction_memory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__regfile__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__regfile__DOT__AD1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__regfile__DOT__AD2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__regfile__DOT__AD3 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__regfile__DOT__WE3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__regfile__DOT__WD3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__a1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__a2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__a3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__a4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__a5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__a6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__a7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__t0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__t1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__t2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__t3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__t4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__t5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__t6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__s0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__s1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__s2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__s3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__s4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__s5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__s6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__s7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__s8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__s9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__s10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__s11 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__regfile__DOT__registerfile_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__control_unit__DOT__InstrD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__control_unit__DOT__MemWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__JumpD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__BranchD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__JALRD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__ALUControlD = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__control_unit__DOT__ALUSrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__control_unit__DOT__RegWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__modeAddr = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__control_unit__DOT__MemReadD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__control_unit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__control_unit__DOT__funct7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__control_unit__DOT__Store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__Load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__funct7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__sign_extend__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__sign_extend__DOT__ImmInput = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__sign_extend__DOT__ImmExt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardAE_mux__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__forwardAE_mux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardAE_mux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardAE_mux__DOT__in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardAE_mux__DOT__in3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardAE_mux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardBE_mux__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__forwardBE_mux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardBE_mux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardBE_mux__DOT__in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardBE_mux__DOT__in3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardBE_mux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu__DOT__SrcA = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu__DOT__SrcB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu__DOT__ALUctrl = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__alu__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu__DOT__ZeroE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__WE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__RE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__modeAddr = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cached_data_memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cached_data_memory__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cached_data_memory__DOT__trigger = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__miss_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cached_data_memory__DOT__out_cache = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__modeAddr = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__WE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__RE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__trigger = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__cache_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
            VL_RAND_RESET_W(86, vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[__Vi0].__PVT__way[__Vi2]);
        }
    }
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__set = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__hit0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__hit1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cached_data_memory__DOT__cache__DOT__replace_bit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__regfile_mux__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__regfile_mux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile_mux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile_mux__DOT__in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile_mux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_FD__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_FD__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_FD__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_FD__DOT__RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_FD__DOT__InstrD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_FD__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_FD__DOT__PCD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_FD__DOT__PCPlus4F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_FD__DOT__PCPlus4D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_DE__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__flushBranch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__MemReadD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__MemReadE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__RegWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__RegWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipeline_DE__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipeline_DE__DOT__MemWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__MemWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__JumpD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__BranchD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__JALRD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__JALRE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__ALUControlD = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipeline_DE__DOT__ALUControlE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__pipeline_DE__DOT__ALUSrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__ALUSrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_DE__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_DE__DOT__RD1E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_DE__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_DE__DOT__RD2E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_DE__DOT__PCD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_DE__DOT__PCE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_DE__DOT__Rs1D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_DE__DOT__Rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_DE__DOT__Rs2D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_DE__DOT__Rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_DE__DOT__RdD = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_DE__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_DE__DOT__ExtImmD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_DE__DOT__ExtImmE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_DE__DOT__PCPlus4D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_DE__DOT__PCPlus4E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_DE__DOT__modeAddrD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipeline_DE__DOT__modeAddrE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipeline_EM__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_EM__DOT__RegWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_EM__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_EM__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipeline_EM__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipeline_EM__DOT__MemWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_EM__DOT__MemWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_EM__DOT__ALUResultE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_EM__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_EM__DOT__WriteDataE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_EM__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_EM__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_EM__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_EM__DOT__PCPlus4E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_EM__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_EM__DOT__modeAddrE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipeline_EM__DOT__modeAddrM = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipeline_EM__DOT__MemReadE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_EM__DOT__MemReadM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_MW__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_MW__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_MW__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_MW__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipeline_MW__DOT__ResultSrcW = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipeline_MW__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_MW__DOT__ALUResultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_MW__DOT__ReadDataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_MW__DOT__ReadDataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_MW__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_MW__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_MW__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_MW__DOT__PCPlus4W = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
