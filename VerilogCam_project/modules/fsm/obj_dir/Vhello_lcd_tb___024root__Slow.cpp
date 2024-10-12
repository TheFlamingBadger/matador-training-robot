// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello_lcd_tb.h for the primary calling header

#include "Vhello_lcd_tb__pch.h"
#include "Vhello_lcd_tb__Syms.h"
#include "Vhello_lcd_tb___024root.h"

void Vhello_lcd_tb___024root___ctor_var_reset(Vhello_lcd_tb___024root* vlSelf);

Vhello_lcd_tb___024root::Vhello_lcd_tb___024root(Vhello_lcd_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhello_lcd_tb___024root___ctor_var_reset(this);
}

void Vhello_lcd_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhello_lcd_tb___024root::~Vhello_lcd_tb___024root() {
}
