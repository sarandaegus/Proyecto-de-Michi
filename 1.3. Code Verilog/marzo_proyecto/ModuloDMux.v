`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:56:27 03/01/2021 
// Design Name: 
// Module Name:    ModuloDMux 
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
module ModuloDMux(
	input I,
	input sel,
	output cero,
	output uno
);
		assign cero = ~sel & I;
		assign uno = sel & I;
endmodule
