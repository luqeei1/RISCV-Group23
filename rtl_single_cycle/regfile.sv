module regfile #(
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
    output logic [DATA_WIDTH-1:0]       a2,
    output logic [DATA_WIDTH-1:0]       a3,
    output logic [DATA_WIDTH-1:0]       a4,
    output logic [DATA_WIDTH-1:0]       a5,
    output logic [DATA_WIDTH-1:0]       a6,
    output logic [DATA_WIDTH-1:0]       a7,
    output logic [DATA_WIDTH-1:0]       a8,
    output logic [DATA_WIDTH-1:0]       a9,
    output logic [DATA_WIDTH-1:0]       a10,
    output logic [DATA_WIDTH-1:0]       a11,
    output logic [DATA_WIDTH-1:0]       a12,
    output logic [DATA_WIDTH-1:0]       a13,
    output logic [DATA_WIDTH-1:0]       a14,
    output logic [DATA_WIDTH-1:0]       a15,
    output logic [DATA_WIDTH-1:0]       a16,
    output logic [DATA_WIDTH-1:0]       a17,
    output logic [DATA_WIDTH-1:0]       a18,
    output logic [DATA_WIDTH-1:0]       a19,
    output logic [DATA_WIDTH-1:0]       a20,
    output logic [DATA_WIDTH-1:0]       t1
);

logic [DATA_WIDTH-1:0] registerfile_array [2**ADDRESS_WIDTH-1:0];

always_ff @(posedge clk) begin
    if(WE3)
        registerfile_array[AD3] <= (AD3 == 5'b0) ? 32'b0 : WD3;
end

always_comb begin
    RD1 = registerfile_array[AD1];
    RD2 = registerfile_array[AD2];
    t1 = registerfile_array[9];
    a0 = registerfile_array[10];
    a1 = registerfile_array[11];
    a2 = registerfile_array[12];
    a3 =  registerfile_array[13];
    a4 =  registerfile_array[14];
    a5 =  registerfile_array[15];
    a6 =  registerfile_array[16];
    a7 =  registerfile_array[17];
    a8 =  registerfile_array[18];
    a9 =  registerfile_array[19];
    a10 =  registerfile_array[20];
    a11 =  registerfile_array[21];
    a12 =  registerfile_array[22];
    a13 =  registerfile_array[23];
    a14 =  registerfile_array[24];
    a15 =  registerfile_array[25];
    a16 =  registerfile_array[26];
    a17 =  registerfile_array[27];
    a18 =  registerfile_array[28];
    a19 =  registerfile_array[29];
    a20 =  registerfile_array[30];
end

endmodule
