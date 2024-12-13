// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"
#include "Vtop___024unit.h"

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h45f37922_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT____Vcellinp__PC_mux__PCTarget;
    top__DOT____Vcellinp__PC_mux__PCTarget = 0;
    IData/*31:0*/ top__DOT____Vcellinp__alu__SrcB;
    top__DOT____Vcellinp__alu__SrcB = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__op 
        = (1U & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                 >> 5U));
    vlSelfRef.top__DOT__ExtImmE = vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE;
    vlSelfRef.top__DOT__PCE = vlSelfRef.top__DOT__pipeline_DE__DOT__PCE;
    vlSelfRef.top__DOT__ALUSrcE = vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcE;
    vlSelfRef.top__DOT__RdD = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                        >> 7U));
    vlSelfRef.top__DOT__PCD = vlSelfRef.top__DOT__pipeline_FD__DOT__PCD;
    vlSelfRef.top__DOT__PCPlus4D = vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4D;
    vlSelfRef.top__DOT__RegWriteE = vlSelfRef.top__DOT__pipeline_DE__DOT__RegWriteE;
    vlSelfRef.top__DOT__ResultSrcE = vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcE;
    vlSelfRef.top__DOT__MemWriteE = vlSelfRef.top__DOT__pipeline_DE__DOT__MemWriteE;
    vlSelfRef.top__DOT__PCPlus4E = vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4E;
    vlSelfRef.top__DOT__modeAddrE = vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrE;
    vlSelfRef.top__DOT__ResultSrcM = vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcM;
    vlSelfRef.top__DOT__PCPlus4M = vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4M;
    vlSelfRef.top__DOT__trigger = vlSelfRef.trigger;
    vlSelfRef.top__DOT__regfile__DOT__a5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xfU];
    vlSelfRef.top__DOT__regfile__DOT__a4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xeU];
    vlSelfRef.top__DOT__regfile__DOT__a3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xdU];
    vlSelfRef.top__DOT__regfile__DOT__a2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xcU];
    vlSelfRef.top__DOT__regfile__DOT__a1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xbU];
    vlSelfRef.top__DOT__regfile__DOT__s1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [9U];
    vlSelfRef.top__DOT__regfile__DOT__t2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [7U];
    vlSelfRef.top__DOT__regfile__DOT__t1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [6U];
    vlSelfRef.top__DOT__regfile__DOT__t0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [5U];
    vlSelfRef.top__DOT__regfile__DOT__a0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0xaU];
    vlSelfRef.top__DOT__regfile__DOT__s2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x12U];
    vlSelfRef.top__DOT__regfile__DOT__s0 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [8U];
    vlSelfRef.top__DOT__regfile__DOT__a6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x10U];
    vlSelfRef.top__DOT__regfile__DOT__a7 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x11U];
    vlSelfRef.top__DOT__regfile__DOT__s3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x13U];
    vlSelfRef.top__DOT__regfile__DOT__s4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x14U];
    vlSelfRef.top__DOT__regfile__DOT__s5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x15U];
    vlSelfRef.top__DOT__regfile__DOT__s6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x16U];
    vlSelfRef.top__DOT__regfile__DOT__s7 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x17U];
    vlSelfRef.top__DOT__regfile__DOT__s8 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x18U];
    vlSelfRef.top__DOT__regfile__DOT__s9 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x19U];
    vlSelfRef.top__DOT__regfile__DOT__s10 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1aU];
    vlSelfRef.top__DOT__regfile__DOT__s11 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1bU];
    vlSelfRef.top__DOT__regfile__DOT__t3 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1cU];
    vlSelfRef.top__DOT__regfile__DOT__t4 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1dU];
    vlSelfRef.top__DOT__regfile__DOT__t5 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1eU];
    vlSelfRef.top__DOT__regfile__DOT__t6 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [0x1fU];
    vlSelfRef.top__DOT__WriteDataM = vlSelfRef.top__DOT__pipeline_EM__DOT__WriteDataM;
    vlSelfRef.top__DOT__rst = vlSelfRef.rst;
    vlSelfRef.top__DOT__InstrD = vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD;
    vlSelfRef.top__DOT__control_unit__DOT__funct7 = 
        (1U & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
               >> 0x1eU));
    vlSelfRef.top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.top__DOT__JALRE = vlSelfRef.top__DOT__pipeline_DE__DOT__JALRE;
    top__DOT____Vcellinp__PC_mux__PCTarget = (vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE 
                                              + vlSelfRef.top__DOT__pipeline_DE__DOT__PCE);
    vlSelfRef.top__DOT__PCPlus4F = ((IData)(4U) + vlSelfRef.top__DOT__program_counter__DOT__PCF);
    vlSelfRef.top__DOT__RdE = vlSelfRef.top__DOT__pipeline_DE__DOT__RdE;
    vlSelfRef.top__DOT__MemReadE = vlSelfRef.top__DOT__pipeline_DE__DOT__MemReadE;
    vlSelfRef.top__DOT__control_unit__DOT__funct3 = 
        (7U & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
               >> 0xcU));
    vlSelfRef.top__DOT__Rs1D = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                         >> 0xfU));
    vlSelfRef.top__DOT__Rs2D = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                         >> 0x14U));
    vlSelfRef.top__DOT__BranchE = vlSelfRef.top__DOT__pipeline_DE__DOT__BranchE;
    vlSelfRef.top__DOT__PCF = vlSelfRef.top__DOT__program_counter__DOT__PCF;
    vlSelfRef.top__DOT__InstrF = (((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                    [(0xffffU & ((IData)(3U) 
                                                 + vlSelfRef.top__DOT__program_counter__DOT__PCF))] 
                                    << 0x18U) | (vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.top__DOT__program_counter__DOT__PCF))] 
                                                 << 0x10U)) 
                                  | ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                      [(0xffffU & ((IData)(1U) 
                                                   + vlSelfRef.top__DOT__program_counter__DOT__PCF))] 
                                      << 8U) | vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                     [(0xffffU & vlSelfRef.top__DOT__program_counter__DOT__PCF)]));
    vlSelfRef.top__DOT__control_unit__DOT__op = (0x7fU 
                                                 & vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD);
    vlSelfRef.top__DOT__ALUControlE = vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlE;
    vlSelfRef.top__DOT__RD1E = vlSelfRef.top__DOT__pipeline_DE__DOT__RD1E;
    vlSelfRef.top__DOT__JumpE = vlSelfRef.top__DOT__pipeline_DE__DOT__JumpE;
    vlSelfRef.top__DOT__RD2E = vlSelfRef.top__DOT__pipeline_DE__DOT__RD2E;
    vlSelfRef.top__DOT__Rs1E = vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1E;
    vlSelfRef.top__DOT__Rs2E = vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2E;
    vlSelfRef.top__DOT__ResultSrcW = vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcW;
    vlSelfRef.top__DOT__ALUResultW = vlSelfRef.top__DOT__pipeline_MW__DOT__ALUResultW;
    vlSelfRef.top__DOT__ReadDataW = vlSelfRef.top__DOT__pipeline_MW__DOT__ReadDataW;
    vlSelfRef.top__DOT__PCPlus4W = vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4W;
    vlSelfRef.top__DOT__modeAddrM = vlSelfRef.top__DOT__pipeline_EM__DOT__modeAddrM;
    vlSelfRef.top__DOT__RdM = vlSelfRef.top__DOT__pipeline_EM__DOT__RdM;
    vlSelfRef.top__DOT__RdW = vlSelfRef.top__DOT__pipeline_MW__DOT__RdW;
    vlSelfRef.top__DOT__RegWriteM = vlSelfRef.top__DOT__pipeline_EM__DOT__RegWriteM;
    vlSelfRef.top__DOT__RegWriteW = vlSelfRef.top__DOT__pipeline_MW__DOT__RegWriteW;
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set 
        = (0xffU & (vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultM 
                    >> 3U));
    vlSelfRef.top__DOT__MemWriteM = vlSelfRef.top__DOT__pipeline_EM__DOT__MemWriteM;
    vlSelfRef.top__DOT__MemReadM = vlSelfRef.top__DOT__pipeline_EM__DOT__MemReadM;
    vlSelfRef.top__DOT__ALUResultM = vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultM;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RdD = vlSelfRef.top__DOT__RdD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__PCD = vlSelfRef.top__DOT__PCD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4D 
        = vlSelfRef.top__DOT__PCPlus4D;
    vlSelfRef.top__DOT__pipeline_EM__DOT__RegWriteE 
        = vlSelfRef.top__DOT__RegWriteE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcE 
        = vlSelfRef.top__DOT__ResultSrcE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__MemWriteE 
        = vlSelfRef.top__DOT__MemWriteE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4E 
        = vlSelfRef.top__DOT__PCPlus4E;
    vlSelfRef.top__DOT__pipeline_EM__DOT__modeAddrE 
        = vlSelfRef.top__DOT__modeAddrE;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcM 
        = vlSelfRef.top__DOT__ResultSrcM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4M 
        = vlSelfRef.top__DOT__PCPlus4M;
    vlSelfRef.top__DOT__cached_data_memory__DOT__trigger 
        = vlSelfRef.top__DOT__trigger;
    vlSelfRef.a5 = vlSelfRef.top__DOT__regfile__DOT__a5;
    vlSelfRef.top__DOT__a5 = vlSelfRef.top__DOT__regfile__DOT__a5;
    vlSelfRef.a4 = vlSelfRef.top__DOT__regfile__DOT__a4;
    vlSelfRef.top__DOT__a4 = vlSelfRef.top__DOT__regfile__DOT__a4;
    vlSelfRef.a3 = vlSelfRef.top__DOT__regfile__DOT__a3;
    vlSelfRef.top__DOT__a3 = vlSelfRef.top__DOT__regfile__DOT__a3;
    vlSelfRef.a2 = vlSelfRef.top__DOT__regfile__DOT__a2;
    vlSelfRef.top__DOT__a2 = vlSelfRef.top__DOT__regfile__DOT__a2;
    vlSelfRef.a1 = vlSelfRef.top__DOT__regfile__DOT__a1;
    vlSelfRef.top__DOT__a1 = vlSelfRef.top__DOT__regfile__DOT__a1;
    vlSelfRef.s1 = vlSelfRef.top__DOT__regfile__DOT__s1;
    vlSelfRef.top__DOT__s1 = vlSelfRef.top__DOT__regfile__DOT__s1;
    vlSelfRef.t2 = vlSelfRef.top__DOT__regfile__DOT__t2;
    vlSelfRef.top__DOT__t2 = vlSelfRef.top__DOT__regfile__DOT__t2;
    vlSelfRef.t1 = vlSelfRef.top__DOT__regfile__DOT__t1;
    vlSelfRef.top__DOT__t1 = vlSelfRef.top__DOT__regfile__DOT__t1;
    vlSelfRef.t0 = vlSelfRef.top__DOT__regfile__DOT__t0;
    vlSelfRef.top__DOT__t0 = vlSelfRef.top__DOT__regfile__DOT__t0;
    vlSelfRef.a0 = vlSelfRef.top__DOT__regfile__DOT__a0;
    vlSelfRef.top__DOT__a0 = vlSelfRef.top__DOT__regfile__DOT__a0;
    vlSelfRef.s2 = vlSelfRef.top__DOT__regfile__DOT__s2;
    vlSelfRef.top__DOT__s2 = vlSelfRef.top__DOT__regfile__DOT__s2;
    vlSelfRef.s0 = vlSelfRef.top__DOT__regfile__DOT__s0;
    vlSelfRef.top__DOT__s0 = vlSelfRef.top__DOT__regfile__DOT__s0;
    vlSelfRef.a6 = vlSelfRef.top__DOT__regfile__DOT__a6;
    vlSelfRef.top__DOT__a6 = vlSelfRef.top__DOT__regfile__DOT__a6;
    vlSelfRef.a7 = vlSelfRef.top__DOT__regfile__DOT__a7;
    vlSelfRef.top__DOT__a7 = vlSelfRef.top__DOT__regfile__DOT__a7;
    vlSelfRef.s3 = vlSelfRef.top__DOT__regfile__DOT__s3;
    vlSelfRef.top__DOT__s3 = vlSelfRef.top__DOT__regfile__DOT__s3;
    vlSelfRef.s4 = vlSelfRef.top__DOT__regfile__DOT__s4;
    vlSelfRef.top__DOT__s4 = vlSelfRef.top__DOT__regfile__DOT__s4;
    vlSelfRef.s5 = vlSelfRef.top__DOT__regfile__DOT__s5;
    vlSelfRef.top__DOT__s5 = vlSelfRef.top__DOT__regfile__DOT__s5;
    vlSelfRef.s6 = vlSelfRef.top__DOT__regfile__DOT__s6;
    vlSelfRef.top__DOT__s6 = vlSelfRef.top__DOT__regfile__DOT__s6;
    vlSelfRef.s7 = vlSelfRef.top__DOT__regfile__DOT__s7;
    vlSelfRef.top__DOT__s7 = vlSelfRef.top__DOT__regfile__DOT__s7;
    vlSelfRef.s8 = vlSelfRef.top__DOT__regfile__DOT__s8;
    vlSelfRef.top__DOT__s8 = vlSelfRef.top__DOT__regfile__DOT__s8;
    vlSelfRef.s9 = vlSelfRef.top__DOT__regfile__DOT__s9;
    vlSelfRef.top__DOT__s9 = vlSelfRef.top__DOT__regfile__DOT__s9;
    vlSelfRef.s10 = vlSelfRef.top__DOT__regfile__DOT__s10;
    vlSelfRef.top__DOT__s10 = vlSelfRef.top__DOT__regfile__DOT__s10;
    vlSelfRef.s11 = vlSelfRef.top__DOT__regfile__DOT__s11;
    vlSelfRef.top__DOT__s11 = vlSelfRef.top__DOT__regfile__DOT__s11;
    vlSelfRef.t3 = vlSelfRef.top__DOT__regfile__DOT__t3;
    vlSelfRef.top__DOT__t3 = vlSelfRef.top__DOT__regfile__DOT__t3;
    vlSelfRef.t4 = vlSelfRef.top__DOT__regfile__DOT__t4;
    vlSelfRef.top__DOT__t4 = vlSelfRef.top__DOT__regfile__DOT__t4;
    vlSelfRef.t5 = vlSelfRef.top__DOT__regfile__DOT__t5;
    vlSelfRef.top__DOT__t5 = vlSelfRef.top__DOT__regfile__DOT__t5;
    vlSelfRef.t6 = vlSelfRef.top__DOT__regfile__DOT__t6;
    vlSelfRef.top__DOT__t6 = vlSelfRef.top__DOT__regfile__DOT__t6;
    vlSelfRef.top__DOT__cached_data_memory__DOT__write_data 
        = vlSelfRef.top__DOT__WriteDataM;
    vlSelfRef.top__DOT__program_counter__DOT__rst = vlSelfRef.top__DOT__rst;
    vlSelfRef.top__DOT__cached_data_memory__DOT__rst 
        = vlSelfRef.top__DOT__rst;
    vlSelfRef.top__DOT__control_unit__DOT__InstrD = vlSelfRef.top__DOT__InstrD;
    vlSelfRef.top__DOT__sign_extend__DOT__ImmInput 
        = vlSelfRef.top__DOT__InstrD;
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__funct7 
        = vlSelfRef.top__DOT__control_unit__DOT__funct7;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__clk 
        = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__program_counter__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__regfile__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__pipeline_FD__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__pipeline_DE__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__pipeline_EM__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__pipeline_MW__DOT__clk = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__cached_data_memory__DOT__clk 
        = vlSelfRef.top__DOT__clk;
    vlSelfRef.top__DOT__PC_mux__DOT__JALRE = vlSelfRef.top__DOT__JALRE;
    vlSelfRef.top__DOT__PC_mux__DOT__PCTarget = top__DOT____Vcellinp__PC_mux__PCTarget;
    vlSelfRef.top__DOT__PC_mux__DOT__PCPlus4F = vlSelfRef.top__DOT__PCPlus4F;
    vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4F 
        = vlSelfRef.top__DOT__PCPlus4F;
    vlSelfRef.top__DOT__hazard_unit__DOT__RdE = vlSelfRef.top__DOT__RdE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__RdE = vlSelfRef.top__DOT__RdE;
    vlSelfRef.top__DOT__hazard_unit__DOT__MemReadE 
        = vlSelfRef.top__DOT__MemReadE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__MemReadE 
        = vlSelfRef.top__DOT__MemReadE;
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__funct3 
        = vlSelfRef.top__DOT__control_unit__DOT__funct3;
    vlSelfRef.top__DOT__hazard_unit__DOT__Rs1D = vlSelfRef.top__DOT__Rs1D;
    vlSelfRef.top__DOT__regfile__DOT__AD1 = vlSelfRef.top__DOT__Rs1D;
    vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1D = vlSelfRef.top__DOT__Rs1D;
    vlSelfRef.top__DOT__regfile__DOT__RD1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [vlSelfRef.top__DOT__Rs1D];
    vlSelfRef.top__DOT__hazard_unit__DOT__Rs2D = vlSelfRef.top__DOT__Rs2D;
    vlSelfRef.top__DOT__regfile__DOT__AD2 = vlSelfRef.top__DOT__Rs2D;
    vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2D = vlSelfRef.top__DOT__Rs2D;
    vlSelfRef.top__DOT__regfile__DOT__RD2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [vlSelfRef.top__DOT__Rs2D];
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__BranchE 
        = vlSelfRef.top__DOT__BranchE;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCF 
        = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__instruction_memory__DOT__PC 
        = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__pipeline_FD__DOT__PCF = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__RD 
        = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__pipeline_FD__DOT__RD = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__instruction_memory__DOT__instr 
        = vlSelfRef.top__DOT__InstrF;
    if ((0x40U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
        vlSelfRef.top__DOT__control_unit__DOT__ALUSrcD 
            = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                         >> 5U))) || ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                             >> 4U)) 
                                      || ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                           ? ((1U & 
                                               (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 2U))) 
                                              || ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                       >> 1U))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))))
                                           : ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                               ? ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                       >> 1U))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))
                                               : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                       >> 1U))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
        vlSelfRef.top__DOT__control_unit__DOT__RegWriteD 
            = ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                      >> 5U)) && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                            >> 4U))) 
                                  && ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                       ? ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                 >> 2U)) 
                                          && ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))
                                       : ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                 >> 2U)) 
                                          && ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))))));
        if ((0x20U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 2U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 4U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    }
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                }
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 2U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 4U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 2U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 1U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    } else {
        vlSelfRef.top__DOT__control_unit__DOT__ALUSrcD 
            = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                         >> 5U))) || ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 4U))) 
                                      || ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                 >> 3U)) 
                                          || ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 2U)) 
                                              || ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                       >> 1U))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
        if ((0x20U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
            vlSelfRef.top__DOT__control_unit__DOT__RegWriteD 
                = ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                          >> 4U)) && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 3U))) 
                                      && ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                           ? ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))
                                           : ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))));
            if ((0x10U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                }
            } else if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
            vlSelfRef.top__DOT__control_unit__DOT__RegWriteD 
                = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                             >> 3U))) && ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                           ? ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))
                                           : ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))));
            if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelfRef.top__DOT__control_unit__DOT__RegWriteD 
                = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))));
            if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        }
    }
    vlSelfRef.top__DOT__control_unit__DOT__MemReadD 
        = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                     >> 6U))) && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                            >> 5U))) 
                                  && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 4U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__JALRD = 
        ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                >> 6U)) && ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                   >> 5U)) && ((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                    >> 4U))) 
                                               && ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                           >> 2U)) 
                                                       && ((1U 
                                                            & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__MemWriteD 
        = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                     >> 6U))) && ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                         >> 5U)) && 
                                  ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                             >> 4U))) 
                                   && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                 >> 3U))) 
                                       && ((1U & (~ 
                                                  ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 1U)) 
                                               && (1U 
                                                   & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__JumpD = 
        ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                >> 6U)) && ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                   >> 5U)) && ((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                    >> 4U))) 
                                               && ((8U 
                                                    & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                        >> 2U)) 
                                                    && ((1U 
                                                         & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                            >> 1U)) 
                                                        && (1U 
                                                            & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                        >> 2U)) 
                                                    && ((1U 
                                                         & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                            >> 1U)) 
                                                        && (1U 
                                                            & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__BranchD 
        = ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                  >> 6U)) && ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                     >> 5U)) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                      >> 4U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                          >> 3U))) 
                                                     && ((4U 
                                                          & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__modeAddr 
        = ((IData)(vlSelfRef.top__DOT__control_unit__DOT__Store)
            ? ((0U == (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                ? 3U : ((1U == (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                         ? 2U : ((2U == (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                  ? 1U : 0U))) : ((IData)(vlSelfRef.top__DOT__control_unit__DOT__Load)
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                      ? 4U
                                                      : 5U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                      ? 0U
                                                      : 1U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                      ? 2U
                                                      : 3U)))
                                                   : 0U));
    vlSelfRef.top__DOT__alu__DOT__ALUctrl = vlSelfRef.top__DOT__ALUControlE;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in0 = vlSelfRef.top__DOT__RD1E;
    vlSelfRef.top__DOT__hazard_unit__DOT__JumpE = vlSelfRef.top__DOT__JumpE;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__JumpE 
        = vlSelfRef.top__DOT__JumpE;
    vlSelfRef.top__DOT__PC_mux__DOT__JumpE = vlSelfRef.top__DOT__JumpE;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in0 = vlSelfRef.top__DOT__RD2E;
    vlSelfRef.top__DOT__hazard_unit__DOT__Rs1E = vlSelfRef.top__DOT__Rs1E;
    vlSelfRef.top__DOT__hazard_unit__DOT__Rs2E = vlSelfRef.top__DOT__Rs2E;
    vlSelfRef.top__DOT__regfile_mux__DOT__sel = vlSelfRef.top__DOT__ResultSrcW;
    vlSelfRef.top__DOT__regfile_mux__DOT__in0 = vlSelfRef.top__DOT__ALUResultW;
    vlSelfRef.top__DOT__regfile_mux__DOT__in1 = vlSelfRef.top__DOT__ReadDataW;
    vlSelfRef.top__DOT__regfile_mux__DOT__in2 = vlSelfRef.top__DOT__PCPlus4W;
    vlSelfRef.top__DOT__regfile_mux__DOT__out = ((0U 
                                                  == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                                  ? vlSelfRef.top__DOT__ALUResultW
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                                   ? vlSelfRef.top__DOT__ReadDataW
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                                    ? vlSelfRef.top__DOT__PCPlus4W
                                                    : vlSelfRef.top__DOT__ALUResultW)));
    vlSelfRef.top__DOT__cached_data_memory__DOT__modeAddr 
        = vlSelfRef.top__DOT__modeAddrM;
    vlSelfRef.top__DOT__hazard_unit__DOT__RdM = vlSelfRef.top__DOT__RdM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__RdM = vlSelfRef.top__DOT__RdM;
    vlSelfRef.top__DOT__hazard_unit__DOT__RdW = vlSelfRef.top__DOT__RdW;
    vlSelfRef.top__DOT__regfile__DOT__AD3 = vlSelfRef.top__DOT__RdW;
    vlSelfRef.top__DOT__hazard_unit__DOT__RegWriteM 
        = vlSelfRef.top__DOT__RegWriteM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__RegWriteM 
        = vlSelfRef.top__DOT__RegWriteM;
    vlSelfRef.top__DOT__hazard_unit__DOT__RegWriteW 
        = vlSelfRef.top__DOT__RegWriteW;
    vlSelfRef.top__DOT__regfile__DOT__WE3 = vlSelfRef.top__DOT__RegWriteW;
    vlSelfRef.top__DOT__cached_data_memory__DOT__WE 
        = vlSelfRef.top__DOT__MemWriteM;
    vlSelfRef.top__DOT__hazard_unit__DOT__MemReadM 
        = vlSelfRef.top__DOT__MemReadM;
    vlSelfRef.top__DOT__cached_data_memory__DOT__RE 
        = vlSelfRef.top__DOT__MemReadM;
    vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE = 0U;
    if ((((IData)(vlSelfRef.top__DOT__MemReadM) & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                                                   == (IData)(vlSelfRef.top__DOT__RdM))) 
         & (0U != (IData)(vlSelfRef.top__DOT__Rs1E)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE = 3U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteM) 
                 & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                    == (IData)(vlSelfRef.top__DOT__RdM))) 
                & (0U != (IData)(vlSelfRef.top__DOT__Rs1E)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE = 2U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteW) 
                 & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                    == (IData)(vlSelfRef.top__DOT__RdW))) 
                & (0U != (IData)(vlSelfRef.top__DOT__Rs1E)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE = 1U;
    }
    vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 0U;
    if ((((IData)(vlSelfRef.top__DOT__MemReadM) & ((IData)(vlSelfRef.top__DOT__Rs2E) 
                                                   == (IData)(vlSelfRef.top__DOT__RdM))) 
         & (0U != (IData)(vlSelfRef.top__DOT__Rs2E)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 3U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteM) 
                 & ((IData)(vlSelfRef.top__DOT__Rs2E) 
                    == (IData)(vlSelfRef.top__DOT__RdM))) 
                & (0U != (IData)(vlSelfRef.top__DOT__Rs2E)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 2U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteW) 
                 & ((IData)(vlSelfRef.top__DOT__Rs2E) 
                    == (IData)(vlSelfRef.top__DOT__RdW))) 
                & (0U != (IData)(vlSelfRef.top__DOT__Rs2E)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 1U;
    }
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in2 = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in2 = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ALUResultM 
        = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__cached_data_memory__DOT__addr 
        = vlSelfRef.top__DOT__ALUResultM;
    if ((0x100U == vlSelfRef.top__DOT__ALUResultM)) {
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_out 
            = vlSelfRef.trigger;
    } else {
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall = 0U;
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_out = 0U;
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0 
            = ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                .__PVT__way[0U][2U] >> 0x15U) & ((0x1fffffU 
                                                  & vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                                                  [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                                                  .__PVT__way
                                                  [0U][2U]) 
                                                 == 
                                                 (vlSelfRef.top__DOT__ALUResultM 
                                                  >> 0xbU)));
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit1 
            = ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                .__PVT__way[1U][2U] >> 0x15U) & ((0x1fffffU 
                                                  & vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                                                  [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                                                  .__PVT__way
                                                  [1U][2U]) 
                                                 == 
                                                 (vlSelfRef.top__DOT__ALUResultM 
                                                  >> 0xbU)));
        if (((IData)(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0) 
             | (IData)(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit1))) {
            if (vlSelfRef.top__DOT__MemReadM) {
                vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_out 
                    = ((IData)(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0)
                        ? ((4U & vlSelfRef.top__DOT__ALUResultM)
                            ? vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                           [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                           .__PVT__way[0U][1U] : vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                           [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                           .__PVT__way[0U][0U]) : (
                                                   (4U 
                                                    & vlSelfRef.top__DOT__ALUResultM)
                                                    ? 
                                                   vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                                                   [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                                                   .__PVT__way
                                                   [1U][1U]
                                                    : 
                                                   vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                                                   [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                                                   .__PVT__way
                                                   [1U][0U]));
            }
            if (vlSelfRef.top__DOT__MemWriteM) {
                vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall = 0U;
            }
        } else if (((IData)(vlSelfRef.top__DOT__MemWriteM) 
                    | (IData)(vlSelfRef.top__DOT__MemReadM))) {
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_out 
                = (((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                     [(0x1ffffU & ((IData)(3U) + vlSelfRef.top__DOT__ALUResultM))] 
                     << 0x18U) | (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                  [(0x1ffffU & ((IData)(2U) 
                                                + vlSelfRef.top__DOT__ALUResultM))] 
                                  << 0x10U)) | ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                 [(0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__ALUResultM))] 
                                                 << 8U) 
                                                | vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                [(0x1ffffU 
                                                  & vlSelfRef.top__DOT__ALUResultM)]));
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall = 1U;
        }
    }
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__trigger 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__trigger;
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__write_data 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__write_data;
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__rst 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__rst;
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__clk 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__clk;
    vlSelfRef.top__DOT__RD1 = vlSelfRef.top__DOT__regfile__DOT__RD1;
    vlSelfRef.top__DOT__RD2 = vlSelfRef.top__DOT__regfile__DOT__RD2;
    vlSelfRef.top__DOT__ALUSrcD = vlSelfRef.top__DOT__control_unit__DOT__ALUSrcD;
    vlSelfRef.top__DOT__MemReadD = vlSelfRef.top__DOT__control_unit__DOT__MemReadD;
    vlSelfRef.top__DOT__JALRD = vlSelfRef.top__DOT__control_unit__DOT__JALRD;
    vlSelfRef.top__DOT__RegWriteD = vlSelfRef.top__DOT__control_unit__DOT__RegWriteD;
    vlSelfRef.top__DOT__MemWriteD = vlSelfRef.top__DOT__control_unit__DOT__MemWriteD;
    vlSelfRef.top__DOT__JumpD = vlSelfRef.top__DOT__control_unit__DOT__JumpD;
    vlSelfRef.top__DOT__BranchD = vlSelfRef.top__DOT__control_unit__DOT__BranchD;
    vlSelfRef.top__DOT__ResultSrcD = vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD;
    vlSelfRef.top__DOT__modeAddrD = vlSelfRef.top__DOT__control_unit__DOT__modeAddr;
    vlSelfRef.top__DOT__ImmSrc = vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD;
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUOp 
        = vlSelfRef.top__DOT__control_unit__DOT__ALUOp;
    __Vtableidx1 = ((((IData)(vlSelfRef.top__DOT__control_unit__DOT__funct7) 
                      << 6U) | (0x20U & vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD)) 
                    | (((IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3) 
                        << 2U) | (IData)(vlSelfRef.top__DOT__control_unit__DOT__ALUOp)));
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl 
        = Vtop__ConstPool__TABLE_h45f37922_0[__Vtableidx1];
    vlSelfRef.top__DOT__ResultW = vlSelfRef.top__DOT__regfile_mux__DOT__out;
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__modeAddr 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__modeAddr;
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__WE 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__WE;
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__RE 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__RE;
    vlSelfRef.top__DOT__ForwardAE = vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE;
    vlSelfRef.top__DOT__ForwardBE = vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE;
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__addr 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__addr;
    vlSelfRef.top__DOT__cached_data_memory__DOT__miss_stall 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall;
    vlSelfRef.top__DOT__miss_stall = vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall;
    vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_out;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RD1 = vlSelfRef.top__DOT__RD1;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RD2 = vlSelfRef.top__DOT__RD2;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcD = vlSelfRef.top__DOT__ALUSrcD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__MemReadD 
        = vlSelfRef.top__DOT__MemReadD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__JALRD = vlSelfRef.top__DOT__JALRD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RegWriteD 
        = vlSelfRef.top__DOT__RegWriteD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__MemWriteD 
        = vlSelfRef.top__DOT__MemWriteD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__JumpD = vlSelfRef.top__DOT__JumpD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__BranchD = vlSelfRef.top__DOT__BranchD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcD 
        = vlSelfRef.top__DOT__ResultSrcD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrD 
        = vlSelfRef.top__DOT__modeAddrD;
    vlSelfRef.top__DOT__sign_extend__DOT__ImmSrc = vlSelfRef.top__DOT__ImmSrc;
    vlSelfRef.top__DOT__sign_extend__DOT__ImmExt = 
        ((4U & (IData)(vlSelfRef.top__DOT__ImmSrc))
          ? ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
              ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                       ? (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                       >> 0x1fU))) 
                           << 0xcU) | (vlSelfRef.top__DOT__InstrD 
                                       >> 0x14U)) : 
                      (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                    >> 0x1fU))) << 0x14U) 
                       | (((0xff000U & vlSelfRef.top__DOT__InstrD) 
                           | (0x800U & (vlSelfRef.top__DOT__InstrD 
                                        >> 9U))) | 
                          (0x7feU & (vlSelfRef.top__DOT__InstrD 
                                     >> 0x14U))))))
          : ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
              ? ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                  ? (0xfffff000U & vlSelfRef.top__DOT__InstrD)
                  : (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0x800U & (vlSelfRef.top__DOT__InstrD 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelfRef.top__DOT__InstrD 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.top__DOT__InstrD 
                                                    >> 7U))))))
              : ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                  ? (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0xfe0U & (vlSelfRef.top__DOT__InstrD 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelfRef.top__DOT__InstrD 
                                                    >> 7U))))
                  : (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                  >> 0x1fU))) << 0xcU) 
                     | (vlSelfRef.top__DOT__InstrD 
                        >> 0x14U)))));
    vlSelfRef.top__DOT__control_unit__DOT__ALUControlD 
        = vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl;
    vlSelfRef.top__DOT__ALUControlD = vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl;
    vlSelfRef.top__DOT__regfile__DOT__WD3 = vlSelfRef.top__DOT__ResultW;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in1 = vlSelfRef.top__DOT__ResultW;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in1 = vlSelfRef.top__DOT__ResultW;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__sel = vlSelfRef.top__DOT__ForwardAE;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__sel = vlSelfRef.top__DOT__ForwardBE;
    vlSelfRef.top__DOT__hazard_unit__DOT__miss_stall 
        = vlSelfRef.top__DOT__miss_stall;
    vlSelfRef.top__DOT__cached_data_memory__DOT__data_out 
        = ((1U == (IData)(vlSelfRef.top__DOT__modeAddrM))
            ? vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache
            : ((3U == (IData)(vlSelfRef.top__DOT__modeAddrM))
                ? ((2U & vlSelfRef.top__DOT__ALUResultM)
                    ? ((1U & vlSelfRef.top__DOT__ALUResultM)
                        ? (((- (IData)((vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                        >> 0x1fU))) 
                            << 8U) | (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                      >> 0x18U)) : 
                       (((- (IData)((1U & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                           >> 0x17U)))) 
                         << 8U) | (0xffU & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                            >> 0x10U))))
                    : ((1U & vlSelfRef.top__DOT__ALUResultM)
                        ? (((- (IData)((1U & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                              >> 0xfU)))) 
                            << 8U) | (0xffU & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                               >> 8U)))
                        : (((- (IData)((1U & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache))))
                : ((5U == (IData)(vlSelfRef.top__DOT__modeAddrM))
                    ? ((2U & vlSelfRef.top__DOT__ALUResultM)
                        ? ((1U & vlSelfRef.top__DOT__ALUResultM)
                            ? (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                               >> 0x18U) : (0xffU & 
                                            (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                             >> 0x10U)))
                        : ((1U & vlSelfRef.top__DOT__ALUResultM)
                            ? (0xffU & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                        >> 8U)) : (0xffU 
                                                   & vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache)))
                    : vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache)));
    vlSelfRef.top__DOT__ExtImmD = vlSelfRef.top__DOT__sign_extend__DOT__ImmExt;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlD 
        = vlSelfRef.top__DOT__ALUControlD;
    vlSelfRef.top__DOT__ReadDataM = vlSelfRef.top__DOT__cached_data_memory__DOT__data_out;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmD = vlSelfRef.top__DOT__ExtImmD;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in3 = vlSelfRef.top__DOT__ReadDataM;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in3 = vlSelfRef.top__DOT__ReadDataM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ReadDataM 
        = vlSelfRef.top__DOT__ReadDataM;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__out = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__ForwardAE))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ForwardAE))
                                                     ? vlSelfRef.top__DOT__ReadDataM
                                                     : vlSelfRef.top__DOT__ALUResultM)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ForwardAE))
                                                     ? vlSelfRef.top__DOT__ResultW
                                                     : vlSelfRef.top__DOT__RD1E));
    vlSelfRef.top__DOT__forwardBE_mux__DOT__out = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__ForwardBE))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ForwardBE))
                                                     ? vlSelfRef.top__DOT__ReadDataM
                                                     : vlSelfRef.top__DOT__ALUResultM)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ForwardBE))
                                                     ? vlSelfRef.top__DOT__ResultW
                                                     : vlSelfRef.top__DOT__RD2E));
    vlSelfRef.top__DOT__SrcAE = vlSelfRef.top__DOT__forwardAE_mux__DOT__out;
    vlSelfRef.top__DOT__WriteDataE = vlSelfRef.top__DOT__forwardBE_mux__DOT__out;
    top__DOT____Vcellinp__alu__SrcB = ((IData)(vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcE)
                                        ? vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE
                                        : vlSelfRef.top__DOT__forwardBE_mux__DOT__out);
    vlSelfRef.top__DOT__alu__DOT__SrcA = vlSelfRef.top__DOT__SrcAE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__WriteDataE 
        = vlSelfRef.top__DOT__WriteDataE;
    vlSelfRef.top__DOT__alu__DOT__SrcB = top__DOT____Vcellinp__alu__SrcB;
    vlSelfRef.top__DOT__alu__DOT__ALUResult = ((8U 
                                                & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     ((vlSelfRef.top__DOT__SrcAE 
                                                       < top__DOT____Vcellinp__alu__SrcB)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     (VL_LTS_III(32, vlSelfRef.top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)
                                                       ? 1U
                                                       : 0U))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__SrcAE, 
                                                                    (0x1fU 
                                                                     & top__DOT____Vcellinp__alu__SrcB))
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      >> 
                                                      (0x1fU 
                                                       & top__DOT____Vcellinp__alu__SrcB)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      << 
                                                      (0x1fU 
                                                       & top__DOT____Vcellinp__alu__SrcB))
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      & top__DOT____Vcellinp__alu__SrcB)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      | top__DOT____Vcellinp__alu__SrcB)
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      ^ top__DOT____Vcellinp__alu__SrcB))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      - top__DOT____Vcellinp__alu__SrcB)
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      + top__DOT____Vcellinp__alu__SrcB)))));
    vlSelfRef.top__DOT__alu__DOT__ZeroE = ((1U & ((IData)(vlSelfRef.top__DOT__ALUControlE) 
                                                  >> 3U)) 
                                           && ((4U 
                                                & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    (vlSelfRef.top__DOT__SrcAE 
                                                     >= top__DOT____Vcellinp__alu__SrcB)
                                                     : 
                                                    (vlSelfRef.top__DOT__SrcAE 
                                                     < top__DOT____Vcellinp__alu__SrcB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    VL_GTES_III(32, vlSelfRef.top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)
                                                     : 
                                                    VL_LTS_III(32, vlSelfRef.top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.top__DOT__ALUControlE) 
                                                       >> 1U)) 
                                                   && ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                        ? 
                                                       (vlSelfRef.top__DOT__SrcAE 
                                                        != top__DOT____Vcellinp__alu__SrcB)
                                                        : 
                                                       (vlSelfRef.top__DOT__SrcAE 
                                                        == top__DOT____Vcellinp__alu__SrcB)))));
    vlSelfRef.top__DOT__ALUResultE = vlSelfRef.top__DOT__alu__DOT__ALUResult;
    vlSelfRef.top__DOT__Zero = vlSelfRef.top__DOT__alu__DOT__ZeroE;
    vlSelfRef.top__DOT__PC_mux__DOT__ALUResult = vlSelfRef.top__DOT__ALUResultE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultE 
        = vlSelfRef.top__DOT__ALUResultE;
    vlSelfRef.top__DOT__PC_mux__DOT__PC = vlSelfRef.top__DOT__PCPlus4F;
    if (vlSelfRef.top__DOT__JumpE) {
        vlSelfRef.top__DOT__PC_mux__DOT__PC = ((IData)(vlSelfRef.top__DOT__JALRE)
                                                ? vlSelfRef.top__DOT__ALUResultE
                                                : top__DOT____Vcellinp__PC_mux__PCTarget);
    }
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__ZeroE 
        = vlSelfRef.top__DOT__Zero;
    if (((0x63U == (0x7fU & vlSelfRef.top__DOT__InstrF)) 
         & (~ (IData)(vlSelfRef.top__DOT__JumpE)))) {
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPU 
            = (vlSelfRef.top__DOT__PCF + (((- (IData)(
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
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 1U;
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                    = (1U | vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
            } else {
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 0U;
                vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                    = (0xfffffffeU & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
            }
        } else if ((2U <= (IData)(vlSelfRef.top__DOT__branch_prediction_unit__DOT__forwardJumpCounter))) {
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 1U;
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                = (1U | vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
        } else {
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 0U;
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U] 
                = (0xfffffffeU & vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch[0U]);
        }
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue.push_back(
                                                                                VL_CVT_W_A(vlSelfRef.top__DOT__branch_prediction_unit__DOT__newBranch, vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue
                                                                                .atDefault()));
    } else {
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 0U;
    }
    if (vlSelfRef.top__DOT__BranchE) {
        if (((1U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U]) 
             == (IData)(vlSelfRef.top__DOT__Zero))) {
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__flushBranch = 0U;
        }
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__branch_queue.pop_front();
        if (((1U & vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U]) 
             != (IData)(vlSelfRef.top__DOT__Zero))) {
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__flushBranch = 1U;
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc = 1U;
            vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPU 
                = ((IData)(vlSelfRef.top__DOT__Zero)
                    ? ((vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
                        << 0x1eU) | (vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[0U] 
                                     >> 2U)) : ((IData)(4U) 
                                                + (
                                                   (vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[2U] 
                                                    << 0x1eU) 
                                                   | (vlSelfRef.top__DOT__branch_prediction_unit__DOT__oldBranch[1U] 
                                                      >> 2U))));
        }
    } else {
        vlSelfRef.top__DOT__branch_prediction_unit__DOT__flushBranch = 0U;
    }
    vlSelfRef.top__DOT__PC = vlSelfRef.top__DOT__PC_mux__DOT__PC;
    vlSelfRef.top__DOT__PC_predict = vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPU;
    if (vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPUSrc) {
        vlSelfRef.top__DOT__BPU_Src = 1U;
        vlSelfRef.top__DOT__PC_next = vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCBPU;
    } else {
        vlSelfRef.top__DOT__BPU_Src = 0U;
        vlSelfRef.top__DOT__PC_next = vlSelfRef.top__DOT__PC_mux__DOT__PC;
    }
    vlSelfRef.top__DOT__flushBranch = vlSelfRef.top__DOT__branch_prediction_unit__DOT__flushBranch;
    vlSelfRef.top__DOT__BPU_mux__DOT__in0 = vlSelfRef.top__DOT__PC;
    vlSelfRef.top__DOT__BPU_mux__DOT__in1 = vlSelfRef.top__DOT__PC_predict;
    vlSelfRef.top__DOT__BPU_mux__DOT__sel = vlSelfRef.top__DOT__BPU_Src;
    vlSelfRef.top__DOT__program_counter__DOT__PC = vlSelfRef.top__DOT__PC_next;
    vlSelfRef.top__DOT__BPU_mux__DOT__out = vlSelfRef.top__DOT__PC_next;
    vlSelfRef.top__DOT__hazard_unit__DOT__flushBranch 
        = vlSelfRef.top__DOT__flushBranch;
    vlSelfRef.top__DOT__hazard_unit__DOT__flushDE = 
        ((IData)(vlSelfRef.top__DOT__flushBranch) | (IData)(vlSelfRef.top__DOT__JumpE));
    vlSelfRef.top__DOT__hazard_unit__DOT__stall = 0U;
    vlSelfRef.top__DOT__hazard_unit__DOT__stall = (
                                                   ((IData)(vlSelfRef.top__DOT__MemReadE) 
                                                    & (((IData)(vlSelfRef.top__DOT__RdE) 
                                                        == (IData)(vlSelfRef.top__DOT__Rs1D)) 
                                                       | ((IData)(vlSelfRef.top__DOT__RdE) 
                                                          == (IData)(vlSelfRef.top__DOT__Rs2D)))) 
                                                   | (IData)(vlSelfRef.top__DOT__miss_stall));
    vlSelfRef.top__DOT__hazard_unit__DOT__flush = (
                                                   ((IData)(vlSelfRef.top__DOT__hazard_unit__DOT__stall) 
                                                    | (IData)(vlSelfRef.top__DOT__flushBranch)) 
                                                   | (IData)(vlSelfRef.top__DOT__JumpE));
    vlSelfRef.top__DOT__flushDE = vlSelfRef.top__DOT__hazard_unit__DOT__flushDE;
    vlSelfRef.top__DOT__flush = vlSelfRef.top__DOT__hazard_unit__DOT__flush;
    vlSelfRef.top__DOT__stall = vlSelfRef.top__DOT__hazard_unit__DOT__stall;
    vlSelfRef.top__DOT__pipeline_DE__DOT__flushBranch 
        = vlSelfRef.top__DOT__flushDE;
    vlSelfRef.top__DOT__pipeline_FD__DOT__flush = vlSelfRef.top__DOT__flush;
    vlSelfRef.top__DOT__program_counter__DOT__stall 
        = vlSelfRef.top__DOT__stall;
    vlSelfRef.top__DOT__pipeline_FD__DOT__stall = vlSelfRef.top__DOT__stall;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT____Vcellinp__PC_mux__PCTarget;
    top__DOT____Vcellinp__PC_mux__PCTarget = 0;
    IData/*31:0*/ top__DOT____Vcellinp__alu__SrcB;
    top__DOT____Vcellinp__alu__SrcB = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0;
    __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0;
    __VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0;
    __VdlySet__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v1;
    __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v1 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v1;
    __VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v2;
    __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v2 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v2;
    __VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v3;
    __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v3 = 0;
    IData/*16:0*/ __VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v3;
    __VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v3 = 0;
    // Body
    __VdlySet__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall)))) {
        if (vlSelfRef.top__DOT__MemWriteM) {
            __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0 
                = (vlSelfRef.top__DOT__WriteDataM >> 0x18U);
            __VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0 
                = (0x1ffffU & vlSelfRef.top__DOT__ALUResultM);
            __VdlySet__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0 = 1U;
            __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v1 
                = (0xffU & (vlSelfRef.top__DOT__WriteDataM 
                            >> 0x10U));
            __VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v1 
                = (0x1ffffU & ((IData)(1U) + vlSelfRef.top__DOT__ALUResultM));
            __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v2 
                = (0xffU & (vlSelfRef.top__DOT__WriteDataM 
                            >> 8U));
            __VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v2 
                = (0x1ffffU & ((IData)(2U) + vlSelfRef.top__DOT__ALUResultM));
            __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v3 
                = (0xffU & vlSelfRef.top__DOT__WriteDataM);
            __VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v3 
                = (0x1ffffU & ((IData)(3U) + vlSelfRef.top__DOT__ALUResultM));
        }
    }
    vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcM 
        = vlSelfRef.top__DOT__ResultSrcE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4M 
        = vlSelfRef.top__DOT__PCPlus4E;
    vlSelfRef.top__DOT__pipeline_EM__DOT__WriteDataM 
        = vlSelfRef.top__DOT__WriteDataE;
    vlSelfRef.top__DOT__pipeline_DE__DOT__MemWriteE 
        = ((1U & (~ (IData)(vlSelfRef.top__DOT__flushDE))) 
           && (IData)(vlSelfRef.top__DOT__MemWriteD));
    vlSelfRef.top__DOT__pipeline_DE__DOT__RegWriteE 
        = ((1U & (~ (IData)(vlSelfRef.top__DOT__flushDE))) 
           && (IData)(vlSelfRef.top__DOT__RegWriteD));
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__flushDE)))) {
        vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcE 
            = vlSelfRef.top__DOT__ResultSrcD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4E 
            = vlSelfRef.top__DOT__PCPlus4D;
        vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrE 
            = vlSelfRef.top__DOT__modeAddrD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__PCE = vlSelfRef.top__DOT__PCD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__MemReadE 
            = vlSelfRef.top__DOT__MemReadD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__RdE = vlSelfRef.top__DOT__RdD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlE 
            = vlSelfRef.top__DOT__ALUControlD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcE 
            = vlSelfRef.top__DOT__ALUSrcD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__RD1E 
            = vlSelfRef.top__DOT__RD1;
        vlSelfRef.top__DOT__pipeline_DE__DOT__RD2E 
            = vlSelfRef.top__DOT__RD2;
        vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE 
            = vlSelfRef.top__DOT__ExtImmD;
        vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1E 
            = vlSelfRef.top__DOT__Rs1D;
        vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2E 
            = vlSelfRef.top__DOT__Rs2D;
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__flush)))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__stall)))) {
            vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4D 
                = vlSelfRef.top__DOT__PCPlus4F;
            vlSelfRef.top__DOT__pipeline_FD__DOT__PCD 
                = vlSelfRef.top__DOT__PCF;
        }
    }
    vlSelfRef.top__DOT__pipeline_DE__DOT__JALRE = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.top__DOT__flushDE))) 
                                                   && (IData)(vlSelfRef.top__DOT__JALRD));
    vlSelfRef.top__DOT__pipeline_DE__DOT__BranchE = 
        ((1U & (~ (IData)(vlSelfRef.top__DOT__flushDE))) 
         && (IData)(vlSelfRef.top__DOT__BranchD));
    vlSelfRef.top__DOT__pipeline_DE__DOT__JumpE = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.top__DOT__flushDE))) 
                                                   && (IData)(vlSelfRef.top__DOT__JumpD));
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__stall)))) {
        vlSelfRef.top__DOT__program_counter__DOT__PCF 
            = ((IData)(vlSelfRef.rst) ? 0U : vlSelfRef.top__DOT__PC_next);
    }
    vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcW 
        = vlSelfRef.top__DOT__ResultSrcM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4W 
        = vlSelfRef.top__DOT__PCPlus4M;
    vlSelfRef.top__DOT__pipeline_EM__DOT__modeAddrM 
        = vlSelfRef.top__DOT__modeAddrE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__RegWriteM 
        = vlSelfRef.top__DOT__RegWriteE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__RdM = vlSelfRef.top__DOT__RdE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__MemWriteM 
        = vlSelfRef.top__DOT__MemWriteE;
    if (vlSelfRef.top__DOT__flush) {
        vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD = 0x7013U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__stall)))) {
        vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
            = vlSelfRef.top__DOT__InstrF;
    }
    vlSelfRef.top__DOT__pipeline_MW__DOT__ReadDataW 
        = vlSelfRef.top__DOT__ReadDataM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__RegWriteW 
        = vlSelfRef.top__DOT__RegWriteM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__RdW = vlSelfRef.top__DOT__RdM;
    vlSelfRef.top__DOT__pipeline_EM__DOT__MemReadM 
        = vlSelfRef.top__DOT__MemReadE;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ALUResultW 
        = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultM 
        = vlSelfRef.top__DOT__ALUResultE;
    if (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall) {
        if (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__replace_bit) {
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set].__PVT__way[1U][0U] 
                = (((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                     [(0x1ffffU & ((IData)(3U) + vlSelfRef.top__DOT__ALUResultM))] 
                     << 0x18U) | (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                  [(0x1ffffU & ((IData)(2U) 
                                                + vlSelfRef.top__DOT__ALUResultM))] 
                                  << 0x10U)) | ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                 [(0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__ALUResultM))] 
                                                 << 8U) 
                                                | vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                [(0x1ffffU 
                                                  & vlSelfRef.top__DOT__ALUResultM)]));
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set].__PVT__way[1U][1U] 
                = (((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                     [(0x1ffffU & ((IData)(7U) + vlSelfRef.top__DOT__ALUResultM))] 
                     << 0x18U) | (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                  [(0x1ffffU & ((IData)(6U) 
                                                + vlSelfRef.top__DOT__ALUResultM))] 
                                  << 0x10U)) | ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                 [(0x1ffffU 
                                                   & ((IData)(5U) 
                                                      + vlSelfRef.top__DOT__ALUResultM))] 
                                                 << 8U) 
                                                | vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                [(0x1ffffU 
                                                  & ((IData)(4U) 
                                                     + vlSelfRef.top__DOT__ALUResultM))]));
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set].__PVT__way[1U][2U] 
                = ((0x200000U & vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                    [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                    .__PVT__way[1U][2U]) | (0x3fffffU 
                                            & (vlSelfRef.top__DOT__ALUResultM 
                                               >> 0xbU)));
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set].__PVT__way[1U][2U] 
                = (0x200000U | vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                   [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                   .__PVT__way[1U][2U]);
        } else {
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set].__PVT__way[0U][0U] 
                = (((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                     [(0x1ffffU & ((IData)(3U) + vlSelfRef.top__DOT__ALUResultM))] 
                     << 0x18U) | (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                  [(0x1ffffU & ((IData)(2U) 
                                                + vlSelfRef.top__DOT__ALUResultM))] 
                                  << 0x10U)) | ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                 [(0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__ALUResultM))] 
                                                 << 8U) 
                                                | vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                [(0x1ffffU 
                                                  & vlSelfRef.top__DOT__ALUResultM)]));
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set].__PVT__way[0U][1U] 
                = (((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                     [(0x1ffffU & ((IData)(7U) + vlSelfRef.top__DOT__ALUResultM))] 
                     << 0x18U) | (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                  [(0x1ffffU & ((IData)(6U) 
                                                + vlSelfRef.top__DOT__ALUResultM))] 
                                  << 0x10U)) | ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                 [(0x1ffffU 
                                                   & ((IData)(5U) 
                                                      + vlSelfRef.top__DOT__ALUResultM))] 
                                                 << 8U) 
                                                | vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                [(0x1ffffU 
                                                  & ((IData)(4U) 
                                                     + vlSelfRef.top__DOT__ALUResultM))]));
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set].__PVT__way[0U][2U] 
                = ((0x200000U & vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                    [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                    .__PVT__way[0U][2U]) | (0x3fffffU 
                                            & (vlSelfRef.top__DOT__ALUResultM 
                                               >> 0xbU)));
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set].__PVT__way[0U][2U] 
                = (0x200000U | vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                   [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                   .__PVT__way[0U][2U]);
        }
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__replace_bit 
            = (1U & (~ (IData)(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__replace_bit)));
    } else if (vlSelfRef.top__DOT__MemWriteM) {
        if (((3U == (IData)(vlSelfRef.top__DOT__modeAddrM)) 
             || (5U == (IData)(vlSelfRef.top__DOT__modeAddrM)))) {
            if (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0) {
                VL_ASSIGNSEL_WI(86,8,(0x3fU & VL_SHIFTL_III(6,32,32, 
                                                            (7U 
                                                             & vlSelfRef.top__DOT__ALUResultM), 3U)), 
                                vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                                [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                                .__PVT__way[0U], (0xffU 
                                                  & vlSelfRef.top__DOT__WriteDataM));
            } else if (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit1) {
                VL_ASSIGNSEL_WI(86,8,(0x3fU & VL_SHIFTL_III(6,32,32, 
                                                            (7U 
                                                             & vlSelfRef.top__DOT__ALUResultM), 3U)), 
                                vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                                [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                                .__PVT__way[1U], (0xffU 
                                                  & vlSelfRef.top__DOT__WriteDataM));
            }
        } else if ((4U & vlSelfRef.top__DOT__ALUResultM)) {
            if (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0) {
                vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set].__PVT__way[0U][1U] 
                    = vlSelfRef.top__DOT__WriteDataM;
            } else if (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit1) {
                vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set].__PVT__way[1U][1U] 
                    = vlSelfRef.top__DOT__WriteDataM;
            }
        } else if (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0) {
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set].__PVT__way[0U][0U] 
                = vlSelfRef.top__DOT__WriteDataM;
        } else if (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit1) {
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem[vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set].__PVT__way[1U][0U] 
                = vlSelfRef.top__DOT__WriteDataM;
        }
    }
    if (__VdlySet__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0) {
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array[__VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0] 
            = __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v0;
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array[__VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v1] 
            = __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v1;
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array[__VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v2] 
            = __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v2;
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array[__VdlyDim0__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v3] 
            = __VdlyVal__top__DOT__cached_data_memory__DOT__cache__DOT__ram_array__v3;
    }
    vlSelfRef.top__DOT__ResultSrcM = vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcM;
    vlSelfRef.top__DOT__PCPlus4M = vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4M;
    vlSelfRef.top__DOT__WriteDataM = vlSelfRef.top__DOT__pipeline_EM__DOT__WriteDataM;
    vlSelfRef.top__DOT__MemWriteE = vlSelfRef.top__DOT__pipeline_DE__DOT__MemWriteE;
    vlSelfRef.top__DOT__RegWriteE = vlSelfRef.top__DOT__pipeline_DE__DOT__RegWriteE;
    vlSelfRef.top__DOT__ResultSrcE = vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcE;
    vlSelfRef.top__DOT__PCPlus4E = vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4E;
    vlSelfRef.top__DOT__modeAddrE = vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrE;
    vlSelfRef.top__DOT__PCPlus4D = vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4D;
    vlSelfRef.top__DOT__JALRE = vlSelfRef.top__DOT__pipeline_DE__DOT__JALRE;
    vlSelfRef.top__DOT__PCE = vlSelfRef.top__DOT__pipeline_DE__DOT__PCE;
    vlSelfRef.top__DOT__MemReadE = vlSelfRef.top__DOT__pipeline_DE__DOT__MemReadE;
    vlSelfRef.top__DOT__RdE = vlSelfRef.top__DOT__pipeline_DE__DOT__RdE;
    vlSelfRef.top__DOT__PCD = vlSelfRef.top__DOT__pipeline_FD__DOT__PCD;
    vlSelfRef.top__DOT__BranchE = vlSelfRef.top__DOT__pipeline_DE__DOT__BranchE;
    vlSelfRef.top__DOT__ALUControlE = vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlE;
    vlSelfRef.top__DOT__ALUSrcE = vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcE;
    vlSelfRef.top__DOT__RD1E = vlSelfRef.top__DOT__pipeline_DE__DOT__RD1E;
    vlSelfRef.top__DOT__JumpE = vlSelfRef.top__DOT__pipeline_DE__DOT__JumpE;
    vlSelfRef.top__DOT__RD2E = vlSelfRef.top__DOT__pipeline_DE__DOT__RD2E;
    vlSelfRef.top__DOT__ExtImmE = vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE;
    top__DOT____Vcellinp__PC_mux__PCTarget = (vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE 
                                              + vlSelfRef.top__DOT__pipeline_DE__DOT__PCE);
    vlSelfRef.top__DOT__Rs1E = vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1E;
    vlSelfRef.top__DOT__Rs2E = vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2E;
    vlSelfRef.top__DOT__PCPlus4F = ((IData)(4U) + vlSelfRef.top__DOT__program_counter__DOT__PCF);
    vlSelfRef.top__DOT__PCF = vlSelfRef.top__DOT__program_counter__DOT__PCF;
    vlSelfRef.top__DOT__InstrF = (((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                    [(0xffffU & ((IData)(3U) 
                                                 + vlSelfRef.top__DOT__program_counter__DOT__PCF))] 
                                    << 0x18U) | (vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                                 [(0xffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.top__DOT__program_counter__DOT__PCF))] 
                                                 << 0x10U)) 
                                  | ((vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                      [(0xffffU & ((IData)(1U) 
                                                   + vlSelfRef.top__DOT__program_counter__DOT__PCF))] 
                                      << 8U) | vlSelfRef.top__DOT__instruction_memory__DOT__rom_array
                                     [(0xffffU & vlSelfRef.top__DOT__program_counter__DOT__PCF)]));
    vlSelfRef.top__DOT__ResultSrcW = vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcW;
    vlSelfRef.top__DOT__PCPlus4W = vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4W;
    vlSelfRef.top__DOT__modeAddrM = vlSelfRef.top__DOT__pipeline_EM__DOT__modeAddrM;
    vlSelfRef.top__DOT__RegWriteM = vlSelfRef.top__DOT__pipeline_EM__DOT__RegWriteM;
    vlSelfRef.top__DOT__RdM = vlSelfRef.top__DOT__pipeline_EM__DOT__RdM;
    vlSelfRef.top__DOT__MemWriteM = vlSelfRef.top__DOT__pipeline_EM__DOT__MemWriteM;
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__op 
        = (1U & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                 >> 5U));
    vlSelfRef.top__DOT__RdD = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                        >> 7U));
    vlSelfRef.top__DOT__InstrD = vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD;
    vlSelfRef.top__DOT__control_unit__DOT__funct7 = 
        (1U & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
               >> 0x1eU));
    vlSelfRef.top__DOT__control_unit__DOT__funct3 = 
        (7U & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
               >> 0xcU));
    vlSelfRef.top__DOT__Rs1D = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                         >> 0xfU));
    vlSelfRef.top__DOT__Rs2D = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                         >> 0x14U));
    vlSelfRef.top__DOT__control_unit__DOT__op = (0x7fU 
                                                 & vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD);
    vlSelfRef.top__DOT__ReadDataW = vlSelfRef.top__DOT__pipeline_MW__DOT__ReadDataW;
    vlSelfRef.top__DOT__RegWriteW = vlSelfRef.top__DOT__pipeline_MW__DOT__RegWriteW;
    vlSelfRef.top__DOT__RdW = vlSelfRef.top__DOT__pipeline_MW__DOT__RdW;
    vlSelfRef.top__DOT__MemReadM = vlSelfRef.top__DOT__pipeline_EM__DOT__MemReadM;
    vlSelfRef.top__DOT__ALUResultW = vlSelfRef.top__DOT__pipeline_MW__DOT__ALUResultW;
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set 
        = (0xffU & (vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultM 
                    >> 3U));
    vlSelfRef.top__DOT__ALUResultM = vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcM 
        = vlSelfRef.top__DOT__ResultSrcM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4M 
        = vlSelfRef.top__DOT__PCPlus4M;
    vlSelfRef.top__DOT__cached_data_memory__DOT__write_data 
        = vlSelfRef.top__DOT__WriteDataM;
    vlSelfRef.top__DOT__pipeline_EM__DOT__MemWriteE 
        = vlSelfRef.top__DOT__MemWriteE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__RegWriteE 
        = vlSelfRef.top__DOT__RegWriteE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcE 
        = vlSelfRef.top__DOT__ResultSrcE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4E 
        = vlSelfRef.top__DOT__PCPlus4E;
    vlSelfRef.top__DOT__pipeline_EM__DOT__modeAddrE 
        = vlSelfRef.top__DOT__modeAddrE;
    vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4D 
        = vlSelfRef.top__DOT__PCPlus4D;
    vlSelfRef.top__DOT__PC_mux__DOT__JALRE = vlSelfRef.top__DOT__JALRE;
    vlSelfRef.top__DOT__hazard_unit__DOT__MemReadE 
        = vlSelfRef.top__DOT__MemReadE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__MemReadE 
        = vlSelfRef.top__DOT__MemReadE;
    vlSelfRef.top__DOT__hazard_unit__DOT__RdE = vlSelfRef.top__DOT__RdE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__RdE = vlSelfRef.top__DOT__RdE;
    vlSelfRef.top__DOT__pipeline_DE__DOT__PCD = vlSelfRef.top__DOT__PCD;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__BranchE 
        = vlSelfRef.top__DOT__BranchE;
    vlSelfRef.top__DOT__alu__DOT__ALUctrl = vlSelfRef.top__DOT__ALUControlE;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in0 = vlSelfRef.top__DOT__RD1E;
    vlSelfRef.top__DOT__hazard_unit__DOT__JumpE = vlSelfRef.top__DOT__JumpE;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__JumpE 
        = vlSelfRef.top__DOT__JumpE;
    vlSelfRef.top__DOT__PC_mux__DOT__JumpE = vlSelfRef.top__DOT__JumpE;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in0 = vlSelfRef.top__DOT__RD2E;
    vlSelfRef.top__DOT__PC_mux__DOT__PCTarget = top__DOT____Vcellinp__PC_mux__PCTarget;
    vlSelfRef.top__DOT__hazard_unit__DOT__Rs1E = vlSelfRef.top__DOT__Rs1E;
    vlSelfRef.top__DOT__hazard_unit__DOT__Rs2E = vlSelfRef.top__DOT__Rs2E;
    vlSelfRef.top__DOT__PC_mux__DOT__PCPlus4F = vlSelfRef.top__DOT__PCPlus4F;
    vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4F 
        = vlSelfRef.top__DOT__PCPlus4F;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCF 
        = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__instruction_memory__DOT__PC 
        = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__pipeline_FD__DOT__PCF = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__RD 
        = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__pipeline_FD__DOT__RD = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__instruction_memory__DOT__instr 
        = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__regfile_mux__DOT__sel = vlSelfRef.top__DOT__ResultSrcW;
    vlSelfRef.top__DOT__regfile_mux__DOT__in2 = vlSelfRef.top__DOT__PCPlus4W;
    vlSelfRef.top__DOT__cached_data_memory__DOT__modeAddr 
        = vlSelfRef.top__DOT__modeAddrM;
    vlSelfRef.top__DOT__hazard_unit__DOT__RegWriteM 
        = vlSelfRef.top__DOT__RegWriteM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__RegWriteM 
        = vlSelfRef.top__DOT__RegWriteM;
    vlSelfRef.top__DOT__hazard_unit__DOT__RdM = vlSelfRef.top__DOT__RdM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__RdM = vlSelfRef.top__DOT__RdM;
    vlSelfRef.top__DOT__cached_data_memory__DOT__WE 
        = vlSelfRef.top__DOT__MemWriteM;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RdD = vlSelfRef.top__DOT__RdD;
    vlSelfRef.top__DOT__control_unit__DOT__InstrD = vlSelfRef.top__DOT__InstrD;
    vlSelfRef.top__DOT__sign_extend__DOT__ImmInput 
        = vlSelfRef.top__DOT__InstrD;
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__funct7 
        = vlSelfRef.top__DOT__control_unit__DOT__funct7;
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__funct3 
        = vlSelfRef.top__DOT__control_unit__DOT__funct3;
    vlSelfRef.top__DOT__hazard_unit__DOT__Rs1D = vlSelfRef.top__DOT__Rs1D;
    vlSelfRef.top__DOT__regfile__DOT__AD1 = vlSelfRef.top__DOT__Rs1D;
    vlSelfRef.top__DOT__pipeline_DE__DOT__Rs1D = vlSelfRef.top__DOT__Rs1D;
    vlSelfRef.top__DOT__hazard_unit__DOT__Rs2D = vlSelfRef.top__DOT__Rs2D;
    vlSelfRef.top__DOT__regfile__DOT__AD2 = vlSelfRef.top__DOT__Rs2D;
    vlSelfRef.top__DOT__pipeline_DE__DOT__Rs2D = vlSelfRef.top__DOT__Rs2D;
    if ((0x40U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
        vlSelfRef.top__DOT__control_unit__DOT__ALUSrcD 
            = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                         >> 5U))) || ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                             >> 4U)) 
                                      || ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                           ? ((1U & 
                                               (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 2U))) 
                                              || ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                       >> 1U))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))))
                                           : ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                               ? ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                       >> 1U))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))
                                               : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                       >> 1U))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
        vlSelfRef.top__DOT__control_unit__DOT__RegWriteD 
            = ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                      >> 5U)) && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                            >> 4U))) 
                                  && ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                       ? ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                 >> 2U)) 
                                          && ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))
                                       : ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                 >> 2U)) 
                                          && ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))))));
        if ((0x20U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 2U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 4U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    }
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                }
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 2U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 4U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 2U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 1U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
        }
    } else {
        vlSelfRef.top__DOT__control_unit__DOT__ALUSrcD 
            = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                         >> 5U))) || ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 4U))) 
                                      || ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                 >> 3U)) 
                                          || ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 2U)) 
                                              || ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                       >> 1U))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
        if ((0x20U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
            vlSelfRef.top__DOT__control_unit__DOT__RegWriteD 
                = ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                          >> 4U)) && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 3U))) 
                                      && ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                           ? ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))
                                           : ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))));
            if ((0x10U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                        } else {
                            vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                            vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                            vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                        }
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                }
            } else if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
            vlSelfRef.top__DOT__control_unit__DOT__RegWriteD 
                = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                             >> 3U))) && ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                           ? ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))
                                           : ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))));
            if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                    } else {
                        vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                        vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                        vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                        vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                    }
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 2U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        } else {
            vlSelfRef.top__DOT__control_unit__DOT__RegWriteD 
                = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))));
            if ((8U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((4U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            } else if ((2U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))) {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 1U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 0U;
                } else {
                    vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                    vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                    vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                    vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
                }
            } else {
                vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD = 3U;
                vlSelfRef.top__DOT__control_unit__DOT__Store = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__Load = 0U;
                vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD = 7U;
                vlSelfRef.top__DOT__control_unit__DOT__ALUOp = 3U;
            }
        }
    }
    vlSelfRef.top__DOT__control_unit__DOT__MemReadD 
        = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                     >> 6U))) && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                            >> 5U))) 
                                  && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                >> 4U))) 
                                      && ((1U & (~ 
                                                 ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__JALRD = 
        ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                >> 6U)) && ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                   >> 5U)) && ((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                    >> 4U))) 
                                               && ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                           >> 2U)) 
                                                       && ((1U 
                                                            & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__MemWriteD 
        = ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                     >> 6U))) && ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                         >> 5U)) && 
                                  ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                             >> 4U))) 
                                   && ((1U & (~ ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                 >> 3U))) 
                                       && ((1U & (~ 
                                                  ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                   >> 1U)) 
                                               && (1U 
                                                   & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__JumpD = 
        ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                >> 6U)) && ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                   >> 5U)) && ((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                    >> 4U))) 
                                               && ((8U 
                                                    & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                        >> 2U)) 
                                                    && ((1U 
                                                         & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                            >> 1U)) 
                                                        && (1U 
                                                            & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                        >> 2U)) 
                                                    && ((1U 
                                                         & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                            >> 1U)) 
                                                        && (1U 
                                                            & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__BranchD 
        = ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                  >> 6U)) && ((1U & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                     >> 5U)) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                      >> 4U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                          >> 3U))) 
                                                     && ((4U 
                                                          & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))
                                                          ? 
                                                         ((1U 
                                                           & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op)))
                                                          : 
                                                         ((1U 
                                                           & ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & (IData)(vlSelfRef.top__DOT__control_unit__DOT__op))))))));
    vlSelfRef.top__DOT__control_unit__DOT__modeAddr 
        = ((IData)(vlSelfRef.top__DOT__control_unit__DOT__Store)
            ? ((0U == (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                ? 3U : ((1U == (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                         ? 2U : ((2U == (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                  ? 1U : 0U))) : ((IData)(vlSelfRef.top__DOT__control_unit__DOT__Load)
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                      ? 4U
                                                      : 5U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                      ? 0U
                                                      : 1U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3))
                                                      ? 2U
                                                      : 3U)))
                                                   : 0U));
    vlSelfRef.top__DOT__regfile_mux__DOT__in1 = vlSelfRef.top__DOT__ReadDataW;
    vlSelfRef.top__DOT__hazard_unit__DOT__RegWriteW 
        = vlSelfRef.top__DOT__RegWriteW;
    vlSelfRef.top__DOT__regfile__DOT__WE3 = vlSelfRef.top__DOT__RegWriteW;
    vlSelfRef.top__DOT__hazard_unit__DOT__RdW = vlSelfRef.top__DOT__RdW;
    vlSelfRef.top__DOT__regfile__DOT__AD3 = vlSelfRef.top__DOT__RdW;
    vlSelfRef.top__DOT__hazard_unit__DOT__MemReadM 
        = vlSelfRef.top__DOT__MemReadM;
    vlSelfRef.top__DOT__cached_data_memory__DOT__RE 
        = vlSelfRef.top__DOT__MemReadM;
    vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE = 0U;
    if ((((IData)(vlSelfRef.top__DOT__MemReadM) & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                                                   == (IData)(vlSelfRef.top__DOT__RdM))) 
         & (0U != (IData)(vlSelfRef.top__DOT__Rs1E)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE = 3U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteM) 
                 & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                    == (IData)(vlSelfRef.top__DOT__RdM))) 
                & (0U != (IData)(vlSelfRef.top__DOT__Rs1E)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE = 2U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteW) 
                 & ((IData)(vlSelfRef.top__DOT__Rs1E) 
                    == (IData)(vlSelfRef.top__DOT__RdW))) 
                & (0U != (IData)(vlSelfRef.top__DOT__Rs1E)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE = 1U;
    }
    vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 0U;
    if ((((IData)(vlSelfRef.top__DOT__MemReadM) & ((IData)(vlSelfRef.top__DOT__Rs2E) 
                                                   == (IData)(vlSelfRef.top__DOT__RdM))) 
         & (0U != (IData)(vlSelfRef.top__DOT__Rs2E)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 3U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteM) 
                 & ((IData)(vlSelfRef.top__DOT__Rs2E) 
                    == (IData)(vlSelfRef.top__DOT__RdM))) 
                & (0U != (IData)(vlSelfRef.top__DOT__Rs2E)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 2U;
    } else if ((((IData)(vlSelfRef.top__DOT__RegWriteW) 
                 & ((IData)(vlSelfRef.top__DOT__Rs2E) 
                    == (IData)(vlSelfRef.top__DOT__RdW))) 
                & (0U != (IData)(vlSelfRef.top__DOT__Rs2E)))) {
        vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE = 1U;
    }
    vlSelfRef.top__DOT__regfile_mux__DOT__in0 = vlSelfRef.top__DOT__ALUResultW;
    vlSelfRef.top__DOT__regfile_mux__DOT__out = ((0U 
                                                  == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                                  ? vlSelfRef.top__DOT__ALUResultW
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                                   ? vlSelfRef.top__DOT__ReadDataW
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.top__DOT__ResultSrcW))
                                                    ? vlSelfRef.top__DOT__PCPlus4W
                                                    : vlSelfRef.top__DOT__ALUResultW)));
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in2 = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in2 = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ALUResultM 
        = vlSelfRef.top__DOT__ALUResultM;
    vlSelfRef.top__DOT__cached_data_memory__DOT__addr 
        = vlSelfRef.top__DOT__ALUResultM;
    if ((0x100U == vlSelfRef.top__DOT__ALUResultM)) {
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_out 
            = vlSelfRef.trigger;
    } else {
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall = 0U;
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_out = 0U;
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0 
            = ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                .__PVT__way[0U][2U] >> 0x15U) & ((0x1fffffU 
                                                  & vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                                                  [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                                                  .__PVT__way
                                                  [0U][2U]) 
                                                 == 
                                                 (vlSelfRef.top__DOT__ALUResultM 
                                                  >> 0xbU)));
        vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit1 
            = ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                .__PVT__way[1U][2U] >> 0x15U) & ((0x1fffffU 
                                                  & vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                                                  [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                                                  .__PVT__way
                                                  [1U][2U]) 
                                                 == 
                                                 (vlSelfRef.top__DOT__ALUResultM 
                                                  >> 0xbU)));
        if (((IData)(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0) 
             | (IData)(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit1))) {
            if (vlSelfRef.top__DOT__MemReadM) {
                vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_out 
                    = ((IData)(vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__hit0)
                        ? ((4U & vlSelfRef.top__DOT__ALUResultM)
                            ? vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                           [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                           .__PVT__way[0U][1U] : vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                           [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                           .__PVT__way[0U][0U]) : (
                                                   (4U 
                                                    & vlSelfRef.top__DOT__ALUResultM)
                                                    ? 
                                                   vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                                                   [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                                                   .__PVT__way
                                                   [1U][1U]
                                                    : 
                                                   vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem
                                                   [vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__set]
                                                   .__PVT__way
                                                   [1U][0U]));
            }
            if (vlSelfRef.top__DOT__MemWriteM) {
                vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall = 0U;
            }
        } else if (((IData)(vlSelfRef.top__DOT__MemWriteM) 
                    | (IData)(vlSelfRef.top__DOT__MemReadM))) {
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_out 
                = (((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                     [(0x1ffffU & ((IData)(3U) + vlSelfRef.top__DOT__ALUResultM))] 
                     << 0x18U) | (vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                  [(0x1ffffU & ((IData)(2U) 
                                                + vlSelfRef.top__DOT__ALUResultM))] 
                                  << 0x10U)) | ((vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                 [(0x1ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__ALUResultM))] 
                                                 << 8U) 
                                                | vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__ram_array
                                                [(0x1ffffU 
                                                  & vlSelfRef.top__DOT__ALUResultM)]));
            vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall = 1U;
        }
    }
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__write_data 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__write_data;
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__modeAddr 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__modeAddr;
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__WE 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__WE;
    vlSelfRef.top__DOT__ALUSrcD = vlSelfRef.top__DOT__control_unit__DOT__ALUSrcD;
    vlSelfRef.top__DOT__MemReadD = vlSelfRef.top__DOT__control_unit__DOT__MemReadD;
    vlSelfRef.top__DOT__JALRD = vlSelfRef.top__DOT__control_unit__DOT__JALRD;
    vlSelfRef.top__DOT__RegWriteD = vlSelfRef.top__DOT__control_unit__DOT__RegWriteD;
    vlSelfRef.top__DOT__MemWriteD = vlSelfRef.top__DOT__control_unit__DOT__MemWriteD;
    vlSelfRef.top__DOT__JumpD = vlSelfRef.top__DOT__control_unit__DOT__JumpD;
    vlSelfRef.top__DOT__BranchD = vlSelfRef.top__DOT__control_unit__DOT__BranchD;
    vlSelfRef.top__DOT__ResultSrcD = vlSelfRef.top__DOT__control_unit__DOT__ResultSrcD;
    vlSelfRef.top__DOT__modeAddrD = vlSelfRef.top__DOT__control_unit__DOT__modeAddr;
    vlSelfRef.top__DOT__ImmSrc = vlSelfRef.top__DOT__control_unit__DOT__ImmSrcD;
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUOp 
        = vlSelfRef.top__DOT__control_unit__DOT__ALUOp;
    __Vtableidx1 = ((((IData)(vlSelfRef.top__DOT__control_unit__DOT__funct7) 
                      << 6U) | (0x20U & vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD)) 
                    | (((IData)(vlSelfRef.top__DOT__control_unit__DOT__funct3) 
                        << 2U) | (IData)(vlSelfRef.top__DOT__control_unit__DOT__ALUOp)));
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl 
        = Vtop__ConstPool__TABLE_h45f37922_0[__Vtableidx1];
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__RE 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__RE;
    vlSelfRef.top__DOT__ForwardAE = vlSelfRef.top__DOT__hazard_unit__DOT__ForwardAE;
    vlSelfRef.top__DOT__ForwardBE = vlSelfRef.top__DOT__hazard_unit__DOT__ForwardBE;
    vlSelfRef.top__DOT__ResultW = vlSelfRef.top__DOT__regfile_mux__DOT__out;
    vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__addr 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__addr;
    vlSelfRef.top__DOT__cached_data_memory__DOT__miss_stall 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall;
    vlSelfRef.top__DOT__miss_stall = vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__miss_stall;
    vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_out;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcD = vlSelfRef.top__DOT__ALUSrcD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__MemReadD 
        = vlSelfRef.top__DOT__MemReadD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__JALRD = vlSelfRef.top__DOT__JALRD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RegWriteD 
        = vlSelfRef.top__DOT__RegWriteD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__MemWriteD 
        = vlSelfRef.top__DOT__MemWriteD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__JumpD = vlSelfRef.top__DOT__JumpD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__BranchD = vlSelfRef.top__DOT__BranchD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcD 
        = vlSelfRef.top__DOT__ResultSrcD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrD 
        = vlSelfRef.top__DOT__modeAddrD;
    vlSelfRef.top__DOT__sign_extend__DOT__ImmSrc = vlSelfRef.top__DOT__ImmSrc;
    vlSelfRef.top__DOT__sign_extend__DOT__ImmExt = 
        ((4U & (IData)(vlSelfRef.top__DOT__ImmSrc))
          ? ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
              ? 0U : ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                       ? (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                       >> 0x1fU))) 
                           << 0xcU) | (vlSelfRef.top__DOT__InstrD 
                                       >> 0x14U)) : 
                      (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                    >> 0x1fU))) << 0x14U) 
                       | (((0xff000U & vlSelfRef.top__DOT__InstrD) 
                           | (0x800U & (vlSelfRef.top__DOT__InstrD 
                                        >> 9U))) | 
                          (0x7feU & (vlSelfRef.top__DOT__InstrD 
                                     >> 0x14U))))))
          : ((2U & (IData)(vlSelfRef.top__DOT__ImmSrc))
              ? ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                  ? (0xfffff000U & vlSelfRef.top__DOT__InstrD)
                  : (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0x800U & (vlSelfRef.top__DOT__InstrD 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelfRef.top__DOT__InstrD 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.top__DOT__InstrD 
                                                    >> 7U))))))
              : ((1U & (IData)(vlSelfRef.top__DOT__ImmSrc))
                  ? (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0xfe0U & (vlSelfRef.top__DOT__InstrD 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelfRef.top__DOT__InstrD 
                                                    >> 7U))))
                  : (((- (IData)((vlSelfRef.top__DOT__InstrD 
                                  >> 0x1fU))) << 0xcU) 
                     | (vlSelfRef.top__DOT__InstrD 
                        >> 0x14U)))));
    vlSelfRef.top__DOT__control_unit__DOT__ALUControlD 
        = vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl;
    vlSelfRef.top__DOT__ALUControlD = vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__ALUControl;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__sel = vlSelfRef.top__DOT__ForwardAE;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__sel = vlSelfRef.top__DOT__ForwardBE;
    vlSelfRef.top__DOT__regfile__DOT__WD3 = vlSelfRef.top__DOT__ResultW;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in1 = vlSelfRef.top__DOT__ResultW;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in1 = vlSelfRef.top__DOT__ResultW;
    vlSelfRef.top__DOT__hazard_unit__DOT__miss_stall 
        = vlSelfRef.top__DOT__miss_stall;
    vlSelfRef.top__DOT__cached_data_memory__DOT__data_out 
        = ((1U == (IData)(vlSelfRef.top__DOT__modeAddrM))
            ? vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache
            : ((3U == (IData)(vlSelfRef.top__DOT__modeAddrM))
                ? ((2U & vlSelfRef.top__DOT__ALUResultM)
                    ? ((1U & vlSelfRef.top__DOT__ALUResultM)
                        ? (((- (IData)((vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                        >> 0x1fU))) 
                            << 8U) | (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                      >> 0x18U)) : 
                       (((- (IData)((1U & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                           >> 0x17U)))) 
                         << 8U) | (0xffU & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                            >> 0x10U))))
                    : ((1U & vlSelfRef.top__DOT__ALUResultM)
                        ? (((- (IData)((1U & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                              >> 0xfU)))) 
                            << 8U) | (0xffU & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                               >> 8U)))
                        : (((- (IData)((1U & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache))))
                : ((5U == (IData)(vlSelfRef.top__DOT__modeAddrM))
                    ? ((2U & vlSelfRef.top__DOT__ALUResultM)
                        ? ((1U & vlSelfRef.top__DOT__ALUResultM)
                            ? (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                               >> 0x18U) : (0xffU & 
                                            (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                             >> 0x10U)))
                        : ((1U & vlSelfRef.top__DOT__ALUResultM)
                            ? (0xffU & (vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache 
                                        >> 8U)) : (0xffU 
                                                   & vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache)))
                    : vlSelfRef.top__DOT__cached_data_memory__DOT__out_cache)));
    vlSelfRef.top__DOT__ExtImmD = vlSelfRef.top__DOT__sign_extend__DOT__ImmExt;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlD 
        = vlSelfRef.top__DOT__ALUControlD;
    vlSelfRef.top__DOT__ReadDataM = vlSelfRef.top__DOT__cached_data_memory__DOT__data_out;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmD = vlSelfRef.top__DOT__ExtImmD;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__in3 = vlSelfRef.top__DOT__ReadDataM;
    vlSelfRef.top__DOT__forwardBE_mux__DOT__in3 = vlSelfRef.top__DOT__ReadDataM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ReadDataM 
        = vlSelfRef.top__DOT__ReadDataM;
    vlSelfRef.top__DOT__forwardAE_mux__DOT__out = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__ForwardAE))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ForwardAE))
                                                     ? vlSelfRef.top__DOT__ReadDataM
                                                     : vlSelfRef.top__DOT__ALUResultM)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ForwardAE))
                                                     ? vlSelfRef.top__DOT__ResultW
                                                     : vlSelfRef.top__DOT__RD1E));
    vlSelfRef.top__DOT__forwardBE_mux__DOT__out = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__ForwardBE))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ForwardBE))
                                                     ? vlSelfRef.top__DOT__ReadDataM
                                                     : vlSelfRef.top__DOT__ALUResultM)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ForwardBE))
                                                     ? vlSelfRef.top__DOT__ResultW
                                                     : vlSelfRef.top__DOT__RD2E));
    vlSelfRef.top__DOT__SrcAE = vlSelfRef.top__DOT__forwardAE_mux__DOT__out;
    vlSelfRef.top__DOT__WriteDataE = vlSelfRef.top__DOT__forwardBE_mux__DOT__out;
    top__DOT____Vcellinp__alu__SrcB = ((IData)(vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcE)
                                        ? vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE
                                        : vlSelfRef.top__DOT__forwardBE_mux__DOT__out);
    vlSelfRef.top__DOT__alu__DOT__SrcA = vlSelfRef.top__DOT__SrcAE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__WriteDataE 
        = vlSelfRef.top__DOT__WriteDataE;
    vlSelfRef.top__DOT__alu__DOT__SrcB = top__DOT____Vcellinp__alu__SrcB;
    vlSelfRef.top__DOT__alu__DOT__ALUResult = ((8U 
                                                & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     ((vlSelfRef.top__DOT__SrcAE 
                                                       < top__DOT____Vcellinp__alu__SrcB)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     (VL_LTS_III(32, vlSelfRef.top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)
                                                       ? 1U
                                                       : 0U))))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__SrcAE, 
                                                                    (0x1fU 
                                                                     & top__DOT____Vcellinp__alu__SrcB))
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      >> 
                                                      (0x1fU 
                                                       & top__DOT____Vcellinp__alu__SrcB)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      << 
                                                      (0x1fU 
                                                       & top__DOT____Vcellinp__alu__SrcB))
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      & top__DOT____Vcellinp__alu__SrcB)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      | top__DOT____Vcellinp__alu__SrcB)
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      ^ top__DOT____Vcellinp__alu__SrcB))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                      ? 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      - top__DOT____Vcellinp__alu__SrcB)
                                                      : 
                                                     (vlSelfRef.top__DOT__SrcAE 
                                                      + top__DOT____Vcellinp__alu__SrcB)))));
    vlSelfRef.top__DOT__alu__DOT__ZeroE = ((1U & ((IData)(vlSelfRef.top__DOT__ALUControlE) 
                                                  >> 3U)) 
                                           && ((4U 
                                                & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    (vlSelfRef.top__DOT__SrcAE 
                                                     >= top__DOT____Vcellinp__alu__SrcB)
                                                     : 
                                                    (vlSelfRef.top__DOT__SrcAE 
                                                     < top__DOT____Vcellinp__alu__SrcB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                     ? 
                                                    VL_GTES_III(32, vlSelfRef.top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)
                                                     : 
                                                    VL_LTS_III(32, vlSelfRef.top__DOT__SrcAE, top__DOT____Vcellinp__alu__SrcB)))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.top__DOT__ALUControlE) 
                                                       >> 1U)) 
                                                   && ((1U 
                                                        & (IData)(vlSelfRef.top__DOT__ALUControlE))
                                                        ? 
                                                       (vlSelfRef.top__DOT__SrcAE 
                                                        != top__DOT____Vcellinp__alu__SrcB)
                                                        : 
                                                       (vlSelfRef.top__DOT__SrcAE 
                                                        == top__DOT____Vcellinp__alu__SrcB)))));
    vlSelfRef.top__DOT__ALUResultE = vlSelfRef.top__DOT__alu__DOT__ALUResult;
    vlSelfRef.top__DOT__Zero = vlSelfRef.top__DOT__alu__DOT__ZeroE;
    vlSelfRef.top__DOT__PC_mux__DOT__ALUResult = vlSelfRef.top__DOT__ALUResultE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__ALUResultE 
        = vlSelfRef.top__DOT__ALUResultE;
    vlSelfRef.top__DOT__PC_mux__DOT__PC = vlSelfRef.top__DOT__PCPlus4F;
    if (vlSelfRef.top__DOT__JumpE) {
        vlSelfRef.top__DOT__PC_mux__DOT__PC = ((IData)(vlSelfRef.top__DOT__JALRE)
                                                ? vlSelfRef.top__DOT__ALUResultE
                                                : top__DOT____Vcellinp__PC_mux__PCTarget);
    }
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__ZeroE 
        = vlSelfRef.top__DOT__Zero;
    vlSelfRef.top__DOT__PC = vlSelfRef.top__DOT__PC_mux__DOT__PC;
    vlSelfRef.top__DOT__BPU_mux__DOT__in0 = vlSelfRef.top__DOT__PC;
}
