// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconvolution_filt_tb__Syms.h"


VL_ATTR_COLD void Vconvolution_filt_tb___024root__trace_init_sub__TOP__0(Vconvolution_filt_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("convolution_filt_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+65,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"filter_number",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+67,0,"audio_pitch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("curr_kernel", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_kernel", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+72+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+97,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"W_FRAC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"filter_number",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+67,0,"audio_pitch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("curr_kernel", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+36,0,"locater",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("temp_kernel", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+37+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("determine_kernel", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+63,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+64,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+99,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+68,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+69,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconvolution_filt_tb___024root__trace_init_top(Vconvolution_filt_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconvolution_filt_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconvolution_filt_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconvolution_filt_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconvolution_filt_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconvolution_filt_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconvolution_filt_tb___024root__trace_register(Vconvolution_filt_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vconvolution_filt_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconvolution_filt_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconvolution_filt_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconvolution_filt_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconvolution_filt_tb___024root__trace_const_0_sub_0(Vconvolution_filt_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconvolution_filt_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root__trace_const_0\n"); );
    // Init
    Vconvolution_filt_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconvolution_filt_tb___024root*>(voidSelf);
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconvolution_filt_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconvolution_filt_tb___024root__trace_const_0_sub_0(Vconvolution_filt_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+72,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[0]),7);
    bufp->fullCData(oldp+73,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[1]),7);
    bufp->fullCData(oldp+74,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[2]),7);
    bufp->fullCData(oldp+75,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[3]),7);
    bufp->fullCData(oldp+76,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[4]),7);
    bufp->fullCData(oldp+77,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[5]),7);
    bufp->fullCData(oldp+78,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[6]),7);
    bufp->fullCData(oldp+79,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[7]),7);
    bufp->fullCData(oldp+80,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[8]),7);
    bufp->fullCData(oldp+81,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[9]),7);
    bufp->fullCData(oldp+82,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[10]),7);
    bufp->fullCData(oldp+83,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[11]),7);
    bufp->fullCData(oldp+84,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[12]),7);
    bufp->fullCData(oldp+85,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[13]),7);
    bufp->fullCData(oldp+86,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[14]),7);
    bufp->fullCData(oldp+87,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[15]),7);
    bufp->fullCData(oldp+88,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[16]),7);
    bufp->fullCData(oldp+89,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[17]),7);
    bufp->fullCData(oldp+90,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[18]),7);
    bufp->fullCData(oldp+91,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[19]),7);
    bufp->fullCData(oldp+92,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[20]),7);
    bufp->fullCData(oldp+93,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[21]),7);
    bufp->fullCData(oldp+94,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[22]),7);
    bufp->fullCData(oldp+95,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[23]),7);
    bufp->fullCData(oldp+96,(vlSelfRef.convolution_filt_tb__DOT__temp_kernel[24]),7);
    bufp->fullIData(oldp+97,(6U),32);
    bufp->fullIData(oldp+98,(3U),32);
    bufp->fullIData(oldp+99,(0x19U),32);
}

VL_ATTR_COLD void Vconvolution_filt_tb___024root__trace_full_0_sub_0(Vconvolution_filt_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconvolution_filt_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root__trace_full_0\n"); );
    // Init
    Vconvolution_filt_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconvolution_filt_tb___024root*>(voidSelf);
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconvolution_filt_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconvolution_filt_tb___024root__trace_full_0_sub_0(Vconvolution_filt_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+3,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+5,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j),32);
    bufp->fullIData(oldp+7,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+8,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j),32);
    bufp->fullIData(oldp+9,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__i),32);
    bufp->fullIData(oldp+10,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
    bufp->fullCData(oldp+11,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[0]),7);
    bufp->fullCData(oldp+12,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[1]),7);
    bufp->fullCData(oldp+13,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[2]),7);
    bufp->fullCData(oldp+14,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[3]),7);
    bufp->fullCData(oldp+15,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[4]),7);
    bufp->fullCData(oldp+16,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[5]),7);
    bufp->fullCData(oldp+17,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[6]),7);
    bufp->fullCData(oldp+18,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[7]),7);
    bufp->fullCData(oldp+19,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[8]),7);
    bufp->fullCData(oldp+20,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[9]),7);
    bufp->fullCData(oldp+21,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[10]),7);
    bufp->fullCData(oldp+22,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[11]),7);
    bufp->fullCData(oldp+23,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[12]),7);
    bufp->fullCData(oldp+24,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[13]),7);
    bufp->fullCData(oldp+25,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[14]),7);
    bufp->fullCData(oldp+26,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[15]),7);
    bufp->fullCData(oldp+27,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[16]),7);
    bufp->fullCData(oldp+28,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[17]),7);
    bufp->fullCData(oldp+29,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[18]),7);
    bufp->fullCData(oldp+30,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[19]),7);
    bufp->fullCData(oldp+31,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[20]),7);
    bufp->fullCData(oldp+32,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[21]),7);
    bufp->fullCData(oldp+33,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[22]),7);
    bufp->fullCData(oldp+34,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[23]),7);
    bufp->fullCData(oldp+35,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[24]),7);
    bufp->fullCData(oldp+36,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__locater),3);
    bufp->fullCData(oldp+37,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[0]),7);
    bufp->fullCData(oldp+38,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[1]),7);
    bufp->fullCData(oldp+39,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[2]),7);
    bufp->fullCData(oldp+40,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[3]),7);
    bufp->fullCData(oldp+41,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[4]),7);
    bufp->fullCData(oldp+42,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[5]),7);
    bufp->fullCData(oldp+43,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[6]),7);
    bufp->fullCData(oldp+44,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[7]),7);
    bufp->fullCData(oldp+45,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[8]),7);
    bufp->fullCData(oldp+46,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[9]),7);
    bufp->fullCData(oldp+47,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[10]),7);
    bufp->fullCData(oldp+48,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[11]),7);
    bufp->fullCData(oldp+49,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[12]),7);
    bufp->fullCData(oldp+50,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[13]),7);
    bufp->fullCData(oldp+51,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[14]),7);
    bufp->fullCData(oldp+52,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[15]),7);
    bufp->fullCData(oldp+53,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[16]),7);
    bufp->fullCData(oldp+54,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[17]),7);
    bufp->fullCData(oldp+55,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[18]),7);
    bufp->fullCData(oldp+56,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[19]),7);
    bufp->fullCData(oldp+57,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[20]),7);
    bufp->fullCData(oldp+58,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[21]),7);
    bufp->fullCData(oldp+59,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[22]),7);
    bufp->fullCData(oldp+60,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[23]),7);
    bufp->fullCData(oldp+61,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[24]),7);
    bufp->fullIData(oldp+62,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__determine_kernel__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+63,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__determine_kernel__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+64,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__determine_kernel__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+65,(vlSelfRef.convolution_filt_tb__DOT__clk));
    bufp->fullCData(oldp+66,(vlSelfRef.convolution_filt_tb__DOT__filter_number),3);
    bufp->fullSData(oldp+67,(vlSelfRef.convolution_filt_tb__DOT__audio_pitch),16);
    bufp->fullIData(oldp+68,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+69,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->fullIData(oldp+70,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+71,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j),32);
}
