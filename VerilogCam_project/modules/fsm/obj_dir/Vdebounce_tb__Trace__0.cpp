// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdebounce_tb__Syms.h"


void Vdebounce_tb___024root__trace_chg_0_sub_0(Vdebounce_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdebounce_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root__trace_chg_0\n"); );
    // Init
    Vdebounce_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdebounce_tb___024root*>(voidSelf);
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdebounce_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdebounce_tb___024root__trace_chg_0_sub_0(Vdebounce_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.debounce_tb__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelfRef.debounce_tb__DOT__button));
    bufp->chgBit(oldp+2,(vlSelfRef.debounce_tb__DOT__button_pressed));
    bufp->chgBit(oldp+3,(vlSelfRef.debounce_tb__DOT__dut__DOT__button_synchroniser__DOT__x_q1));
    bufp->chgBit(oldp+4,(vlSelfRef.debounce_tb__DOT__dut__DOT__prev_button));
    bufp->chgSData(oldp+5,(vlSelfRef.debounce_tb__DOT__dut__DOT__count),12);
    bufp->chgBit(oldp+6,(vlSelfRef.debounce_tb__DOT__dut__DOT__button_synchroniser__DOT__x_q0));
}

void Vdebounce_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdebounce_tb___024root__trace_cleanup\n"); );
    // Init
    Vdebounce_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdebounce_tb___024root*>(voidSelf);
    Vdebounce_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
