// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhello_lcd_tb__Syms.h"


void Vhello_lcd_tb___024root__trace_chg_0_sub_0(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhello_lcd_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root__trace_chg_0\n"); );
    // Init
    Vhello_lcd_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello_lcd_tb___024root*>(voidSelf);
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhello_lcd_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhello_lcd_tb___024root__trace_chg_0_sub_0(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelfRef.hello_lcd_tb__DOT__address));
        bufp->chgBit(oldp+1,(vlSelfRef.hello_lcd_tb__DOT__chipselect));
        bufp->chgBit(oldp+2,(vlSelfRef.hello_lcd_tb__DOT__write));
        bufp->chgCData(oldp+3,(vlSelfRef.hello_lcd_tb__DOT__writedata),8);
        bufp->chgCData(oldp+4,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state),2);
        bufp->chgSData(oldp+5,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[0]),9);
        bufp->chgSData(oldp+6,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[1]),9);
        bufp->chgSData(oldp+7,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[2]),9);
        bufp->chgSData(oldp+8,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[3]),9);
        bufp->chgSData(oldp+9,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[4]),9);
        bufp->chgSData(oldp+10,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[5]),9);
        bufp->chgSData(oldp+11,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[6]),9);
        bufp->chgSData(oldp+12,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[7]),9);
        bufp->chgSData(oldp+13,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[8]),9);
        bufp->chgSData(oldp+14,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[9]),9);
        bufp->chgIData(oldp+15,(((IData)(1U) + vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index)),32);
        bufp->chgIData(oldp+16,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index),32);
    }
    bufp->chgBit(oldp+17,(vlSelfRef.hello_lcd_tb__DOT__clk));
    bufp->chgBit(oldp+18,(vlSelfRef.hello_lcd_tb__DOT__reset));
    bufp->chgCData(oldp+19,(vlSelfRef.hello_lcd_tb__DOT__filter_number),3);
    bufp->chgBit(oldp+20,(vlSelfRef.hello_lcd_tb__DOT__waitrequest));
    bufp->chgCData(oldp+21,(((0U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state))
                              ? (VL_GTS_III(32, 0xaU, vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index)
                                  ? 1U : 0U) : ((1U 
                                                 == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state))
                                                 ? 
                                                (((IData)(vlSelfRef.hello_lcd_tb__DOT__waitrequest) 
                                                  | VL_LTES_III(32, 9U, vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index))
                                                  ? 0U
                                                  : 1U)
                                                 : 0U))),2);
}

void Vhello_lcd_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root__trace_cleanup\n"); );
    // Init
    Vhello_lcd_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello_lcd_tb___024root*>(voidSelf);
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
