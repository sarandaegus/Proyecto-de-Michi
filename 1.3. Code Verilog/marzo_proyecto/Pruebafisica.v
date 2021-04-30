`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:35:53 03/04/2021 
// Design Name: 
// Module Name:    Pruebafisica 
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
module Pruebafisica(
   input SW5,
	input DIP1,
	output LED1,
	output LED2
	);
assign LED1 = ~SW5;
assign LED2 = DIP1;
endmodule
