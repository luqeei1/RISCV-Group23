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
    VlWide<3>/*95:0*/ __Vtemp_h2553e7c1__0;
    // Body
    VL_WRITEF("Loading ram.\n");
    __Vtemp_h2553e7c1__0[0U] = 0x2e6d656dU;
    __Vtemp_h2553e7c1__0[1U] = 0x7369616eU;
    __Vtemp_h2553e7c1__0[2U] = 0x67617573U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h2553e7c1__0)
                 ,  &(vlSelf->top__DOT__data_memory__DOT__ram_array)
                 , 0x200U, ~0ULL);
    VL_WRITEF("Ram loaded\nLoading rom.\n");
    VL_READMEM_N(true, 8, 65536, 0, std::string{"pdf.hex"}
                 ,  &(vlSelf->top__DOT__instruction_memory__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF("ROM loaded successfully.\n");
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h2f1e8d19_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->a5 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xfU];
    vlSelf->a4 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xeU];
    vlSelf->a3 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xdU];
    vlSelf->a2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xcU];
    vlSelf->a1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xbU];
    vlSelf->s1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [9U];
    vlSelf->t2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [7U];
    vlSelf->t1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [6U];
    vlSelf->t0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [5U];
    vlSelf->a0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xaU];
    vlSelf->s2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x12U];
    vlSelf->s0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [8U];
    vlSelf->a6 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x10U];
    vlSelf->a7 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x11U];
    vlSelf->s3 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x13U];
    vlSelf->s4 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x14U];
    vlSelf->s5 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x15U];
    vlSelf->s6 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x16U];
    vlSelf->s7 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x17U];
    vlSelf->s8 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x18U];
    vlSelf->s9 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x19U];
    vlSelf->s10 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1aU];
    vlSelf->s11 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1bU];
    vlSelf->t3 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1cU];
    vlSelf->t4 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1dU];
    vlSelf->t5 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1eU];
    vlSelf->t6 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1fU];
    vlSelf->top__DOT__instr = ((vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                [(0xffffU & ((IData)(3U) 
                                             + vlSelf->top__DOT__PC))] 
                                << 0x18U) | ((vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                              [(0xffffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->top__DOT__PC))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                                [(0xffffU 
                                                  & vlSelf->top__DOT__PC)])));
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
                            vlSelf->top__DOT__ResultSrc = 2U;
                            vlSelf->top__DOT__ImmSrc = 4U;
                        } else {
                            vlSelf->top__DOT__PCSrc = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ResultSrc = 3U;
                            vlSelf->top__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelf->top__DOT__PCSrc = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ResultSrc = 3U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelf->top__DOT__PCSrc = 0U;
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
                        vlSelf->top__DOT__ResultSrc = 2U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                        vlSelf->top__DOT__ImmSrc = 5U;
                    } else {
                        vlSelf->top__DOT__PCSrc = 0U;
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
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__PCSrc = 2U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 1U;
                    vlSelf->top__DOT__ImmSrc = 2U;
                } else {
                    vlSelf->top__DOT__PCSrc = 0U;
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
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            }
        } else {
            vlSelf->top__DOT__PCSrc = 0U;
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
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                } else if ((4U & vlSelf->top__DOT__instr)) {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__instr)) {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ResultSrc = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                            vlSelf->top__DOT__ImmSrc = 3U;
                        } else {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ResultSrc = 3U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                            vlSelf->top__DOT__ImmSrc = 7U;
                        }
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ResultSrc = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                    }
                } else {
                    if ((2U & vlSelf->top__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__instr)) {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ResultSrc = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 2U;
                        } else {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__ResultSrc = 3U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
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
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__control_unit__DOT__Store = 1U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__ImmSrc = 1U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
            } else {
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
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelf->top__DOT__instr)) {
                if ((2U & vlSelf->top__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__instr)) {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ResultSrc = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                        vlSelf->top__DOT__ImmSrc = 3U;
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__ResultSrc = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                        vlSelf->top__DOT__ImmSrc = 7U;
                    }
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 2U;
                    vlSelf->top__DOT__ImmSrc = 0U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
            } else {
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
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            } else if ((4U & vlSelf->top__DOT__instr)) {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__ResultSrc = 3U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                vlSelf->top__DOT__ImmSrc = 7U;
            } else if ((2U & vlSelf->top__DOT__instr)) {
                if ((1U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 1U;
                    vlSelf->top__DOT__ResultSrc = 1U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__ImmSrc = 0U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__ResultSrc = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    vlSelf->top__DOT__ImmSrc = 7U;
                }
            } else {
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
                                                             (vlSelf->top__DOT__instr 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->top__DOT__instr 
                                                    >> 0x14U))
                                              : (((- (IData)(
                                                             (vlSelf->top__DOT__instr 
                                                              >> 0x1fU))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & vlSelf->top__DOT__instr) 
                                                    | ((0x800U 
                                                        & (vlSelf->top__DOT__instr 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 0x14U)))))))
                                 : ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                     ? ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                         ? (0xfffff000U 
                                            & vlSelf->top__DOT__instr)
                                         : (((- (IData)(
                                                        (vlSelf->top__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->top__DOT__instr 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->top__DOT__instr 
                                                        >> 7U))))))
                                     : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                         ? (((- (IData)(
                                                        (vlSelf->top__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 7U))))
                                         : (((- (IData)(
                                                        (vlSelf->top__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->top__DOT__instr 
                                               >> 0x14U)))));
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
                                                 ? 0U
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
    vlSelf->top__DOT__pc__DOT__out = ((2U & (IData)(vlSelf->top__DOT__PCSrc))
                                       ? ((1U & (IData)(vlSelf->top__DOT__PCSrc))
                                           ? vlSelf->top__DOT__ALUResult
                                           : ((((IData)(vlSelf->top__DOT__ALUctrl) 
                                                >> 3U) 
                                               & ((4U 
                                                   & (IData)(vlSelf->top__DOT__ALUctrl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__ALUctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__ALUctrl))
                                                     ? 
                                                    (vlSelf->top__DOT__RD1 
                                                     >= vlSelf->top__DOT__SrcB)
                                                     : 
                                                    (vlSelf->top__DOT__RD1 
                                                     < vlSelf->top__DOT__SrcB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__ALUctrl))
                                                     ? 
                                                    VL_GTES_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)
                                                     : 
                                                    VL_LTS_III(32, vlSelf->top__DOT__RD1, vlSelf->top__DOT__SrcB)))
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__ALUctrl) 
                                                    >> 1U) 
                                                   & ((1U 
                                                       & (IData)(vlSelf->top__DOT__ALUctrl))
                                                       ? 
                                                      (vlSelf->top__DOT__RD1 
                                                       != vlSelf->top__DOT__SrcB)
                                                       : 
                                                      (vlSelf->top__DOT__RD1 
                                                       == vlSelf->top__DOT__SrcB)))))
                                               ? vlSelf->top__DOT____Vcellinp__pc__PCTarget
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC)))
                                       : ((1U & (IData)(vlSelf->top__DOT__PCSrc))
                                           ? vlSelf->top__DOT____Vcellinp__pc__PCTarget
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__PC)));
    if ((0x100U == vlSelf->top__DOT__ALUResult)) {
        vlSelf->top__DOT__RD = vlSelf->trigger;
        vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
    } else if ((1U == (IData)(vlSelf->top__DOT__ResultSrc))) {
        if ((4U & (IData)(vlSelf->top__DOT__modeBU))) {
            if ((2U & (IData)(vlSelf->top__DOT__modeBU))) {
                vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
            } else if ((1U & (IData)(vlSelf->top__DOT__modeBU))) {
                vlSelf->top__DOT__RD = vlSelf->top__DOT__data_memory__DOT__ram_array
                    [(0x1ffffU & vlSelf->top__DOT__ALUResult)];
                vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
            } else {
                vlSelf->top__DOT__RD = ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                         [(0x1ffffU 
                                           & vlSelf->top__DOT__ALUResult)] 
                                         << 8U) | vlSelf->top__DOT__data_memory__DOT__ram_array
                                        [(0x1ffffU 
                                          & ((IData)(1U) 
                                             + vlSelf->top__DOT__ALUResult))]);
                vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__modeBU))) {
            if ((1U & (IData)(vlSelf->top__DOT__modeBU))) {
                vlSelf->top__DOT__RD = (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                                        [
                                                        (0x1ffffU 
                                                         & vlSelf->top__DOT__ALUResult)] 
                                                        >> 7U)))) 
                                         << 8U) | vlSelf->top__DOT__data_memory__DOT__ram_array
                                        [(0x1ffffU 
                                          & vlSelf->top__DOT__ALUResult)]);
                vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
            } else {
                vlSelf->top__DOT__RD = (((- (IData)(
                                                    (1U 
                                                     & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                                        [
                                                        (0x1ffffU 
                                                         & vlSelf->top__DOT__ALUResult)] 
                                                        >> 7U)))) 
                                         << 0x10U) 
                                        | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                            [(0x1ffffU 
                                              & vlSelf->top__DOT__ALUResult)] 
                                            << 8U) 
                                           | vlSelf->top__DOT__data_memory__DOT__ram_array
                                           [(0x1ffffU 
                                             & ((IData)(1U) 
                                                + vlSelf->top__DOT__ALUResult))]));
                vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__modeBU))) {
            vlSelf->top__DOT__RD = ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                     [(0x1ffffU & vlSelf->top__DOT__ALUResult)] 
                                     << 0x18U) | ((
                                                   vlSelf->top__DOT__data_memory__DOT__ram_array
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->top__DOT__ALUResult))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->top__DOT__ALUResult))] 
                                                      << 8U) 
                                                     | vlSelf->top__DOT__data_memory__DOT__ram_array
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->top__DOT__ALUResult))])));
            vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
        } else {
            vlSelf->top__DOT__Result = vlSelf->top__DOT__RD;
        }
    } else {
        vlSelf->top__DOT__Result = ((0U == (IData)(vlSelf->top__DOT__ResultSrc))
                                     ? vlSelf->top__DOT__ALUResult
                                     : ((2U == (IData)(vlSelf->top__DOT__ResultSrc))
                                         ? ((IData)(4U) 
                                            + vlSelf->top__DOT__ALUResult)
                                         : vlSelf->top__DOT__ALUResult));
    }
    vlSelf->top__DOT__Result = ((0U == (IData)(vlSelf->top__DOT__ResultSrc))
                                 ? vlSelf->top__DOT__ALUResult
                                 : ((1U == (IData)(vlSelf->top__DOT__ResultSrc))
                                     ? vlSelf->top__DOT__RD
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
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__regfile__DOT__registerfile_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->top__DOT__instruction_memory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__control_unit__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__control_unit__DOT__Store = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__Load = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
