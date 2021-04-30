`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:22:19 03/03/2021 
// Design Name: 
// Module Name:    Proyecto 
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
`define SIMULATION
module Proyecto(
	`ifndef SIMULATION
	input START_BUTTON,
	input a0,
	input a1,
	input b0,
	input b1,
	
	input RESET1_BUTTON,				//button
	input RESET2_BUTTON, 			//button
	input RESET3_BUTTON, 			//button
	input RESET4_BUTTON, 			//button
	input STOP_REANUDAR_BUTTON,	//button	
	 
	output Ap,			//Q1
	output Bp,			//Q2
	output Am,			//Q3
	output Bm, 			//Q4
	 
	input INPUT1_MUX1_SLOT1,	//Conexiones superiores del SLOT 1
	output OUT0_DMUX1_SLOT1,	//Conexiones superiores del SLOT 1
	output Q_MUX4_SLOT1,			//Conexiones superiores del SLOT 1
	input INPUT0_MUX6_SLOT1,	//Conexiones superiores del SLOT 1
	
	output OUT1_DMUX2_SLOT1,	//Conexiones inferiores del SLOT 1
	input INPUT0_MUX3_SLOT1,	//Conexiones inferiores del SLOT 1
	input INPUT1_MUX5_SLOT1,	//Conexiones inferiores del SLOT 1
	output Q_MUX6_SLOT1,			//Conexiones inferiores del SLOT 1
	
	input INPUT1_MUX1_SLOT2,	//Conexiones superiores del SLOT 2
	output OUT0_DMUX1_SLOT2,	//Conexiones superiores del SLOT 2
	output Q_MUX4_SLOT2,			//Conexiones superiores del SLOT 2
	input INPUT0_MUX6_SLOT2,	//Conexiones superiores del SLOT 2
	
	output OUT1_DMUX2_SLOT2,	//Conexiones inferiores del SLOT 2
	input INPUT0_MUX3_SLOT2,	//Conexiones inferiores del SLOT 2
	input INPUT1_MUX5_SLOT2,	//Conexiones inferiores del SLOT 2
	output Q_MUX6_SLOT2,			//Conexiones inferiores del SLOT 2
	`else
   input INICIO1,
	input INICIO2,
	input INICIO3,
	input INICIO4,
	 
	input INTERMEDIO1,
	input INTERMEDIO2,
	input INTERMEDIO3,
	input INTERMEDIO4,
	
	input FIN1,
	input FIN2,
	input FIN3,
	input FIN4, 
	
	input RESET1,				
	input RESET2, 			
	input RESET3, 			
	input RESET4, 
	 
	input IN1_1,
	input IN2_1,
	input IN3_1,
	 
	input IN1_2,
	input IN2_2,
	input IN3_2,
	 
	input IN1_3,
	input IN2_3,
	input IN3_3,
	 
	input IN1_4,
	input IN2_4,
	input IN3_4,
	
	output Q1,			
	output Q2,			
	output Q3,			
	output Q4, 			
	
	input INPUT1_MUX1,	//Conexiones superiores del SLOT 
	output OUT0_DMUX1,	//Conexiones superiores del SLOT 
	output Q_MUX4,			//Conexiones superiores del SLOT 
	input INPUT0_MUX6,	//Conexiones superiores del SLOT 
	
	output OUT1_DMUX2,	//Conexiones inferiores del SLOT 
	input INPUT0_MUX3,	//Conexiones inferiores del SLOT
	input INPUT1_MUX5,	//Conexiones inferiores del SLOT 
	output Q_MUX6,			//Conexiones inferiores del SLOT 

	`endif
		
	input CLK				//clk del spartan
	);
	 
	 // Senhales
	wire A1;			//Del Slot 1 hacia el Slot 2
	wire B1;			//Del Slot 1 hacia el Slot 2
	wire C1;			//Del Slot 1 hacia el Slot 2
	wire D1;			//Del Slot 1 hacia el Slot 2
	
	wire A2;			//Del Slot 2 hacia el Slot 3
	wire B2;			//Del Slot 2 hacia el Slot 3
	wire C2;			//Del Slot 2 hacia el Slot 3
	wire D2;			//Del Slot 2 hacia el Slot 3
	
	wire A3;			//Del Slot 3 hacia el Slot 4
	wire B3;			//Del Slot 3 hacia el Slot 4
	wire C3;			//Del Slot 3 hacia el Slot 4
	wire D3;			//Del Slot 3 hacia el Slot 4

/*Primer Slot*/	 
Slot U1(
	`ifndef SIMULATION
	//implementacion
	.INICIO(1'b1),				
	.INTERMEDIO(1'b0),		
	.FINAL(1'b0),				
	.RESET(~RESET1_BUTTON),	
	.IN1(~START_BUTTON),		
	.IN2(a0),					
	.IN3(b0),					

	.INPUT1_MUX1(INPUT1_MUX1_SLOT1), 
	.OUT0_DMUX1(OUT0_DMUX1_SLOT1),
	.Q_MUX4(Q_MUX4_SLOT1),
	.INPUT0_MUX6(INPUT0_MUX6_SLOT1),

	.OUT1_DMUX2(A1),			//Conexiones con el siguiente Slot #2
	.INPUT0_MUX3(B1),			//Conexiones con el siguiente Slot #2
	.INPUT1_MUX5(C1),			//Conexiones con el siguiente Slot #2
	.Q_MUX6(D1),	

	.Q(Ap),
	`else

	//simulacion
	.INICIO(INICIO1),				
	.INTERMEDIO(INTERMEDIO1),
	.FINAL(FIN1),
	.RESET(RESET1),
	.IN1(IN1_1),
	.IN2(IN2_1),
	.IN3(IN3_1),

	.INPUT1_MUX1(INPUT1_MUX1),			
	.OUT0_DMUX1(OUT0_DMUX1),
	.Q_MUX4(Q_MUX4),
	.INPUT0_MUX6(INPUT0_MUX6),

	.OUT1_DMUX2(A1),			//Conexiones con el siguiente Slot #2
	.INPUT0_MUX3(B1),			//Conexiones con el siguiente Slot #2
	.INPUT1_MUX5(C1),			//Conexiones con el siguiente Slot #2
	.Q_MUX6(D1),				//Conexiones con el siguiente Slot #2

	.Q(Q1),	
	`endif

	.CLK(CLK)
);

/*Segundo Slot*/	 
Slot U2(
	`ifndef SIMULATION
	//implementacion
				
	.INICIO(1'b0),				
	.INTERMEDIO(1'b1),		
	.FINAL(1'b0),				
	.RESET(~RESET2_BUTTON),	
	.IN1(1'b1),					
	.IN2(1'b1),					
	.IN3(a1),	

	.INPUT1_MUX1(A1),
	.OUT0_DMUX1(B1),
	.Q_MUX4(C1),
	.INPUT0_MUX6(D1),				

	.OUT1_DMUX2(OUT1_DMUX2_SLOT1),		//Conexiones con el siguiente Slot #3
	.INPUT0_MUX3(INPUT0_MUX3_SLOT1),		//Conexiones con el siguiente Slot #3
	.INPUT1_MUX5(INPUT1_MUX5_SLOT1),		//Conexiones con el siguiente Slot #3
	.Q_MUX6(Q_MUX6_SLOT1),	

	.Q(Bp),
	`else
	//simulacion
	
	.INICIO(INICIO2),
	.INTERMEDIO(INTERMEDIO2),
	.FINAL(FIN2),
	.RESET(RESET2),
	.IN1(IN1_2),
	.IN2(IN2_2),
	.IN3(IN3_2),

	.INPUT1_MUX1(A1),
	.OUT0_DMUX1(B1),
	.Q_MUX4(C1),
	.INPUT0_MUX6(D1),	

	.OUT1_DMUX2(A2),		//Conexiones con el siguiente Slot #3
	.INPUT0_MUX3(B2),		//Conexiones con el siguiente Slot #3
	.INPUT1_MUX5(C2),		//Conexiones con el siguiente Slot #3
	.Q_MUX6(D2),			//Conexiones con el siguiente Slot #3

	.Q(Q2),
	`endif
.CLK(CLK)
);

/*Tercer Slot*/	 
Slot U3(
	`ifndef SIMULATION
	//implementacion
	.INICIO(1'b0),				
	.INTERMEDIO(1'b1),		
	.FINAL(1'b0),				
	.RESET(~RESET3_BUTTON),	
	.IN1(1'b1),					
	.IN2(1'b1),					
	.IN3(b1),			

	.INPUT1_MUX1(INPUT1_MUX1_SLOT2),
	.OUT0_DMUX1(OUT0_DMUX1_SLOT2),
	.Q_MUX4(Q_MUX4_SLOT2),
	.INPUT0_MUX6(INPUT0_MUX6_SLOT2),		

	.OUT1_DMUX2(A3),			//Conexiones con el siguiente Slot #4
	.INPUT0_MUX3(B3),			//Conexiones con el siguiente Slot #4
	.INPUT1_MUX5(C3),			//Conexiones con el siguiente Slot #4
	.Q_MUX6(D3),				//Conexiones con el siguiente Slot #4

	.Q(Am),

	`else
	//simulacion
	
	.INICIO(INICIO3),
	.INTERMEDIO(INTERMEDIO3),
	.FINAL(FIN3),
	.RESET(RESET3),
	.IN1(IN1_3),
	.IN2(IN2_3),
	.IN3(IN3_3),

	.INPUT1_MUX1(A2),
	.OUT0_DMUX1(B2),
	.Q_MUX4(C2),
	.INPUT0_MUX6(D2),

	.OUT1_DMUX2(A3),			//Conexiones con el siguiente Slot #4
	.INPUT0_MUX3(B3),			//Conexiones con el siguiente Slot #4
	.INPUT1_MUX5(C3),			//Conexiones con el siguiente Slot #4
	.Q_MUX6(D3),				//Conexiones con el siguiente Slot #4

	.Q(Q3),
	`endif
.CLK(CLK)			
);

/*Cuarto Slot*/	 
Slot U4(
	`ifndef SIMULATION
	//implementacion
	.INICIO(1'b0),				
	.INTERMEDIO(1'b0),		
	.FINAL(1'b1),				
	.RESET(~RESET4_BUTTON),	
	.IN1(1'b1),					
	.IN2(1'b1),					
	.IN3(a0),					

	.INPUT1_MUX1(A3),
	.OUT0_DMUX1(B3),
	.Q_MUX4(C3),
	.INPUT0_MUX6(D3),

	.OUT1_DMUX2(OUT1_DMUX2_SLOT2),	//Conexiones finales
	.INPUT0_MUX3(INPUT0_MUX3_SLOT2),	//Conexiones finales
	.INPUT1_MUX5(INPUT1_MUX5_SLOT2),	//Conexiones finales
	.Q_MUX6(Q_MUX6_SLOT2),				//Conexiones finales

	.Q(Bm),

	`else
	//simulacion
	.INICIO(INICIO4),
	.INTERMEDIO(INTERMEDIO4),
	.FINAL(FIN4),
	.RESET(RESET4),
	.IN1(IN1_4),
	.IN2(IN2_4),
	.IN3(IN3_4),

	.INPUT1_MUX1(A3),
	.OUT0_DMUX1(B3),
	.Q_MUX4(C3),
	.INPUT0_MUX6(D3),

	.OUT1_DMUX2(OUT1_DMUX2),	//Conexiones finales
	.INPUT0_MUX3(INPUT0_MUX3),	//Conexiones finales
	.INPUT1_MUX5(INPUT1_MUX5),	//Conexiones finales
	.Q_MUX6(Q_MUX6),				//Conexiones finales

	.Q(Q4),
	`endif
.CLK(CLK)	
);	

endmodule
