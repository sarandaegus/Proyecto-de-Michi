`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:49:28 03/01/2021
// Design Name:   ModuloMux
// Module Name:   C:/Users/Sergio/Documents/XILINX/Verilog/marzo_proyecto/Test.v
// Project Name:  marzo_proyecto
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ModuloMux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test;

	// Inputs
	reg uno;
	reg cero;
	reg sel;

	// Outputs
	wire Q;

	// Instantiate the Unit Under Test (UUT)
	ModuloMux uut (
		.uno(uno), 
		.cero(cero), 
		.sel(sel), 
		.Q(Q)
	);

	initial begin
		// Initialize Inputs
		uno = 0;
		cero = 0;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#50;		uno = 1; cero = 0; sel = 1;
		#50;		uno = 1; cero = 0; sel = 0;
		#50;		uno = 1; cero = 1; sel = 0;
		$finish;
	end
      
	//initial begin 
	//$monitor ("output=%d,input1=%d,input2=%d,input3=%d\n",Q,uno,cero,sel);
	//end
	
endmodule

