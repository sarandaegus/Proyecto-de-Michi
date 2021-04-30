`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:58:18 03/01/2021 
// Design Name: 
// Module Name:    FF_D 
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
module FF_D(	
	input	wire		D,
	input wire		clk,
	output reg		q
);
	
	/*initial
	begin 
		q = 1'b1;
		qb= 1'b0;
	end*/
	
	always @(posedge clk)
	begin
		case(D)
			1'b0: q <= 0;
			1'b1: q <= 1;
		endcase
	end

endmodule
