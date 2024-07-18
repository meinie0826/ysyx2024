module decoder(
    input  [31:0] inst,
    output reg [6:0] opcode,
    output reg [4:0] rd,
    output reg [2:0] func3,
    output reg [4:0] rs1,
    output reg [11:0] imm
);


    always@(*) begin
        assign opcode = inst[6:0];
        assign rd = inst[11:7];
        assign func3 = inst[14:12];
        assign rs1 = inst[19:15];
        assign imm = inst[31:20];
        $display("decoder : inst : %d, rd : %d, rs1 : %d, imm: %d", inst,rd,rs1,imm);
    end

endmodule
