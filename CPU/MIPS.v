/* =================================================================================================
   |          										MIPS CPU Module		                                    |
	|                                                                   Shengjie, Chen              |
	|                                                                      2014.7.14.               |
	|         7.14       Check Syntax.																					|
	|		The mips for 32-bits cpu address, including following instructions:								|
	|	1. R-type:																												|
			ADD ADDU SUB SUBU AND OR XOR NOR SLT SLTU; ------------------------------- 10
			SLL SRL SRA SLLV SRLV SRAV; ---------------------------------------------- 6
			JR	 ---------------------------------------------------------------------- 1
	|	2. I-type:																												|
			LW SW; ------------------------------------------------------------------- 2
			ADDI ADDIU ANDI ORI XORI LUI SLTI SLTIU; --------------------------------- 8
			BEQ BNE BGEZ BGTZ BLEZ BLTZ. --------------------------------------------- 6
	|	3. J-type:																												|
			J JAL. ------------------------------------------------------------------- 2
	|	Total:  --------------------------------------------------------------------- 35             |
   =================================================================================================*/

module MIPS(
	// System Signals.
   input clk, r_st,                      // system clock and reset signal.
	input cpu_en,                         // cpu enable signal.
   // Instruction Memory. 	
   input [31:0] instr,                   // instruction from instruction memory.
	output [31:0] pc,                     // instruction address.
	// Data Memory.
	input [31:0] readdata,                // read data from data memory.	
	output [31:0] writedata,	           // write data for data memory.
	output memwrite, memread,             // data memory read/write enable.
	output [31:0] memaddr                 // data address.
);
	
	wire regdst, alusrc1, alusrc2, memtoreg; // signals from Main Controller to 4 MUXs.
	wire regwrite; // write enable signal from Main Controller to register file.
	wire [1:0] ext_op; // signal from Main Controller to Extender.
	wire jump, beq, bne; // signals from Main Controller to Next PC.
	wire bgt_mips, blt_mips;
	wire jal_mips, jr_mips;
	wire [3:0] alu_op; // ALU option code from Main Controller to ALU Controller.
	wire [3:0] alu_ctrl; // ALU control from ALU Controller to ALU.
	wire alu_en; // enable signal for ALU.

/*----------------------------------- Main Controller ----------------------------------------------*/ 	
	mainctrl mctrller(
		.r_st(r_st),
	// option code from instruction.
		.Op(instr[31:26]),
		.funct(instr[5:0]),
	// read/write enable signals for data memory.
		.MemWrite(memwrite), 
		.MemRead(memread),
	// signals for Next PC.
		.Jump(jump), 
		.Beq(beq), 
		.Bne(bne),
		.Bgt(bgt_mips),
		.Blt(blt_mips),
	// write enable signals for register file.
		.RegWrite(regwrite),
	// sign/zero extend signal for extender.
		.ExtOp(ext_op),
	// signal for 4 MUX.
		.RegDst(regdst), 
		.AluSrcA(alusrc1), 
		.AluSrcB(alusrc2), 
		.MemtoReg(memtoreg),
	// option code for ALU.
		.AluOp(alu_op),
		
		.Jal(jal_mips),
		.Jr(jr_mips)
	);
	
/*--------------------------------------- ALU Controller ------------------------------------------*/
	aluctrl actrler(
	 // function code for R-type.
		.funct(instr[5:0]),
	 // ALU option code for ALU Controller.
		.AluOp(alu_op),
	 // ALU operation code and enable signal for ALU.
		.AluCtrl(alu_ctrl),
		.Alu_en(alu_en)
	);
	
/*--------------------------------------- Datapath ------------------------------------------------*/
	datapath dp(
	 // system signals:
		.clk(clk), 
		.r_st(r_st),
	   .cpu_en(cpu_en),
	 // signals from Main Control:
	   .RegDst(regdst),	             // write register address selection. 
		.RegWrite(regwrite),           // write register file enable signal.
		.ExtOp(ext_op),             	 // sign extend or zero extend.
		.AluSrcA(alusrc1),             // ALU operand2 from BusB or extend immediate number.
		.AluSrcB(alusrc2),             // ALU operand2 from BusB or extend immediate number.
	   // 3 signals for Next PC judgement.
		.Jump(jump), 
		.Beq(beq), 
		.Bne(bne), 
		.Bgt(bgt_mips),
		.Blt(blt_mips),
		.MemtoReg(memtoreg),           // write register file data from ALU or data memory.
	 // signals from ALU Control:
		.AluCtrl(alu_ctrl),            // operation for ALU.
		.Alu_en(alu_en),
	 // read data from data memory.
		.Data_out(readdata),
	 // instruction from instruction memory.
		.instr(instr),
    // next instruction address for instruction memory.
		.pc(pc),
	 // data address and write data for data memory:
		.Address(memaddr), 
		.Data_in(writedata),
		
		.Jal(jal_mips),
		.Jr(jr_mips)
	);

endmodule
