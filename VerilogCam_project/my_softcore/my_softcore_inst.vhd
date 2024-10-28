	component my_softcore is
		port (
			clk_clk                              : in  std_logic                     := 'X';             -- clk
			pio_out_external_connection_in_port  : in  std_logic_vector(31 downto 0) := (others => 'X'); -- in_port
			pio_out_external_connection_out_port : out std_logic_vector(31 downto 0);                    -- out_port
			reset_reset_n                        : in  std_logic                     := 'X'              -- reset_n
		);
	end component my_softcore;

	u0 : component my_softcore
		port map (
			clk_clk                              => CONNECTED_TO_clk_clk,                              --                         clk.clk
			pio_out_external_connection_in_port  => CONNECTED_TO_pio_out_external_connection_in_port,  -- pio_out_external_connection.in_port
			pio_out_external_connection_out_port => CONNECTED_TO_pio_out_external_connection_out_port, --                            .out_port
			reset_reset_n                        => CONNECTED_TO_reset_reset_n                         --                       reset.reset_n
		);

