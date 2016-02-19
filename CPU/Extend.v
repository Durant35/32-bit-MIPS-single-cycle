/*-------------------------------------------------------
  Extender for 16-bits immediate, including sign-extend 
and zero-extend. 
--------------------------------------------------------*/

module Extend(
   input [15:0]data_16,
	input ExtOp,
   output [31:0]data_32    
);

reg [31:0] data;
always@(*) begin
  if(ExtOp & data_16[15]) data <= {16'b1, data_16[15:0]};
  else data <= {16'b0, data_16[15:0]};
end

assign data_32 = data;

endmodule
