`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:10:47 03/03/2021
// Design Name:   Proyecto
// Module Name:   C:/Users/Sergio/Documents/XILINX/Verilog/marzo_proyecto/PruebaTestProyecto.v
// Project Name:  marzo_proyecto
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Proyecto
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PruebaTestProyecto;

	// Inputs
	reg INICIO1;
	reg INICIO2;
	reg INICIO3;
	reg INICIO4;
	reg INTERMEDIO1;
	reg INTERMEDIO2;
	reg INTERMEDIO3;
	reg INTERMEDIO4;
	reg FIN1;
	reg FIN2;
	reg FIN3;
	reg FIN4;
	reg IN1_1;
	reg IN2_1;
	reg IN3_1;
	reg IN1_2;
	reg IN2_2;
	reg IN3_2;
	reg IN1_3;
	reg IN2_3;
	reg IN3_3;
	reg IN1_4;
	reg IN2_4;
	reg IN3_4;
	reg RESET1;
	reg RESET2;
	reg RESET3;
	reg RESET4;
	reg INPUT1_MUX1;
	reg INPUT0_MUX6;
	reg INPUT0_MUX3;
	reg INPUT1_MUX5;

	// Outputs
	wire Q1;
	wire Q2;
	wire Q3;
	wire Q4;
	wire OUT0_DMUX1;
	wire Q_MUX4;
	wire OUT1_DMUX2;
	wire Q_MUX6;

	// Instantiate the Unit Under Test (UUT)
	Proyecto uut (
		.INICIO1(INICIO1), 
		.INICIO2(INICIO2), 
		.INICIO3(INICIO3), 
		.INICIO4(INICIO4), 
		.INTERMEDIO1(INTERMEDIO1), 
		.INTERMEDIO2(INTERMEDIO2), 
		.INTERMEDIO3(INTERMEDIO3), 
		.INTERMEDIO4(INTERMEDIO4), 
		.FIN1(FIN1), 
		.FIN2(FIN2), 
		.FIN3(FIN3), 
		.FIN4(FIN4), 
		.IN1_1(IN1_1), 
		.IN2_1(IN2_1), 
		.IN3_1(IN3_1), 
		.IN1_2(IN1_2), 
		.IN2_2(IN2_2), 
		.IN3_2(IN3_2), 
		.IN1_3(IN1_3), 
		.IN2_3(IN2_3), 
		.IN3_3(IN3_3), 
		.IN1_4(IN1_4), 
		.IN2_4(IN2_4), 
		.IN3_4(IN3_4), 
		.RESET1(RESET1), 
		.RESET2(RESET2), 
		.RESET3(RESET3), 
		.RESET4(RESET4), 
		.Q1(Q1), 
		.Q2(Q2), 
		.Q3(Q3), 
		.Q4(Q4), 
		.INPUT1_MUX1(INPUT1_MUX1), 
		.OUT0_DMUX1(OUT0_DMUX1), 
		.Q_MUX4(Q_MUX4), 
		.INPUT0_MUX6(INPUT0_MUX6), 
		.OUT1_DMUX2(OUT1_DMUX2), 
		.INPUT0_MUX3(INPUT0_MUX3), 
		.INPUT1_MUX5(INPUT1_MUX5), 
		.Q_MUX6(Q_MUX6)
	);

	initial begin
		// Initialize Inputs
		INICIO1 = 0;
		INICIO2 = 0;
		INICIO3 = 0;
		INICIO4 = 0;
		INTERMEDIO1 = 0;
		INTERMEDIO2 = 0;
		INTERMEDIO3 = 0;
		INTERMEDIO4 = 0;
		FIN1 = 0;
		FIN2 = 0;
		FIN3 = 0;
		FIN4 = 0;
		IN1_1 = 0;
		IN2_1 = 0;
		IN3_1 = 0;
		IN1_2 = 0;
		IN2_2 = 0;
		IN3_2 = 0;
		IN1_3 = 0;
		IN2_3 = 0;
		IN3_3 = 0;
		IN1_4 = 0;
		IN2_4 = 0;
		IN3_4 = 0;
		RESET1 = 0;
		RESET2 = 0;
		RESET3 = 0;
		RESET4 = 0;
		INPUT1_MUX1 = 0;
		INPUT0_MUX6 = 0;
		INPUT0_MUX3 = 0;
		INPUT1_MUX5 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		
		INICIO1 = 1; INTERMEDIO1 = 0; FIN1 = 0; RESET1  = 0;	//Configuracion Slot 1
		INICIO2 = 0; INTERMEDIO2 = 1; FIN2 = 0; RESET2  = 0;  //Configuracion Slot 2
		INICIO3 = 0; INTERMEDIO3 = 1; FIN3 = 0; RESET3  = 0;  //Configuracion Slot 3
		INICIO4 = 0; INTERMEDIO4 = 0; FIN4 = 1; RESET4  = 0;	//Configuracion Slot 4
		
		IN1_1   = 0; //Boton de Start - Slot1
		IN2_1   = 1; //Sensor a0		- Slot1
		IN3_1   = 1; //Sensor b0		- Slot1
		
		IN1_2   = 1; //					- Slot2
		IN2_2   = 1; //					- Slot2
		IN3_2   = 0; //Sensor b1		- Slot2
		
		IN1_3   = 1; //					- Slot3
		IN2_3   = 1; //					- Slot3
		IN3_3   = 0; //Sensor a1		- Slot3
		
		IN1_4   = 1; //			      - Slot4
		IN2_4   = 1; //					- Slot4
		IN3_4   = 0; //Sensor a0		- Slot4
				
		//INPUT1_MUX1 = ; //Conectado a nada
		//OUT0_DMUX1  = ; //Conectado a nada
		//QMUX4			= ; //Conectado a nada
		//INPUT0_MUX6 = ; //Conectado a nada
		
	end
      
endmodule

