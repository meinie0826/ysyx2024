module bcd7seg(
  input  [3:0] b,
  output reg [6:0] h
);
// detailed implementation ...
    always @(b) begin
        case (b)
                4'b1001 : h = 7'b1111001;
                4'b1010 : h = 7'b0100100;
                4'b1011 : h = 7'b0110000;
                4'b1100 : h = 7'b0011001;
                4'b1101 : h = 7'b0010010;
                4'b1110 : h = 7'b0000010;
                4'b1111 : h = 7'b1111000;
                4'b1000 : h = 7'b0000000; 
                default: h = 7'b1111111; 
        endcase
    end
endmodule