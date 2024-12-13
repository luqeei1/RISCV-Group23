// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut.h for the primary calling header

#ifndef VERILATED_VDUT___024UNIT_H_
#define VERILATED_VDUT___024UNIT_H_  // guard

#include "verilated.h"
#include "Vdut___024unit.h"


class Vdut__Syms;
struct Vdut_cache_set_type__struct__0 {
    VlUnpacked<VlWide<3>/*85:0*/, 2> __PVT__way;

    bool operator==(const Vdut_cache_set_type__struct__0& rhs) const {
        return __PVT__way == rhs.__PVT__way;
    }
    bool operator!=(const Vdut_cache_set_type__struct__0& rhs) const {
        return !(*this == rhs);
    }
};

class alignas(VL_CACHE_LINE_BYTES) Vdut___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdut__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut___024unit(Vdut__Syms* symsp, const char* v__name);
    ~Vdut___024unit();
    VL_UNCOPYABLE(Vdut___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vdut_cache_set_type__struct__0& obj);

#endif  // guard
