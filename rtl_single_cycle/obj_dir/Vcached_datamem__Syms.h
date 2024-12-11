// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCACHED_DATAMEM__SYMS_H_
#define VERILATED_VCACHED_DATAMEM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcached_datamem.h"

// INCLUDE MODULE CLASSES
#include "Vcached_datamem___024root.h"
#include "Vcached_datamem___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcached_datamem__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcached_datamem* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcached_datamem___024root      TOP;

    // CONSTRUCTORS
    Vcached_datamem__Syms(VerilatedContext* contextp, const char* namep, Vcached_datamem* modelp);
    ~Vcached_datamem__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
