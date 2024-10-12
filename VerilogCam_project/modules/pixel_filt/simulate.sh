#!/bin/sh

testbench_name="pixel_filt_tb"   # The testbench used for the simulation

### Run this to use Verilator and g++ to build and simulate your Verilog code.
# Output: A waveform .vcd that you can download and view in GTKWave, etc, for more detailed analysis.
set -o errexit   # Exit on error

# Step 1: Verilate your Verilog source into C++ code
verilator $testbench_name.sv --main --exe --timing --trace

# Step 2: Change directory to obj_dir
cd obj_dir

# Step 3: Compile your C++ into a simulation executable
make -f V$testbench_name.mk

# Step 4: Run simulation
./V$testbench_name