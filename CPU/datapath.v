/* =================================================================================================
   |                                    Data Path Module                                           |
	|                                                                   Shengjie, Chen              |
	|                                                                      2014.7.12.               |
	|         7.14       Check Syntax.
   =================================================================================================*/
module datapath(
	input clk, r_st, cpu_en,            // system signals.
	// signals from Main Control
   input RegDst,	                     // write register address selection. 
	input RegWrite,                     // write register file enable signal.
	input [1:0] ExtOp,                  // sign extend or zero extend.
													// shamt or immediate.
	input AluSrcA,                      // ALU operand1 from BusA or instruction.
	input AluSrcB,                      // ALU operand2 from BusB or extend immediate number.
	input Jump, Beq, Bne,               // 3 signals for Next PC judgement.
	input Bgt, Blt,
	input MemtoReg,                     // write register file data from ALU or data memory.
	input Jal, Jr,
	// signals from ALU Control
	input [3:0] AluCtrl,                // control signal for ALU.
	input Alu_en,
	// read data from data memory.
	input [31:0] Data_out,
	// instruction from instruction memory.
	input [31:0] instr,
   // next instruction address for instruction memory.
	output [31:0] pc,
	// data address and write data for data memory.
	output [31:0] Address, Data_in
);
	
/*--------------------------------- next pc logic ----------------------------------------*/
	wire [25:0] Imm26; 				// 26 immediate number.	
	wire pcSrc; 			         // select signal for Jump/Branch Target pc or pc plus 4.
	reg [31:0] pcReg; 				// pc register.
	reg [31:0] pc_dp;             // temporary pc in datapath.
	wire [31:0] incPc;				// pc plus 4.
	wire [29:0] tarPc; 		      // jump/branch target pc.
	wire zero; 							// zero signal.
	wire positive_dp, negative_dp;
	
	// pc_reg is the register of next pc.
	always@(negedge clk or posedge r_st) begin
		if(r_st) pcReg <= 0;
		else if(cpu_en)    // pc holds when cpu abort.
			pcReg <= pc_dp + 32'b100; 
	end
	
	assign incPc = pcReg;  // increase pc plus current pc by 4.
	assign Imm26 = instr[25:0]; // 26-bit or 16-bit immediate number.

	// next pc module generates jump/branch target address and the pcSrc signal.
	nextpc npc(
				.IncPc(incPc[31:2]),
				.Imm26(Imm26),
				.zero(zero), 				// zero signal from ALU.
				.positive(positive_dp),
				.negative(negative_dp),
				.jump(Jump),
				.beq(Beq), 
				.bne(Bne),
				.bgt(Bgt),
				.blt(Blt),
				.tarPc(tarPc),
				.PcSrc(pcSrc)
   );
	
	always@(posedge clk) begin   
		if(r_st) pc_dp <= 32'b0;
		else begin
			case({Jr, pcSrc})
				2'b10,
				2'b11: pc_dp <= busA;
				2'b01: pc_dp <= {tarPc, 2'b00};
			 default: pc_dp <= incPc;
			endcase
		end
	end
	
	assign pc = r_st ? 32'b0 : pc_dp;
	
/*--------------------------------- register file logic -----------------------------------------*/
	wire [4:0] ra, rb, rw;
	wire [31:0] busA, busB, busW;
	
	assign ra = instr[25:21];
	assign rb = instr[20:16];
	assign rw = Jal ? 5'b11111 : (RegDst ? instr[15:11] : instr[20:16]); // MUX for write register address.
	assign busW = Jal ? incPc : (MemtoReg ? Data_out : alu_result);   // MUX for register write data.
	
	// register file:
	regfile rf(
				.clk(clk),
				.r_st(r_st),
				.RegWrite(RegWrite),
				.RA(ra), 
				.RB(rb), 
				.RW(rw),
				.BusW(busW),
				.BusA(busA), 
				.BusB(busB)
	);
	
	assign Data_in = busB; 										// write data for data memory.
	
/*------------------------------------------ ALU logic -------------------------------------------*/
	wire [31:0] extImm16; 			// extender number of the 16-bit immediate number or the 5-bit shamt.
	wire [31:0] oper_a, oper_b; 	// 2 operands for ALU.
	wire [31:0] alu_result; 		// ALU result.
	
	// extender of the 16-bit immediate number:
	signext Ext(
				.data_16(instr[15:0]),
				.ExtOp(ExtOp),
				.data_32(extImm16)
	);
	
	// 2 MUXs at ALU.
	assign oper_a = AluSrcA ? busB : busA; // MUX for ALU operand 1.
	assign oper_b = AluSrcB ? extImm16 : busB;	// MUX for ALU operand 2.
	
	// ALU module:
	alu alu_(
				.SrcA(oper_a), 
				.SrcB(oper_b),
				.AluCtrl(AluCtrl),
				.Alu_en(Alu_en),
				.zero(zero),
				.positive(positive_dp),
				.negative(negative_dp),
				.AluResult(alu_result)
	);
	
	assign Address = alu_result; 					// ALU result as the data address. 

endmodule
