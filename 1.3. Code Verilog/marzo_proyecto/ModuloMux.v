`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:47:54 03/01/2021 
// Design Name: 
// Module Name:    ModuloMux 
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
module ModuloMux(
	input wire uno,
	input wire cero,
	input wire sel,
	output reg Q);
	
	always@*
		begin
			case (sel)
				1'b0: Q = cero;
				1'b1: Q = uno;
				default: Q = 0;
			endcase
		end

endmodule
