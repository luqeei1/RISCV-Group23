module RegFile #(
    parameter   ADDRESS_WIDTH = 5,
                DATA_WIDTH = 32
) (
    input logic clk,
    input logic [ADDRESS_WIDTH-1:0]  AD1,   // register 1 address
    input logic [ADDRESS_WIDTH-1:0]  AD2,   // register 2 address
    input logic [ADDRESS_WIDTH-1:0]  AD3,   // register address to be written into
    input logic WE3,
    input logic [DATA_WIDTH-1:0]    WD3,  
    output logic [DATA_WIDTH-1:0]   RD1,
    output logic [DATA_WIDTH-1:0]   RD2,
    output logic [DATA_WIDTH-1:0]   a0,
    output logic [DATA_WIDTH-1:0]   a1, 
    output logic [DATA_WIDTH-1:0]   a7
);

logic [DATA_WIDTH-1:0] registerfile_array [2**ADDRESS_WIDTH-1:0];

always_ff @(posedge clk) begin
    if(WE3)
        registerfile_array[AD3] <= (AD3 == 5'b0) ? 32'b0 : WD3;
end

always_comb begin
    RD1 = registerfile_array[AD1];
    RD2 = registerfile_array[AD2];
    a0 = registerfile_array[10];
    a1 = registerfile_array[11];
    a7 = registerfile_array[17];
end

endmodule
