// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hefa43a3a__0;
    // Body
    __Vtemp_hefa43a3a__0[0U] = 0x2e686578U;
    __Vtemp_hefa43a3a__0[1U] = 0x616d656dU;
    __Vtemp_hefa43a3a__0[2U] = 0x646174U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hefa43a3a__0)
                 ,  &(vlSelf->top__DOT__data_memory__DOT__ram_array)
                 , 0x10000U, 0x1ffffU);
    VL_READMEM_N(true, 8, 4096, 3217031168, std::string{"F1.mem"}
                 ,  &(vlSelf->top__DOT__instruction_memory__DOT__mem)
                 , 3217031168, ~0ULL);
    VL_WRITEF("INFO: Instruction memory loaded\n");
    vlSelf->top__DOT__instruction_memory__DOT__word_addr 
        = (0xfffU & vlSelf->top__DOT__PC);
    vlSelf->top__DOT__instr = ((vlSelf->top__DOT__instruction_memory__DOT__mem
                                [(0xfffU & ((IData)(3U) 
                                            + (IData)(vlSelf->top__DOT__instruction_memory__DOT__word_addr)))] 
                                << 0x18U) | ((vlSelf->top__DOT__instruction_memory__DOT__mem
                                              [(0xfffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->top__DOT__instruction_memory__DOT__word_addr)))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__instruction_memory__DOT__mem
                                                 [(0xfffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__instruction_memory__DOT__word_addr)))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__instruction_memory__DOT__mem
                                                [vlSelf->top__DOT__instruction_memory__DOT__word_addr])));
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h2f1e8d19_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->a0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xaU];
    vlSelf->a1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xbU];
    vlSelf->a7 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x11U];
    vlSelf->top__DOT__instruction_memory__DOT__word_addr 
        = (0xfffU & vlSelf->top__DOT__PC);
    vlSelf->top__DOT__instr = ((vlSelf->top__DOT__instruction_memory__DOT__mem
                                [(0xfffU & ((IData)(3U) 
                                            + (IData)(vlSelf->top__DOT__instruction_memory__DOT__word_addr)))] 
                                << 0x18U) | ((vlSelf->top__DOT__instruction_memory__DOT__mem
                                              [(0xfffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->top__DOT__instruction_memory__DOT__word_addr)))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__instruction_memory__DOT__mem
                                                 [(0xfffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->top__DOT__instruction_memory__DOT__word_addr)))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__instruction_memory__DOT__mem
                                                [vlSelf->top__DOT__instruction_memory__DOT__word_addr])));
    if ((0x40U & vlSelf->top__DOT__instr)) {
        vlSelf->top__DOT__RegWrite = (1U & (IData)(
                                                   ((0x20U 
                                                     == 
                                                     (0x30U 
                                                      & vlSelf->top__DOT__instr)) 
                                                    & ((8U 
                                                        & vlSelf->top__DOT__instr)
                                                        ? (IData)(
                                                                  (7U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->top__DOT__instr)))
                                                        : (IData)(
                                                                  (7U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->top__DOT__instr)))))));
        if ((0x20U & vlSelf->top__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__PCSrc = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            } else if ((8U & vlSelf->top__DOT__instr)) {
                if ((4U & vlSelf->top__DOT__instr)) {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__instr)) {
                            vlSelf->top__DOT__PCSrc = 1U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ResultSrc = 2U;
                            vlSelf->top__DOT__ImmSrc = 4U;
                        } else {
                            vlSelf->top__DOT__PCSrc = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ResultSrc = 3U;
                            vlSelf->top__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelf->top__DOT__PCSrc = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ResultSrc = 3U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelf->top__DOT__PCSrc = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & vlSelf->top__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__instr)) {
                        vlSelf->top__DOT__PCSrc = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ResultSrc = 2U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                        vlSelf->top__DOT__ImmSrc = 5U;
                    } else {
                        vlSelf->top__DOT__PCSrc = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ResultSrc = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelf->top__DOT__PCSrc = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__PCSrc = 2U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 1U;
                    vlSelf->top__DOT__ImmSrc = 2U;
                } else {
                    vlSelf->top__DOT__PCSrc = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelf->top__DOT__PCSrc = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            }
        } else {
            vlSelf->top__DOT__PCSrc = 0U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__ResultSrc = 3U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            vlSelf->top__DOT__ImmSrc = 7U;
        }
    } else {
        if ((0x20U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__RegWrite = (1U & (IData)(
                                                       ((0x10U 
                                                         == 
                                                         (0x18U 
                                                          & vlSelf->top__DOT__instr)) 
                                                        & ((4U 
                                                            & vlSelf->top__DOT__instr)
                                                            ? 
                                                           ((vlSelf->top__DOT__instr 
                                                             >> 1U) 
                                                            & vlSelf->top__DOT__instr)
                                                            : 
                                                           ((vlSelf->top__DOT__instr 
                                                             >> 1U) 
                                                            & vlSelf->top__DOT__instr)))));
            if ((0x10U & vlSelf->top__DOT__instr)) {
                if ((8U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                } else if ((4U & vlSelf->top__DOT__instr)) {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__instr)) {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ResultSrc = 0U;
                            vlSelf->top__DOT__ImmSrc = 3U;
                        } else {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ResultSrc = 3U;
                            vlSelf->top__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ResultSrc = 3U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                    }
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                } else {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__instr)) {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ResultSrc = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 2U;
                        } else {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ResultSrc = 3U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ResultSrc = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
            } else if ((8U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__control_unit__DOT__Store = 1U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 1U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__ImmSrc = 1U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            }
        } else if ((0x10U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__RegWrite = (1U & ((~ 
                                                 (vlSelf->top__DOT__instr 
                                                  >> 3U)) 
                                                & ((4U 
                                                    & vlSelf->top__DOT__instr)
                                                    ? 
                                                   ((vlSelf->top__DOT__instr 
                                                     >> 1U) 
                                                    & vlSelf->top__DOT__instr)
                                                    : 
                                                   ((vlSelf->top__DOT__instr 
                                                     >> 1U) 
                                                    & vlSelf->top__DOT__instr))));
            if ((8U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelf->top__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__instr)) {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ResultSrc = 0U;
                        vlSelf->top__DOT__ImmSrc = 3U;
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ResultSrc = 3U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 2U;
                    vlSelf->top__DOT__ImmSrc = 0U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            }
        } else {
            vlSelf->top__DOT__RegWrite = (1U & (IData)(
                                                       (3U 
                                                        == 
                                                        (0xfU 
                                                         & vlSelf->top__DOT__instr))));
            if ((8U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 1U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 1U;
                    vlSelf->top__DOT__ResultSrc = 1U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__ImmSrc = 0U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
            } else {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            }
        }
        vlSelf->top__DOT__PCSrc = 0U;
    }
    vlSelf->top__DOT__modeBU = ((IData)(vlSelf->top__DOT__control_unit__DOT__Store)
                                 ? ((0U == (7U & (vlSelf->top__DOT__instr 
                                                  >> 0xcU)))
                                     ? 3U : ((1U == 
                                              (7U & 
                                               (vlSelf->top__DOT__instr 
                                                >> 0xcU)))
                                              ? 2U : 
                                             ((2U == 
                                               (7U 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0xcU)))
                                               ? 1U
                                               : 0U)))
                                 : ((IData)(vlSelf->top__DOT__control_unit__DOT__Load)
                                     ? ((0x4000U & vlSelf->top__DOT__instr)
                                         ? ((0x2000U 
                                             & vlSelf->top__DOT__instr)
                                             ? 0U : 
                                            ((0x1000U 
                                              & vlSelf->top__DOT__instr)
                                              ? 4U : 5U))
                                         : ((0x2000U 
                                             & vlSelf->top__DOT__instr)
                                             ? ((0x1000U 
                                                 & vlSelf->top__DOT__instr)
                                                 ? 0U
                                                 : 1U)
                                             : ((0x1000U 
                                                 & vlSelf->top__DOT__instr)
                                                 ? 2U
                                                 : 3U)))
                                     : 0U));
    vlSelf->top__DOT__RD1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
    vlSelf->top__DOT__RD2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [(0x1fU & (vlSelf->top__DOT__instr >> 0x14U))];
    __Vtableidx1 = ((0x40U & (vlSelf->top__DOT__instr 
                              >> 0x18U)) | ((0x20U 
                                             & vlSelf->top__DOT__instr) 
                                            | ((0x1cU 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0xaU)) 
                                               | (IData)(vlSelf->top__DOT__control_unit__DOT__ALUOp))));
    vlSelf->top__DOT__ALUctrl = Vtop__ConstPool__TABLE_h2f1e8d19_0
        [__Vtableidx1];
    vlSelf->top__DOT__ExtImm = ((4U & (IData)(vlSelf->top__DOT__ImmSrc))
                                 ? ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                     ? 0U : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                                 >> 0x18U)))) 
                                                  << 0xcU) 
                                                 | (0xfffU 
                                                    & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                       >> 0xdU)))
                                              : (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                                 >> 0x18U)))) 
                                                  << 0x13U) 
                                                 | ((0x7f800U 
                                                     & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                        << 6U)) 
                                                    | ((0x400U 
                                                        & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                           >> 3U)) 
                                                       | (0x3ffU 
                                                          & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                             >> 0xeU)))))))
                                 : ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                     ? ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                         ? (0x7ffff8U 
                                            & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                               >> 2U))
                                         : (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                            >> 0x18U)))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                   << 0xbU)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                      >> 0xdU)) 
                                                  | (0x1eU 
                                                     & vlSelf->top__DOT__sign_extend__DOT__ImmIn)))))
                                     : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                            >> 0x18U)))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                   >> 0xdU)) 
                                               | (0x1fU 
                                                  & vlSelf->top__DOT__sign_extend__DOT__ImmIn)))
                                         : (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                            >> 0x18U)))) 
                                             << 0xcU) 
                                            | (0xfffU 
                                               & (vlSelf->top__DOT__sign_extend__DOT__ImmIn 
                                                  >> 0xdU))))));
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->top__DOT____Vcellinp__pc__PCTarget = (vlSelf->top__DOT__PC 
                                                  + vlSelf->top__DOT__ExtImm);
    vlSelf->top__DOT__SrcB = ((1U & ((0x40U & vlSelf->top__DOT__instr)
                                      ? (1U & ((0x20U 
                                                != 
                                                (0x30U 
                                                 & vlSelf->top__DOT__instr)) 
                                               | ((8U 
                                                   & vlSelf->top__DOT__instr)
                                                   ? (IData)(
                                                             (7U 
                                                              != 
                                                              (7U 
                                                               & vlSelf->top__DOT__instr)))
                                                   : (IData)(
                                                             (3U 
                                                              != 
                                                              (7U 
                                                               & vlSelf->top__DOT__instr))))))
                                      : (IData)((0x33U 
                                                 != 
                                                 (0x3fU 
                                                  & vlSelf->top__DOT__instr)))))
                               ? vlSelf->top__DOT__ExtImm
                               : vlSelf->top__DOT__RD2);
    vlSelf->top__DOT__ALUResult = ((8U & (IData)(vlSelf->top__DOT__ALUctrl))
                                    ? ((4U & (IData)(vlSelf->top__DOT__ALUctrl))
                                        ? 0U : ((2U 
                                                 & (IData)(vlSelf->top__DOT__ALUctrl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__ALUctrl))
                                                  ? 
                                                 ((vlSelf->top__DOT__RD1 
                                                   != vlSelf->top__DOT__SrcB)
                                                   ? 1U
                                                   : 0U)
                                                  : 0U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__ALUctrl))
                                                  ? 
                                                 ((vlSelf->top__DOT__RD1 
                                                   < vlSelf->top__DOT__SrcB)
                                                   ? 1U
                                                   : 0U)
                                                  : 
                                                 (VL_LTS_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)
                                                   ? 1U
                                                   : 0U))))
                                    : ((4U & (IData)(vlSelf->top__DOT__ALUctrl))
                                        ? ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__ALUctrl))
                                                ? VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__RD1, 
                                                                 (0x1fU 
                                                                  & vlSelf->top__DOT__SrcB))
                                                : (vlSelf->top__DOT__RD1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__SrcB)))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__ALUctrl))
                                                ? (vlSelf->top__DOT__RD1 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__SrcB))
                                                : (vlSelf->top__DOT__RD1 
                                                   & vlSelf->top__DOT__SrcB)))
                                        : ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__ALUctrl))
                                                ? (vlSelf->top__DOT__RD1 
                                                   | vlSelf->top__DOT__SrcB)
                                                : (vlSelf->top__DOT__RD1 
                                                   ^ vlSelf->top__DOT__SrcB))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__ALUctrl))
                                                ? (vlSelf->top__DOT__RD1 
                                                   - vlSelf->top__DOT__SrcB)
                                                : (vlSelf->top__DOT__RD1 
                                                   + vlSelf->top__DOT__SrcB)))));
    if ((1U == (IData)(vlSelf->top__DOT__ResultSrc))) {
        if ((1U == (IData)(vlSelf->top__DOT__modeBU))) {
            vlSelf->top__DOT__ReadData = ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                           [(0x1fffcU 
                                             & vlSelf->top__DOT__ALUResult)] 
                                           << 0x18U) 
                                          | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                              [(0x1ffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0x1fffcU 
                                                    & vlSelf->top__DOT__ALUResult)))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                 [(0x1ffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x1fffcU 
                                                       & vlSelf->top__DOT__ALUResult)))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__data_memory__DOT__ram_array
                                                [(0x1ffffU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     (0x1fffcU 
                                                      & vlSelf->top__DOT__ALUResult)))])));
            vlSelf->top__DOT__Result = vlSelf->top__DOT__ReadData;
        } else if ((2U == (IData)(vlSelf->top__DOT__modeBU))) {
            vlSelf->top__DOT__ReadData = (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                                          [
                                                          (0x1fffcU 
                                                           & vlSelf->top__DOT__ALUResult)] 
                                                          >> 7U)))) 
                                           << 0x10U) 
                                          | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                              [(0x1fffcU 
                                                & vlSelf->top__DOT__ALUResult)] 
                                              << 8U) 
                                             | vlSelf->top__DOT__data_memory__DOT__ram_array
                                             [(0x1ffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0x1fffcU 
                                                   & vlSelf->top__DOT__ALUResult)))]));
            vlSelf->top__DOT__Result = vlSelf->top__DOT__ReadData;
        } else if ((3U == (IData)(vlSelf->top__DOT__modeBU))) {
            vlSelf->top__DOT__ReadData = (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                                          [
                                                          (0x1fffcU 
                                                           & vlSelf->top__DOT__ALUResult)] 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          vlSelf->top__DOT__data_memory__DOT__ram_array
                                          [(0x1fffcU 
                                            & vlSelf->top__DOT__ALUResult)]);
            vlSelf->top__DOT__Result = vlSelf->top__DOT__ReadData;
        } else if ((4U == (IData)(vlSelf->top__DOT__modeBU))) {
            vlSelf->top__DOT__ReadData = ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                           [(0x1fffcU 
                                             & vlSelf->top__DOT__ALUResult)] 
                                           << 8U) | 
                                          vlSelf->top__DOT__data_memory__DOT__ram_array
                                          [(0x1ffffU 
                                            & ((IData)(1U) 
                                               + (0x1fffcU 
                                                  & vlSelf->top__DOT__ALUResult)))]);
            vlSelf->top__DOT__Result = vlSelf->top__DOT__ReadData;
        } else if ((5U == (IData)(vlSelf->top__DOT__modeBU))) {
            vlSelf->top__DOT__ReadData = vlSelf->top__DOT__data_memory__DOT__ram_array
                [(0x1fffcU & vlSelf->top__DOT__ALUResult)];
            vlSelf->top__DOT__Result = vlSelf->top__DOT__ReadData;
        }
    } else if ((0U == (IData)(vlSelf->top__DOT__ResultSrc))) {
        vlSelf->top__DOT__Result = vlSelf->top__DOT__ALUResult;
    } else if ((2U == (IData)(vlSelf->top__DOT__ResultSrc))) {
        vlSelf->top__DOT__Result = ((IData)(4U) + vlSelf->top__DOT__ALUResult);
    }
    vlSelf->top__DOT__Result = ((0U == (IData)(vlSelf->top__DOT__ResultSrc))
                                 ? vlSelf->top__DOT__ALUResult
                                 : ((1U == (IData)(vlSelf->top__DOT__ResultSrc))
                                     ? vlSelf->top__DOT__ReadData
                                     : ((2U == (IData)(vlSelf->top__DOT__ResultSrc))
                                         ? ((IData)(4U) 
                                            + vlSelf->top__DOT__PC)
                                         : vlSelf->top__DOT__ALUResult)));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->a1 = VL_RAND_RESET_I(32);
    vlSelf->a7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ExtImm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCnext = VL_RAND_RESET_I(32);
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
    vlSelf->top__DOT__ReadData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellinp__pc__PCTarget = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__regfile__DOT__registerfile_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__instruction_memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__instruction_memory__DOT__word_addr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__control_unit__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__control_unit__DOT__Store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__Load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__sign_extend__DOT__ImmIn = VL_RAND_RESET_I(25);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}