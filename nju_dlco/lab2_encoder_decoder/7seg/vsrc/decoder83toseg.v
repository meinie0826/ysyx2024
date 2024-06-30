module decoder83toseg(sw,led,hex);
  input  [8:0] sw;
  output reg [3:0] led;
  output reg [6:0] hex;
  integer i;
  bcd7seg seg5(led,hex);
  always @(sw) begin
    if (sw[8]) begin
      led = 0;
      for(i = 0; i <= 7; i = i+1)
          if(sw[i] == 1) begin led = i[3:0]; led[3] = 1; end;
    end 
    else led = 0;
  end
endmodule
