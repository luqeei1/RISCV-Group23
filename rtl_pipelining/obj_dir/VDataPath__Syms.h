// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDATAPATH__SYMS_H_
#define VERILATED_VDATAPATH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VDataPath.h"

// INCLUDE MODULE CLASSES
#include "VDataPath___024root.h"

// SYMS CLASS (contains all model state)
class VDataPath__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDataPath* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDataPath___024root            TOP;

    // CONSTRUCTORS
    VDataPath__Syms(VerilatedContext* contextp, const char* namep, VDataPath* modelp);
    ~VDataPath__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
