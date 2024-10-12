// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdebounce_tb.h for the primary calling header

#include "Vdebounce_tb__pch.h"
#include "Vdebounce_tb__Syms.h"
#include "Vdebounce_tb___024root.h"

void Vdebounce_tb___024root___ctor_var_reset(Vdebounce_tb___024root* vlSelf);

Vdebounce_tb___024root::Vdebounce_tb___024root(Vdebounce_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdebounce_tb___024root___ctor_var_reset(this);
}

void Vdebounce_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdebounce_tb___024root::~Vdebounce_tb___024root() {
}
