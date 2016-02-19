/* =================================================================================================
   |                                   Instruction Memory                                          |
	|                                                                   Shengjie, Chen              |
	|                                                                      2014.7.14.               |
	|         7.14       Check Syntax.
   =================================================================================================*/
module InstrMem(
	input [31:0] InstrAddr,
	output [31:0] Instr
);
	reg [31:0] RAM [63:0];
	
	initial begin
		$readmemb ("instrMemFile.dat", RAM);
	end
	
	assign Instr = RAM[InstrAddr[7:2]]; // 满足字对齐的地址映射方式.. 

endmodule
