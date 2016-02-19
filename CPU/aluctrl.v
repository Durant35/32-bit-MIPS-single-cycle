/* =================================================================================================
   |                                    ALU Controller Module                                      |
	|                                                                   Shengjie, Chen              |
	|                                                                      2014.7.13.               |
	|         7.14       Check Syntax.
   =================================================================================================*/
/*---- R-type ----*/
`define R_TYPE       6'b000000
// 算术逻辑运算指令:
`define ADD          6'b100000
`define ADDU         6'b100001
`define SUB          6'b100010
`define SUBU         6'b100011
`define AND          6'b100100
`define OR           6'b100101
`define XOR          6'b100110
`define NOR          6'b100111
`define SLT          6'b101010
`define SLTU         6'b101011
// 移位指令:
`define SLL          6'b000000
`define SRL          6'b000010
`define SRA          6'b000011
`define SLLV         6'b000100
`define SRLV         6'b000110
`define SRAV         6'b000111
/*----------------------- ALU control signals for ALU --------------------------*/
`define ALU_IDLE 		4'b0000
`define Add_alu 		4'b0001
`define Sub_alu 		4'b0010
`define And_alu 		4'b0011
`define Or_alu 		4'b0100
`define Xor_alu 		4'b0101
`define Slt_alu 		4'b0110
`define Lu_alu 		4'b0111
`define Sll_alu 		4'b1000
`define Srl_alu 		4'b1001
`define Sra_alu 		4'b1010
`define Nor_alu 		4'b1011
`define Rtype 			4'b1111

module aluctrl(
   // function code for R-type.
	input [5:0] funct,
	// ALU operation code from Main Controller.
	input [3:0] AluOp,
	// ALU control for ALU operation.
	output [3:0] AluCtrl,
	// ALU enable to avoid flag changes.
	output Alu_en
);
   
	reg [3:0] alu_ctrl;
	
	always@(*) begin
		if(AluOp == `Rtype) begin
			case(funct)
				`ADD, 
				`ADDU  : alu_ctrl <= `Add_alu;
				`SUB, 
				`SUBU  : alu_ctrl <= `Sub_alu;
				`AND   : alu_ctrl <= `And_alu;
				`OR    : alu_ctrl <= `Or_alu;
				`XOR   : alu_ctrl <= `Xor_alu;
				`NOR   : alu_ctrl <= `Nor_alu;
				`SLT,
				`SLTU  : alu_ctrl <= `Slt_alu;
				`SLL,
				`SLLV  : alu_ctrl <= `Sll_alu;
				`SRL,
				`SRLV  : alu_ctrl <= `Srl_alu;
				`SRA,
				`SRAV  : alu_ctrl <= `Sra_alu;
				default: alu_ctrl <= `ALU_IDLE;
			endcase
		end
		else alu_ctrl <= AluOp;	// include some don't care situations.
	end
	
	assign AluCtrl = alu_ctrl; 
	assign Alu_en = (alu_ctrl != `ALU_IDLE);

endmodule
