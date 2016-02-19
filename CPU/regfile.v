/* =================================================================================================
   |                                 Register File Module                                          |
	|                                                                   Shengjie, Chen              |
	|                                                                      2014.7.12.               |
	|         7.14       Check Syntax.
   =================================================================================================*/
module regfile(
	input clk, r_st,						// system clock and reset.
	input RegWrite,                  // write enable signal.
	input [4:0] RA, RB, RW,          // BusA/BusB read register address, BusW write register address. 
	input [31:0] BusW,               // write data.
	output [31:0] BusA, BusB         // read data.
);
	/* 3 ported register file, read 2 ports combinationally;
	   write third port on rising edge of clock;
		register 0 handwired to 0.
	 */
	reg [31:0] gr[31:0]; // 32 general registers, 32-bit each.
	integer i;
	
	always@(posedge clk or posedge r_st) begin
	   if(r_st) begin
			for(i=0;i<=31;i=i+1) gr[i] <= 32'b0;
		end
		else if(RegWrite) gr[RW] <= BusW;
	end

	assign BusA = (RA != 0)? gr[RA] : 0;
	assign BusB = (RB != 0)? gr[RB] : 0;

endmodule
