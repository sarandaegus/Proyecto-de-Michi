module FF_D(	
	input	wire		D,
	input wire		clk,
	output reg		q
);
	
	/*initial
	begin 
		q = 1'b1;
		qb= 1'b0;
	end*/
	
	always @(posedge clk)
	begin
		case(D)
			1'b0: q <= 0;
			1'b1: q <= 1;
		endcase
	end

endmodule
