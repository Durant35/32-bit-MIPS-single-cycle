/* =================================================================================================
   |                                          Data Memory                                          |
	|                                                                   Shengjie, Chen              |
	|                                                                      2014.7.14.               |
	|         7.14       Check Syntax.
	|         7.17       采用字对齐的地址映射方式.
   =================================================================================================*/
module DataMem(
	input clk, r_st,        // system clock and reset signals.
	input wr_en, rd_en,     // write/read enable.
	input [31:0] DataAddr,  // write/read data address.
	input [31:0] data_wr,   // write data.
	output [31:0] data_rd   // read data.	
);
	reg [31:0] RAM [63:0];
	integer i;
	
	always@(posedge clk) begin
		if(r_st) begin
			for (i = 0; i <= 63; i = i + 1) RAM[i] <= 32'b0;
		end
		else if(wr_en) RAM[DataAddr[7:2]] <= data_wr;
	end 
	
	assign data_rd = rd_en ? RAM[DataAddr[7:2]] : 32'bx;

endmodule
