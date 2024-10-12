module low_pass_conv #(parameter W, W_FRAC) (
    input clk,
    dstream.in x,
    dstream.out y
);

    // 1. Assign x.ready: we are ready for data if the module we output to (y.ready) is ready (this module does not exert backpressure).
    assign x.ready = y.ready;

    // Impulse response h[n]: (32-bit, 16-bit frac, 2's complement)
    localparam N = 41;
    logic signed [W-1:0] h [0:N-1] = '{32'sh00000000, 32'sh00000014, 32'sh0000003f, 32'sh00000050, 32'sh00000000, 32'shffffff0b, 32'shfffffd56, 32'shfffffb08, 32'shfffff8a1, 32'shfffff6ee, 32'shfffff6f3, 32'shfffff9b5, 32'sh00000000, 32'sh00000a2d, 32'sh000017f4, 32'sh00002860, 32'sh000039e3, 32'sh00004a8b, 32'sh0000584b, 32'sh0000615d, 32'sh00006488, 32'sh0000615d, 32'sh0000584b, 32'sh00004a8b, 32'sh000039e3, 32'sh00002860, 32'sh000017f4, 32'sh00000a2d, 32'sh00000000, 32'shfffff9b5, 32'shfffff6f3, 32'shfffff6ee, 32'shfffff8a1, 32'shfffffb08, 32'shfffffd56, 32'shffffff0b, 32'sh00000000, 32'sh00000050, 32'sh0000003f, 32'sh00000014, 32'sh00000000};

    // 2. Make a shift register of depth = impulse response size. Feed x.data into this shift register when x.valid=1 and x.ready=1 (and shift all other data in the shift reg).
    logic signed [W-1:0] shift_reg [0:N-1];
    always_ff @(posedge clk) begin : h_shift_register
        // On a handshake (x.valid & x.ready), shift signed'(x.data) into shift_reg and shift everything.
        // Hint: use a for loop.
        if (x.valid && x.ready) begin
            shift_reg[0] <= x.data;
            for (int i = 0; i < N-1; i++) begin
                shift_reg[i+1] <= shift_reg[i];
            end
        end
    end

    // 3. Multiply each register in the shift register by its repsective h[n] value, for n = 0 to N.
    logic signed [2*W-1:0] mult_result [0:N-1];  // 2*W as the multiply doubles width
    always_comb begin : h_multiply
        // Set mult_result for each n value.
        // Hint: use a for loop.
        for (int i = 0; i < N; i++) begin
            mult_result[i] <= shift_reg[i] * h[i];
        end
    end

    // 4. Add all of the multiplication results together and shift the result into the output buffer.
    logic signed [$clog2(N)+2*W:0] macc; // $clog2(N)+1 to accomodate for overflows over the 41 additions.
    always_comb begin : MAC
        macc = 0;
        // Set macc to be the sum of all elements in mult_result.
        // Hint: use a for loop.
        for (int i = 0; i < N; i++) begin
            macc = macc + mult_result[i];
        end
    end

    // 5. Output reg: use y.data as a register, load the result of the MACC into y.data if x.valid and x.ready are high (i.e. data is moving).
    // y.valid should be set as a register here too.
    logic overflow; // Optional (not marked): detect for overflow.
    logic x_valid_q = 1'b0; // Delay x.valid by 1 clock cycle
    always_ff @(posedge clk) begin : output_reg
        if (x.valid & x.ready) begin
            y.data <= macc[W-1 + W_FRAC: W_FRAC];                               // Remember to truncate the fixed point properly!!!
            overflow <= (macc > {{(2*W-W_FRAC-1){1'b0}}, {(W_FRAC){1'b1}}});    // (Optional) Check if our INTEGER truncation causes overflow (remember 2's complement!!!)
            x_valid_q <= 1'b1;                                                  // Delay x.valid by 1 clock cycle
            y.valid <= x_valid_q;                                               // 2 clock cycles for valid data to get from x to y
        end
    end

endmodule