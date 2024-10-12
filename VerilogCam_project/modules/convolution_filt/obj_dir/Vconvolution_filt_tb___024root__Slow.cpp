// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconvolution_filt_tb.h for the primary calling header

#include "Vconvolution_filt_tb__pch.h"
#include "Vconvolution_filt_tb__Syms.h"
#include "Vconvolution_filt_tb___024root.h"

void Vconvolution_filt_tb___024root___ctor_var_reset(Vconvolution_filt_tb___024root* vlSelf);

Vconvolution_filt_tb___024root::Vconvolution_filt_tb___024root(Vconvolution_filt_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vconvolution_filt_tb___024root___ctor_var_reset(this);
}

void Vconvolution_filt_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vconvolution_filt_tb___024root::~Vconvolution_filt_tb___024root() {
}
