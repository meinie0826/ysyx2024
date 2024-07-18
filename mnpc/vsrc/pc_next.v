module pc_next(
    input  clk,
    input  rst,
    input [31:0] last_addr,
    output reg [31:0] addr
);
    always @(posedge clk) begin
        addr <= last_addr + 4;
        $display("This pc_next : %d %d.", last_addr,addr);
    end

endmodule