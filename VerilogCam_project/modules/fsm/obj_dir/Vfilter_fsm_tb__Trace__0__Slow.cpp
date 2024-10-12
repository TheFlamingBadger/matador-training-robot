// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfilter_fsm_tb__Syms.h"


VL_ATTR_COLD void Vfilter_fsm_tb___024root__trace_init_sub__TOP__0(Vfilter_fsm_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("filter_fsm_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"NUM_FILTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"next_button",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"prev_button",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"filter_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+8,0,"lcd_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"NUM_FILTERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"next_button",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"prev_button",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"filter_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+8,0,"lcd_reset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"next_button_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"prev_button_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"next_button_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"prev_button_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfilter_fsm_tb___024root__trace_init_top(Vfilter_fsm_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfilter_fsm_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfilter_fsm_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfilter_fsm_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfilter_fsm_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfilter_fsm_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfilter_fsm_tb___024root__trace_register(Vfilter_fsm_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vfilter_fsm_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfilter_fsm_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfilter_fsm_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfilter_fsm_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfilter_fsm_tb___024root__trace_const_0_sub_0(Vfilter_fsm_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfilter_fsm_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root__trace_const_0\n"); );
    // Init
    Vfilter_fsm_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfilter_fsm_tb___024root*>(voidSelf);
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfilter_fsm_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfilter_fsm_tb___024root__trace_const_0_sub_0(Vfilter_fsm_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+12,(5U),32);
}

VL_ATTR_COLD void Vfilter_fsm_tb___024root__trace_full_0_sub_0(Vfilter_fsm_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfilter_fsm_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root__trace_full_0\n"); );
    // Init
    Vfilter_fsm_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfilter_fsm_tb___024root*>(voidSelf);
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfilter_fsm_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfilter_fsm_tb___024root__trace_full_0_sub_0(Vfilter_fsm_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfilter_fsm_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfilter_fsm_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.filter_fsm_tb__DOT__filter_number),3);
    bufp->fullBit(oldp+2,(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_q));
    bufp->fullBit(oldp+3,(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_q));
    bufp->fullCData(oldp+4,(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state),4);
    bufp->fullBit(oldp+5,(vlSelfRef.filter_fsm_tb__DOT__clk));
    bufp->fullBit(oldp+6,(vlSelfRef.filter_fsm_tb__DOT__next_button));
    bufp->fullBit(oldp+7,(vlSelfRef.filter_fsm_tb__DOT__prev_button));
    bufp->fullBit(oldp+8,(((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge) 
                           | (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge))));
    bufp->fullBit(oldp+9,(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge));
    bufp->fullBit(oldp+10,(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge));
    bufp->fullCData(oldp+11,(((8U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                               ? 0U : ((4U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                                        ? ((2U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                                             ? 0U : 
                                            ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__next_button_edge)
                                              ? 0U : 
                                             ((IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__prev_button_edge)
                                               ? 3U
                                               : 4U))))
                                        : ((2U & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
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
                                            : ((1U 
                                                & (IData)(vlSelfRef.filter_fsm_tb__DOT__dut__DOT__current_state))
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
