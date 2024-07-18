`timescale 1ns / 1ps
module mux_2_5(
    input signal,
    input [4: 0] a, b,

    output [4: 0] out
);

assign out = (signal == 0) ? a : b;

endmodule

