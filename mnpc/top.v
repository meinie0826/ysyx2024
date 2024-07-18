module top(
    input  clk,
    input  rst,
    input  [31:0] inst,
    input  [31:0] data_in1,
    input  [31:0] data_in2,
    output reg [31:0] pc,
    output reg [31:0] data_out
);
    
    reg [6:0] opcode;
    reg [4:0] rd;
    reg [4:0] rs1;
    reg [11:0] imm;
    reg [31:0] rs1_data;
    reg [31:0] tmp_data;
    reg [31:0] alu_res;
    reg [2:0] func3;

    initial begin
        assign pc = 32'h80000000;
    end


    decoder decode0(
        .inst(inst),
        .opcode(opcode),
        .rd(rd),
        .func3(func3),
        .rs1(rs1),
        .imm(imm)
    );

    register register0(
        .clk(clk),
        .wdata(alu_res),
        .waddr(rd),
        .wen(0),
        .raddr(rs1),
        .outdata(rs1_data)
    );

    alu alu0(
        .func3(func3),
        .data_in1(rs1_data),
        .data_in2(imm),
        .data_out(alu_res)
    );
    
    register register1(
        .clk(~clk),
        .wdata(alu_res),
        .waddr(rd),
        .wen(1),
        .raddr(rs1),
        .outdata(tmp_data)        
    );

    pc_next pc0(
        .clk(clk),
        .rst(rst),
        .last_addr(pc),
        .addr(pc)
    );
endmodule 
