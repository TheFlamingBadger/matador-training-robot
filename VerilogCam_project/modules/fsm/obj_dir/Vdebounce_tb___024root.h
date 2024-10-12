// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdebounce_tb.h for the primary calling header

#ifndef VERILATED_VDEBOUNCE_TB___024ROOT_H_
#define VERILATED_VDEBOUNCE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdebounce_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdebounce_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ debounce_tb__DOT__clk;
    CData/*0:0*/ debounce_tb__DOT__button;
    CData/*0:0*/ debounce_tb__DOT__button_pressed;
    CData/*0:0*/ debounce_tb__DOT__dut__DOT__prev_button;
    CData/*0:0*/ debounce_tb__DOT__dut__DOT__button_synchroniser__DOT__x_q0;
    CData/*0:0*/ debounce_tb__DOT__dut__DOT__button_synchroniser__DOT__x_q1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__debounce_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ debounce_tb__DOT__dut__DOT__count;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdebounce_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdebounce_tb___024root(Vdebounce_tb__Syms* symsp, const char* v__name);
    ~Vdebounce_tb___024root();
    VL_UNCOPYABLE(Vdebounce_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
