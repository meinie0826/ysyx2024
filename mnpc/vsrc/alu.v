module alu(
    input  [2:0] func3,
    input  [31:0] data_in1,
    input  [11:0] data_in2,
    output reg [31:0] data_out
);

    initial begin
        $monitor("alu: %d %d %d.", data_in1,data_in2,data_out); 
    end

	always@(*) begin
        
		case(func3)
			3'b000:  data_out = data_in1 + {20'd0,data_in2};
            default: data_out = 32'b0;
		endcase
        
    end
endmodule 
