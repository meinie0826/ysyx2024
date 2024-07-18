`timescale 1ns / 1ps
module data_mem(
    input clk, rst, 
    input [1: 0] write_mem, 
    
    input [2: 0] read_mem,

    input [31: 0] address, write_data,

    output reg [31: 0] out_mem
);
import "DPI-C" function void npc_host_read(input int addr, input int len, output int data);
import "DPI-C" function void npc_host_write(input int addr, input int len, input int data);


reg [31: 0] data_tmp; 

always @(*) begin
    data_tmp = 0;
    case (read_mem[1: 0])
        2'b00:begin
            out_mem = 32'b0;
        end
        2'b01:begin
            npc_host_read(address,4,data_tmp);
            out_mem = {data_tmp[31:24], data_tmp[23:16], data_tmp[15:8], data_tmp[7:0]};
        end
        2'b10:begin
            npc_host_read(address,2,data_tmp);
            if(read_mem[2]) out_mem = {{16{data_tmp[15]}}, data_tmp[15:8], data_tmp[7:0]};
            else out_mem = {16'b0, data_tmp[15:8], data_tmp[7:0]};
        end
        2'b11:begin
            npc_host_read(address,1,data_tmp);
            if(read_mem[2]) out_mem = {{24{data_tmp[7]}}, data_tmp[7:0]};
            else out_mem = {24'b0, data_tmp[7:0]};
        end 
        default:begin
            out_mem = 32'b0;
        end
    endcase
end

always @(posedge clk) begin
    data_tmp = 0;
    case (write_mem)
        2'b01:begin
            npc_host_write(address, 4, write_data);
            //$write("write mem address : %08x, data : %08x \n",address,write_data);
        end
        2'b10:begin
            npc_host_write(address, 2, write_data);
            //$write("write mem address : %08x, data : %08x \n",address,write_data);
        end
        2'b11:begin
            npc_host_write(address, 1, write_data);
            //$write("write mem address : %08x, data : %08x \n",address,write_data);
        end 
        default: begin
            
        end
    endcase
end
endmodule