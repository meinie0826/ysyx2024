module RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input  clk,
  input  [DATA_WIDTH-1:0] wdata,
  input  [ADDR_WIDTH-1:0] waddr,
  input  wen,
  input  [ADDR_WIDTH-1:0] raddr,
  output [DATA_WIDTH-1:0] outdata
);

  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  always @(posedge clk) begin
    if (wen) begin 
      rf[waddr] <= wdata;
      $display("write wdata : %d to waddr: %d ",wdata,waddr);
    end
    
  end
  
  assign outdata = rf[raddr];


endmodule

