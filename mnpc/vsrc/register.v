module register(
  input  clk,
  input  [32-1:0] wdata,
  input  [5-1:0] waddr,
  input  wen,
  input  [5-1:0] raddr,
  output [32-1:0] outdata
);

  RegisterFile #(5, 32) i0 (clk,wdata,waddr,wen,raddr,outdata);
endmodule