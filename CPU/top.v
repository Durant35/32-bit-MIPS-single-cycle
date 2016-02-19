/* =================================================================================================
   |                             Top module of the whole project                                   |
	|                                                                   Shengjie, Chen              |
	|                                                                      2014.7.14.               |
	|         7.14       Check Syntax.
   =================================================================================================*/
`timescale 1ns / 1ps

module top(
	input clk,		// system clock.
	input r_st     // system reset.
);
	// pc and instruction to Instruction Memory.
	wire [31:0] pc, instruction;

	// read/write data and its address, read/write enable of Data Memory.
	wire [31:0] data_rd, data_wr, data_addr; 
	wire en_rd, en_wr;
	
/*----------------------------------------- MIPS CPU -----------------------------------------------*/
	MIPS mips(
	// System Signals.
		.clk(clk), 
		.r_st(r_st),
		.cpu_en(1'b1),              // to use in Memory/CPU synchronization.
   // Instruction Memory.
	   .instr(instruction),        // instruction from instruction memory.
	   .pc(pc),                    // instruction address.
	// Data Memory.
	   .readdata(data_rd),         // read data from data memory.
		.writedata(data_wr),	       // write data for data memory.
		                            // data memory read/write enable.
	   .memwrite(en_wr), 
		.memread(en_rd),
		.memaddr(data_addr)         // data address.
	);
	
/*------------------------------------ Instruction Memory ------------------------------------------*/
	InstrMem imem(
		.InstrAddr(pc),             // pc.
		.Instr(instruction)         // instruction.
   );

/*---------------------------------------- Data Memory ---------------------------------------------*/	
	DataMem dmem(
	// system clock and reset signals.
		.clk(clk), 
		.r_st(r_st),
	// write/read enable.
		.wr_en(en_wr), 
		.rd_en(en_rd),
	// write/read data address.
		.DataAddr({data_addr[29:0], 2'b00}),
	// write/read data.
		.data_wr(data_wr),
		.data_rd(data_rd)
	);

endmodule
