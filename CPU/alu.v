/* =================================================================================================
   |                                    ALU Module                                                 |
	|                                                                   Shengjie, Chen              |
	|                                                                      2014.7.13.               |
	|         7.14       Check Syntax.
   =================================================================================================*/
/*----------------------- ALU control signals for ALU --------------------------*/
`define Add_alu 4'b0001
`define Sub_alu 4'b0010
`define And_alu 4'b0011
`define Or_alu 4'b0100
`define Xor_alu 4'b0101
`define Slt_alu 4'b0110
`define Lu_alu 4'b0111
`define Sll_alu 4'b1000
`define Srl_alu 4'b1001
`define Sra_alu 4'b1010
`define Nor_alu 4'b1011

module alu(
	input [31:0] SrcA, SrcB,                    // 2 operands, operand 1 and operand 2.
	input [3:0] AluCtrl,                        // ALU control signal for what operation.
	input Alu_en,
	output zero,                                // zero signal for Next PC.
	output positive, negative,
	output [31:0] AluResult                     // result of the 2 operands' operation.
);
	reg [31:0] result;
	
	always@(SrcA, SrcB, AluCtrl) begin
		if(Alu_en) begin
			case(AluCtrl)
			/* 算术操作 */
				`Add_alu : result <= SrcA + SrcB;
				`Sub_alu : result <= SrcA - SrcB;
			/* 逻辑操作 */	
				`And_alu : result <= SrcA & SrcB;
				`Or_alu  : result <= SrcA | SrcB;
				`Xor_alu : result <= SrcA ^ SrcB;
				`Nor_alu : result <= ~(SrcA | SrcB);
			/* 特殊操作 */	
				`Slt_alu : result <= (SrcA < SrcB);
				`Lu_alu  : result <= {SrcB[15:0], {16{1'b0}}}; // 低16位补零.
			/* 移位操作 */	
				`Sll_alu : result <= SrcA << SrcB[4:0];
				`Srl_alu : result <= SrcA >> SrcB[4:0];
				`Sra_alu : result <= SrcA >>> SrcB[4:0];
				default : result <= 32'bx;
			endcase
		end
		else result <= 32'b0;
	end
	
	assign zero = (result == 32'b0);
	assign positive = ~result[31] & (~(result == 32'b0));
	assign negative = result[31];
	assign AluResult = result;

endmodule
