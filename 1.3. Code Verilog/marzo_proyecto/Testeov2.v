`timescale	1ns/1ns

`define SIMULATION
`define START	IN1_1
`define cPORT(portName) .``portName(``portName)
`define ISE
module	tb;
localparam integer PERIOD       = 10;   // Clock Period (ns)
localparam integer PISTON_DELAY = 100;  // Piston Transition Delay (ns)
localparam PISTON0_A0_INIT      = 1;    // $random%2 ?
localparam PISTON1_A0_INIT      = 1;

// Control Variables
integer seed;
integer time_2start;
integer time_reset;   // Number of cycles reset is asserted
integer time_2reset;  // Time between resets
// System Signals
reg clk = 0;
reg rst_;
// Slot Signals
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
 
reg IN1_1;	// Start Button 
wire IN2_1;
wire IN3_1;
 
wire IN1_2;
reg IN2_2	= 1'b1;
reg IN3_2	= 1'b1;
 
wire IN1_3;
reg IN2_3	= 1'b1;
reg IN3_3 = 1'b1;
 
wire IN1_4;
reg IN2_4 = 1'b1;
reg IN3_4 = 1'b1;
 	 
reg RESET1;
reg RESET2;
reg RESET3;
reg RESET4;
 
wire Q1;
wire Q2;
wire Q3;
wire Q4; 
 
reg reg1_MUX1;	//Conexiones superiores del SLOT TOTAL
wire OUT0_DMUX1;	//Conexiones superiores del SLOT TOTAL
wire Q_MUX4;			//Conexiones superiores del SLOT TOTAL
reg reg0_MUX6;	//Conexiones superiores del SLOT TOTAL

wire OUT1_DMUX2;	//Conexiones inferiores del SLOT TOTAL
reg reg0_MUX3;	//Conexiones inferiores del SLOT TOTAL
reg reg1_MUX5;	//Conexiones inferiores del SLOT TOTAL
wire Q_MUX6;			//Conexiones inferiores del SLOT TOTAL
  
// Piston Signals
wire  p1_a0, p1_a1;
wire  p2_b0, p2_b1;

// Piston Instances
assign IN2_1	= p1_a0;
assign IN1_2	= p1_a1;
assign IN3_1	= p2_b0;
assign IN1_4	= p2_b0;
assign IN1_3	= p2_b1;

piston #(
  .DELAY(PISTON_DELAY),
  .A0_INIT(PISTON0_A0_INIT)
) piston_1 (
  .AP(Q1),
  .AN(Q4),
  .A0(p1_a0),	// IN2_1
  .A1(p1_a1)	// IN3_2
);

piston #(
  .DELAY(PISTON_DELAY),
  .A0_INIT(PISTON1_A0_INIT)
) piston_2 (
  .AP(Q2),
  .AN(Q3),
  .A0(p2_b0), // IN3_1, IN1_4
  .A1(p2_b1)	// IN1_3
);

// Slot wrapper
Proyecto duv (
	.CLK(clk),
	`cPORT(INICIO1),
	`cPORT(INICIO2),
	`cPORT(INICIO3),
	`cPORT(INICIO4),
	`cPORT(INTERMEDIO1),
	`cPORT(INTERMEDIO2),
	`cPORT(INTERMEDIO3),
	`cPORT(INTERMEDIO4),
	`cPORT(FIN1),
	`cPORT(FIN2),
	`cPORT(FIN3),
	`cPORT(FIN4),
	`cPORT(IN1_1),
	`cPORT(IN2_1),
	`cPORT(IN3_1),
	`cPORT(IN1_2),
	`cPORT(IN2_2),
	`cPORT(IN3_2),
	`cPORT(IN1_3),
	`cPORT(IN2_3),
	`cPORT(IN3_3),
	`cPORT(IN1_4),
	`cPORT(IN2_4),
	`cPORT(IN3_4),
	`cPORT(RESET1),
	`cPORT(RESET2),
	`cPORT(RESET3),
	`cPORT(RESET4),
	`cPORT(Q1),
	`cPORT(Q2),
	`cPORT(Q3),
	`cPORT(Q4), 
	`cPORT(INPUT1_MUX1),	//Conexiones superiores del SLOT TOTAL
	`cPORT(OUT0_DMUX1),	//Conexiones superiores del SLOT TOTAL
	`cPORT(Q_MUX4),			//Conexiones superiores del SLOT TOTAL
	`cPORT(INPUT0_MUX6),	//Conexiones superiores del SLOT TOTAL
	`cPORT(OUT1_DMUX2),	//Conexiones inferiores del SLOT TOTAL
	`cPORT(INPUT0_MUX3),	//Conexiones inferiores del SLOT TOTAL
	`cPORT(INPUT1_MUX5),	//Conexiones inferiores del SLOT TOTAL
	`cPORT(Q_MUX6)			//Conexiones inferiores del SLOT TOTAL
);


// Clock
always #(PERIOD/2) clk = ~clk;

// Task
task setup;
  begin
	// Configuration
	INICIO1			=	1'b1;
	INTERMEDIO1	=	1'b0;
	FIN1				= 1'b0;
	INICIO2			= 1'b0;
	INTERMEDIO2	= 1'b1;
	FIN2				= 1'b0;
	INICIO3			= 1'b0;
	INTERMEDIO3	= 1'b1;
	FIN3				= 1'b0;
	INICIO4			= 1'b0;
  INTERMEDIO4	= 1'b0;
	FIN4				= 1'b1;
  end
endtask

// Reset
task reset;
  begin
  rst_ = 0;
  RESET1	= 1;
  RESET2	= 1;
  RESET3	= 1;
  RESET4	= 1;
  time_reset  = $random(seed)%50;
  repeat(time_reset) @(negedge clk);
  rst_ = 1;
  RESET1	= 0;
  RESET2	= 0;
  RESET3	= 0;
  RESET4	= 0;
  @(negedge clk);
  end
endtask

task start;
begin
  // Test
  if ( ~rst_ ) begin
    wait(rst_);
    repeat(20) @(posedge clk);
  end
	`START = 1;
	@(negedge clk);
	`START = 0;
	@(negedge clk);
end
endtask

always begin
  time_2reset = $random(seed)%100 + 50;
  repeat(time_2reset) @(posedge clk);
  @(negedge clk);
  reset;
end

initial begin
  `ifndef ISE
  $dumpfile("test.vcd");
  $dumpvars;
  `endif
  seed  = $random;
  $display("seed : %h", seed);
  setup;
  reset;
	repeat(20) begin
		repeat(10) @(negedge clk);
		start;
		wait(Q4);
    $display("Cycle Completed");
		repeat(50) @(posedge clk);
		// Restart
		time_2start = $random(seed)%100;
		repeat(time_2start) @(negedge clk);
	end
  $display("Test Finished");
  $finish;
end

endmodule


