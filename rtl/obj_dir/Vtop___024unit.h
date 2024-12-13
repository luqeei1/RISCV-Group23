// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT_H_
#define VERILATED_VTOP___024UNIT_H_  // guard

#include "verilated.h"
#include "Vtop___024unit.h"


class Vtop__Syms;
struct Vtop_cache_set_type__struct__0 {
    VlUnpacked<VlWide<3>/*85:0*/, 2> __PVT__way;

    bool operator==(const Vtop_cache_set_type__struct__0& rhs) const {
        return __PVT__way == rhs.__PVT__way;
    }
    bool operator!=(const Vtop_cache_set_type__struct__0& rhs) const {
        return !(*this == rhs);
    }
};

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ TAG_MSB = 0x0000001fU;
    static constexpr IData/*31:0*/ TAG_LSB = 0x0000000bU;
    static constexpr IData/*31:0*/ SETS = 0x00000100U;

    // CONSTRUCTORS
    Vtop___024unit(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024unit();
    VL_UNCOPYABLE(Vtop___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_cache_set_type__struct__0& obj);

#endif  // guard
