module pixel_filt_tb;
    // Testbench Signals
    logic clk;
    logic [2:0] filter_number;
    logic [15:0] audio_pitch;
    logic [5:0] r_mod;
    logic [5:0] g_mod;
    logic [5:0] b_mod;
    logic div_flag;

    // Instantiate Module
    pixel_filt DUT (
        .clk(clk),
        .filter_number(filter_number),
        .audio_pitch(audio_pitch),
        .r_mod(r_mod),
        .g_mod(g_mod),
        .b_mod(b_mod),
        .div_flag(div_flag)
    );

    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
    end

    // Test Procedure
    initial begin
        $dumpfile("waveform.vcd");
        $dumpvars();

        // Initialisation
        audio_pitch = 0;

        // Normal test
        filter_number = 0;
        audio_pitch = 0;
        for (int i=0; i<7; i++) begin
            #2000
            audio_pitch = audio_pitch + 42;
            assert (r_mod == 1) else $fatal("Normal failed on red");
            assert (g_mod == 1) else $fatal("Normal failed on green");
            assert (b_mod == 1) else $fatal("Normal failed on blue");
            assert (div_flag == 0) else $fatal("Normal failed on div_flag");
        end

        // Brightness test
        filter_number = 1;
        audio_pitch = 0;
        for (int i=0; i<7; i++) begin
            #2000
            audio_pitch = audio_pitch + 42;
            if ((audio_pitch - audio_pitch%43)/43 == 0) begin
                assert (r_mod == 0) else $fatal("Brightness in range 0 failed on red");
                assert (g_mod == 0) else $fatal("Brightness in range 0 failed on green");
                assert (b_mod == 0) else $fatal("Brightness in range 0 failed on blue");
                assert (div_flag == 0) else $fatal("Brightness in range 0 failed on div_flag");
            end
            else if ((audio_pitch - audio_pitch%43)/43 == 1) begin
                assert (r_mod == 4) else $fatal("Brightness in range 1 failed on red");
                assert (g_mod == 4) else $fatal("Brightness in range 1 failed on green");
                assert (b_mod == 4) else $fatal("Brightness in range 1 failed on blue");
                assert (div_flag == 1) else $fatal("Brightness in range 1 failed on div_flag");
            end
            if ((audio_pitch - audio_pitch%43)/43 == 2) begin
                assert (r_mod == 2) else $fatal("Brightness in range 2 failed on red");
                assert (g_mod == 2) else $fatal("Brightness in range 2 failed on green");
                assert (b_mod == 2) else $fatal("Brightness in range 2 failed on blue");
                assert (div_flag == 1) else $fatal("Brightness in range 2 failed on div_flag");
            end
            if ((audio_pitch - audio_pitch%43)/43 == 3) begin
                assert (r_mod == 1) else $fatal("Brightness in range 3 failed on red");
                assert (g_mod == 1) else $fatal("Brightness in range 3 failed on green");
                assert (b_mod == 1) else $fatal("Brightness in range 3 failed on blue");
                assert (div_flag == 0) else $fatal("Brightness in range 3 failed on div_flag");
            end
            if ((audio_pitch - audio_pitch%43)/43 == 4) begin
                assert (r_mod == 2) else $fatal("Brightness in range 4 failed on red");
                assert (g_mod == 2) else $fatal("Brightness in range 4 failed on green");
                assert (b_mod == 2) else $fatal("Brightness in range 4 failed on blue");
                assert (div_flag == 0) else $fatal("Brightness in range 4 failed on div_flag");
            end
            if ((audio_pitch - audio_pitch%43)/43 == 5) begin
                assert (r_mod == 4) else $fatal("Brightness in range 5 failed on red");
                assert (g_mod == 4) else $fatal("Brightness in range 5 failed on green");
                assert (b_mod == 4) else $fatal("Brightness in range 5 failed on blue");
                assert (div_flag == 0) else $fatal("Brightness in range 5 failed on div_flag");
            end
            else begin
                assert (r_mod == 1) else $fatal("Brightness in invalid range failed on red");
                assert (g_mod == 1) else $fatal("Brightness in invalid range failed on green");
                assert (b_mod == 1) else $fatal("Brightness in invalid range failed on blue");
                assert (div_flag == 0) else $fatal("Brightness in invalid range failed on div_flag");
            end  
        end

        // Police Siren test
        filter_number = 2;
        for (int i=0; i<7; i++) begin
            audio_pitch = 30;
            #2000
            $display("blue");
            assert (r_mod == 0) else $fatal("Siren (Blue) failed on red");
            assert (g_mod == 0) else $fatal("Siren (Blue) failed on green");
            assert (b_mod == 1) else $fatal("Siren (Blue) failed on blue");
            assert (div_flag == 0) else $fatal("Siren (Blue) failed on div_flag");
            audio_pitch = 150;
            #2000
            $display("red\n");
            assert (r_mod == 1) else $fatal("Siren (Red) failed on red");
            assert (g_mod == 0) else $fatal("Siren (Red) failed on green");
            assert (b_mod == 0) else $fatal("Siren (Red) failed on blue");
            assert (div_flag == 0) else $fatal("Siren (Red) failed on div_flag");
        end

        // Ignore Convolution test
        filter_number = 3;
        audio_pitch = 0;
        for (int i=0; i<7; i++) begin
            audio_pitch = audio_pitch + 42;
            #2000
            assert (r_mod == 1) else $fatal("Ignore convolution failed on red");
            assert (g_mod == 1) else $fatal("Ignore convolution failed on green");
            assert (b_mod == 1) else $fatal("Ignore convolution failed on blue");
            assert (div_flag == 0) else $fatal("Ignore convolution failed on div_flag");
        end

        // Invalid Filter test
        filter_number = 6;
        audio_pitch = 0;
        for (int i=0; i<7; i++) begin
            audio_pitch = audio_pitch + 42;
            #2000
            assert (r_mod == 1) else $fatal("Invalid filter failed on red");
            assert (g_mod == 1) else $fatal("Invalid filter failed on green");
            assert (b_mod == 1) else $fatal("Invalid filter failed on blue");
            assert (div_flag == 0) else $fatal("Invalid filter failed on div_flag");
        end

        #2000
        $finish();
    end
endmodule