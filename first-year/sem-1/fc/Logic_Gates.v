module Logic_Gates(
  input[7:0]in,
  output a, b, c, d);
  
  assign a = in[6] & in[7];
  assign b = in[4] | in[5];
  assign c = in[2] ^ in[3];
  assign d = ~(in[0] & in[1]);
  
endmodule