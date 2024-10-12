// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vintegration_top_level_tb.h for the primary calling header

#ifndef VERILATED_VINTEGRATION_TOP_LEVEL_TB___024UNIT_H_
#define VERILATED_VINTEGRATION_TOP_LEVEL_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vintegration_top_level_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vintegration_top_level_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vintegration_top_level_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vintegration_top_level_tb___024unit(Vintegration_top_level_tb__Syms* symsp, const char* v__name);
    ~Vintegration_top_level_tb___024unit();
    VL_UNCOPYABLE(Vintegration_top_level_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
