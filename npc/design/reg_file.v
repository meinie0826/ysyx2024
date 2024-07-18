`include "/home/meinie/Desktop/ysyx2024/npc/design/header.v"
`timescale 1ns / 1ps
module reg_file(
    input rst, clk, write_reg,
    input [4: 0] rs1, rs2, target_reg,
    input [31: 0] write_rd_data,

    output reg [31: 0] read_rs1_data,
    output reg [31: 0] read_rs2_data
);

reg [31: 0] regs[0: 31];
integer i;

import "DPI-C" function void set_gpr_ptr(input logic [31 : 0] a []);

initial begin
    set_gpr_ptr(regs);
    for(i = 0; i < 32; i = i + 1) begin
        regs[i] = 32'd0;
    end
end

always @(posedge rst) begin
    for(i = 0; i < 33; i = i + 1) begin
        regs[i] = 32'd0;
        
    end
end


always @(posedge clk) begin
    if(write_reg && target_reg != 5'h0) begin
        regs[target_reg] <= write_rd_data;
        $write("---- write reg[%02x]:%x \n",target_reg,write_rd_data);
    end
    
    for(i=0;i<6;i=i+1)begin
        $write("reg[%02x]:%x ",i,regs[i]);
    end
    $write("\n");
    for(i=6;i<12;i=i+1)begin
        $write("reg[%02x]:%x ",i,regs[i]);
    end
    $write("\n");
    for(i=12;i<18;i=i+1)begin
        $write("reg[%02x]:%x ",i,regs[i]);
    end
    $write("\n");
    for(i=18;i<24;i=i+1)begin
        $write("reg[%02x]:%x ",i,regs[i]);
    end
    $write("\n");
    for(i=24;i<30;i=i+1)begin
        $write("reg[%02x]:%x ",i,regs[i]);
    end
    $write("\n");
    for(i=30;i<32;i=i+1)begin
        $write("reg[%02x]:%x ",i,regs[i]);
    end
    $write("\n");
end

initial begin
    regs[5'd2] = 32'd128;
end

always @(*) begin
    if(rs1 == 5'h0)begin
        read_rs1_data = 32'h0000_0000;
    end else begin
        read_rs1_data = regs[rs1];
    end
end

always @(*) begin
    if(rs2 == 5'h0)begin
        read_rs2_data = 32'h0000_0000;
    end else begin
        read_rs2_data = regs[rs2];
    end
end

endmodule