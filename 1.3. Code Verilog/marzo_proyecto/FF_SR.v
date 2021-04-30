`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:24:02 03/01/2021 
// Design Name: 
// Module Name:    FF_SR 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FF_SR(
	input	wire		S,
	input	wire		R,
	input wire		clk,
	output reg		q
);	
	
	always @(posedge clk)
	begin
		//(* synthesis parallel_case *)
		case({S,R})
			2'h0: q <= q	;
			2'h1: q <= 0	;
			2'h2: q <= 1	;
			default: q <= 0;
		endcase
	end
	
endmodule
