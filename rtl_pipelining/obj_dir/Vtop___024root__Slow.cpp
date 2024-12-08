// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::top__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__hazard_unit__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__branch_prediction_unit__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__PC_mux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__BPU_mux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__program_counter__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instruction_memory__DOT__ADDRESS_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__instruction_memory__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__regfile__DOT__ADDRESS_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__regfile__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__control_unit__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__sign_extend__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__forwardAE_mux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__forwardBE_mux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__alu__DOT__CONTROL_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__alu__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__data_memory__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__regfile_mux__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__pipeline_FD__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__pipeline_DE__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__pipeline_DE__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__pipeline_EM__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__pipeline_EM__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__pipeline_MW__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__pipeline_MW__DOT__WIDTH;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop___024root::~Vtop___024root() {
}
