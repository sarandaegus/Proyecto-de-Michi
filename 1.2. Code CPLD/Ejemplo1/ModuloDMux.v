module ModuloDMux(
	input I,
	input sel,
	output cero,
	output uno
);
		assign cero = ~sel & I;
		assign uno = sel & I;
endmodule