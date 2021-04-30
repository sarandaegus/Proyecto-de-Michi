module ModuloMux(
	input wire uno,
	input wire cero,
	input wire sel,
	output reg Q);
	
	always@*
		begin
			case (sel)
				1'b0: Q = cero;
				1'b1: Q = uno;
				default: Q = 0;
			endcase
		end

endmodule