// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconvolution_filt_tb__Syms.h"


void Vconvolution_filt_tb___024root__trace_chg_0_sub_0(Vconvolution_filt_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vconvolution_filt_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root__trace_chg_0\n"); );
    // Init
    Vconvolution_filt_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconvolution_filt_tb___024root*>(voidSelf);
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vconvolution_filt_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vconvolution_filt_tb___024root__trace_chg_0_sub_0(Vconvolution_filt_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+2,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+3,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        bufp->chgIData(oldp+4,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j),32);
        bufp->chgIData(oldp+6,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+7,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j),32);
        bufp->chgIData(oldp+8,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__i),32);
        bufp->chgIData(oldp+9,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+10,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[0]),7);
        bufp->chgCData(oldp+11,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[1]),7);
        bufp->chgCData(oldp+12,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[2]),7);
        bufp->chgCData(oldp+13,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[3]),7);
        bufp->chgCData(oldp+14,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[4]),7);
        bufp->chgCData(oldp+15,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[5]),7);
        bufp->chgCData(oldp+16,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[6]),7);
        bufp->chgCData(oldp+17,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[7]),7);
        bufp->chgCData(oldp+18,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[8]),7);
        bufp->chgCData(oldp+19,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[9]),7);
        bufp->chgCData(oldp+20,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[10]),7);
        bufp->chgCData(oldp+21,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[11]),7);
        bufp->chgCData(oldp+22,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[12]),7);
        bufp->chgCData(oldp+23,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[13]),7);
        bufp->chgCData(oldp+24,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[14]),7);
        bufp->chgCData(oldp+25,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[15]),7);
        bufp->chgCData(oldp+26,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[16]),7);
        bufp->chgCData(oldp+27,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[17]),7);
        bufp->chgCData(oldp+28,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[18]),7);
        bufp->chgCData(oldp+29,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[19]),7);
        bufp->chgCData(oldp+30,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[20]),7);
        bufp->chgCData(oldp+31,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[21]),7);
        bufp->chgCData(oldp+32,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[22]),7);
        bufp->chgCData(oldp+33,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[23]),7);
        bufp->chgCData(oldp+34,(vlSelfRef.convolution_filt_tb__DOT__curr_kernel[24]),7);
        bufp->chgCData(oldp+35,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__locater),3);
        bufp->chgCData(oldp+36,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[0]),7);
        bufp->chgCData(oldp+37,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[1]),7);
        bufp->chgCData(oldp+38,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[2]),7);
        bufp->chgCData(oldp+39,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[3]),7);
        bufp->chgCData(oldp+40,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[4]),7);
        bufp->chgCData(oldp+41,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[5]),7);
        bufp->chgCData(oldp+42,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[6]),7);
        bufp->chgCData(oldp+43,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[7]),7);
        bufp->chgCData(oldp+44,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[8]),7);
        bufp->chgCData(oldp+45,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[9]),7);
        bufp->chgCData(oldp+46,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[10]),7);
        bufp->chgCData(oldp+47,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[11]),7);
        bufp->chgCData(oldp+48,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[12]),7);
        bufp->chgCData(oldp+49,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[13]),7);
        bufp->chgCData(oldp+50,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[14]),7);
        bufp->chgCData(oldp+51,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[15]),7);
        bufp->chgCData(oldp+52,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[16]),7);
        bufp->chgCData(oldp+53,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[17]),7);
        bufp->chgCData(oldp+54,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[18]),7);
        bufp->chgCData(oldp+55,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[19]),7);
        bufp->chgCData(oldp+56,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[20]),7);
        bufp->chgCData(oldp+57,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[21]),7);
        bufp->chgCData(oldp+58,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[22]),7);
        bufp->chgCData(oldp+59,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[23]),7);
        bufp->chgCData(oldp+60,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__temp_kernel[24]),7);
        bufp->chgIData(oldp+61,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__determine_kernel__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+62,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__determine_kernel__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+63,(vlSelfRef.convolution_filt_tb__DOT__DUT__DOT__determine_kernel__DOT__unnamedblk3__DOT__i),32);
    }
    bufp->chgBit(oldp+64,(vlSelfRef.convolution_filt_tb__DOT__clk));
    bufp->chgCData(oldp+65,(vlSelfRef.convolution_filt_tb__DOT__filter_number),3);
    bufp->chgSData(oldp+66,(vlSelfRef.convolution_filt_tb__DOT__audio_pitch),16);
    bufp->chgIData(oldp+67,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__i),32);
    bufp->chgIData(oldp+68,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->chgIData(oldp+69,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__i),32);
    bufp->chgIData(oldp+70,(vlSelfRef.convolution_filt_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j),32);
}

void Vconvolution_filt_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconvolution_filt_tb___024root__trace_cleanup\n"); );
    // Init
    Vconvolution_filt_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconvolution_filt_tb___024root*>(voidSelf);
    Vconvolution_filt_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
