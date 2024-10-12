// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfilter_fsm_tb.h for the primary calling header

#ifndef VERILATED_VFILTER_FSM_TB___024ROOT_H_
#define VERILATED_VFILTER_FSM_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfilter_fsm_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfilter_fsm_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ filter_fsm_tb__DOT__clk;
    CData/*0:0*/ filter_fsm_tb__DOT__next_button;
    CData/*0:0*/ filter_fsm_tb__DOT__prev_button;
    CData/*2:0*/ filter_fsm_tb__DOT__filter_number;
    CData/*0:0*/ filter_fsm_tb__DOT__dut__DOT__next_button_q;
    CData/*0:0*/ filter_fsm_tb__DOT__dut__DOT__prev_button_q;
    CData/*0:0*/ filter_fsm_tb__DOT__dut__DOT__next_button_edge;
    CData/*0:0*/ filter_fsm_tb__DOT__dut__DOT__prev_button_edge;
    CData/*3:0*/ filter_fsm_tb__DOT__dut__DOT__next_state;
    CData/*3:0*/ filter_fsm_tb__DOT__dut__DOT__current_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__filter_fsm_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfilter_fsm_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfilter_fsm_tb___024root(Vfilter_fsm_tb__Syms* symsp, const char* v__name);
    ~Vfilter_fsm_tb___024root();
    VL_UNCOPYABLE(Vfilter_fsm_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
