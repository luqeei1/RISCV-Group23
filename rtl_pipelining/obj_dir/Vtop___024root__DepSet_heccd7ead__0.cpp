// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__rst = vlSelf->rst;
    vlSelf->top__DOT__trigger = vlSelf->trigger;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__program_counter__DOT__rst = vlSelf->top__DOT__rst;
    vlSelf->top__DOT__data_memory__DOT__trigger = vlSelf->top__DOT__trigger;
    vlSelf->top__DOT__branch_prediction_unit__DOT__clk 
        = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__program_counter__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__regfile__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__data_memory__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__pipeline_FD__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__pipeline_DE__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__pipeline_EM__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__pipeline_MW__DOT__clk = vlSelf->top__DOT__clk;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__regfile__DOT__registerfile_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__regfile__DOT__registerfile_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile__DOT__registerfile_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v0;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v1;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v2;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v3;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v4;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v5;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v6;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v7;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v8;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v8;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v9;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v9;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v10;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v10;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v11;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v11;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v12;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v12;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v13;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v13;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v13;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v14;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v14;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v15;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v15;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v16;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v16;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v17;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v17;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v18;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v18;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v19;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v19;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v20;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v20;
    IData/*16:0*/ __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v21;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v21;
    // Body
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v0 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v1 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v3 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v7 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v9 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v13 = 0U;
    __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v21 = 0U;
    __Vdlyvset__top__DOT__regfile__DOT__registerfile_array__v0 = 0U;
    vlSelf->top__DOT__pipeline_MW__DOT__InstrW = vlSelf->top__DOT__pipeline_MW__DOT__InstrW;
    vlSelf->top__DOT__pipeline_EM__DOT__InstrM = vlSelf->top__DOT__InstrE;
    vlSelf->top__DOT__pipeline_EM__DOT__PCPlus4M = vlSelf->top__DOT__PCPlus4E;
    vlSelf->top__DOT__pipeline_EM__DOT__WriteDataM 
        = vlSelf->top__DOT__WriteDataE;
    vlSelf->top__DOT__pipeline_EM__DOT__MemWriteM = vlSelf->top__DOT__MemWriteE;
    vlSelf->top__DOT__pipeline_EM__DOT__ResultSrcM 
        = vlSelf->top__DOT__ResultSrcE;
    vlSelf->top__DOT__pipeline_DE__DOT__modeAddrE = vlSelf->top__DOT__modeAddrD;
    vlSelf->top__DOT__pipeline_DE__DOT__ResultSrcE 
        = vlSelf->top__DOT__ResultSrcD;
    vlSelf->top__DOT__pipeline_DE__DOT__PCPlus4E = vlSelf->top__DOT__PCPlus4D;
    vlSelf->top__DOT__pipeline_DE__DOT__MemWriteE = 
        ((~ (IData)(vlSelf->top__DOT__flush)) & (IData)(vlSelf->top__DOT__MemWriteD));
    vlSelf->top__DOT__pipeline_EM__DOT__modeAddrM = vlSelf->top__DOT__modeAddrE;
    if ((1U & (~ (IData)(vlSelf->top__DOT__flush)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__stall)))) {
            vlSelf->top__DOT__pipeline_FD__DOT__PCPlus4D 
                = vlSelf->top__DOT__PCPlus4F;
            vlSelf->top__DOT__pipeline_FD__DOT__PCD 
                = vlSelf->top__DOT__PCF;
        }
    }
    vlSelf->top__DOT__pipeline_DE__DOT__RdE = vlSelf->top__DOT__RdD;
    vlSelf->top__DOT__pipeline_DE__DOT__MemReadE = vlSelf->top__DOT__MemReadD;
    vlSelf->top__DOT__pipeline_DE__DOT__RegWriteE = 
        ((~ (IData)(vlSelf->top__DOT__flush)) & (IData)(vlSelf->top__DOT__RegWriteD));
    vlSelf->top__DOT__pipeline_EM__DOT__MemReadM = vlSelf->top__DOT__MemReadE;
    vlSelf->top__DOT__pipeline_DE__DOT__JumpE = ((~ (IData)(vlSelf->top__DOT__flush)) 
                                                 & (IData)(vlSelf->top__DOT__JumpD));
    vlSelf->top__DOT__pipeline_DE__DOT__Rs2E = vlSelf->top__DOT__Rs2D;
    vlSelf->top__DOT__pipeline_DE__DOT__PCE = vlSelf->top__DOT__PCD;
    vlSelf->top__DOT__pipeline_DE__DOT__BranchE = (
                                                   (~ (IData)(vlSelf->top__DOT__flush)) 
                                                   & (IData)(vlSelf->top__DOT__BranchD));
    vlSelf->top__DOT__pipeline_DE__DOT__InstrE = vlSelf->top__DOT__InstrD;
    if (vlSelf->top__DOT__BranchE) {
        if ((1U & (~ (vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U] 
                      >> 1U)))) {
            vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter 
                = (3U & (((IData)(vlSelf->top__DOT__Zero) 
                          == (1U & vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U]))
                          ? ((3U == (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))
                              ? 3U : ((IData)(1U) + (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter)))
                          : ((0U == (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))
                              ? 0U : ((IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter) 
                                      - (IData)(1U)))));
        }
        if ((2U & vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U])) {
            vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter 
                = (3U & (((IData)(vlSelf->top__DOT__Zero) 
                          == (1U & vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U]))
                          ? ((3U == (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))
                              ? 3U : ((IData)(1U) + (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter)))
                          : ((0U == (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))
                              ? 0U : ((IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter) 
                                      - (IData)(1U)))));
        }
    }
    if (vlSelf->top__DOT__flush) {
        vlSelf->top__DOT__pipeline_FD__DOT__InstrD = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__stall)))) {
        vlSelf->top__DOT__pipeline_FD__DOT__InstrD 
            = vlSelf->top__DOT__InstrF;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__stall)))) {
        vlSelf->top__DOT__program_counter__DOT__PCF 
            = ((IData)(vlSelf->rst) ? 0U : vlSelf->top__DOT__PC_next);
    }
    vlSelf->top__DOT__pipeline_DE__DOT__ALUControlE 
        = vlSelf->top__DOT__ALUControlD;
    vlSelf->top__DOT__pipeline_DE__DOT__ALUSrcE = vlSelf->top__DOT__ALUSrcD;
    vlSelf->top__DOT__pipeline_DE__DOT__RD2E = vlSelf->top__DOT__RD2;
    vlSelf->top__DOT__pipeline_DE__DOT__ExtImmE = vlSelf->top__DOT__ExtImmD;
    vlSelf->top__DOT__pipeline_DE__DOT__RD1E = vlSelf->top__DOT__RD1;
    vlSelf->top__DOT__pipeline_EM__DOT__ALUResultM 
        = vlSelf->top__DOT__ALUResultE;
    if (vlSelf->top__DOT__MemWriteM) {
        if ((4U & (IData)(vlSelf->top__DOT__modeAddrM))) {
            if ((2U & (IData)(vlSelf->top__DOT__modeAddrM))) {
                __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v0 = 1U;
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v0 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
            } else if ((1U & (IData)(vlSelf->top__DOT__modeAddrM))) {
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v1 
                    = (0xffU & vlSelf->top__DOT__WriteDataM);
                __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v1 = 1U;
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v1 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v2 
                    = (0xffU & vlSelf->top__DOT__WriteDataM);
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v2 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
            } else {
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v3 
                    = (0xffU & (vlSelf->top__DOT__WriteDataM 
                                >> 8U));
                __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v3 = 1U;
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v3 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v4 
                    = (0xffU & vlSelf->top__DOT__WriteDataM);
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v4 
                    = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM));
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v5 
                    = (0xffU & (vlSelf->top__DOT__WriteDataM 
                                >> 8U));
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v5 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v6 
                    = (0xffU & vlSelf->top__DOT__WriteDataM);
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v6 
                    = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM));
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__modeAddrM))) {
            if ((1U & (IData)(vlSelf->top__DOT__modeAddrM))) {
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v7 
                    = (0xffU & vlSelf->top__DOT__WriteDataM);
                __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v7 = 1U;
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v7 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v8 
                    = (0xffU & vlSelf->top__DOT__WriteDataM);
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v8 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
            } else {
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v9 
                    = (0xffU & (vlSelf->top__DOT__WriteDataM 
                                >> 8U));
                __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v9 = 1U;
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v9 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v10 
                    = (0xffU & vlSelf->top__DOT__WriteDataM);
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v10 
                    = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM));
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v11 
                    = (0xffU & (vlSelf->top__DOT__WriteDataM 
                                >> 8U));
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v11 
                    = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
                __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v12 
                    = (0xffU & vlSelf->top__DOT__WriteDataM);
                __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v12 
                    = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM));
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__modeAddrM))) {
            __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v13 
                = (vlSelf->top__DOT__WriteDataM >> 0x18U);
            __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v13 = 1U;
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v13 
                = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
            __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v14 
                = (0xffU & (vlSelf->top__DOT__WriteDataM 
                            >> 0x10U));
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v14 
                = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM));
            __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v15 
                = (0xffU & (vlSelf->top__DOT__WriteDataM 
                            >> 8U));
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v15 
                = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUResultM));
            __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v16 
                = (0xffU & vlSelf->top__DOT__WriteDataM);
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v16 
                = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUResultM));
            __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v17 
                = (vlSelf->top__DOT__WriteDataM >> 0x18U);
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v17 
                = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
            __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v18 
                = (0xffU & (vlSelf->top__DOT__WriteDataM 
                            >> 0x10U));
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v18 
                = (0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM));
            __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v19 
                = (0xffU & (vlSelf->top__DOT__WriteDataM 
                            >> 8U));
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v19 
                = (0x1ffffU & ((IData)(2U) + vlSelf->top__DOT__ALUResultM));
            __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v20 
                = (0xffU & vlSelf->top__DOT__WriteDataM);
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v20 
                = (0x1ffffU & ((IData)(3U) + vlSelf->top__DOT__ALUResultM));
        } else {
            __Vdlyvset__top__DOT__data_memory__DOT__ram_array__v21 = 1U;
            __Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v21 
                = (0x1ffffU & vlSelf->top__DOT__ALUResultM);
        }
    }
    if (vlSelf->top__DOT__RegWriteW) {
        __Vdlyvval__top__DOT__regfile__DOT__registerfile_array__v0 
            = ((0U == (IData)(vlSelf->top__DOT__RdW))
                ? 0U : vlSelf->top__DOT__ResultW);
        __Vdlyvset__top__DOT__regfile__DOT__registerfile_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__regfile__DOT__registerfile_array__v0 
            = vlSelf->top__DOT__RdW;
    }
    vlSelf->top__DOT__pipeline_DE__DOT__Rs1E = vlSelf->top__DOT__Rs1D;
    vlSelf->top__DOT__pipeline_MW__DOT__PCPlus4W = vlSelf->top__DOT__PCPlus4M;
    vlSelf->top__DOT__pipeline_MW__DOT__ReadDataW = vlSelf->top__DOT__ReadDataM;
    vlSelf->top__DOT__pipeline_MW__DOT__ResultSrcW 
        = vlSelf->top__DOT__ResultSrcM;
    vlSelf->top__DOT__pipeline_EM__DOT__RegWriteM = vlSelf->top__DOT__RegWriteE;
    vlSelf->top__DOT__pipeline_EM__DOT__RdM = vlSelf->top__DOT__RdE;
    vlSelf->top__DOT__pipeline_MW__DOT__ALUResultW 
        = vlSelf->top__DOT__ALUResultM;
    vlSelf->top__DOT__pipeline_MW__DOT__RegWriteW = vlSelf->top__DOT__RegWriteM;
    vlSelf->top__DOT__pipeline_MW__DOT__RdW = vlSelf->top__DOT__RdM;
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v0) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v0] = 0U;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v1) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v1] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v1;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v2] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v2;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v3) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v3] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v3;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v4] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v4;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v5] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v5;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v6] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v6;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v7) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v7] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v7;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v8] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v8;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v9) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v9] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v9;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v10] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v10;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v11] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v11;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v12] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v12;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v13) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v13] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v13;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v14] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v14;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v15] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v15;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v16] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v16;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v17] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v17;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v18] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v18;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v19] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v19;
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v20] 
            = __Vdlyvval__top__DOT__data_memory__DOT__ram_array__v20;
    }
    if (__Vdlyvset__top__DOT__data_memory__DOT__ram_array__v21) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vdlyvdim0__top__DOT__data_memory__DOT__ram_array__v21] = 0U;
    }
    if (__Vdlyvset__top__DOT__regfile__DOT__registerfile_array__v0) {
        vlSelf->top__DOT__regfile__DOT__registerfile_array[__Vdlyvdim0__top__DOT__regfile__DOT__registerfile_array__v0] 
            = __Vdlyvval__top__DOT__regfile__DOT__registerfile_array__v0;
    }
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h2f1e8d19_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Init
    IData/*31:0*/ top__DOT____Vcellinp__PC_mux__PCTarget;
    IData/*31:0*/ top__DOT____Vcellinp__alu__SrcB;
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__InstrW = vlSelf->top__DOT__pipeline_MW__DOT__InstrW;
    vlSelf->top__DOT__InstrM = vlSelf->top__DOT__pipeline_EM__DOT__InstrM;
    vlSelf->top__DOT__PCPlus4M = vlSelf->top__DOT__pipeline_EM__DOT__PCPlus4M;
    vlSelf->top__DOT__WriteDataM = vlSelf->top__DOT__pipeline_EM__DOT__WriteDataM;
    vlSelf->top__DOT__MemWriteM = vlSelf->top__DOT__pipeline_EM__DOT__MemWriteM;
    vlSelf->top__DOT__ResultSrcM = vlSelf->top__DOT__pipeline_EM__DOT__ResultSrcM;
    vlSelf->top__DOT__modeAddrE = vlSelf->top__DOT__pipeline_DE__DOT__modeAddrE;
    vlSelf->top__DOT__ResultSrcE = vlSelf->top__DOT__pipeline_DE__DOT__ResultSrcE;
    vlSelf->top__DOT__PCPlus4E = vlSelf->top__DOT__pipeline_DE__DOT__PCPlus4E;
    vlSelf->top__DOT__MemWriteE = vlSelf->top__DOT__pipeline_DE__DOT__MemWriteE;
    vlSelf->top__DOT__modeAddrM = vlSelf->top__DOT__pipeline_EM__DOT__modeAddrM;
    vlSelf->top__DOT__PCPlus4D = vlSelf->top__DOT__pipeline_FD__DOT__PCPlus4D;
    vlSelf->top__DOT__RdE = vlSelf->top__DOT__pipeline_DE__DOT__RdE;
    vlSelf->top__DOT__MemReadE = vlSelf->top__DOT__pipeline_DE__DOT__MemReadE;
    vlSelf->top__DOT__RegWriteE = vlSelf->top__DOT__pipeline_DE__DOT__RegWriteE;
    vlSelf->top__DOT__MemReadM = vlSelf->top__DOT__pipeline_EM__DOT__MemReadM;
    vlSelf->top__DOT__JumpE = vlSelf->top__DOT__pipeline_DE__DOT__JumpE;
    vlSelf->top__DOT__Rs2E = vlSelf->top__DOT__pipeline_DE__DOT__Rs2E;
    vlSelf->top__DOT__PCE = vlSelf->top__DOT__pipeline_DE__DOT__PCE;
    vlSelf->top__DOT__BranchE = vlSelf->top__DOT__pipeline_DE__DOT__BranchE;
    vlSelf->top__DOT__InstrE = vlSelf->top__DOT__pipeline_DE__DOT__InstrE;
    vlSelf->top__DOT__PCD = vlSelf->top__DOT__pipeline_FD__DOT__PCD;
    vlSelf->top__DOT__InstrD = vlSelf->top__DOT__pipeline_FD__DOT__InstrD;
    vlSelf->top__DOT__PCF = vlSelf->top__DOT__program_counter__DOT__PCF;
    vlSelf->top__DOT__ALUControlE = vlSelf->top__DOT__pipeline_DE__DOT__ALUControlE;
    vlSelf->top__DOT__ALUSrcE = vlSelf->top__DOT__pipeline_DE__DOT__ALUSrcE;
    vlSelf->top__DOT__RD2E = vlSelf->top__DOT__pipeline_DE__DOT__RD2E;
    vlSelf->top__DOT__ExtImmE = vlSelf->top__DOT__pipeline_DE__DOT__ExtImmE;
    vlSelf->top__DOT__RD1E = vlSelf->top__DOT__pipeline_DE__DOT__RD1E;
    vlSelf->top__DOT__ALUResultM = vlSelf->top__DOT__pipeline_EM__DOT__ALUResultM;
    vlSelf->top__DOT__regfile__DOT__a5 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xfU];
    vlSelf->top__DOT__regfile__DOT__a4 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xeU];
    vlSelf->top__DOT__regfile__DOT__a3 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xdU];
    vlSelf->top__DOT__regfile__DOT__a2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xcU];
    vlSelf->top__DOT__regfile__DOT__a1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xbU];
    vlSelf->top__DOT__regfile__DOT__s1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [9U];
    vlSelf->top__DOT__regfile__DOT__t2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [7U];
    vlSelf->top__DOT__regfile__DOT__t1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [6U];
    vlSelf->top__DOT__regfile__DOT__t0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [5U];
    vlSelf->top__DOT__regfile__DOT__a0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0xaU];
    vlSelf->top__DOT__regfile__DOT__s2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x12U];
    vlSelf->top__DOT__regfile__DOT__s0 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [8U];
    vlSelf->top__DOT__regfile__DOT__a6 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x10U];
    vlSelf->top__DOT__regfile__DOT__a7 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x11U];
    vlSelf->top__DOT__regfile__DOT__s3 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x13U];
    vlSelf->top__DOT__regfile__DOT__s4 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x14U];
    vlSelf->top__DOT__regfile__DOT__s5 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x15U];
    vlSelf->top__DOT__regfile__DOT__s6 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x16U];
    vlSelf->top__DOT__regfile__DOT__s7 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x17U];
    vlSelf->top__DOT__regfile__DOT__s8 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x18U];
    vlSelf->top__DOT__regfile__DOT__s9 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x19U];
    vlSelf->top__DOT__regfile__DOT__s10 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1aU];
    vlSelf->top__DOT__regfile__DOT__s11 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1bU];
    vlSelf->top__DOT__regfile__DOT__t3 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1cU];
    vlSelf->top__DOT__regfile__DOT__t4 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1dU];
    vlSelf->top__DOT__regfile__DOT__t5 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1eU];
    vlSelf->top__DOT__regfile__DOT__t6 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [0x1fU];
    vlSelf->top__DOT__Rs1E = vlSelf->top__DOT__pipeline_DE__DOT__Rs1E;
    vlSelf->top__DOT__PCPlus4W = vlSelf->top__DOT__pipeline_MW__DOT__PCPlus4W;
    vlSelf->top__DOT__ReadDataW = vlSelf->top__DOT__pipeline_MW__DOT__ReadDataW;
    vlSelf->top__DOT__ResultSrcW = vlSelf->top__DOT__pipeline_MW__DOT__ResultSrcW;
    vlSelf->top__DOT__RegWriteM = vlSelf->top__DOT__pipeline_EM__DOT__RegWriteM;
    vlSelf->top__DOT__RdM = vlSelf->top__DOT__pipeline_EM__DOT__RdM;
    vlSelf->top__DOT__ALUResultW = vlSelf->top__DOT__pipeline_MW__DOT__ALUResultW;
    vlSelf->top__DOT__RegWriteW = vlSelf->top__DOT__pipeline_MW__DOT__RegWriteW;
    vlSelf->top__DOT__RdW = vlSelf->top__DOT__pipeline_MW__DOT__RdW;
    vlSelf->top__DOT__pipeline_MW__DOT__InstrM = vlSelf->top__DOT__InstrM;
    vlSelf->top__DOT__pipeline_MW__DOT__PCPlus4M = vlSelf->top__DOT__PCPlus4M;
    vlSelf->top__DOT__data_memory__DOT__WD = vlSelf->top__DOT__WriteDataM;
    vlSelf->top__DOT__data_memory__DOT__WE = vlSelf->top__DOT__MemWriteM;
    vlSelf->top__DOT__pipeline_MW__DOT__ResultSrcM 
        = vlSelf->top__DOT__ResultSrcM;
    vlSelf->top__DOT__pipeline_EM__DOT__modeAddrE = vlSelf->top__DOT__modeAddrE;
    vlSelf->top__DOT__pipeline_EM__DOT__ResultSrcE 
        = vlSelf->top__DOT__ResultSrcE;
    vlSelf->top__DOT__pipeline_EM__DOT__PCPlus4E = vlSelf->top__DOT__PCPlus4E;
    vlSelf->top__DOT__pipeline_EM__DOT__MemWriteE = vlSelf->top__DOT__MemWriteE;
    vlSelf->top__DOT__data_memory__DOT__modeAddr = vlSelf->top__DOT__modeAddrM;
    vlSelf->top__DOT__pipeline_DE__DOT__PCPlus4D = vlSelf->top__DOT__PCPlus4D;
    vlSelf->top__DOT__hazard_unit__DOT__RdE = vlSelf->top__DOT__RdE;
    vlSelf->top__DOT__pipeline_EM__DOT__RdE = vlSelf->top__DOT__RdE;
    vlSelf->top__DOT__hazard_unit__DOT__MemReadE = vlSelf->top__DOT__MemReadE;
    vlSelf->top__DOT__pipeline_EM__DOT__MemReadE = vlSelf->top__DOT__MemReadE;
    vlSelf->top__DOT__hazard_unit__DOT__RegWriteE = vlSelf->top__DOT__RegWriteE;
    vlSelf->top__DOT__pipeline_EM__DOT__RegWriteE = vlSelf->top__DOT__RegWriteE;
    vlSelf->top__DOT__hazard_unit__DOT__MemReadM = vlSelf->top__DOT__MemReadM;
    vlSelf->top__DOT__PC_mux__DOT__JumpE = vlSelf->top__DOT__JumpE;
    vlSelf->top__DOT__hazard_unit__DOT__Rs2E = vlSelf->top__DOT__Rs2E;
    vlSelf->top__DOT__branch_prediction_unit__DOT__BranchE 
        = vlSelf->top__DOT__BranchE;
    vlSelf->top__DOT__PC_mux__DOT__BranchE = vlSelf->top__DOT__BranchE;
    vlSelf->top__DOT__pipeline_EM__DOT__InstrE = vlSelf->top__DOT__InstrE;
    vlSelf->top__DOT__pipeline_DE__DOT__PCD = vlSelf->top__DOT__PCD;
    vlSelf->top__DOT__control_unit__DOT__InstrD = vlSelf->top__DOT__InstrD;
    vlSelf->top__DOT__sign_extend__DOT__ImmInput = vlSelf->top__DOT__InstrD;
    vlSelf->top__DOT__pipeline_DE__DOT__InstrD = vlSelf->top__DOT__InstrD;
    vlSelf->top__DOT__RdD = (0x1fU & (vlSelf->top__DOT__InstrD 
                                      >> 7U));
    vlSelf->top__DOT__control_unit__DOT__funct7 = (1U 
                                                   & (vlSelf->top__DOT__InstrD 
                                                      >> 0x1eU));
    vlSelf->top__DOT__control_unit__DOT__funct3 = (7U 
                                                   & (vlSelf->top__DOT__InstrD 
                                                      >> 0xcU));
    vlSelf->top__DOT__Rs1D = (0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 0xfU));
    vlSelf->top__DOT__Rs2D = (0x1fU & (vlSelf->top__DOT__InstrD 
                                       >> 0x14U));
    vlSelf->top__DOT__control_unit__DOT__op = (0x7fU 
                                               & vlSelf->top__DOT__InstrD);
    vlSelf->top__DOT__branch_prediction_unit__DOT__PCF 
        = vlSelf->top__DOT__PCF;
    vlSelf->top__DOT__instruction_memory__DOT__PC = vlSelf->top__DOT__PCF;
    vlSelf->top__DOT__pipeline_FD__DOT__PCF = vlSelf->top__DOT__PCF;
    vlSelf->top__DOT__PCPlus4F = ((IData)(4U) + vlSelf->top__DOT__PCF);
    vlSelf->top__DOT__instruction_memory__DOT__instr 
        = ((vlSelf->top__DOT__instruction_memory__DOT__rom_array
            [(0xffffU & ((IData)(3U) + vlSelf->top__DOT__PCF))] 
            << 0x18U) | ((vlSelf->top__DOT__instruction_memory__DOT__rom_array
                          [(0xffffU & ((IData)(2U) 
                                       + vlSelf->top__DOT__PCF))] 
                          << 0x10U) | ((vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                        [(0xffffU & 
                                          ((IData)(1U) 
                                           + vlSelf->top__DOT__PCF))] 
                                        << 8U) | vlSelf->top__DOT__instruction_memory__DOT__rom_array
                                       [(0xffffU & vlSelf->top__DOT__PCF)])));
    vlSelf->top__DOT__alu__DOT__ALUctrl = vlSelf->top__DOT__ALUControlE;
    vlSelf->top__DOT__forwardBE_mux__DOT__in0 = vlSelf->top__DOT__RD2E;
    top__DOT____Vcellinp__PC_mux__PCTarget = (vlSelf->top__DOT__PCE 
                                              + vlSelf->top__DOT__ExtImmE);
    top__DOT____Vcellinp__alu__SrcB = ((IData)(vlSelf->top__DOT__ALUSrcE)
                                        ? vlSelf->top__DOT__ExtImmE
                                        : vlSelf->top__DOT__RD2E);
    vlSelf->top__DOT__forwardAE_mux__DOT__in0 = vlSelf->top__DOT__RD1E;
    vlSelf->top__DOT__forwardAE_mux__DOT__in2 = vlSelf->top__DOT__ALUResultM;
    vlSelf->top__DOT__forwardBE_mux__DOT__in2 = vlSelf->top__DOT__ALUResultM;
    vlSelf->top__DOT__data_memory__DOT__A = vlSelf->top__DOT__ALUResultM;
    vlSelf->top__DOT__pipeline_MW__DOT__ALUResultM 
        = vlSelf->top__DOT__ALUResultM;
    if ((0x100U == vlSelf->top__DOT__ALUResultM)) {
        vlSelf->top__DOT__data_memory__DOT__RD = vlSelf->trigger;
    } else if ((4U & (IData)(vlSelf->top__DOT__modeAddrM))) {
        if ((2U & (IData)(vlSelf->top__DOT__modeAddrM))) {
            vlSelf->top__DOT__data_memory__DOT__RD = 0U;
        } else if ((1U & (IData)(vlSelf->top__DOT__modeAddrM))) {
            vlSelf->top__DOT__data_memory__DOT__RD 
                = vlSelf->top__DOT__data_memory__DOT__ram_array
                [(0x1ffffU & vlSelf->top__DOT__ALUResultM)];
            vlSelf->top__DOT__data_memory__DOT__RD 
                = vlSelf->top__DOT__data_memory__DOT__ram_array
                [(0x1ffffU & vlSelf->top__DOT__ALUResultM)];
        } else {
            vlSelf->top__DOT__data_memory__DOT__RD 
                = ((vlSelf->top__DOT__data_memory__DOT__ram_array
                    [(0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM))] 
                    << 8U) | vlSelf->top__DOT__data_memory__DOT__ram_array
                   [(0x1ffffU & vlSelf->top__DOT__ALUResultM)]);
            vlSelf->top__DOT__data_memory__DOT__RD 
                = ((vlSelf->top__DOT__data_memory__DOT__ram_array
                    [(0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM))] 
                    << 8U) | vlSelf->top__DOT__data_memory__DOT__ram_array
                   [(0x1ffffU & vlSelf->top__DOT__ALUResultM)]);
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__modeAddrM))) {
        if ((1U & (IData)(vlSelf->top__DOT__modeAddrM))) {
            vlSelf->top__DOT__data_memory__DOT__RD 
                = (((- (IData)((1U & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                      [(0x1ffffU & vlSelf->top__DOT__ALUResultM)] 
                                      >> 7U)))) << 8U) 
                   | vlSelf->top__DOT__data_memory__DOT__ram_array
                   [(0x1ffffU & vlSelf->top__DOT__ALUResultM)]);
            vlSelf->top__DOT__data_memory__DOT__RD 
                = (((- (IData)((1U & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                      [(0x1ffffU & vlSelf->top__DOT__ALUResultM)] 
                                      >> 7U)))) << 8U) 
                   | vlSelf->top__DOT__data_memory__DOT__ram_array
                   [(0x1ffffU & vlSelf->top__DOT__ALUResultM)]);
        } else {
            vlSelf->top__DOT__data_memory__DOT__RD 
                = (((- (IData)((1U & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                      [(0x1ffffU & vlSelf->top__DOT__ALUResultM)] 
                                      >> 7U)))) << 0x10U) 
                   | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                       [(0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM))] 
                       << 8U) | vlSelf->top__DOT__data_memory__DOT__ram_array
                      [(0x1ffffU & vlSelf->top__DOT__ALUResultM)]));
            vlSelf->top__DOT__data_memory__DOT__RD 
                = (((- (IData)((1U & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                      [(0x1ffffU & vlSelf->top__DOT__ALUResultM)] 
                                      >> 7U)))) << 0x10U) 
                   | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                       [(0x1ffffU & ((IData)(1U) + vlSelf->top__DOT__ALUResultM))] 
                       << 8U) | vlSelf->top__DOT__data_memory__DOT__ram_array
                      [(0x1ffffU & vlSelf->top__DOT__ALUResultM)]));
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__modeAddrM))) {
        vlSelf->top__DOT__data_memory__DOT__RD = ((
                                                   vlSelf->top__DOT__data_memory__DOT__ram_array
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(3U) 
                                                       + vlSelf->top__DOT__ALUResultM))] 
                                                   << 0x18U) 
                                                  | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->top__DOT__ALUResultM))] 
                                                      << 0x10U) 
                                                     | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                         [
                                                         (0x1ffffU 
                                                          & ((IData)(1U) 
                                                             + vlSelf->top__DOT__ALUResultM))] 
                                                         << 8U) 
                                                        | vlSelf->top__DOT__data_memory__DOT__ram_array
                                                        [
                                                        (0x1ffffU 
                                                         & vlSelf->top__DOT__ALUResultM)])));
        vlSelf->top__DOT__data_memory__DOT__RD = ((
                                                   vlSelf->top__DOT__data_memory__DOT__ram_array
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(3U) 
                                                       + vlSelf->top__DOT__ALUResultM))] 
                                                   << 0x18U) 
                                                  | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->top__DOT__ALUResultM))] 
                                                      << 0x10U) 
                                                     | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                         [
                                                         (0x1ffffU 
                                                          & ((IData)(1U) 
                                                             + vlSelf->top__DOT__ALUResultM))] 
                                                         << 8U) 
                                                        | vlSelf->top__DOT__data_memory__DOT__ram_array
                                                        [
                                                        (0x1ffffU 
                                                         & vlSelf->top__DOT__ALUResultM)])));
    } else {
        vlSelf->top__DOT__data_memory__DOT__RD = 0U;
    }
    vlSelf->top__DOT__a5 = vlSelf->top__DOT__regfile__DOT__a5;
    vlSelf->top__DOT__a4 = vlSelf->top__DOT__regfile__DOT__a4;
    vlSelf->top__DOT__a3 = vlSelf->top__DOT__regfile__DOT__a3;
    vlSelf->top__DOT__a2 = vlSelf->top__DOT__regfile__DOT__a2;
    vlSelf->top__DOT__a1 = vlSelf->top__DOT__regfile__DOT__a1;
    vlSelf->top__DOT__s1 = vlSelf->top__DOT__regfile__DOT__s1;
    vlSelf->top__DOT__t2 = vlSelf->top__DOT__regfile__DOT__t2;
    vlSelf->top__DOT__t1 = vlSelf->top__DOT__regfile__DOT__t1;
    vlSelf->top__DOT__t0 = vlSelf->top__DOT__regfile__DOT__t0;
    vlSelf->top__DOT__a0 = vlSelf->top__DOT__regfile__DOT__a0;
    vlSelf->top__DOT__s2 = vlSelf->top__DOT__regfile__DOT__s2;
    vlSelf->top__DOT__s0 = vlSelf->top__DOT__regfile__DOT__s0;
    vlSelf->top__DOT__a6 = vlSelf->top__DOT__regfile__DOT__a6;
    vlSelf->top__DOT__a7 = vlSelf->top__DOT__regfile__DOT__a7;
    vlSelf->top__DOT__s3 = vlSelf->top__DOT__regfile__DOT__s3;
    vlSelf->top__DOT__s4 = vlSelf->top__DOT__regfile__DOT__s4;
    vlSelf->top__DOT__s5 = vlSelf->top__DOT__regfile__DOT__s5;
    vlSelf->top__DOT__s6 = vlSelf->top__DOT__regfile__DOT__s6;
    vlSelf->top__DOT__s7 = vlSelf->top__DOT__regfile__DOT__s7;
    vlSelf->top__DOT__s8 = vlSelf->top__DOT__regfile__DOT__s8;
    vlSelf->top__DOT__s9 = vlSelf->top__DOT__regfile__DOT__s9;
    vlSelf->top__DOT__s10 = vlSelf->top__DOT__regfile__DOT__s10;
    vlSelf->top__DOT__s11 = vlSelf->top__DOT__regfile__DOT__s11;
    vlSelf->top__DOT__t3 = vlSelf->top__DOT__regfile__DOT__t3;
    vlSelf->top__DOT__t4 = vlSelf->top__DOT__regfile__DOT__t4;
    vlSelf->top__DOT__t5 = vlSelf->top__DOT__regfile__DOT__t5;
    vlSelf->top__DOT__t6 = vlSelf->top__DOT__regfile__DOT__t6;
    vlSelf->top__DOT__hazard_unit__DOT__Rs1E = vlSelf->top__DOT__Rs1E;
    vlSelf->top__DOT__regfile_mux__DOT__in2 = vlSelf->top__DOT__PCPlus4W;
    vlSelf->top__DOT__regfile_mux__DOT__in1 = vlSelf->top__DOT__ReadDataW;
    vlSelf->top__DOT__regfile_mux__DOT__sel = vlSelf->top__DOT__ResultSrcW;
    vlSelf->top__DOT__hazard_unit__DOT__RegWriteM = vlSelf->top__DOT__RegWriteM;
    vlSelf->top__DOT__pipeline_MW__DOT__RegWriteM = vlSelf->top__DOT__RegWriteM;
    vlSelf->top__DOT__hazard_unit__DOT__RdM = vlSelf->top__DOT__RdM;
    vlSelf->top__DOT__pipeline_MW__DOT__RdM = vlSelf->top__DOT__RdM;
    vlSelf->top__DOT__regfile_mux__DOT__in0 = vlSelf->top__DOT__ALUResultW;
    vlSelf->top__DOT__regfile_mux__DOT__out = ((0U 
                                                == (IData)(vlSelf->top__DOT__ResultSrcW))
                                                ? vlSelf->top__DOT__ALUResultW
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__ResultSrcW))
                                                    ? vlSelf->top__DOT__ReadDataW
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__ResultSrcW))
                                                     ? vlSelf->top__DOT__PCPlus4W
                                                     : vlSelf->top__DOT__ALUResultW)));
    vlSelf->top__DOT__hazard_unit__DOT__RegWriteW = vlSelf->top__DOT__RegWriteW;
    vlSelf->top__DOT__regfile__DOT__WE3 = vlSelf->top__DOT__RegWriteW;
    vlSelf->top__DOT__hazard_unit__DOT__RdW = vlSelf->top__DOT__RdW;
    vlSelf->top__DOT__regfile__DOT__AD3 = vlSelf->top__DOT__RdW;
    vlSelf->top__DOT__hazard_unit__DOT__ForwardBE = 0U;
    if ((((IData)(vlSelf->top__DOT__RegWriteW) & ((IData)(vlSelf->top__DOT__Rs2E) 
                                                  == (IData)(vlSelf->top__DOT__RdW))) 
         & (0U != (IData)(vlSelf->top__DOT__RdW)))) {
        vlSelf->top__DOT__hazard_unit__DOT__ForwardBE = 1U;
    } else if ((((IData)(vlSelf->top__DOT__RegWriteM) 
                 & ((IData)(vlSelf->top__DOT__Rs2E) 
                    == (IData)(vlSelf->top__DOT__RdM))) 
                & (0U != (IData)(vlSelf->top__DOT__RdM)))) {
        vlSelf->top__DOT__hazard_unit__DOT__ForwardBE = 2U;
    }
    vlSelf->top__DOT__hazard_unit__DOT__ForwardAE = 0U;
    if ((((IData)(vlSelf->top__DOT__RegWriteW) & ((IData)(vlSelf->top__DOT__Rs1E) 
                                                  == (IData)(vlSelf->top__DOT__RdW))) 
         & (0U != (IData)(vlSelf->top__DOT__RdW)))) {
        vlSelf->top__DOT__hazard_unit__DOT__ForwardAE = 1U;
    } else if ((((IData)(vlSelf->top__DOT__RegWriteM) 
                 & ((IData)(vlSelf->top__DOT__Rs1E) 
                    == (IData)(vlSelf->top__DOT__RdM))) 
                & (0U != (IData)(vlSelf->top__DOT__RdM)))) {
        vlSelf->top__DOT__hazard_unit__DOT__ForwardAE = 2U;
    }
    vlSelf->top__DOT__pipeline_DE__DOT__RdD = vlSelf->top__DOT__RdD;
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__funct7 
        = vlSelf->top__DOT__control_unit__DOT__funct7;
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__funct3 
        = vlSelf->top__DOT__control_unit__DOT__funct3;
    vlSelf->top__DOT__hazard_unit__DOT__Rs1D = vlSelf->top__DOT__Rs1D;
    vlSelf->top__DOT__regfile__DOT__AD1 = vlSelf->top__DOT__Rs1D;
    vlSelf->top__DOT__pipeline_DE__DOT__Rs1D = vlSelf->top__DOT__Rs1D;
    vlSelf->top__DOT__regfile__DOT__RD1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [vlSelf->top__DOT__Rs1D];
    vlSelf->top__DOT__hazard_unit__DOT__Rs2D = vlSelf->top__DOT__Rs2D;
    vlSelf->top__DOT__regfile__DOT__AD2 = vlSelf->top__DOT__Rs2D;
    vlSelf->top__DOT__pipeline_DE__DOT__Rs2D = vlSelf->top__DOT__Rs2D;
    vlSelf->top__DOT__regfile__DOT__RD2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [vlSelf->top__DOT__Rs2D];
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__op 
        = (1U & ((IData)(vlSelf->top__DOT__control_unit__DOT__op) 
                 >> 5U));
    if ((0x40U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
        if ((0x20U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((8U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 2U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 4U;
                        } else {
                            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        }
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    }
                } else {
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                }
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 2U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 4U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 2U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 1U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
        }
        vlSelf->top__DOT__control_unit__DOT__RegWriteD 
            = (1U & (IData)(((0x20U == (0x30U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) 
                             & ((8U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))
                                 ? (IData)((7U == (7U 
                                                   & (IData)(vlSelf->top__DOT__control_unit__DOT__op))))
                                 : (IData)((7U == (7U 
                                                   & (IData)(vlSelf->top__DOT__control_unit__DOT__op))))))));
        vlSelf->top__DOT__control_unit__DOT__ALUSrcD 
            = (1U & (1U & ((0x20U != (0x30U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) 
                           | ((8U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))
                               ? (IData)((7U != (7U 
                                                 & (IData)(vlSelf->top__DOT__control_unit__DOT__op))))
                               : ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))
                                   ? (IData)((3U != 
                                              (3U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))))
                                   : (IData)((3U != 
                                              (3U & (IData)(vlSelf->top__DOT__control_unit__DOT__op)))))))));
    } else {
        if ((0x20U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((8U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                } else if ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 3U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                        } else {
                            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 2U;
                        } else {
                            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                }
            } else if ((8U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 1U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 1U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
            vlSelf->top__DOT__control_unit__DOT__RegWriteD 
                = (1U & (IData)(((0x10U == (0x18U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) 
                                 & ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))
                                     ? (((IData)(vlSelf->top__DOT__control_unit__DOT__op) 
                                         >> 1U) & (IData)(vlSelf->top__DOT__control_unit__DOT__op))
                                     : (((IData)(vlSelf->top__DOT__control_unit__DOT__op) 
                                         >> 1U) & (IData)(vlSelf->top__DOT__control_unit__DOT__op))))));
        } else if ((0x10U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
            if ((8U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 2U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
            vlSelf->top__DOT__control_unit__DOT__RegWriteD 
                = (1U & ((~ ((IData)(vlSelf->top__DOT__control_unit__DOT__op) 
                             >> 3U)) & ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))
                                         ? (((IData)(vlSelf->top__DOT__control_unit__DOT__op) 
                                             >> 1U) 
                                            & (IData)(vlSelf->top__DOT__control_unit__DOT__op))
                                         : (((IData)(vlSelf->top__DOT__control_unit__DOT__op) 
                                             >> 1U) 
                                            & (IData)(vlSelf->top__DOT__control_unit__DOT__op)))));
        } else {
            if ((8U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 1U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 1U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
            vlSelf->top__DOT__control_unit__DOT__RegWriteD 
                = (1U & (IData)((3U == (0xfU & (IData)(vlSelf->top__DOT__control_unit__DOT__op)))));
        }
        vlSelf->top__DOT__control_unit__DOT__ALUSrcD 
            = (1U & (IData)((0x33U != (0x3fU & (IData)(vlSelf->top__DOT__control_unit__DOT__op)))));
    }
    vlSelf->top__DOT__control_unit__DOT__MemWriteD 
        = (IData)((0x23U == (IData)(vlSelf->top__DOT__control_unit__DOT__op)));
    vlSelf->top__DOT__control_unit__DOT__JumpD = (1U 
                                                  & (IData)(
                                                            ((0x60U 
                                                              == 
                                                              (0x70U 
                                                               & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) 
                                                             & ((8U 
                                                                 & (IData)(vlSelf->top__DOT__control_unit__DOT__op))
                                                                 ? (IData)(
                                                                           (7U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->top__DOT__control_unit__DOT__op))))
                                                                 : (IData)(
                                                                           (7U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->top__DOT__control_unit__DOT__op))))))));
    vlSelf->top__DOT__control_unit__DOT__MemReadD = 
        (1U & (IData)(((0U == (0x60U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) 
                       & ((0x10U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))
                           ? (IData)((3U == (0xfU & (IData)(vlSelf->top__DOT__control_unit__DOT__op))))
                           : (IData)((3U == (0xfU & (IData)(vlSelf->top__DOT__control_unit__DOT__op))))))));
    vlSelf->top__DOT__control_unit__DOT__modeAddr = 
        ((IData)(vlSelf->top__DOT__control_unit__DOT__Store)
          ? ((0U == (IData)(vlSelf->top__DOT__control_unit__DOT__funct3))
              ? 3U : ((1U == (IData)(vlSelf->top__DOT__control_unit__DOT__funct3))
                       ? 2U : ((2U == (IData)(vlSelf->top__DOT__control_unit__DOT__funct3))
                                ? 1U : 0U))) : ((IData)(vlSelf->top__DOT__control_unit__DOT__Load)
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->top__DOT__control_unit__DOT__funct3))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__control_unit__DOT__funct3))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__control_unit__DOT__funct3))
                                                    ? 4U
                                                    : 5U))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__control_unit__DOT__funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__control_unit__DOT__funct3))
                                                    ? 0U
                                                    : 1U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__control_unit__DOT__funct3))
                                                    ? 2U
                                                    : 3U)))
                                                 : 0U));
    vlSelf->top__DOT__control_unit__DOT__BranchD = (IData)(
                                                           (0x63U 
                                                            == (IData)(vlSelf->top__DOT__control_unit__DOT__op)));
    vlSelf->top__DOT__PC_mux__DOT__PCPlus4F = vlSelf->top__DOT__PCPlus4F;
    vlSelf->top__DOT__pipeline_FD__DOT__PCPlus4F = vlSelf->top__DOT__PCPlus4F;
    vlSelf->top__DOT__InstrF = vlSelf->top__DOT__instruction_memory__DOT__instr;
    vlSelf->top__DOT__PC_mux__DOT__PCTarget = top__DOT____Vcellinp__PC_mux__PCTarget;
    vlSelf->top__DOT__alu__DOT__SrcB = top__DOT____Vcellinp__alu__SrcB;
    vlSelf->top__DOT__ReadDataM = vlSelf->top__DOT__data_memory__DOT__RD;
    vlSelf->a5 = vlSelf->top__DOT__a5;
    vlSelf->a4 = vlSelf->top__DOT__a4;
    vlSelf->a3 = vlSelf->top__DOT__a3;
    vlSelf->a2 = vlSelf->top__DOT__a2;
    vlSelf->a1 = vlSelf->top__DOT__a1;
    vlSelf->s1 = vlSelf->top__DOT__s1;
    vlSelf->t2 = vlSelf->top__DOT__t2;
    vlSelf->t1 = vlSelf->top__DOT__t1;
    vlSelf->t0 = vlSelf->top__DOT__t0;
    vlSelf->a0 = vlSelf->top__DOT__a0;
    vlSelf->s2 = vlSelf->top__DOT__s2;
    vlSelf->s0 = vlSelf->top__DOT__s0;
    vlSelf->a6 = vlSelf->top__DOT__a6;
    vlSelf->a7 = vlSelf->top__DOT__a7;
    vlSelf->s3 = vlSelf->top__DOT__s3;
    vlSelf->s4 = vlSelf->top__DOT__s4;
    vlSelf->s5 = vlSelf->top__DOT__s5;
    vlSelf->s6 = vlSelf->top__DOT__s6;
    vlSelf->s7 = vlSelf->top__DOT__s7;
    vlSelf->s8 = vlSelf->top__DOT__s8;
    vlSelf->s9 = vlSelf->top__DOT__s9;
    vlSelf->s10 = vlSelf->top__DOT__s10;
    vlSelf->s11 = vlSelf->top__DOT__s11;
    vlSelf->t3 = vlSelf->top__DOT__t3;
    vlSelf->t4 = vlSelf->top__DOT__t4;
    vlSelf->t5 = vlSelf->top__DOT__t5;
    vlSelf->t6 = vlSelf->top__DOT__t6;
    vlSelf->top__DOT__ResultW = vlSelf->top__DOT__regfile_mux__DOT__out;
    vlSelf->top__DOT__ForwardBE = vlSelf->top__DOT__hazard_unit__DOT__ForwardBE;
    vlSelf->top__DOT__ForwardAE = vlSelf->top__DOT__hazard_unit__DOT__ForwardAE;
    vlSelf->top__DOT__RD1 = vlSelf->top__DOT__regfile__DOT__RD1;
    vlSelf->top__DOT__RD2 = vlSelf->top__DOT__regfile__DOT__RD2;
    vlSelf->top__DOT__ResultSrcD = vlSelf->top__DOT__control_unit__DOT__ResultSrcD;
    vlSelf->top__DOT__RegWriteD = vlSelf->top__DOT__control_unit__DOT__RegWriteD;
    vlSelf->top__DOT__ALUSrcD = vlSelf->top__DOT__control_unit__DOT__ALUSrcD;
    vlSelf->top__DOT__MemWriteD = vlSelf->top__DOT__control_unit__DOT__MemWriteD;
    vlSelf->top__DOT__JumpD = vlSelf->top__DOT__control_unit__DOT__JumpD;
    vlSelf->top__DOT__MemReadD = vlSelf->top__DOT__control_unit__DOT__MemReadD;
    vlSelf->top__DOT__modeAddrD = vlSelf->top__DOT__control_unit__DOT__modeAddr;
    vlSelf->top__DOT__ImmSrc = vlSelf->top__DOT__control_unit__DOT__ImmSrcD;
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__ALUOp 
        = vlSelf->top__DOT__control_unit__DOT__ALUOp;
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__control_unit__DOT__funct7) 
                     << 6U) | ((0x20U & (IData)(vlSelf->top__DOT__control_unit__DOT__op)) 
                               | (((IData)(vlSelf->top__DOT__control_unit__DOT__funct3) 
                                   << 2U) | (IData)(vlSelf->top__DOT__control_unit__DOT__ALUOp))));
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl 
        = Vtop__ConstPool__TABLE_h2f1e8d19_0[__Vtableidx1];
    vlSelf->top__DOT__BranchD = vlSelf->top__DOT__control_unit__DOT__BranchD;
    vlSelf->top__DOT__branch_prediction_unit__DOT__RD 
        = vlSelf->top__DOT__InstrF;
    vlSelf->top__DOT__pipeline_FD__DOT__RD = vlSelf->top__DOT__InstrF;
    vlSelf->top__DOT__pipeline_MW__DOT__ReadDataM = vlSelf->top__DOT__ReadDataM;
    vlSelf->top__DOT__regfile__DOT__WD3 = vlSelf->top__DOT__ResultW;
    vlSelf->top__DOT__forwardAE_mux__DOT__in1 = vlSelf->top__DOT__ResultW;
    vlSelf->top__DOT__forwardBE_mux__DOT__in1 = vlSelf->top__DOT__ResultW;
    vlSelf->top__DOT__forwardBE_mux__DOT__sel = vlSelf->top__DOT__ForwardBE;
    vlSelf->top__DOT__forwardBE_mux__DOT__out = ((0U 
                                                  == (IData)(vlSelf->top__DOT__ForwardBE))
                                                  ? vlSelf->top__DOT__RD2E
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__ForwardBE))
                                                   ? vlSelf->top__DOT__ResultW
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__ForwardBE))
                                                    ? vlSelf->top__DOT__ALUResultM
                                                    : vlSelf->top__DOT__RD2E)));
    vlSelf->top__DOT__forwardAE_mux__DOT__sel = vlSelf->top__DOT__ForwardAE;
    vlSelf->top__DOT__forwardAE_mux__DOT__out = ((0U 
                                                  == (IData)(vlSelf->top__DOT__ForwardAE))
                                                  ? vlSelf->top__DOT__RD1E
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__ForwardAE))
                                                   ? vlSelf->top__DOT__ResultW
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__ForwardAE))
                                                    ? vlSelf->top__DOT__ALUResultM
                                                    : vlSelf->top__DOT__RD1E)));
    vlSelf->top__DOT__pipeline_DE__DOT__RD1 = vlSelf->top__DOT__RD1;
    vlSelf->top__DOT__pipeline_DE__DOT__RD2 = vlSelf->top__DOT__RD2;
    vlSelf->top__DOT__pipeline_DE__DOT__ResultSrcD 
        = vlSelf->top__DOT__ResultSrcD;
    vlSelf->top__DOT__pipeline_DE__DOT__RegWriteD = vlSelf->top__DOT__RegWriteD;
    vlSelf->top__DOT__pipeline_DE__DOT__ALUSrcD = vlSelf->top__DOT__ALUSrcD;
    vlSelf->top__DOT__pipeline_DE__DOT__MemWriteD = vlSelf->top__DOT__MemWriteD;
    vlSelf->top__DOT__pipeline_DE__DOT__JumpD = vlSelf->top__DOT__JumpD;
    vlSelf->top__DOT__pipeline_DE__DOT__MemReadD = vlSelf->top__DOT__MemReadD;
    vlSelf->top__DOT__pipeline_DE__DOT__modeAddrD = vlSelf->top__DOT__modeAddrD;
    vlSelf->top__DOT__sign_extend__DOT__ImmSrc = vlSelf->top__DOT__ImmSrc;
    vlSelf->top__DOT__sign_extend__DOT__ImmExt = ((4U 
                                                   & (IData)(vlSelf->top__DOT__ImmSrc))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__ImmSrc))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__ImmSrc))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__InstrD 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->top__DOT__InstrD 
                                                        >> 0x14U))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__InstrD 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | ((0xff000U 
                                                         & vlSelf->top__DOT__InstrD) 
                                                        | ((0x800U 
                                                            & (vlSelf->top__DOT__InstrD 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->top__DOT__InstrD 
                                                                 >> 0x14U)))))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__ImmSrc))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__ImmSrc))
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->top__DOT__InstrD)
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__InstrD 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelf->top__DOT__InstrD 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->top__DOT__InstrD 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->top__DOT__InstrD 
                                                                 >> 7U))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__ImmSrc))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__InstrD 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->top__DOT__InstrD 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->top__DOT__InstrD 
                                                              >> 7U))))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__InstrD 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->top__DOT__InstrD 
                                                        >> 0x14U)))));
    vlSelf->top__DOT__control_unit__DOT__ALUControlD 
        = vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl;
    vlSelf->top__DOT__hazard_unit__DOT__BranchD = vlSelf->top__DOT__BranchD;
    vlSelf->top__DOT__pipeline_DE__DOT__BranchD = vlSelf->top__DOT__BranchD;
    vlSelf->top__DOT__WriteDataE = vlSelf->top__DOT__forwardBE_mux__DOT__out;
    vlSelf->top__DOT__SrcAE = vlSelf->top__DOT__forwardAE_mux__DOT__out;
    vlSelf->top__DOT__ExtImmD = vlSelf->top__DOT__sign_extend__DOT__ImmExt;
    vlSelf->top__DOT__ALUControlD = vlSelf->top__DOT__control_unit__DOT__ALUControlD;
    vlSelf->top__DOT__pipeline_EM__DOT__WriteDataE 
        = vlSelf->top__DOT__WriteDataE;
    vlSelf->top__DOT__alu__DOT__SrcA = vlSelf->top__DOT__SrcAE;
    vlSelf->top__DOT__alu__DOT__ALUResult = ((8U & (IData)(vlSelf->top__DOT__ALUControlE))
                                              ? ((4U 
                                                  & (IData)(vlSelf->top__DOT__ALUControlE))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__ALUControlE))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ALUControlE))
                                                    ? 
                                                   ((vlSelf->top__DOT__SrcAE 
                                                     < top__DOT____Vcellinp__alu__SrcB)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelf->top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)
                                                     ? 1U
                                                     : 0U))))
                                              : ((4U 
                                                  & (IData)(vlSelf->top__DOT__ALUControlE))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__ALUControlE))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ALUControlE))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__SrcAE, 
                                                                  (0x1fU 
                                                                   & top__DOT____Vcellinp__alu__SrcB))
                                                    : 
                                                   (vlSelf->top__DOT__SrcAE 
                                                    >> 
                                                    (0x1fU 
                                                     & top__DOT____Vcellinp__alu__SrcB)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ALUControlE))
                                                    ? 
                                                   (vlSelf->top__DOT__SrcAE 
                                                    << 
                                                    (0x1fU 
                                                     & top__DOT____Vcellinp__alu__SrcB))
                                                    : 
                                                   (vlSelf->top__DOT__SrcAE 
                                                    & top__DOT____Vcellinp__alu__SrcB)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__ALUControlE))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ALUControlE))
                                                    ? 
                                                   (vlSelf->top__DOT__SrcAE 
                                                    | top__DOT____Vcellinp__alu__SrcB)
                                                    : 
                                                   (vlSelf->top__DOT__SrcAE 
                                                    ^ top__DOT____Vcellinp__alu__SrcB))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ALUControlE))
                                                    ? 
                                                   (vlSelf->top__DOT__SrcAE 
                                                    - top__DOT____Vcellinp__alu__SrcB)
                                                    : 
                                                   (vlSelf->top__DOT__SrcAE 
                                                    + top__DOT____Vcellinp__alu__SrcB)))));
    vlSelf->top__DOT__alu__DOT__ZeroE = (((IData)(vlSelf->top__DOT__ALUControlE) 
                                          >> 3U) & 
                                         ((4U & (IData)(vlSelf->top__DOT__ALUControlE))
                                           ? ((2U & (IData)(vlSelf->top__DOT__ALUControlE))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUControlE))
                                                   ? 
                                                  (vlSelf->top__DOT__SrcAE 
                                                   >= top__DOT____Vcellinp__alu__SrcB)
                                                   : 
                                                  (vlSelf->top__DOT__SrcAE 
                                                   < top__DOT____Vcellinp__alu__SrcB))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUControlE))
                                                   ? 
                                                  VL_GTES_III(32, vlSelf->top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)
                                                   : 
                                                  VL_LTS_III(32, vlSelf->top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)))
                                           : (((IData)(vlSelf->top__DOT__ALUControlE) 
                                               >> 1U) 
                                              & ((1U 
                                                  & (IData)(vlSelf->top__DOT__ALUControlE))
                                                  ? 
                                                 (vlSelf->top__DOT__SrcAE 
                                                  != top__DOT____Vcellinp__alu__SrcB)
                                                  : 
                                                 (vlSelf->top__DOT__SrcAE 
                                                  == top__DOT____Vcellinp__alu__SrcB)))));
    vlSelf->top__DOT__pipeline_DE__DOT__ExtImmD = vlSelf->top__DOT__ExtImmD;
    vlSelf->top__DOT__pipeline_DE__DOT__ALUControlD 
        = vlSelf->top__DOT__ALUControlD;
    vlSelf->top__DOT__ALUResultE = vlSelf->top__DOT__alu__DOT__ALUResult;
    vlSelf->top__DOT__Zero = vlSelf->top__DOT__alu__DOT__ZeroE;
    vlSelf->top__DOT__PC_mux__DOT__ALUResult = vlSelf->top__DOT__ALUResultE;
    vlSelf->top__DOT__pipeline_EM__DOT__ALUResultE 
        = vlSelf->top__DOT__ALUResultE;
    vlSelf->top__DOT__branch_prediction_unit__DOT__ZeroE 
        = vlSelf->top__DOT__Zero;
    vlSelf->top__DOT__PC_mux__DOT__ZeroE = vlSelf->top__DOT__Zero;
    vlSelf->top__DOT__PC_mux__DOT__PC = vlSelf->top__DOT__PCPlus4F;
    if (vlSelf->top__DOT__JumpE) {
        vlSelf->top__DOT__PC_mux__DOT__PC = ((IData)(vlSelf->top__DOT__BranchE)
                                              ? vlSelf->top__DOT__ALUResultE
                                              : top__DOT____Vcellinp__PC_mux__PCTarget);
    } else if (((IData)(vlSelf->top__DOT__BranchE) 
                & (IData)(vlSelf->top__DOT__Zero))) {
        vlSelf->top__DOT__PC_mux__DOT__PC = top__DOT____Vcellinp__PC_mux__PCTarget;
    }
    if ((0x63U == (0x7fU & vlSelf->top__DOT__InstrF))) {
        vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPU 
            = (vlSelf->top__DOT__PCF + (((- (IData)(
                                                    (vlSelf->top__DOT__InstrF 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        ((0x800U & 
                                          (vlSelf->top__DOT__InstrF 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSelf->top__DOT__InstrF 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelf->top__DOT__InstrF 
                                                  >> 7U))))));
        vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[1U] 
            = ((3U & vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[1U]) 
               | (vlSelf->top__DOT__PCF << 2U));
        vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[2U] 
            = (vlSelf->top__DOT__PCF >> 0x1eU);
        vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
            = ((3U & vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U]) 
               | ((vlSelf->top__DOT__PCF + (((- (IData)(
                                                        (vlSelf->top__DOT__InstrF 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->top__DOT__InstrF 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__InstrF 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->top__DOT__InstrF 
                                                        >> 7U)))))) 
                  << 2U));
        vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[1U] 
            = ((0xfffffffcU & vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[1U]) 
               | ((vlSelf->top__DOT__PCF + (((- (IData)(
                                                        (vlSelf->top__DOT__InstrF 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->top__DOT__InstrF 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__InstrF 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->top__DOT__InstrF 
                                                        >> 7U)))))) 
                  >> 0x1eU));
        vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U]) 
               | (2U & (vlSelf->top__DOT__InstrF >> 0x1eU)));
        if ((vlSelf->top__DOT__InstrF >> 0x1fU)) {
            if ((2U <= (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter))) {
                vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 1U;
                vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                    = (1U | vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
            } else {
                vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 0U;
                vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                    = (0xfffffffeU & vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
            }
        } else if ((2U <= (IData)(vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))) {
            vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 1U;
            vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                = (1U | vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
        } else {
            vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 0U;
            vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                = (0xfffffffeU & vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
        }
        vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue.push_back(
                                                                              VL_CVT_W_A(vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch, vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue
                                                                                .atDefault()));
    } else {
        vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 0U;
    }
    if (vlSelf->top__DOT__BranchE) {
        VL_ASSIGN_W(66,vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch, vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue.at(0U));
        if (((1U & vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U]) 
             == (IData)(vlSelf->top__DOT__Zero))) {
            vlSelf->top__DOT__branch_prediction_unit__DOT__flushBranch = 0U;
            if ((1U & (~ (vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U] 
                          >> 1U)))) {
                vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpDecisionCorrect = 1U;
            }
            if ((2U & vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U])) {
                vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpDecisionCorrect = 1U;
            }
        }
        if (((1U & vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U]) 
             != (IData)(vlSelf->top__DOT__Zero))) {
            vlSelf->top__DOT__branch_prediction_unit__DOT__flushBranch = 1U;
            vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 1U;
            vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPU 
                = ((IData)(vlSelf->top__DOT__Zero) ? 
                   ((vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
                     << 0x1eU) | (vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[0U] 
                                  >> 2U)) : ((IData)(4U) 
                                             + ((vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[2U] 
                                                 << 0x1eU) 
                                                | (vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
                                                   >> 2U))));
        }
        vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue.pop_front();
    } else {
        vlSelf->top__DOT__branch_prediction_unit__DOT__flushBranch = 0U;
    }
    vlSelf->top__DOT__PC = vlSelf->top__DOT__PC_mux__DOT__PC;
    vlSelf->top__DOT__PC_predict = vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPU;
    vlSelf->top__DOT__BPU_Src = vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPUSrc;
    vlSelf->top__DOT__flushBranch = vlSelf->top__DOT__branch_prediction_unit__DOT__flushBranch;
    vlSelf->top__DOT__BPU_mux__DOT__in0 = vlSelf->top__DOT__PC;
    vlSelf->top__DOT__BPU_mux__DOT__in1 = vlSelf->top__DOT__PC_predict;
    if (vlSelf->top__DOT__BPU_Src) {
        vlSelf->top__DOT__BPU_mux__DOT__sel = 1U;
        vlSelf->top__DOT__BPU_mux__DOT__out = vlSelf->top__DOT__PC_predict;
    } else {
        vlSelf->top__DOT__BPU_mux__DOT__sel = 0U;
        vlSelf->top__DOT__BPU_mux__DOT__out = vlSelf->top__DOT__PC;
    }
    vlSelf->top__DOT__hazard_unit__DOT__flushBranch 
        = vlSelf->top__DOT__flushBranch;
    vlSelf->top__DOT__hazard_unit__DOT__stall = 0U;
    vlSelf->top__DOT__hazard_unit__DOT__stall = (((IData)(vlSelf->top__DOT__MemReadE) 
                                                  & (((IData)(vlSelf->top__DOT__RdE) 
                                                      == (IData)(vlSelf->top__DOT__Rs1E)) 
                                                     | ((IData)(vlSelf->top__DOT__RdE) 
                                                        == (IData)(vlSelf->top__DOT__Rs2E)))) 
                                                 | ((((IData)(vlSelf->top__DOT__BranchD) 
                                                      & (IData)(vlSelf->top__DOT__RegWriteE)) 
                                                     & (((IData)(vlSelf->top__DOT__RdE) 
                                                         == (IData)(vlSelf->top__DOT__Rs2D)) 
                                                        | ((IData)(vlSelf->top__DOT__RdE) 
                                                           == (IData)(vlSelf->top__DOT__Rs1D)))) 
                                                    | (((IData)(vlSelf->top__DOT__BranchD) 
                                                        & (IData)(vlSelf->top__DOT__MemReadM)) 
                                                       & (((IData)(vlSelf->top__DOT__RdM) 
                                                           == (IData)(vlSelf->top__DOT__Rs2D)) 
                                                          | ((IData)(vlSelf->top__DOT__RdM) 
                                                             == (IData)(vlSelf->top__DOT__Rs1D))))));
    vlSelf->top__DOT__hazard_unit__DOT__flush = ((IData)(vlSelf->top__DOT__hazard_unit__DOT__stall) 
                                                 | (IData)(vlSelf->top__DOT__flushBranch));
    vlSelf->top__DOT__PC_next = vlSelf->top__DOT__BPU_mux__DOT__out;
    vlSelf->top__DOT__stall = vlSelf->top__DOT__hazard_unit__DOT__stall;
    vlSelf->top__DOT__flush = vlSelf->top__DOT__hazard_unit__DOT__flush;
    vlSelf->top__DOT__program_counter__DOT__PC = vlSelf->top__DOT__PC_next;
    vlSelf->top__DOT__program_counter__DOT__stall = vlSelf->top__DOT__stall;
    vlSelf->top__DOT__pipeline_FD__DOT__stall = vlSelf->top__DOT__stall;
    vlSelf->top__DOT__pipeline_FD__DOT__flush = vlSelf->top__DOT__flush;
    vlSelf->top__DOT__pipeline_DE__DOT__flush = vlSelf->top__DOT__flush;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    Vtop___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
