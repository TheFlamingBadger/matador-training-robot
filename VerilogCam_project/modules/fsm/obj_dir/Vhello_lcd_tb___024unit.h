// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_lcd_tb.h for the primary calling header

#ifndef VERILATED_VHELLO_LCD_TB___024UNIT_H_
#define VERILATED_VHELLO_LCD_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vhello_lcd_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_lcd_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vhello_lcd_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhello_lcd_tb___024unit(Vhello_lcd_tb__Syms* symsp, const char* v__name);
    ~Vhello_lcd_tb___024unit();
    VL_UNCOPYABLE(Vhello_lcd_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
