`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:29:49 03/01/2021 
// Design Name: 
// Module Name:    Slot 
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
module Slot(
	//input INPUT0_MUX6,	//Header P6
   //output Q_MUX6,			//Header P6
   //output Q_MUX4,			//Header P6
   //input INPUT1_MUX5,	//Header P6
   //output OUT0_DMUX1,	//Header P6
   //input INPUT0_MUX3,	//Header P6
   //input INPUT1_MUX1,	//Header P6
   //output OUT1_DMUX2,	//Header P6
	//
	
	input INICIO,		//Conexiones laterales del SLOT
	input INTERMEDIO, //Conexiones laterales del SLOT
	input FINAL,		//Conexiones laterales del SLOT
	input RESET,		//Conexiones laterales del SLOT
	input IN1,			//Conexiones laterales del SLOT
	input IN2,			//Conexiones laterales del SLOT
	input IN3,			//Conexiones laterales del SLOT
	input CLK,
	
	input INPUT1_MUX1,	//Conexiones superiores del SLOT
	output OUT0_DMUX1,	//Conexiones superiores del SLOT
	output Q_MUX4,			//Conexiones superiores del SLOT
	input INPUT0_MUX6,	//Conexiones superiores del SLOT
	
	output OUT1_DMUX2,	//Conexiones inferiores del SLOT
	input INPUT0_MUX3,	//Conexiones inferiores del SLOT
	input INPUT1_MUX5,	//Conexiones inferiores del SLOT
	output Q_MUX6,			//Conexiones inferiores del SLOT
	
	output Q					//Conexion de salida del SLOT
	
	
	//Del SPARTAN 6 
	/*
	input DIP1,
	input DIP2,
	input DIP3,
	input DIP4,
	input SW5,
	input SW6,
	input CLK,
	output LED1,
	output LED2,
	output LED3,
	output LED4*/
);

// Senhales
	wire S1, S2, S3, S4;
	wire OUT1_DM1;
	wire AND_IN;
	wire Q_MUX1;
	wire Q_MUX2;
	wire Q_SR;
	wire Q_D;
	wire Q_MUX3;
	wire OUT0_DM2;
	wire Q_MUX5;
	
/*Primer slot*/
Enable_S1_S2_S3_S4 u1(
.A(INICIO),
.B(INTERMEDIO),
.C(FINAL),
.S1(S1),
.S2(S2),
.S3(S3),
.S4(S4)
);

ModuloDMux DM1(
.I(AND_IN),
.sel(S2),
.cero(OUT0_DMUX1),
.uno (OUT1_DM1)
);

ModuloMux MUX6(
.uno(OUT1_DM1),
.cero(INPUT0_MUX6),
.sel(S2),
.Q(Q_MUX6)
);

ModuloMux MUX1(
.uno(INPUT1_MUX1),
.cero(Q_MUX4),
.sel(S1),
.Q(Q_MUX1)
);

ModuloAnd And_inputs(
.IN0(Q_MUX1),
.IN1(IN1),
.IN2(IN2),
.IN3(IN3),
.OUT(AND_IN)
);

FF_SR SR1(
.S(AND_IN),
.R(Q_MUX2),
.clk(CLK),
.q(Q)			//Q = LED1
);

FF_SR SR2(
.S(RESET),
.R(AND_IN),
.clk(CLK),
.q(Q_SR)			
);

ModuloMux MUX2(
.uno(Q_D),
.cero(Q_SR),
.sel(~Q_SR),
.Q(Q_MUX2)
);

FF_D D1(
.D(Q_MUX3),
.clk(CLK),
.q(Q_D)
);

ModuloDMux DM2(
.I(Q),
.sel(S3),
.cero(OUT0_DM2),
.uno (OUT1_DMUX2)
);

ModuloMux MUX5(
.uno(INPUT1_MUX5),
.cero(OUT0_DM2),
.sel(S3),
.Q(Q_MUX5)
);

ModuloMux MUX4(
.uno(1'b1),
.cero(Q_MUX5),
.sel(S4),
.Q(Q_MUX4)
);

ModuloMux MUX3(
.uno(Q_MUX6),
.cero(INPUT0_MUX3),
.sel(S4),
.Q(Q_MUX3)
);

endmodule
