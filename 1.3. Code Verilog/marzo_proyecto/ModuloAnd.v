`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:42:10 03/01/2021 
// Design Name: 
// Module Name:    ModuloAnd 
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
module ModuloAnd(
   input IN0,
	input IN1,
	input IN2,
	input IN3,
	output OUT);
	
	assign OUT = IN0 & IN1 & IN2 & IN3;
	
endmodule
