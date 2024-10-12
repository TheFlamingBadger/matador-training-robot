// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhello_lcd_tb__Syms.h"


VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_init_sub__TOP__lcd_inst_pkg__0(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_init_sub__TOP__0(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("lcd_inst_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vhello_lcd_tb___024root__trace_init_sub__TOP__lcd_inst_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("hello_lcd_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"filter_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"chipselect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"byteenable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"waitrequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"readdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"response",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"writedata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"filter_number",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1,0,"address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"chipselect",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"byteenable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"waitrequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"readdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"response",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"writedata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"N_INSTRS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("instructions", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+16,0,"next_instruction_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+17,0,"instruction_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_init_sub__TOP__lcd_inst_pkg__0(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root__trace_init_sub__TOP__lcd_inst_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+28,0,"CLEAR_DISPLAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+29,0,"RETURN_HOME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+30,0,"ENTRY_DIR_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+31,0,"ENTRY_DIR_LEFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+32,0,"ENTRY_SHIFT_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+31,0,"ENTRY_SHIFT_DISABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+33,0,"DISPLAY_ON",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+34,0,"CURSOR_ON",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+35,0,"CURSOR_BLINK_ON",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+36,0,"DISPLAY_OFF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+33,0,"CURSOR_OFF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+34,0,"CURSOR_BLINK_OFF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+37,0,"DISPLAY_SHIFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+38,0,"DISPLAY_SHIFT_LEFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+39,0,"CURSOR_SHIFT_RIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+40,0,"CURSOR_SHIFT_LEFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
}

VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_init_top(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhello_lcd_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhello_lcd_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhello_lcd_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_register(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vhello_lcd_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vhello_lcd_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vhello_lcd_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vhello_lcd_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_const_0_sub_0(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root__trace_const_0\n"); );
    // Init
    Vhello_lcd_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello_lcd_tb___024root*>(voidSelf);
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhello_lcd_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_const_0_sub_0(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+23,(1U));
    bufp->fullBit(oldp+24,(0U));
    bufp->fullCData(oldp+25,(vlSelfRef.hello_lcd_tb__DOT__readdata),8);
    bufp->fullCData(oldp+26,(vlSelfRef.hello_lcd_tb__DOT__response),2);
    bufp->fullIData(oldp+27,(0xaU),32);
    bufp->fullSData(oldp+28,(1U),9);
    bufp->fullSData(oldp+29,(2U),9);
    bufp->fullSData(oldp+30,(6U),9);
    bufp->fullSData(oldp+31,(4U),9);
    bufp->fullSData(oldp+32,(5U),9);
    bufp->fullSData(oldp+33,(0xcU),9);
    bufp->fullSData(oldp+34,(0xeU),9);
    bufp->fullSData(oldp+35,(0xfU),9);
    bufp->fullSData(oldp+36,(8U),9);
    bufp->fullSData(oldp+37,(0x1cU),9);
    bufp->fullSData(oldp+38,(0x18U),9);
    bufp->fullSData(oldp+39,(0x14U),9);
    bufp->fullSData(oldp+40,(0x10U),9);
}

VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_full_0_sub_0(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root__trace_full_0\n"); );
    // Init
    Vhello_lcd_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello_lcd_tb___024root*>(voidSelf);
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhello_lcd_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhello_lcd_tb___024root__trace_full_0_sub_0(Vhello_lcd_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhello_lcd_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello_lcd_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.hello_lcd_tb__DOT__address));
    bufp->fullBit(oldp+2,(vlSelfRef.hello_lcd_tb__DOT__chipselect));
    bufp->fullBit(oldp+3,(vlSelfRef.hello_lcd_tb__DOT__write));
    bufp->fullCData(oldp+4,(vlSelfRef.hello_lcd_tb__DOT__writedata),8);
    bufp->fullCData(oldp+5,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state),2);
    bufp->fullSData(oldp+6,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[0]),9);
    bufp->fullSData(oldp+7,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[1]),9);
    bufp->fullSData(oldp+8,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[2]),9);
    bufp->fullSData(oldp+9,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[3]),9);
    bufp->fullSData(oldp+10,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[4]),9);
    bufp->fullSData(oldp+11,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[5]),9);
    bufp->fullSData(oldp+12,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[6]),9);
    bufp->fullSData(oldp+13,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[7]),9);
    bufp->fullSData(oldp+14,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[8]),9);
    bufp->fullSData(oldp+15,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instructions[9]),9);
    bufp->fullIData(oldp+16,(((IData)(1U) + vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index)),32);
    bufp->fullIData(oldp+17,(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__instruction_index),32);
    bufp->fullBit(oldp+18,(vlSelfRef.hello_lcd_tb__DOT__clk));
    bufp->fullBit(oldp+19,(vlSelfRef.hello_lcd_tb__DOT__reset));
    bufp->fullCData(oldp+20,(vlSelfRef.hello_lcd_tb__DOT__filter_number),3);
    bufp->fullBit(oldp+21,(vlSelfRef.hello_lcd_tb__DOT__waitrequest));
    bufp->fullCData(oldp+22,(((0U == (IData)(vlSelfRef.hello_lcd_tb__DOT__dut__DOT__current_state))
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
