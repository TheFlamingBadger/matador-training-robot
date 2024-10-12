// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconvolution_filt_tb.h for the primary calling header

#ifndef VERILATED_VCONVOLUTION_FILT_TB___024ROOT_H_
#define VERILATED_VCONVOLUTION_FILT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vconvolution_filt_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconvolution_filt_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ convolution_filt_tb__DOT__clk;
    CData/*2:0*/ convolution_filt_tb__DOT__filter_number;
    CData/*2:0*/ convolution_filt_tb__DOT__DUT__DOT__locater;
    CData/*6:0*/ convolution_filt_tb__DOT__DUT__DOT____Vlvbound_h1510fb4b__0;
    CData/*6:0*/ convolution_filt_tb__DOT__DUT__DOT____Vlvbound_h9d72ff70__0;
    CData/*6:0*/ convolution_filt_tb__DOT__DUT__DOT____Vlvbound_h8b5708fe__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__convolution_filt_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ convolution_filt_tb__DOT__audio_pitch;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk5__DOT__i;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk7__DOT__i;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk9__DOT__i;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk11__DOT__i;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk13__DOT__i;
    IData/*31:0*/ convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j;
    IData/*31:0*/ convolution_filt_tb__DOT__DUT__DOT__determine_kernel__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ convolution_filt_tb__DOT__DUT__DOT__determine_kernel__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ convolution_filt_tb__DOT__DUT__DOT__determine_kernel__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlUnpacked<CData/*6:0*/, 25>, 4> convolution_filt_tb__DOT__expected_clarity_kernels;
    VlUnpacked<VlUnpacked<CData/*6:0*/, 25>, 4> convolution_filt_tb__DOT__expected_sobel_kernels;
    VlUnpacked<CData/*6:0*/, 25> convolution_filt_tb__DOT__curr_kernel;
    VlUnpacked<CData/*6:0*/, 25> convolution_filt_tb__DOT__temp_kernel;
    VlUnpacked<CData/*6:0*/, 25> convolution_filt_tb__DOT__DUT__DOT__temp_kernel;
    VlUnpacked<VlUnpacked<CData/*6:0*/, 25>, 4> convolution_filt_tb__DOT__DUT__DOT__clarity_kernels;
    VlUnpacked<VlUnpacked<CData/*6:0*/, 25>, 4> convolution_filt_tb__DOT__DUT__DOT__sobel_kernels;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconvolution_filt_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconvolution_filt_tb___024root(Vconvolution_filt_tb__Syms* symsp, const char* v__name);
    ~Vconvolution_filt_tb___024root();
    VL_UNCOPYABLE(Vconvolution_filt_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
