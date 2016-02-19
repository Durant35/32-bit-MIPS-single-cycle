// ¿É¸´Î»´¥·¢Æ÷
module flopr #(parameter WIDTH = 8)
(	input clk, r_st,
	input [WIDTH-1:0] d,
	output reg [WIDTH-1:0] q
);

	always@(posedge clk, posedge r_st) begin
		if(r_st) q <= 0;
		else q <= d;
	end

endmodule
