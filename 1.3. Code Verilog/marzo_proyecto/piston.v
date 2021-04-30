`timescale 1ns/1ns

module piston #(
  // Delay of the Piston transition between A0 - A1
  parameter integer DELAY=2,
  parameter A0_INIT = 1
) (
  input wire  AP,
  input wire  AN,
  output reg  A0,
  output reg  A1
);
  
  initial begin
    A0 =  A0_INIT;
    A1 =  ~A0_INIT;
  end

  always @*
    case ({AP, AN})
      2'h0: begin
              A0  = A0;
              A1  = A1;
            end
      2'h1: begin
              A0  = #DELAY 1;
              A1  = 0;
            end
      2'h2: begin
              A0  = 0;
              A1  = #DELAY 1;
            end
      2'h3: begin 
              $display("ERROR: Invalid Piston State, both AP & AN"); 
              //$finish; 
            end
    endcase

endmodule
