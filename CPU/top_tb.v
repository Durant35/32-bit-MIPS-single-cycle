`timescale 1ns / 1ps

module top_tb;

	// Inputs
	reg clk;
	reg r_st;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.r_st(r_st)
	);
	
	always #5 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 1;
		r_st = 1;

		// Wait 100 ns for global reset to finish
		#10;
		r_st = 0;
	   // Initialize general registers r1, r2. 	
		uut.mips.dp.rf.gr[1] = 1;
		uut.mips.dp.rf.gr[2] = 2;
        
		// Add stimulus here

	end
      
endmodule

