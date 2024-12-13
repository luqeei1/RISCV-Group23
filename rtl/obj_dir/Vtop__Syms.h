// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop___024unit                 TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope___024unit;
    VerilatedScope __Vscope_top;
    VerilatedScope __Vscope_top__BPU_mux;
    VerilatedScope __Vscope_top__PC_mux;
    VerilatedScope __Vscope_top__alu;
    VerilatedScope __Vscope_top__branch_prediction_unit;
    VerilatedScope __Vscope_top__cached_data_memory;
    VerilatedScope __Vscope_top__cached_data_memory__cache;
    VerilatedScope __Vscope_top__control_unit;
    VerilatedScope __Vscope_top__control_unit__alu_decoder;
    VerilatedScope __Vscope_top__forwardAE_mux;
    VerilatedScope __Vscope_top__forwardBE_mux;
    VerilatedScope __Vscope_top__hazard_unit;
    VerilatedScope __Vscope_top__instruction_memory;
    VerilatedScope __Vscope_top__pipeline_DE;
    VerilatedScope __Vscope_top__pipeline_EM;
    VerilatedScope __Vscope_top__pipeline_FD;
    VerilatedScope __Vscope_top__pipeline_MW;
    VerilatedScope __Vscope_top__program_counter;
    VerilatedScope __Vscope_top__regfile;
    VerilatedScope __Vscope_top__regfile_mux;
    VerilatedScope __Vscope_top__sign_extend;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
