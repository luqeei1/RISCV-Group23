// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___ico_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h45f37922_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.top__DOT__control_unit__DOT__alu_decoder__DOT__op 
        = (1U & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                 >> 5U));
    vlSelfRef.top__DOT__ExtImmE = vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE;
    vlSelfRef.top__DOT__PCE = vlSelfRef.top__DOT__pipeline_DE__DOT__PCE;
    vlSelfRef.top__DOT__ALUSrcE = vlSelfRef.top__DOT__pipeline_DE__DOT__ALUSrcE;
    vlSelfRef.top__DOT__InstrW = vlSelfRef.top__DOT__pipeline_MW__DOT__InstrW;
    vlSelfRef.top__DOT__RdD = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                        >> 7U));
    vlSelfRef.top__DOT__PCD = vlSelfRef.top__DOT__pipeline_FD__DOT__PCD;
    vlSelfRef.top__DOT__PCPlus4D = vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4D;
    vlSelfRef.top__DOT__RegWriteE = vlSelfRef.top__DOT__pipeline_DE__DOT__RegWriteE;
    vlSelfRef.top__DOT__ResultSrcE = vlSelfRef.top__DOT__pipeline_DE__DOT__ResultSrcE;
    vlSelfRef.top__DOT__MemWriteE = vlSelfRef.top__DOT__pipeline_DE__DOT__MemWriteE;
    vlSelfRef.top__DOT__PCPlus4E = vlSelfRef.top__DOT__pipeline_DE__DOT__PCPlus4E;
    vlSelfRef.top__DOT__modeAddrE = vlSelfRef.top__DOT__pipeline_DE__DOT__modeAddrE;
    vlSelfRef.top__DOT__InstrE = vlSelfRef.top__DOT__pipeline_DE__DOT__InstrE;
    vlSelfRef.top__DOT__ResultSrcM = vlSelfRef.top__DOT__pipeline_EM__DOT__ResultSrcM;
    vlSelfRef.top__DOT__PCPlus4M = vlSelfRef.top__DOT__pipeline_EM__DOT__PCPlus4M;
    vlSelfRef.top__DOT__InstrM = vlSelfRef.top__DOT__pipeline_EM__DOT__InstrM;
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
    vlSelfRef.top__DOT____Vcellinp__PC_mux__PCTarget 
        = (vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmE 
           + vlSelfRef.top__DOT__pipeline_DE__DOT__PCE);
    vlSelfRef.top__DOT__PCPlus4F = ((IData)(4U) + vlSelfRef.top__DOT__program_counter__DOT__PCF);
    vlSelfRef.top__DOT__RdE = vlSelfRef.top__DOT__pipeline_DE__DOT__RdE;
    vlSelfRef.top__DOT__MemReadE = vlSelfRef.top__DOT__pipeline_DE__DOT__MemReadE;
    vlSelfRef.top__DOT__PCF = vlSelfRef.top__DOT__program_counter__DOT__PCF;
    vlSelfRef.top__DOT__control_unit__DOT__funct3 = 
        (7U & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
               >> 0xcU));
    vlSelfRef.top__DOT__Rs1D = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                         >> 0xfU));
    vlSelfRef.top__DOT__Rs2D = (0x1fU & (vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD 
                                         >> 0x14U));
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
    vlSelfRef.top__DOT__BranchE = vlSelfRef.top__DOT__pipeline_DE__DOT__BranchE;
    vlSelfRef.top__DOT__JumpE = vlSelfRef.top__DOT__pipeline_DE__DOT__JumpE;
    vlSelfRef.top__DOT__control_unit__DOT__op = (0x7fU 
                                                 & vlSelfRef.top__DOT__pipeline_FD__DOT__InstrD);
    vlSelfRef.top__DOT__ALUControlE = vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlE;
    vlSelfRef.top__DOT__RD1E = vlSelfRef.top__DOT__pipeline_DE__DOT__RD1E;
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
    vlSelfRef.top__DOT__pipeline_EM__DOT__InstrE = vlSelfRef.top__DOT__InstrE;
    vlSelfRef.top__DOT__pipeline_MW__DOT__ResultSrcM 
        = vlSelfRef.top__DOT__ResultSrcM;
    vlSelfRef.top__DOT__pipeline_MW__DOT__PCPlus4M 
        = vlSelfRef.top__DOT__PCPlus4M;
    vlSelfRef.top__DOT__pipeline_MW__DOT__InstrM = vlSelfRef.top__DOT__InstrM;
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
    vlSelfRef.top__DOT__pipeline_DE__DOT__InstrD = vlSelfRef.top__DOT__InstrD;
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
    vlSelfRef.top__DOT__PC_mux__DOT__PCTarget = vlSelfRef.top__DOT____Vcellinp__PC_mux__PCTarget;
    vlSelfRef.top__DOT__PC_mux__DOT__PCPlus4F = vlSelfRef.top__DOT__PCPlus4F;
    vlSelfRef.top__DOT__pipeline_FD__DOT__PCPlus4F 
        = vlSelfRef.top__DOT__PCPlus4F;
    vlSelfRef.top__DOT__hazard_unit__DOT__RdE = vlSelfRef.top__DOT__RdE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__RdE = vlSelfRef.top__DOT__RdE;
    vlSelfRef.top__DOT__hazard_unit__DOT__MemReadE 
        = vlSelfRef.top__DOT__MemReadE;
    vlSelfRef.top__DOT__pipeline_EM__DOT__MemReadE 
        = vlSelfRef.top__DOT__MemReadE;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__PCF 
        = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__instruction_memory__DOT__PC 
        = vlSelfRef.top__DOT__PCF;
    vlSelfRef.top__DOT__pipeline_FD__DOT__PCF = vlSelfRef.top__DOT__PCF;
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
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__RD 
        = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__pipeline_FD__DOT__RD = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__instruction_memory__DOT__instr 
        = vlSelfRef.top__DOT__InstrF;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__BranchE 
        = vlSelfRef.top__DOT__BranchE;
    vlSelfRef.top__DOT__hazard_unit__DOT__JumpE = vlSelfRef.top__DOT__JumpE;
    vlSelfRef.top__DOT__branch_prediction_unit__DOT__JumpE 
        = vlSelfRef.top__DOT__JumpE;
    vlSelfRef.top__DOT__PC_mux__DOT__JumpE = vlSelfRef.top__DOT__JumpE;
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
                                                     && ((1U 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.top__DOT__control_unit__DOT__op) 
                                                              >> 2U))) 
                                                         && ((1U 
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
    vlSelfRef.top__DOT__ExtImmD = vlSelfRef.top__DOT__sign_extend__DOT__ImmExt;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ALUControlD 
        = vlSelfRef.top__DOT__ALUControlD;
    vlSelfRef.top__DOT__pipeline_DE__DOT__ExtImmD = vlSelfRef.top__DOT__ExtImmD;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VpreTriggered.word(0U))) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem 
        = vlSelfRef.top__DOT__cached_data_memory__DOT__cache__DOT__cache_mem;
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__regfile__DOT__RD2 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [vlSelfRef.top__DOT__Rs2D];
    vlSelfRef.top__DOT__regfile__DOT__RD1 = vlSelfRef.top__DOT__regfile__DOT__registerfile_array
        [vlSelfRef.top__DOT__Rs1D];
    vlSelfRef.top__DOT__RD2 = vlSelfRef.top__DOT__regfile__DOT__RD2;
    vlSelfRef.top__DOT__RD1 = vlSelfRef.top__DOT__regfile__DOT__RD1;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RD2 = vlSelfRef.top__DOT__RD2;
    vlSelfRef.top__DOT__pipeline_DE__DOT__RD1 = vlSelfRef.top__DOT__RD1;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        vlSelfRef.__VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
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
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
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
