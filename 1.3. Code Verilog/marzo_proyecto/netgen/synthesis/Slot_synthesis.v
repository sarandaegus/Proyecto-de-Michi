////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: Slot_synthesis.v
// /___/   /\     Timestamp: Mon Mar 01 21:03:26 2021
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim Slot.ngc Slot_synthesis.v 
// Device	: xc6slx9-3-csg324
// Input file	: Slot.ngc
// Output file	: C:\Users\Sergio\Documents\XILINX\Verilog\marzo_proyecto\netgen\synthesis\Slot_synthesis.v
// # of Modules	: 1
// Design Name	: Slot
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module Slot (
  DIP1, DIP2, CLK, LED1, LED2
);
  input DIP1;
  input DIP2;
  input CLK;
  output LED1;
  output LED2;
  wire DIP1_IBUF_0;
  wire CLK_BUFGP_1;
  wire \u5/q_2 ;
  wire \u5/qb_3 ;
  wire \u5/qb_rstpot ;
  FD   \u5/q  (
    .C(CLK_BUFGP_1),
    .D(DIP1_IBUF_0),
    .Q(\u5/q_2 )
  );
  IBUF   DIP1_IBUF (
    .I(DIP1),
    .O(DIP1_IBUF_0)
  );
  OBUF   LED1_OBUF (
    .I(\u5/q_2 ),
    .O(LED1)
  );
  OBUF   LED2_OBUF (
    .I(\u5/qb_3 ),
    .O(LED2)
  );
  FD   \u5/qb  (
    .C(CLK_BUFGP_1),
    .D(\u5/qb_rstpot ),
    .Q(\u5/qb_3 )
  );
  BUFGP   CLK_BUFGP (
    .I(CLK),
    .O(CLK_BUFGP_1)
  );
  INV   \u5/qb_rstpot1_INV_0  (
    .I(DIP1_IBUF_0),
    .O(\u5/qb_rstpot )
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

