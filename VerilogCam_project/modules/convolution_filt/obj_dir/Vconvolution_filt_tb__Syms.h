// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONVOLUTION_FILT_TB__SYMS_H_
#define VERILATED_VCONVOLUTION_FILT_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vconvolution_filt_tb.h"

// INCLUDE MODULE CLASSES
#include "Vconvolution_filt_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vconvolution_filt_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vconvolution_filt_tb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vconvolution_filt_tb___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_convolution_filt_tb;
    VerilatedScope __Vscope_convolution_filt_tb__unnamedblk11__unnamedblk12;
    VerilatedScope __Vscope_convolution_filt_tb__unnamedblk13__unnamedblk14;
    VerilatedScope __Vscope_convolution_filt_tb__unnamedblk1__unnamedblk2;
    VerilatedScope __Vscope_convolution_filt_tb__unnamedblk3__unnamedblk4;
    VerilatedScope __Vscope_convolution_filt_tb__unnamedblk5__unnamedblk6;
    VerilatedScope __Vscope_convolution_filt_tb__unnamedblk7__unnamedblk8;
    VerilatedScope __Vscope_convolution_filt_tb__unnamedblk9__unnamedblk10;

    // CONSTRUCTORS
    Vconvolution_filt_tb__Syms(VerilatedContext* contextp, const char* namep, Vconvolution_filt_tb* modelp);
    ~Vconvolution_filt_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
