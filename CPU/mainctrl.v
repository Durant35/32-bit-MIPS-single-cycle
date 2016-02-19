/* =================================================================================================
   |                               Main Controller Module                                          |
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
// 寄存器跳转指令:
`define JR           6'b001000

/*---- I-type ----*/
// 存储器访问指令:
`define LW           6'b100011
`define SW           6'b101011
// 立即数算术逻辑运算指令:
`define ADDI         6'b001000
`define ADDIU        6'b001001
`define ANDI         6'b001100
`define ORI          6'b001101
`define XORI         6'b001110
`define LUI          6'b001111
`define SLTI         6'b001010
`define SLTIU        6'b001011
// 分支指令:
`define BEQ          6'b010000
`define BNE          6'b010001
/* Tempoary not used: */
`define BGEZ         6'b010010
`define BGTZ         6'b010011
`define BLEZ         6'b010100
`define BLTZ         6'b010101

/*---- J-type ----*/
`define J            6'b000010
`define JAL          6'b000011

/*---- ALU operation codes for ALU controller ----*/
`define ALU_IDLE 		4'b0000
`define Add 			4'b0001
`define Sub 			4'b0010
`define And 			4'b0011
`define Or 				4'b0100
`define Xor 			4'b0101
`define Slt 			4'b0110
`define Lu 				4'b0111
`define Rtype 			4'b1111

module mainctrl(
	input [5:0] Op,								// operation code
	input [5:0] funct,                     // function code for R-type.
	input r_st,
	// read/write enable signals for data memory.
	output MemWrite, MemRead,
	// signals for Next PC.
	output Jump, Beq, Bne, Bgt, Blt,
	output Jal, Jr,
	// write enable signals for register file.
	output RegWrite,
	// ExtOp[0]: sign/zero extend signal for extender.
	// ExtOp[1]: shamt(instr[10:6]) or not.
	output [1:0] ExtOp,
	// signal for 4 MUX.
	output RegDst, AluSrcA, AluSrcB, MemtoReg,
	// option code for ALU.
	output [3:0] AluOp
);

	assign Jal = r_st ? 1'b0 : (Op == `JAL);
	assign Jr = r_st ? 1'b0 : ((Op == `R_TYPE) & (funct == `JR));
	
	// assignment to read/write enable signals for data memory.
	assign MemWrite = r_st ? 1'b0 : (Op == `SW);
	assign MemRead = r_st ? 1'b0 : (Op == `LW);
	
	// assignment to signals for Next PC.
	assign Jump = r_st ? 1'b0 : ((Op == `J) | (Op == `JAL));
	assign Beq =  r_st ? 1'b0 : ((Op == `BEQ) | (Op == `BGEZ) | (Op == `BLEZ)); 
	assign Bne =  r_st ? 1'b0 : ((Op == `BNE));
	assign Bgt =  r_st ? 1'b0 : ((Op == `BGEZ) | (Op == `BGTZ));
	assign Blt =  r_st ? 1'b0 : ((Op == `BLEZ) | (Op == `BLTZ));
	
	// assignment to write enable signals for register file.
	assign RegWrite = r_st ? 1'b0 
								  : (~((Op == `SW)
								      |(Op == `BEQ) |(Op == `BNE)
										|(Op == `BGEZ)|(Op == `BGTZ)
						            |(Op == `BLEZ)|(Op == `BLTZ)
	                           |(Op == `J)   |((Op == `R_TYPE) & (funct == `JR))));
	
	// assignment to sign/zero extend signal for extender.
	assign ExtOp[0] = (Op == `LW)  | (Op == `SW) | (Op == `ADDI)
						  |(Op == `ANDI)| (Op == `ORI)| (Op == `XORI)
						  |(Op == `LUI) | (Op == `SLTI);
	assign ExtOp[1] = (Op == `R_TYPE) & ((funct == `SLL) | (funct == `SRL) | (funct == `SRA));
	
	// assignment to signals for 3 MUX.
	assign RegDst = (Op == `R_TYPE);
	assign AluSrcA = (Op == `R_TYPE)
	               & ((funct == `SLL) | (funct == `SRL) | (funct == `SRA));
	assign AluSrcB = ((Op == `R_TYPE)
	               & ((funct == `SLL) | (funct == `SRL) | (funct == `SRA))) 
						| ((Op != `R_TYPE) 
						  &(Op != `BEQ) & (Op != `BNE)
						  &(Op != `BGEZ)& (Op != `BGTZ)
						  &(Op != `BLEZ)& (Op != `BLTZ));
	assign MemtoReg = (Op == `LW);
	
	// assignment to option code for ALU.
	reg [3:0] ALU_Op;
			 		 
	always@(*) begin
		case(Op)
			`R_TYPE : ALU_Op <= `Rtype; // Rtype.
			`LW,
			`SW,
			`ADDI,
			`ADDIU  : ALU_Op <= `Add;   // Add.
			`BEQ,
			`BNE    : ALU_Op <= `Xor;   // Xor or ???
			`BGEZ,
			`BGTZ,
			`BLEZ,
			`BLTZ   : ALU_Op <= `Sub;   // Sub.
			`ANDI   : ALU_Op <= `And;   // And.
			`ORI    : ALU_Op <= `Or;    // Or.
			`XORI   : ALU_Op <= `Xor;   // Xor.
			`SLTI,
			`SLTIU  : ALU_Op <= `Slt;   // Slt.
			`LUI    : ALU_Op <= `Lu;    // Lu.
			default : ALU_Op <= `ALU_IDLE;
		endcase	
	end
		
	assign AluOp = r_st ? `ALU_IDLE : ALU_Op;

endmodule
