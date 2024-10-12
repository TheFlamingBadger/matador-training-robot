// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vconvolution_filt_tb__pch.h"
#include "Vconvolution_filt_tb.h"
#include "Vconvolution_filt_tb___024root.h"

// FUNCTIONS
Vconvolution_filt_tb__Syms::~Vconvolution_filt_tb__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vconvolution_filt_tb__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vconvolution_filt_tb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vconvolution_filt_tb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vconvolution_filt_tb__Syms::Vconvolution_filt_tb__Syms(VerilatedContext* contextp, const char* namep, Vconvolution_filt_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(322);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_convolution_filt_tb.configure(this, name(), "convolution_filt_tb", "convolution_filt_tb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_convolution_filt_tb__unnamedblk11__unnamedblk12.configure(this, name(), "convolution_filt_tb.unnamedblk11.unnamedblk12", "unnamedblk12", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_convolution_filt_tb__unnamedblk13__unnamedblk14.configure(this, name(), "convolution_filt_tb.unnamedblk13.unnamedblk14", "unnamedblk14", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_convolution_filt_tb__unnamedblk1__unnamedblk2.configure(this, name(), "convolution_filt_tb.unnamedblk1.unnamedblk2", "unnamedblk2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_convolution_filt_tb__unnamedblk3__unnamedblk4.configure(this, name(), "convolution_filt_tb.unnamedblk3.unnamedblk4", "unnamedblk4", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_convolution_filt_tb__unnamedblk5__unnamedblk6.configure(this, name(), "convolution_filt_tb.unnamedblk5.unnamedblk6", "unnamedblk6", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_convolution_filt_tb__unnamedblk7__unnamedblk8.configure(this, name(), "convolution_filt_tb.unnamedblk7.unnamedblk8", "unnamedblk8", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_convolution_filt_tb__unnamedblk9__unnamedblk10.configure(this, name(), "convolution_filt_tb.unnamedblk9.unnamedblk10", "unnamedblk10", -12, VerilatedScope::SCOPE_OTHER);
}
