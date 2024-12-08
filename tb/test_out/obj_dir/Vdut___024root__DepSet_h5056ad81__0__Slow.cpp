// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

VL_ATTR_COLD void Vdut___024root___eval_static(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdut___024root___eval_initial__TOP(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_initial(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdut___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vdut___024root___eval_initial__TOP(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    VL_WRITEF_NX("Loading rom.\n",0);
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.top__DOT__instruction_memory__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF_NX("ROM loaded successfully.\nLoading ram.\n",0);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6d6f7279U;
    __Vtemp_2[2U] = 0x615f6d65U;
    __Vtemp_2[3U] = 0x646174U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.top__DOT__data_memory__DOT__ram_array)
                 , 0U, 0x1ffffU);
    VL_WRITEF_NX("Ram loaded\n",0);
}

VL_ATTR_COLD void Vdut___024root___eval_final(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__stl(Vdut___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdut___024root___eval_phase__stl(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_settle(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_settle\n"); );
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
            Vdut___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/root/Documents/RISCV-Group23/rtl_single_cycle/top.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdut___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__stl(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vdut___024root___stl_sequent__TOP__0(Vdut___024root* vlSelf);
VL_ATTR_COLD void Vdut___024root____Vm_traceActivitySetAll(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_stl(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdut___024root___stl_sequent__TOP__0(vlSelf);
        Vdut___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 128> Vdut__ConstPool__TABLE_h45f37922_0;

VL_ATTR_COLD void Vdut___024root___stl_sequent__TOP__0(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelfRef.top__DOT__RD1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [(0x1fU & (vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 
                   >> 0xfU))];
    vlSelfRef.top__DOT__instr = ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                  [(0xffffU & ((IData)(3U) 
                                               + vlSelfRef.top__DOT__PC))] 
                                  << 0x18U) | vlSelfRef.__VdfgRegularize_hd87f99a1_0_1);
    if ((0x40U & vlSelfRef.top__DOT__instr)) {
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
        if ((0x20U & vlSelfRef.top__DOT__instr)) {
            if ((0x10U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__PCSrc = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((8U & vlSelfRef.top__DOT__instr)) {
                if ((4U & vlSelfRef.top__DOT__instr)) {
                    if ((2U & vlSelfRef.top__DOT__instr)) {
                        if ((1U & vlSelfRef.top__DOT__instr)) {
                            vlSelfRef.top__DOT__PCSrc = 1U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ResultSrc = 2U;
                            vlSelfRef.top__DOT__ImmSrc = 4U;
                        } else {
                            vlSelfRef.top__DOT__PCSrc = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ResultSrc = 3U;
                            vlSelfRef.top__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelfRef.top__DOT__PCSrc = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelfRef.top__DOT__PCSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelfRef.top__DOT__instr)) {
                if ((2U & vlSelfRef.top__DOT__instr)) {
                    if ((1U & vlSelfRef.top__DOT__instr)) {
                        vlSelfRef.top__DOT__PCSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 2U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                        vlSelfRef.top__DOT__ImmSrc = 5U;
                    } else {
                        vlSelfRef.top__DOT__PCSrc = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelfRef.top__DOT__PCSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else if ((2U & vlSelfRef.top__DOT__instr)) {
                if ((1U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__PCSrc = 2U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 1U;
                    vlSelfRef.top__DOT__ImmSrc = 2U;
                } else {
                    vlSelfRef.top__DOT__PCSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelfRef.top__DOT__PCSrc = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
        } else {
            vlSelfRef.top__DOT__PCSrc = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__ResultSrc = 3U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            vlSelfRef.top__DOT__ImmSrc = 7U;
        }
    } else {
        if ((0x20U & vlSelfRef.top__DOT__instr)) {
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
            if ((0x10U & vlSelfRef.top__DOT__instr)) {
                if ((8U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                } else if ((4U & vlSelfRef.top__DOT__instr)) {
                    if ((2U & vlSelfRef.top__DOT__instr)) {
                        if ((1U & vlSelfRef.top__DOT__instr)) {
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ResultSrc = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                            vlSelfRef.top__DOT__ImmSrc = 3U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ResultSrc = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                            vlSelfRef.top__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                    }
                } else {
                    if ((2U & vlSelfRef.top__DOT__instr)) {
                        if ((1U & vlSelfRef.top__DOT__instr)) {
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ResultSrc = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__ResultSrc = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else if ((8U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((2U & vlSelfRef.top__DOT__instr)) {
                if ((1U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 1U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
        } else if ((0x10U & vlSelfRef.top__DOT__instr)) {
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
            if ((8U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelfRef.top__DOT__instr)) {
                if ((2U & vlSelfRef.top__DOT__instr)) {
                    if ((1U & vlSelfRef.top__DOT__instr)) {
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                        vlSelfRef.top__DOT__ImmSrc = 3U;
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__ResultSrc = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        vlSelfRef.top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else if ((2U & vlSelfRef.top__DOT__instr)) {
                if ((1U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
        } else {
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
            if ((8U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelfRef.top__DOT__instr)) {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            } else if ((2U & vlSelfRef.top__DOT__instr)) {
                if ((1U & vlSelfRef.top__DOT__instr)) {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 1U;
                    vlSelfRef.top__DOT__ResultSrc = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    vlSelfRef.top__DOT__ImmSrc = 0U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__ResultSrc = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelfRef.top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__ResultSrc = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelfRef.top__DOT__ImmSrc = 7U;
            }
        }
        vlSelfRef.top__DOT__PCSrc = 0U;
    }
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
    vlSelfRef.top__DOT__RD2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [(0x1fU & (vlSelfRef.top__DOT__instr >> 0x14U))];
    __Vtableidx1 = (((0x40U & (vlSelfRef.top__DOT__instr 
                               >> 0x18U)) | (0x20U 
                                             & vlSelfRef.top__DOT__instr)) 
                    | ((0x1cU & (vlSelfRef.top__DOT__instr 
                                 >> 0xaU)) | (IData)(vlSelfRef.top__DOT__control_unit__DOT__ALUOp)));
    vlSelfRef.top__DOT__ALUctrl = Vdut__ConstPool__TABLE_h45f37922_0
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
    if ((0x100U == vlSelfRef.top__DOT__ALUResult)) {
        vlSelfRef.top__DOT__RD = vlSelfRef.trigger;
        vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
    } else if ((1U == (IData)(vlSelfRef.top__DOT__ResultSrc))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__modeBU))) {
            if ((2U & (IData)(vlSelfRef.top__DOT__modeBU))) {
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            } else if ((1U & (IData)(vlSelfRef.top__DOT__modeBU))) {
                vlSelfRef.top__DOT__RD = vlSelfRef.top__DOT__data_memory__DOT__ram_array
                    [(0x1ffffU & vlSelfRef.top__DOT__ALUResult)];
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            } else {
                vlSelfRef.top__DOT__RD = ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                           [(0x1ffffU 
                                             & vlSelfRef.top__DOT__ALUResult)] 
                                           << 8U) | 
                                          vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                          [(0x1ffffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.top__DOT__ALUResult))]);
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            }
        } else if ((2U & (IData)(vlSelfRef.top__DOT__modeBU))) {
            if ((1U & (IData)(vlSelfRef.top__DOT__modeBU))) {
                vlSelfRef.top__DOT__RD = (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                                          [
                                                          (0x1ffffU 
                                                           & vlSelfRef.top__DOT__ALUResult)] 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                          [(0x1ffffU 
                                            & vlSelfRef.top__DOT__ALUResult)]);
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            } else {
                vlSelfRef.top__DOT__RD = (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                                          [
                                                          (0x1ffffU 
                                                           & vlSelfRef.top__DOT__ALUResult)] 
                                                          >> 7U)))) 
                                           << 0x10U) 
                                          | ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                              [(0x1ffffU 
                                                & vlSelfRef.top__DOT__ALUResult)] 
                                              << 8U) 
                                             | vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                             [(0x1ffffU 
                                               & ((IData)(1U) 
                                                  + vlSelfRef.top__DOT__ALUResult))]));
                vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
            }
        } else if ((1U & (IData)(vlSelfRef.top__DOT__modeBU))) {
            vlSelfRef.top__DOT__RD = (((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                        [(0x1ffffU 
                                          & vlSelfRef.top__DOT__ALUResult)] 
                                        << 0x18U) | 
                                       (vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                        [(0x1ffffU 
                                          & ((IData)(1U) 
                                             + vlSelfRef.top__DOT__ALUResult))] 
                                        << 0x10U)) 
                                      | ((vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                          [(0x1ffffU 
                                            & ((IData)(2U) 
                                               + vlSelfRef.top__DOT__ALUResult))] 
                                          << 8U) | 
                                         vlSelfRef.top__DOT__data_memory__DOT__ram_array
                                         [(0x1ffffU 
                                           & ((IData)(3U) 
                                              + vlSelfRef.top__DOT__ALUResult))]));
            vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
        } else {
            vlSelfRef.top__DOT__Result = vlSelfRef.top__DOT__RD;
        }
    } else {
        vlSelfRef.top__DOT__Result = ((0U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                       ? vlSelfRef.top__DOT__ALUResult
                                       : ((2U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                           ? ((IData)(4U) 
                                              + vlSelfRef.top__DOT__ALUResult)
                                           : vlSelfRef.top__DOT__ALUResult));
    }
    vlSelfRef.top__DOT__Result = ((0U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                   ? vlSelfRef.top__DOT__ALUResult
                                   : ((1U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                       ? vlSelfRef.top__DOT__RD
                                       : ((2U == (IData)(vlSelfRef.top__DOT__ResultSrc))
                                           ? ((IData)(4U) 
                                              + vlSelfRef.top__DOT__PC)
                                           : vlSelfRef.top__DOT__ALUResult)));
}

VL_ATTR_COLD void Vdut___024root___eval_triggers__stl(Vdut___024root* vlSelf);

VL_ATTR_COLD bool Vdut___024root___eval_phase__stl(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdut___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdut___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__ico(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vdut___024root___dump_triggers__act(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__nba(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdut___024root____Vm_traceActivitySetAll(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vdut___024root___ctor_var_reset(Vdut___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ctor_var_reset\n"); );
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
    vlSelf->top__DOT__PCSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ExtImm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUctrl = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__modeBU = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SrcB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellinp__pc__PCTarget = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pc__DOT__out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__regfile__DOT__registerfile_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->top__DOT__instruction_memory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__control_unit__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__control_unit__DOT__Store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__Load = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = VL_RAND_RESET_I(16);
    vlSelf->__VdfgRegularize_hd87f99a1_0_1 = VL_RAND_RESET_I(24);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
