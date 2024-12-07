// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT____Vcellinp__PC_mux__PCTarget;
    IData/*31:0*/ top__DOT____Vcellinp__alu__SrcB;
    // Body
    vlSelf->top__DOT__forwardAE_mux__DOT__in1 = vlSelf->top__DOT__ResultW;
    vlSelf->top__DOT__forwardBE_mux__DOT__in1 = vlSelf->top__DOT__ResultW;
    vlSelf->top__DOT__data_memory__DOT__modeBU = vlSelf->top__DOT__modeBUM;
    vlSelf->top__DOT__pipeline_DE__DOT__Rs1D = vlSelf->top__DOT__Rs1D;
    vlSelf->top__DOT__pipeline_DE__DOT__Rs2D = vlSelf->top__DOT__Rs2D;
    vlSelf->top__DOT__pipeline_DE__DOT__RdD = vlSelf->top__DOT__RdD;
    vlSelf->top__DOT__rst = vlSelf->rst;
    vlSelf->top__DOT__trigger = vlSelf->trigger;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__MemReadD = vlSelf->top__DOT__control_unit__DOT__MemReadD;
    vlSelf->top__DOT__PCD = vlSelf->top__DOT__pipeline_FD__DOT__PCD;
    vlSelf->top__DOT__PCPlus4D = vlSelf->top__DOT__pipeline_FD__DOT__PCPlus4D;
    vlSelf->top__DOT__RegWriteE = vlSelf->top__DOT__pipeline_DE__DOT__RegWriteE;
    vlSelf->top__DOT__ResultSrcE = vlSelf->top__DOT__pipeline_DE__DOT__ResultSrcE;
    vlSelf->top__DOT__MemWriteE = vlSelf->top__DOT__pipeline_DE__DOT__MemWriteE;
    vlSelf->top__DOT__PCPlus4E = vlSelf->top__DOT__pipeline_DE__DOT__PCPlus4E;
    vlSelf->top__DOT__MemWriteM = vlSelf->top__DOT__pipeline_EM__DOT__MemWriteM;
    vlSelf->top__DOT__WriteDataM = vlSelf->top__DOT__pipeline_EM__DOT__WriteDataM;
    vlSelf->top__DOT__PCPlus4M = vlSelf->top__DOT__pipeline_EM__DOT__PCPlus4M;
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
    vlSelf->top__DOT__PC_predict = vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPU;
    vlSelf->top__DOT__BPU_Src = vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPUSrc;
    vlSelf->top__DOT__ResultSrcW = vlSelf->top__DOT__pipeline_MW__DOT__ResultSrcW;
    vlSelf->top__DOT__ALUResultW = vlSelf->top__DOT__pipeline_MW__DOT__ALUResultW;
    vlSelf->top__DOT__ReadDataW = vlSelf->top__DOT__pipeline_MW__DOT__ReadDataW;
    vlSelf->top__DOT__PCPlus4W = vlSelf->top__DOT__pipeline_MW__DOT__PCPlus4W;
    vlSelf->top__DOT__ResultSrcM = vlSelf->top__DOT__pipeline_EM__DOT__ResultSrcM;
    vlSelf->top__DOT__flushBranch = vlSelf->top__DOT__branch_prediction_unit__DOT__flushBranch;
    vlSelf->top__DOT__MemReadE = vlSelf->top__DOT__pipeline_DE__DOT__MemReadE;
    vlSelf->top__DOT__RdE = vlSelf->top__DOT__pipeline_DE__DOT__RdE;
    vlSelf->top__DOT__JumpE = vlSelf->top__DOT__pipeline_DE__DOT__JumpE;
    vlSelf->top__DOT__BranchE = vlSelf->top__DOT__pipeline_DE__DOT__BranchE;
    vlSelf->top__DOT__ALUResultM = vlSelf->top__DOT__pipeline_EM__DOT__ALUResultM;
    vlSelf->top__DOT__PCE = vlSelf->top__DOT__pipeline_DE__DOT__PCE;
    vlSelf->top__DOT__PCF = vlSelf->top__DOT__program_counter__DOT__PCF;
    vlSelf->top__DOT__RegWriteM = vlSelf->top__DOT__pipeline_EM__DOT__RegWriteM;
    vlSelf->top__DOT__RdM = vlSelf->top__DOT__pipeline_EM__DOT__RdM;
    vlSelf->top__DOT__Rs2E = vlSelf->top__DOT__pipeline_DE__DOT__Rs2E;
    vlSelf->top__DOT__RegWriteW = vlSelf->top__DOT__pipeline_MW__DOT__RegWriteW;
    vlSelf->top__DOT__RdW = vlSelf->top__DOT__pipeline_MW__DOT__RdW;
    vlSelf->top__DOT__Rs1E = vlSelf->top__DOT__pipeline_DE__DOT__Rs1E;
    vlSelf->top__DOT__InstrD = vlSelf->top__DOT__pipeline_FD__DOT__InstrD;
    vlSelf->top__DOT__ALUControlE = vlSelf->top__DOT__pipeline_DE__DOT__ALUControlE;
    vlSelf->top__DOT__RD1E = vlSelf->top__DOT__pipeline_DE__DOT__RD1E;
    vlSelf->top__DOT__ALUSrcE = vlSelf->top__DOT__pipeline_DE__DOT__ALUSrcE;
    vlSelf->top__DOT__RD2E = vlSelf->top__DOT__pipeline_DE__DOT__RD2E;
    vlSelf->top__DOT__ExtImmE = vlSelf->top__DOT__pipeline_DE__DOT__ExtImmE;
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
    vlSelf->top__DOT__pipeline_DE__DOT__MemReadD = vlSelf->top__DOT__MemReadD;
    vlSelf->top__DOT__pipeline_DE__DOT__PCD = vlSelf->top__DOT__PCD;
    vlSelf->top__DOT__pipeline_DE__DOT__PCPlus4D = vlSelf->top__DOT__PCPlus4D;
    vlSelf->top__DOT__pipeline_EM__DOT__RegWriteE = vlSelf->top__DOT__RegWriteE;
    vlSelf->top__DOT__pipeline_EM__DOT__ResultSrcE 
        = vlSelf->top__DOT__ResultSrcE;
    vlSelf->top__DOT__pipeline_EM__DOT__MemWriteE = vlSelf->top__DOT__MemWriteE;
    vlSelf->top__DOT__pipeline_EM__DOT__PCPlus4E = vlSelf->top__DOT__PCPlus4E;
    vlSelf->top__DOT__data_memory__DOT__WE = vlSelf->top__DOT__MemWriteM;
    vlSelf->top__DOT__data_memory__DOT__WD = vlSelf->top__DOT__WriteDataM;
    vlSelf->top__DOT__pipeline_MW__DOT__PCPlus4M = vlSelf->top__DOT__PCPlus4M;
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
    vlSelf->top__DOT__BPU_mux__DOT__in1 = vlSelf->top__DOT__PC_predict;
    vlSelf->top__DOT__BPU_mux__DOT__sel = vlSelf->top__DOT__BPU_Src;
    vlSelf->top__DOT__regfile_mux__DOT__sel = vlSelf->top__DOT__ResultSrcW;
    vlSelf->top__DOT__regfile_mux__DOT__in0 = vlSelf->top__DOT__ALUResultW;
    vlSelf->top__DOT__regfile_mux__DOT__in1 = vlSelf->top__DOT__ReadDataW;
    vlSelf->top__DOT__regfile_mux__DOT__in2 = vlSelf->top__DOT__PCPlus4W;
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
    vlSelf->top__DOT__data_memory__DOT__ResultSrc = vlSelf->top__DOT__ResultSrcM;
    vlSelf->top__DOT__pipeline_MW__DOT__ResultSrcM 
        = vlSelf->top__DOT__ResultSrcM;
    vlSelf->top__DOT__hazard_unit__DOT__flushBranch 
        = vlSelf->top__DOT__flushBranch;
    vlSelf->top__DOT__hazard_unit__DOT__MemReadE = vlSelf->top__DOT__MemReadE;
    vlSelf->top__DOT__hazard_unit__DOT__RdE = vlSelf->top__DOT__RdE;
    vlSelf->top__DOT__pipeline_EM__DOT__RdE = vlSelf->top__DOT__RdE;
    vlSelf->top__DOT__PC_mux__DOT__JumpE = vlSelf->top__DOT__JumpE;
    vlSelf->top__DOT__branch_prediction_unit__DOT__BranchE 
        = vlSelf->top__DOT__BranchE;
    vlSelf->top__DOT__PC_mux__DOT__BranchE = vlSelf->top__DOT__BranchE;
    vlSelf->top__DOT__forwardAE_mux__DOT__in2 = vlSelf->top__DOT__ALUResultM;
    vlSelf->top__DOT__forwardBE_mux__DOT__in2 = vlSelf->top__DOT__ALUResultM;
    vlSelf->top__DOT__data_memory__DOT__A = vlSelf->top__DOT__ALUResultM;
    vlSelf->top__DOT__pipeline_MW__DOT__ALUResultM 
        = vlSelf->top__DOT__ALUResultM;
    vlSelf->top__DOT__branch_prediction_unit__DOT__PCF 
        = vlSelf->top__DOT__PCF;
    vlSelf->top__DOT__instruction_memory__DOT__PC = vlSelf->top__DOT__PCF;
    vlSelf->top__DOT__pipeline_FD__DOT__PCF = vlSelf->top__DOT__PCF;
    vlSelf->top__DOT__PCPlus4F = ((IData)(4U) + vlSelf->top__DOT__PCF);
    vlSelf->top__DOT__hazard_unit__DOT__RegWriteM = vlSelf->top__DOT__RegWriteM;
    vlSelf->top__DOT__pipeline_MW__DOT__RegWriteM = vlSelf->top__DOT__RegWriteM;
    vlSelf->top__DOT__hazard_unit__DOT__RdM = vlSelf->top__DOT__RdM;
    vlSelf->top__DOT__pipeline_MW__DOT__RdM = vlSelf->top__DOT__RdM;
    vlSelf->top__DOT__hazard_unit__DOT__Rs2E = vlSelf->top__DOT__Rs2E;
    vlSelf->top__DOT__hazard_unit__DOT__RegWriteW = vlSelf->top__DOT__RegWriteW;
    vlSelf->top__DOT__regfile__DOT__WE3 = vlSelf->top__DOT__RegWriteW;
    vlSelf->top__DOT__hazard_unit__DOT__RdW = vlSelf->top__DOT__RdW;
    vlSelf->top__DOT__regfile__DOT__AD3 = vlSelf->top__DOT__RdW;
    vlSelf->top__DOT__hazard_unit__DOT__Rs1E = vlSelf->top__DOT__Rs1E;
    vlSelf->top__DOT__hazard_unit__DOT__ForwardAE = 0U;
    if ((((IData)(vlSelf->top__DOT__RegWriteW) & ((IData)(vlSelf->top__DOT__Rs1E) 
                                                  == (IData)(vlSelf->top__DOT__RdW))) 
         & (0U != (IData)(vlSelf->top__DOT__RdW)))) {
        vlSelf->top__DOT__hazard_unit__DOT__ForwardAE = 1U;
    }
    vlSelf->top__DOT__hazard_unit__DOT__stall = 0U;
    vlSelf->top__DOT__hazard_unit__DOT__stall = ((IData)(vlSelf->top__DOT__MemReadE) 
                                                 & (((IData)(vlSelf->top__DOT__RdE) 
                                                     == (IData)(vlSelf->top__DOT__Rs1E)) 
                                                    | ((IData)(vlSelf->top__DOT__RdE) 
                                                       == (IData)(vlSelf->top__DOT__Rs2E))));
    vlSelf->top__DOT__hazard_unit__DOT__flush = ((IData)(vlSelf->top__DOT__hazard_unit__DOT__stall) 
                                                 | (IData)(vlSelf->top__DOT__flushBranch));
    vlSelf->top__DOT__hazard_unit__DOT__ForwardBE = 0U;
    if ((1U & (~ (((IData)(vlSelf->top__DOT__RegWriteW) 
                   & ((IData)(vlSelf->top__DOT__Rs1E) 
                      == (IData)(vlSelf->top__DOT__RdW))) 
                  & (0U != (IData)(vlSelf->top__DOT__RdW)))))) {
        if ((((IData)(vlSelf->top__DOT__RegWriteM) 
              & ((IData)(vlSelf->top__DOT__Rs1E) == (IData)(vlSelf->top__DOT__RdM))) 
             & (0U != (IData)(vlSelf->top__DOT__RdM)))) {
            vlSelf->top__DOT__hazard_unit__DOT__ForwardBE = 2U;
        }
    }
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
    vlSelf->top__DOT__regfile__DOT__AD1 = (0x1fU & 
                                           (vlSelf->top__DOT__InstrD 
                                            >> 0xfU));
    vlSelf->top__DOT__regfile__DOT__AD2 = (0x1fU & 
                                           (vlSelf->top__DOT__InstrD 
                                            >> 0x14U));
    vlSelf->top__DOT__control_unit__DOT__InstrD = vlSelf->top__DOT__InstrD;
    vlSelf->top__DOT__sign_extend__DOT__ImmInput = vlSelf->top__DOT__InstrD;
    vlSelf->top__DOT__regfile__DOT__RD2 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [(0x1fU & (vlSelf->top__DOT__InstrD >> 0x14U))];
    vlSelf->top__DOT__regfile__DOT__RD1 = vlSelf->top__DOT__regfile__DOT__registerfile_array
        [(0x1fU & (vlSelf->top__DOT__InstrD >> 0xfU))];
    vlSelf->top__DOT__alu__DOT__ALUctrl = vlSelf->top__DOT__ALUControlE;
    vlSelf->top__DOT__forwardAE_mux__DOT__in0 = vlSelf->top__DOT__RD1E;
    vlSelf->top__DOT__alu__DOT__SrcA = vlSelf->top__DOT__RD1E;
    vlSelf->top__DOT__alu_SrcBE_mux__DOT__sel = vlSelf->top__DOT__ALUSrcE;
    vlSelf->top__DOT__forwardBE_mux__DOT__in0 = vlSelf->top__DOT__RD2E;
    vlSelf->top__DOT__alu_SrcBE_mux__DOT__in1 = vlSelf->top__DOT__ExtImmE;
    top__DOT____Vcellinp__PC_mux__PCTarget = (vlSelf->top__DOT__PCE 
                                              + vlSelf->top__DOT__ExtImmE);
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
    vlSelf->top__DOT__Result = vlSelf->top__DOT__regfile_mux__DOT__out;
    vlSelf->top__DOT__PC_mux__DOT__PCPlus4F = vlSelf->top__DOT__PCPlus4F;
    vlSelf->top__DOT__pipeline_FD__DOT__PCPlus4F = vlSelf->top__DOT__PCPlus4F;
    vlSelf->top__DOT__ForwardAE = vlSelf->top__DOT__hazard_unit__DOT__ForwardAE;
    vlSelf->top__DOT__stall = vlSelf->top__DOT__hazard_unit__DOT__stall;
    vlSelf->top__DOT__flush = vlSelf->top__DOT__hazard_unit__DOT__flush;
    vlSelf->top__DOT__ForwardBE = vlSelf->top__DOT__hazard_unit__DOT__ForwardBE;
    vlSelf->top__DOT__RD2 = vlSelf->top__DOT__regfile__DOT__RD2;
    vlSelf->top__DOT__RD1 = vlSelf->top__DOT__regfile__DOT__RD1;
    vlSelf->top__DOT__PC_mux__DOT__PCTarget = top__DOT____Vcellinp__PC_mux__PCTarget;
    top__DOT____Vcellinp__alu__SrcB = ((IData)(vlSelf->top__DOT__ALUSrcE)
                                        ? vlSelf->top__DOT__ExtImmE
                                        : vlSelf->top__DOT__RD2E);
    vlSelf->top__DOT__alu__DOT__SrcB = top__DOT____Vcellinp__alu__SrcB;
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
                                                   ((vlSelf->top__DOT__RD1E 
                                                     < top__DOT____Vcellinp__alu__SrcB)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelf->top__DOT__RD1E, top__DOT____Vcellinp__alu__SrcB)
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
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__RD1E, 
                                                                  (0x1fU 
                                                                   & top__DOT____Vcellinp__alu__SrcB))
                                                    : 
                                                   (vlSelf->top__DOT__RD1E 
                                                    >> 
                                                    (0x1fU 
                                                     & top__DOT____Vcellinp__alu__SrcB)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ALUControlE))
                                                    ? 
                                                   (vlSelf->top__DOT__RD1E 
                                                    << 
                                                    (0x1fU 
                                                     & top__DOT____Vcellinp__alu__SrcB))
                                                    : 
                                                   (vlSelf->top__DOT__RD1E 
                                                    & top__DOT____Vcellinp__alu__SrcB)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__ALUControlE))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ALUControlE))
                                                    ? 
                                                   (vlSelf->top__DOT__RD1E 
                                                    | top__DOT____Vcellinp__alu__SrcB)
                                                    : 
                                                   (vlSelf->top__DOT__RD1E 
                                                    ^ top__DOT____Vcellinp__alu__SrcB))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ALUControlE))
                                                    ? 
                                                   (vlSelf->top__DOT__RD1E 
                                                    - top__DOT____Vcellinp__alu__SrcB)
                                                    : 
                                                   (vlSelf->top__DOT__RD1E 
                                                    + top__DOT____Vcellinp__alu__SrcB)))));
    vlSelf->top__DOT__alu__DOT__ZeroE = (((IData)(vlSelf->top__DOT__ALUControlE) 
                                          >> 3U) & 
                                         ((4U & (IData)(vlSelf->top__DOT__ALUControlE))
                                           ? ((2U & (IData)(vlSelf->top__DOT__ALUControlE))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUControlE))
                                                   ? 
                                                  (vlSelf->top__DOT__RD1E 
                                                   >= top__DOT____Vcellinp__alu__SrcB)
                                                   : 
                                                  (vlSelf->top__DOT__RD1E 
                                                   < top__DOT____Vcellinp__alu__SrcB))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__ALUControlE))
                                                   ? 
                                                  VL_GTES_III(32, vlSelf->top__DOT__RD1E, top__DOT____Vcellinp__alu__SrcB)
                                                   : 
                                                  VL_LTS_III(32, vlSelf->top__DOT__RD1E, top__DOT____Vcellinp__alu__SrcB)))
                                           : (((IData)(vlSelf->top__DOT__ALUControlE) 
                                               >> 1U) 
                                              & ((1U 
                                                  & (IData)(vlSelf->top__DOT__ALUControlE))
                                                  ? 
                                                 (vlSelf->top__DOT__RD1E 
                                                  != top__DOT____Vcellinp__alu__SrcB)
                                                  : 
                                                 (vlSelf->top__DOT__RD1E 
                                                  == top__DOT____Vcellinp__alu__SrcB)))));
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
    vlSelf->top__DOT__program_counter__DOT__stall = vlSelf->top__DOT__stall;
    vlSelf->top__DOT__pipeline_FD__DOT__stall = vlSelf->top__DOT__stall;
    vlSelf->top__DOT__pipeline_FD__DOT__flush = vlSelf->top__DOT__flush;
    vlSelf->top__DOT__pipeline_DE__DOT__flush = vlSelf->top__DOT__flush;
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
    vlSelf->top__DOT__pipeline_DE__DOT__RD2 = vlSelf->top__DOT__RD2;
    vlSelf->top__DOT__pipeline_DE__DOT__RD1 = vlSelf->top__DOT__RD1;
    vlSelf->top__DOT__ALUResult = vlSelf->top__DOT__alu__DOT__ALUResult;
    vlSelf->top__DOT__ZeroE = vlSelf->top__DOT__alu__DOT__ZeroE;
    vlSelf->top__DOT__SrcA = vlSelf->top__DOT__forwardAE_mux__DOT__out;
    vlSelf->top__DOT__WriteDataE = vlSelf->top__DOT__forwardBE_mux__DOT__out;
    vlSelf->top__DOT__alu_SrcBE_mux__DOT__out = ((IData)(vlSelf->top__DOT__ALUSrcE)
                                                  ? vlSelf->top__DOT__ExtImmE
                                                  : vlSelf->top__DOT__WriteDataE);
    vlSelf->top__DOT__PC_mux__DOT__ALUResult = vlSelf->top__DOT__ALUResult;
    vlSelf->top__DOT__pipeline_EM__DOT__ALUResult = vlSelf->top__DOT__ALUResult;
    vlSelf->top__DOT__branch_prediction_unit__DOT__ZeroE 
        = vlSelf->top__DOT__ZeroE;
    vlSelf->top__DOT__PC_mux__DOT__ZeroE = vlSelf->top__DOT__ZeroE;
    vlSelf->top__DOT__PC_mux__DOT__PC = vlSelf->top__DOT__PCPlus4F;
    if (vlSelf->top__DOT__JumpE) {
        vlSelf->top__DOT__PC_mux__DOT__PC = ((IData)(vlSelf->top__DOT__BranchE)
                                              ? vlSelf->top__DOT__ALUResult
                                              : top__DOT____Vcellinp__PC_mux__PCTarget);
    } else if (((IData)(vlSelf->top__DOT__BranchE) 
                & (IData)(vlSelf->top__DOT__ZeroE))) {
        vlSelf->top__DOT__PC_mux__DOT__PC = top__DOT____Vcellinp__PC_mux__PCTarget;
    }
    vlSelf->top__DOT__alu_SrcBE_mux__DOT__in0 = vlSelf->top__DOT__WriteDataE;
    vlSelf->top__DOT__pipeline_EM__DOT__WriteDataE 
        = vlSelf->top__DOT__WriteDataE;
    vlSelf->top__DOT__PC = vlSelf->top__DOT__PC_mux__DOT__PC;
    vlSelf->top__DOT__SrcBE = vlSelf->top__DOT__alu_SrcBE_mux__DOT__out;
    vlSelf->top__DOT__BPU_mux__DOT__in0 = vlSelf->top__DOT__PC;
    vlSelf->top__DOT__BPU_mux__DOT__out = ((IData)(vlSelf->top__DOT__BPU_Src)
                                            ? vlSelf->top__DOT__PC_predict
                                            : vlSelf->top__DOT__PC);
    vlSelf->top__DOT__PC_next = vlSelf->top__DOT__BPU_mux__DOT__out;
    vlSelf->top__DOT__program_counter__DOT__PC = vlSelf->top__DOT__PC_next;
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3a032bfe__0;
    VlWide<3>/*95:0*/ __Vtemp_h4b288a68__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_h3a032bfe__0[0U] = 0x2e686578U;
    __Vtemp_h3a032bfe__0[1U] = 0x6772616dU;
    __Vtemp_h3a032bfe__0[2U] = 0x70726fU;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h3a032bfe__0)
                 ,  &(vlSelf->top__DOT__instruction_memory__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF("ROM loaded successfully.\nLoading ram.\n");
    __Vtemp_h4b288a68__0[0U] = 0x2e6d656dU;
    __Vtemp_h4b288a68__0[1U] = 0x616d656dU;
    __Vtemp_h4b288a68__0[2U] = 0x646174U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h4b288a68__0)
                 ,  &(vlSelf->top__DOT__data_memory__DOT__ram_array)
                 , 0U, 0x1ffffU);
    VL_WRITEF("Ram loaded\n");
    vlSelf->top__DOT__control_unit__DOT__funct7 = (1U 
                                                   & (vlSelf->top__DOT__InstrD 
                                                      >> 0x1eU));
    vlSelf->top__DOT__control_unit__DOT__funct3 = (7U 
                                                   & (vlSelf->top__DOT__InstrD 
                                                      >> 0xcU));
    vlSelf->top__DOT__control_unit__DOT__op = (0x7fU 
                                               & vlSelf->top__DOT__InstrD);
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h5c4a59e9_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
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
    if ((0x100U == vlSelf->top__DOT__ALUResultM)) {
        vlSelf->top__DOT__data_memory__DOT__RD = vlSelf->trigger;
        vlSelf->top__DOT__data_memory__DOT__Result 
            = vlSelf->top__DOT__data_memory__DOT__RD;
    } else if ((1U == (IData)(vlSelf->top__DOT__ResultSrcM))) {
        if ((4U & (IData)(vlSelf->top__DOT__modeBUM))) {
            if ((2U & (IData)(vlSelf->top__DOT__modeBUM))) {
                vlSelf->top__DOT__data_memory__DOT__Result 
                    = vlSelf->top__DOT__data_memory__DOT__RD;
            } else if ((1U & (IData)(vlSelf->top__DOT__modeBUM))) {
                vlSelf->top__DOT__data_memory__DOT__RD 
                    = vlSelf->top__DOT__data_memory__DOT__ram_array
                    [(0x1fffcU & vlSelf->top__DOT__ALUResultM)];
                vlSelf->top__DOT__data_memory__DOT__Result 
                    = vlSelf->top__DOT__data_memory__DOT__RD;
            } else {
                vlSelf->top__DOT__data_memory__DOT__RD 
                    = ((vlSelf->top__DOT__data_memory__DOT__ram_array
                        [(0x1fffcU & vlSelf->top__DOT__ALUResultM)] 
                        << 8U) | vlSelf->top__DOT__data_memory__DOT__ram_array
                       [(0x1ffffU & ((IData)(1U) + 
                                     (0x1fffcU & vlSelf->top__DOT__ALUResultM)))]);
                vlSelf->top__DOT__data_memory__DOT__Result 
                    = vlSelf->top__DOT__data_memory__DOT__RD;
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__modeBUM))) {
            if ((1U & (IData)(vlSelf->top__DOT__modeBUM))) {
                vlSelf->top__DOT__data_memory__DOT__RD 
                    = (((- (IData)((1U & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                          [(0x1fffcU 
                                            & vlSelf->top__DOT__ALUResultM)] 
                                          >> 7U)))) 
                        << 8U) | vlSelf->top__DOT__data_memory__DOT__ram_array
                       [(0x1fffcU & vlSelf->top__DOT__ALUResultM)]);
                vlSelf->top__DOT__data_memory__DOT__Result 
                    = vlSelf->top__DOT__data_memory__DOT__RD;
            } else {
                vlSelf->top__DOT__data_memory__DOT__RD 
                    = (((- (IData)((1U & (vlSelf->top__DOT__data_memory__DOT__ram_array
                                          [(0x1fffcU 
                                            & vlSelf->top__DOT__ALUResultM)] 
                                          >> 7U)))) 
                        << 0x10U) | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                      [(0x1fffcU & vlSelf->top__DOT__ALUResultM)] 
                                      << 8U) | vlSelf->top__DOT__data_memory__DOT__ram_array
                                     [(0x1ffffU & ((IData)(1U) 
                                                   + 
                                                   (0x1fffcU 
                                                    & vlSelf->top__DOT__ALUResultM)))]));
                vlSelf->top__DOT__data_memory__DOT__Result 
                    = vlSelf->top__DOT__data_memory__DOT__RD;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__modeBUM))) {
            vlSelf->top__DOT__data_memory__DOT__RD 
                = ((vlSelf->top__DOT__data_memory__DOT__ram_array
                    [(0x1fffcU & vlSelf->top__DOT__ALUResultM)] 
                    << 0x18U) | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                  [(0x1ffffU & ((IData)(1U) 
                                                + (0x1fffcU 
                                                   & vlSelf->top__DOT__ALUResultM)))] 
                                  << 0x10U) | ((vlSelf->top__DOT__data_memory__DOT__ram_array
                                                [(0x1ffffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x1fffcU 
                                                      & vlSelf->top__DOT__ALUResultM)))] 
                                                << 8U) 
                                               | vlSelf->top__DOT__data_memory__DOT__ram_array
                                               [(0x1ffffU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (0x1fffcU 
                                                     & vlSelf->top__DOT__ALUResultM)))])));
            vlSelf->top__DOT__data_memory__DOT__Result 
                = vlSelf->top__DOT__data_memory__DOT__RD;
        } else {
            vlSelf->top__DOT__data_memory__DOT__Result 
                = vlSelf->top__DOT__data_memory__DOT__RD;
        }
    } else {
        vlSelf->top__DOT__data_memory__DOT__Result 
            = ((0U == (IData)(vlSelf->top__DOT__ResultSrcM))
                ? vlSelf->top__DOT__ALUResultM : ((2U 
                                                   == (IData)(vlSelf->top__DOT__ResultSrcM))
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__ALUResultM)
                                                   : vlSelf->top__DOT__ALUResultM));
    }
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__funct7 
        = vlSelf->top__DOT__control_unit__DOT__funct7;
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__funct3 
        = vlSelf->top__DOT__control_unit__DOT__funct3;
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__op 
        = (1U & ((IData)(vlSelf->top__DOT__control_unit__DOT__op) 
                 >> 5U));
    if ((0x40U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
        if ((0x20U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((8U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 2U;
                            vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 4U;
                        } else {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        }
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    }
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                }
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 2U;
                        vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 5U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 2U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 1U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
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
                               : (IData)((3U != (7U 
                                                 & (IData)(vlSelf->top__DOT__control_unit__DOT__op))))))));
    } else {
        if ((0x20U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((8U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                } else if ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 3U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                        } else {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 2U;
                        } else {
                            vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                            vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                            vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                }
            } else if ((8U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    vlSelf->top__DOT__control_unit__DOT__Store = 1U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 1U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
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
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                        vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                        vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 2U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
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
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((2U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelf->top__DOT__control_unit__DOT__op))) {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 1U;
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 1U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                    vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelf->top__DOT__control_unit__DOT__Store = 0U;
                vlSelf->top__DOT__control_unit__DOT__Load = 0U;
                vlSelf->top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelf->top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelf->top__DOT__control_unit__DOT__ALUOp = 3U;
            }
            vlSelf->top__DOT__control_unit__DOT__RegWriteD 
                = (1U & (IData)((3U == (0xfU & (IData)(vlSelf->top__DOT__control_unit__DOT__op)))));
        }
        vlSelf->top__DOT__control_unit__DOT__ALUSrcD 
            = (1U & (IData)((0x33U != (0x3fU & (IData)(vlSelf->top__DOT__control_unit__DOT__op)))));
    }
    vlSelf->top__DOT__control_unit__DOT__modeBUD = 
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
    vlSelf->top__DOT__control_unit__DOT__BranchD = (IData)(
                                                           (0x63U 
                                                            == (IData)(vlSelf->top__DOT__control_unit__DOT__op)));
    vlSelf->top__DOT__InstrF = vlSelf->top__DOT__instruction_memory__DOT__instr;
    vlSelf->top__DOT__Result = vlSelf->top__DOT__data_memory__DOT__Result;
    vlSelf->top__DOT__RD = vlSelf->top__DOT__data_memory__DOT__RD;
    vlSelf->top__DOT__modeBU = vlSelf->top__DOT__control_unit__DOT__modeBUD;
    vlSelf->top__DOT__ResultSrcD = vlSelf->top__DOT__control_unit__DOT__ResultSrcD;
    vlSelf->top__DOT__MemWriteD = vlSelf->top__DOT__control_unit__DOT__MemWriteD;
    vlSelf->top__DOT__RegWriteD = vlSelf->top__DOT__control_unit__DOT__RegWriteD;
    vlSelf->top__DOT__ALUSrcD = vlSelf->top__DOT__control_unit__DOT__ALUSrcD;
    vlSelf->top__DOT__JumpD = vlSelf->top__DOT__control_unit__DOT__JumpD;
    vlSelf->top__DOT__BranchD = vlSelf->top__DOT__control_unit__DOT__BranchD;
    vlSelf->top__DOT__ImmSrcD = vlSelf->top__DOT__control_unit__DOT__ImmSrcD;
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__ALUOp 
        = vlSelf->top__DOT__control_unit__DOT__ALUOp;
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__control_unit__DOT__funct7) 
                     << 6U) | ((0x20U & (IData)(vlSelf->top__DOT__control_unit__DOT__op)) 
                               | (((IData)(vlSelf->top__DOT__control_unit__DOT__funct3) 
                                   << 2U) | (IData)(vlSelf->top__DOT__control_unit__DOT__ALUOp))));
    vlSelf->top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl 
        = Vtop__ConstPool__TABLE_h5c4a59e9_0[__Vtableidx1];
    vlSelf->top__DOT__pipeline_FD__DOT__RD = vlSelf->top__DOT__InstrF;
    vlSelf->top__DOT__regfile__DOT__WD3 = vlSelf->top__DOT__Result;
    vlSelf->top__DOT__branch_prediction_unit__DOT__RD 
        = vlSelf->top__DOT__RD;
    vlSelf->top__DOT__pipeline_MW__DOT__RD = vlSelf->top__DOT__RD;
    vlSelf->top__DOT__pipeline_DE__DOT__ResultSrcD 
        = vlSelf->top__DOT__ResultSrcD;
    vlSelf->top__DOT__pipeline_DE__DOT__MemWriteD = vlSelf->top__DOT__MemWriteD;
    vlSelf->top__DOT__pipeline_DE__DOT__RegWriteD = vlSelf->top__DOT__RegWriteD;
    vlSelf->top__DOT__pipeline_DE__DOT__ALUSrcD = vlSelf->top__DOT__ALUSrcD;
    vlSelf->top__DOT__pipeline_DE__DOT__JumpD = vlSelf->top__DOT__JumpD;
    vlSelf->top__DOT__pipeline_DE__DOT__BranchD = vlSelf->top__DOT__BranchD;
    vlSelf->top__DOT__sign_extend__DOT__ImmSrc = vlSelf->top__DOT__ImmSrcD;
    vlSelf->top__DOT__sign_extend__DOT__ImmExt = ((4U 
                                                   & (IData)(vlSelf->top__DOT__ImmSrcD))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__ImmSrcD))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__ImmSrcD))
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
                                                    & (IData)(vlSelf->top__DOT__ImmSrcD))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__ImmSrcD))
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
                                                     & (IData)(vlSelf->top__DOT__ImmSrcD))
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
    vlSelf->top__DOT__ExtImmD = vlSelf->top__DOT__sign_extend__DOT__ImmExt;
    vlSelf->top__DOT__ALUControlD = vlSelf->top__DOT__control_unit__DOT__ALUControlD;
    vlSelf->top__DOT__pipeline_DE__DOT__ExtImmD = vlSelf->top__DOT__ExtImmD;
    vlSelf->top__DOT__pipeline_DE__DOT__ALUControlD 
        = vlSelf->top__DOT__ALUControlD;
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
    vlSelf->top__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4F = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__InstrD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD1E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PCPlus4E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RegWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ALUControlE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__modeBUE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__WriteDataE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__modeBUM = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ReadDataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcW = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__PCPlus4W = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ExtImmD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ExtImmE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmSrcD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__RegWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUControlD = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ALUSrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__MemWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__modeBU = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ZeroE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemReadD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemReadE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JumpD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BranchD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SrcA = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SrcB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Rs1D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Rs2D = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RdD = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__Rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ResultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SrcBE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ForwardAE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ForwardBE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flushBranch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BPU_Src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PC_predict = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC_next = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__hazard_unit__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__hazard_unit__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__hazard_unit__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__hazard_unit__DOT__Rs1E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__hazard_unit__DOT__Rs2E = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__hazard_unit__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__MemReadE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__flushBranch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__ForwardAE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__hazard_unit__DOT__ForwardBE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__hazard_unit__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__hazard_unit__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_prediction_unit__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_prediction_unit__DOT__RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__branch_prediction_unit__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__branch_prediction_unit__DOT__ZeroE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_prediction_unit__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_prediction_unit__DOT__flushBranch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPU = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__branch_prediction_unit__DOT__PCBPUSrc = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->top__DOT__branch_prediction_unit__DOT__branch_queue.atDefault().data());
    VL_RAND_RESET_W(66, vlSelf->top__DOT__branch_prediction_unit__DOT__newBranch);
    VL_RAND_RESET_W(66, vlSelf->top__DOT__branch_prediction_unit__DOT__oldBranch);
    vlSelf->top__DOT__branch_prediction_unit__DOT__forwardJumpCounter = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__branch_prediction_unit__DOT__backwardJumpCounter = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__PC_mux__DOT__ZeroE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PC_mux__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PC_mux__DOT__BranchE = VL_RAND_RESET_I(1);
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
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
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
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__regfile__DOT__registerfile_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__control_unit__DOT__InstrD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__control_unit__DOT__ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__control_unit__DOT__MemWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__JumpD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__BranchD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__ALUControlD = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__control_unit__DOT__ALUSrcD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__ImmSrcD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__control_unit__DOT__RegWriteD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__control_unit__DOT__modeBUD = VL_RAND_RESET_I(3);
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
    vlSelf->top__DOT__forwardAE_mux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardBE_mux__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__forwardBE_mux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardBE_mux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardBE_mux__DOT__in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__forwardBE_mux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_SrcBE_mux__DOT__sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu_SrcBE_mux__DOT__in0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_SrcBE_mux__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_SrcBE_mux__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu__DOT__SrcA = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu__DOT__SrcB = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu__DOT__ALUctrl = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__alu__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu__DOT__ZeroE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_memory__DOT__modeBU = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__data_memory__DOT__ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__data_memory__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_memory__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_memory__DOT__WD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_memory__DOT__trigger = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_memory__DOT__WE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_memory__DOT__RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_memory__DOT__Result = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->top__DOT__data_memory__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
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
    vlSelf->top__DOT__pipeline_DE__DOT__flush = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__pipeline_DE__DOT__modeBUD = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipeline_DE__DOT__modeBUE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipeline_EM__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_EM__DOT__RegWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_EM__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_EM__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipeline_EM__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipeline_EM__DOT__MemWriteE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_EM__DOT__MemWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_EM__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_EM__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_EM__DOT__WriteDataE = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_EM__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_EM__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_EM__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_EM__DOT__PCPlus4E = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_EM__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_EM__DOT__modeBUE = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipeline_EM__DOT__modeBUM = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pipeline_MW__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_MW__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_MW__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pipeline_MW__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipeline_MW__DOT__ResultSrcW = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__pipeline_MW__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_MW__DOT__ALUResultW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_MW__DOT__RD = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_MW__DOT__ReadDataW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_MW__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_MW__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__pipeline_MW__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pipeline_MW__DOT__PCPlus4W = VL_RAND_RESET_I(32);
}
