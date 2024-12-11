// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcached_datamem.h for the primary calling header

#ifndef VERILATED_VCACHED_DATAMEM___024UNIT_H_
#define VERILATED_VCACHED_DATAMEM___024UNIT_H_  // guard

#include "verilated.h"


class Vcached_datamem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcached_datamem___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcached_datamem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcached_datamem___024unit(Vcached_datamem__Syms* symsp, const char* v__name);
    ~Vcached_datamem___024unit();
    VL_UNCOPYABLE(Vcached_datamem___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
