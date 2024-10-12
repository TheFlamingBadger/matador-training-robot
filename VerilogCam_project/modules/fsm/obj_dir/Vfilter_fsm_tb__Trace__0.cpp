// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfilter_fsm_tb__Syms.h"


void Vfilter_fsm_tb___024root__trace_chg_0_sub_0(Vfilter_fsm_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfilter_fsm_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root__trace_chg_0\n"); );
    // Init
    Vfilter_fsm_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfilter_fsm_tb___024root*>(voidSelf);
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfilter_fsm_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfilter_fsm_tb___024root__trace_chg_0_sub_0(Vfilter_fsm_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelfRef.filter_fsm_tb__DOT__filter_number),3);
        bufp->chgBit(oldp+1,(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_q));
        bufp->chgBit(oldp+2,(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_q));
        bufp->chgCData(oldp+3,(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state),4);
    }
    bufp->chgBit(oldp+4,(vlSelfRef.filter_fsm_tb__DOT__clk));
    bufp->chgBit(oldp+5,(vlSelfRef.filter_fsm_tb__DOT__next_button));
    bufp->chgBit(oldp+6,(vlSelfRef.filter_fsm_tb__DOT__prev_button));
    bufp->chgBit(oldp+7,(((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge) 
                          | (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge))));
    bufp->chgBit(oldp+8,(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge));
    bufp->chgBit(oldp+9,(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge));
    bufp->chgCData(oldp+10,(((8U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                              ? 0U : ((4U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                                       ? ((2U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge)
                                                      ? 3U
                                                      : 4U))))
                                       : ((2U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                                           ? ((1U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                                               ? ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge)
                                                   ? 4U
                                                   : 
                                                  ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge)
                                                    ? 2U
                                                    : 3U))
                                               : ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge)
                                                    ? 1U
                                                    : 2U)))
                                           : ((1U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                                               ? ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge)
                                                    ? 0U
                                                    : 1U))
                                               : ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge)
                                                    ? 4U
                                                    : 0U))))))),4);
}

void Vfilter_fsm_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root__trace_cleanup\n"); );
    // Init
    Vfilter_fsm_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfilter_fsm_tb___024root*>(voidSelf);
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
