// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello_lcd_tb.h for the primary calling header

#ifndef VERILATED_VHELLO_LCD_TB___024ROOT_H_
#define VERILATED_VHELLO_LCD_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vhello_lcd_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_lcd_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ hello_lcd_tb__DOT__clk;
    CData/*0:0*/ hello_lcd_tb__DOT__reset;
    CData/*2:0*/ hello_lcd_tb__DOT__filter_number;
    CData/*0:0*/ hello_lcd_tb__DOT__address;
    CData/*0:0*/ hello_lcd_tb__DOT__chipselect;
    CData/*0:0*/ hello_lcd_tb__DOT__write;
    CData/*0:0*/ hello_lcd_tb__DOT__waitrequest;
    CData/*7:0*/ hello_lcd_tb__DOT__readdata;
    CData/*1:0*/ hello_lcd_tb__DOT__response;
    CData/*7:0*/ hello_lcd_tb__DOT__writedata;
    CData/*1:0*/ hello_lcd_tb__DOT__dut__DOT__current_state;
    CData/*1:0*/ hello_lcd_tb__DOT__dut__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__hello_lcd_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ hello_lcd_tb__DOT__dut__DOT__next_instruction_index;
    IData/*31:0*/ hello_lcd_tb__DOT__dut__DOT__instruction_index;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*8:0*/, 10> hello_lcd_tb__DOT__dut__DOT__instructions;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhello_lcd_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhello_lcd_tb___024root(Vhello_lcd_tb__Syms* symsp, const char* v__name);
    ~Vhello_lcd_tb___024root();
    VL_UNCOPYABLE(Vhello_lcd_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
