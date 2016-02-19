/* =================================================================================================
   |                                    Next PC Module                                             |
	|                                                                   Shengjie, Chen              |
	|                                                                      2014.7.12.               |
	|         7.14       Add Instr; PcSrc extends to 2 bit; Check Syntax.
   =================================================================================================*/
`define R_TYPE       6'b000000
`define JR           6'b001000

module nextpc(
	input [29:0] IncPc,                       // pc plus 4.
	input [25:0] Imm26,                       // 26-bit/16-bit Immediate number.
	input zero,                               // zero signal from ALU.
	input positive, negative,
	input	jump, beq, bne,                     // 3 signals from Main Control.
	input bgt, blt,
	output [29:0] tarPc,                      // Jump/Branch target address.
	output PcSrc                              // pc select signal.
);
	assign PcSrc = jump | (beq & zero)|(bne & (~zero))
						        | (bgt & positive)|(blt & negative);
	
	wire [29:0] brPc, jpPc; // pc for branch, jump.
	wire [29:0] signex_imm16;  // sign extend for 26-bit immediate number.
	// sign extend:
	assign signex_imm16 = {{14{Imm26[15]}},Imm26[15:0]};
	// pc for branch: 
	assign brPc = IncPc + signex_imm16;
	// pc for jump:
	assign jpPc = {IncPc[29:26], Imm26[25:0]};
	// branch or jump target address:
	assign tarPc = jump ? jpPc : brPc;

endmodule
