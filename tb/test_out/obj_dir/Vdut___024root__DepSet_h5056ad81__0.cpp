// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

void Vdut___024root___ico_sequent__TOP__0(Vdut___024root* vlSelf);

void Vdut___024root___eval_ico(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdut___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vdut___024root___eval_triggers__ico(Vdut___024root* vlSelf);

bool Vdut___024root___eval_phase__ico(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdut___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdut___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdut___024root___eval_act(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdut___024root___nba_sequent__TOP__0(Vdut___024root* vlSelf);
void Vdut___024root___nba_sequent__TOP__1(Vdut___024root* vlSelf);
void Vdut___024root___nba_comb__TOP__0(Vdut___024root* vlSelf);

void Vdut___024root___eval_nba(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdut___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdut___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdut___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__1(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__1\n"); );
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
    if (vlSelfRef.top__DOT__BranchE) {
        if ((2U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U])) {
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter 
                = (3U & (((IData)(vlSelfRef.top__DOT__Zero) 
                          == (1U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U]))
                          ? ((3U == (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))
                              ? 3U : ((IData)(1U) + (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter)))
                          : ((0U == (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))
                              ? 0U : ((IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter) 
                                      - (IData)(1U)))));
        } else {
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter 
                = (3U & (((IData)(vlSelfRef.top__DOT__Zero) 
                          == (1U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U]))
                          ? ((3U == (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))
                              ? 3U : ((IData)(1U) + (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter)))
                          : ((0U == (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))
                              ? 0U : ((IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter) 
                                      - (IData)(1U)))));
        }
        VL_ASSIGN_W(66,vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch, vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue.at(0U));
    }
    if (vlSelfRef.top__DOT__RegWriteW) {
        __VdlyVal__top__DOT__regfile__DOT__registerfile_array__v0 
            = ((0U == (IData)(vlSelfRef.top__DOT__RdW))
                ? 0U : vlSelfRef.top__DOT__ResultW);
        __VdlyDim0__top__DOT__regfile__DOT__registerfile_array__v0 
            = vlSelfRef.top__DOT__RdW;
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

VL_INLINE_OPT void Vdut___024root___nba_comb__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((0x63U == (0x7fU & vlSelfRef.top__DOT__InstrF)) 
         & (~ (IData)(vlSelfRef.top__DOT__JumpE)))) {
        vlSelfRef.top__DOT__PC_predict = (vlSelfRef.top__DOT__PCF 
                                          + (((- (IData)(
                                                         (vlSelfRef.top__DOT__InstrF 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelfRef.top__DOT__InstrF 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelfRef.top__DOT__InstrF 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelfRef.top__DOT__InstrF 
                                                         >> 7U))))));
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[1U] 
            = ((3U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[1U]) 
               | (vlSelfRef.top__DOT__PCF << 2U));
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[2U] 
            = (vlSelfRef.top__DOT__PCF >> 0x1eU);
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
            = ((3U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]) 
               | ((vlSelfRef.top__DOT__PCF + (((- (IData)(
                                                          (vlSelfRef.top__DOT__InstrF 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelfRef.top__DOT__InstrF 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelfRef.top__DOT__InstrF 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelfRef.top__DOT__InstrF 
                                                          >> 7U)))))) 
                  << 2U));
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[1U] 
            = ((0xfffffffcU & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[1U]) 
               | ((vlSelfRef.top__DOT__PCF + (((- (IData)(
                                                          (vlSelfRef.top__DOT__InstrF 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelfRef.top__DOT__InstrF 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelfRef.top__DOT__InstrF 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelfRef.top__DOT__InstrF 
                                                          >> 7U)))))) 
                  >> 0x1eU));
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
            = ((0xfffffffdU & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]) 
               | (2U & (vlSelfRef.top__DOT__InstrF 
                        >> 0x1eU)));
        if ((vlSelfRef.top__DOT__InstrF >> 0x1fU)) {
            if ((2U <= (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))) {
                vlSelfRef.top__DOT__BPU_Src = 1U;
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                    = (1U | vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
            } else {
                vlSelfRef.top__DOT__BPU_Src = 0U;
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                    = (0xfffffffeU & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
            }
        } else if ((2U <= (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))) {
            vlSelfRef.top__DOT__BPU_Src = 1U;
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                = (1U | vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
        } else {
            vlSelfRef.top__DOT__BPU_Src = 0U;
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                = (0xfffffffeU & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
        }
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue.push_back(
                                                                                VL_CVT_W_A(vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch, vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue
                                                                                .atDefault()));
    } else {
        vlSelfRef.top__DOT__BPU_Src = 0U;
    }
    if (vlSelfRef.top__DOT__BranchE) {
        if (((1U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U]) 
             == (IData)(vlSelfRef.top__DOT__Zero))) {
            vlSelfRef.top__DOT__flushBranch = 0U;
            if ((1U & (~ (vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U] 
                          >> 1U)))) {
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpDecisionCorrect = 1U;
            }
            if ((2U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U])) {
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__backwardJumpDecisionCorrect = 1U;
            }
        }
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue.pop_front();
        if (((1U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U]) 
             != (IData)(vlSelfRef.top__DOT__Zero))) {
            vlSelfRef.top__DOT__flushBranch = 1U;
            vlSelfRef.top__DOT__BPU_Src = 1U;
            vlSelfRef.top__DOT__PC_predict = ((IData)(vlSelfRef.top__DOT__Zero)
                                               ? ((
                                                   vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
                                                   << 0x1eU) 
                                                  | (vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U] 
                                                     >> 2U))
                                               : ((IData)(4U) 
                                                  + 
                                                  ((vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[2U] 
                                                    << 0x1eU) 
                                                   | (vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
                                                      >> 2U))));
        }
    } else {
        vlSelfRef.top__DOT__flushBranch = 0U;
    }
    vlSelfRef.top__DOT__flushDE = ((IData)(vlSelfRef.top__DOT__flushBranch) 
                                   | (IData)(vlSelfRef.top__DOT__JumpE));
    vlSelfRef.top__DOT__stall = (((IData)(vlSelfRef.top__DOT__MemReadE) 
                                  & (((IData)(vlSelfRef.top__DOT__RdE) 
                                      == (0x1fU & (vlSelfRef.top__DOT__InstrD 
                                                   >> 0xfU))) 
                                     | ((IData)(vlSelfRef.top__DOT__RdE) 
                                        == (0x1fU & 
                                            (vlSelfRef.top__DOT__InstrD 
                                             >> 0x14U))))) 
                                 | (IData)(vlSelfRef.top__DOT__miss_stall));
    vlSelfRef.top__DOT__flush = (((IData)(vlSelfRef.top__DOT__stall) 
                                  | (IData)(vlSelfRef.top__DOT__flushBranch)) 
                                 | (IData)(vlSelfRef.top__DOT__JumpE));
}

void Vdut___024root___eval_triggers__act(Vdut___024root* vlSelf);

bool Vdut___024root___eval_phase__act(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdut___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdut___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdut___024root___eval_phase__nba(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdut___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__ico(Vdut___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__nba(Vdut___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__act(Vdut___024root* vlSelf);
#endif  // VL_DEBUG

void Vdut___024root___eval(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval\n"); );
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
            Vdut___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/theoshah04/Documents/RISCV-Group23/rtl_pipelining/top.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdut___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdut___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/theoshah04/Documents/RISCV-Group23/rtl_pipelining/top.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdut___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/theoshah04/Documents/RISCV-Group23/rtl_pipelining/top.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdut___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdut___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdut___024root___eval_debug_assertions(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_debug_assertions\n"); );
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
