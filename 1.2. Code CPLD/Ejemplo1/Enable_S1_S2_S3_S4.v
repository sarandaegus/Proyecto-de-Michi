module Enable_S1_S2_S3_S4(
	input A,
	input B,
	input C,
	output S1,
	output S2,
	output S3,
	output S4);

	assign S1 = (~A & ~B & C)|(~A & B & ~C);
	assign S2 = (A & ~B & ~C);
	assign S3 = (A & ~B & ~C)|(~A & B & ~C);
	assign S4 = (~A & ~B & C);
endmodule
