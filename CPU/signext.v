/* =================================================================================================
   |                                   Extender Module                                             |
	|                                                                   Shengjie, Chen              |
	|                                                                      2014.7.12.               |
	|         7.14       Check Syntax.
   =================================================================================================*/
/*-------------------------------------------------------
  Extender for 16-bits immediate, including sign-extend 
and zero-extend. 
--------------------------------------------------------*/
module signext(
   input [15:0]data_16,                       // Original 16-bit Immediate number.
	input [1:0] ExtOp,                         // sign extend or zero extend?
															 // shamt or immediate?
   output [31:0]data_32                       // extend number.
);

	reg [31:0] data;
	
	always@(*) begin
		case(ExtOp[1:0])
			2'b10,
			2'b11 : data <= {{27{1'b0}}, data_16[10:6]};
			2'b01 : data <= {{16{data_16[15]}}, data_16[15:0]};
			2'b00 : data <= {{16{1'b0}}, data_16[15:0]};
		 default : data <= 32'b0;
		endcase
	end

	assign data_32 = data;

endmodule
