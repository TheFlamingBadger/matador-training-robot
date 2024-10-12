// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vimage_processor_tb.h for the primary calling header

#include "Vimage_processor_tb__pch.h"
#include "Vimage_processor_tb__Syms.h"
#include "Vimage_processor_tb___024root.h"

void Vimage_processor_tb___024root___ctor_var_reset(Vimage_processor_tb___024root* vlSelf);

Vimage_processor_tb___024root::Vimage_processor_tb___024root(Vimage_processor_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vimage_processor_tb___024root___ctor_var_reset(this);
}

void Vimage_processor_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vimage_processor_tb___024root::~Vimage_processor_tb___024root() {
}
