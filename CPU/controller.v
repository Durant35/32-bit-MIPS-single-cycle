// ALU Control signals: ADD SUB AND OR XOR NOR SLT SLL
//                      SRL SRA 
`define 
// ¿ØÖÆÆ÷
module controller(
	input [5:0] op, funct,
	input zero,
	output memtoreg, memwrite,
	output alusrc,
	output regdst, regwrite,
	output [2:0] alucontrol
);

	wire [1:0] aluop;
	wire branch;
	
	// Main Control:
	mainctrl mctrl();
	
	// ALU Control:
	aluctrl actrl();
	
endmodule
