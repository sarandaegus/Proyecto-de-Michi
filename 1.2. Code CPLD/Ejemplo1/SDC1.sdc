create_clock -period 20.00 -name CLK [get_ports CLK]

#set_input_delay -clock { clock } -clock_fall -fall -max 20 [get_ports INPUT1_MUX5_SLOT1]

# Automatically apply a generate clock on the output of phase-locked loops (PLLs) 
# derive_pll_clocks  
 
# This command can be safely left in the SDC even if no PLLs exist in the design 
derive_clock_uncertainty 
 
# Constrain the input I/O path 
set_input_delay -clock {CLK} -max 3 [all_inputs] 
set_input_delay -clock {CLK} -min 2 [all_inputs]
 
# Constrain the output I/O path 
set_output_delay -clock {CLK} 2 [all_outputs] 