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
    output logic [DATA_WIDTH-1:0]       t0,
    output logic [DATA_WIDTH-1:0]       t1,
    output logic [DATA_WIDTH-1:0]       t2,
    output logic [DATA_WIDTH-1:0]       t3,
    output logic [DATA_WIDTH-1:0]       t4,
    output logic [DATA_WIDTH-1:0]       t5,
    output logic [DATA_WIDTH-1:0]       t6,
    output logic [DATA_WIDTH-1:0]       s0,
    output logic [DATA_WIDTH-1:0]       s1,
    output logic [DATA_WIDTH-1:0]       s2,
    output logic [DATA_WIDTH-1:0]       s3,
    output logic [DATA_WIDTH-1:0]       s4,
    output logic [DATA_WIDTH-1:0]       s5,
    output logic [DATA_WIDTH-1:0]       s6,
    output logic [DATA_WIDTH-1:0]       s7,
    output logic [DATA_WIDTH-1:0]       s8,
    output logic [DATA_WIDTH-1:0]       s9,
    output logic [DATA_WIDTH-1:0]       s10,
    output logic [DATA_WIDTH-1:0]       s11
);

logic [DATA_WIDTH-1:0] registerfile_array [2**ADDRESS_WIDTH-1:0];

always_ff @(posedge clk) begin
    if(WE3)
        registerfile_array[AD3] <= (AD3 == 5'b0) ? 32'b0 : WD3;
end

always_comb begin
    RD1 = registerfile_array[AD1];
    RD2 = registerfile_array[AD2];
    t0 = registerfile_array[5];
    t1 = registerfile_array[6];
    t2 = registerfile_array[7];
    s0 = registerfile_array[8];
    s1 = registerfile_array[9];
    a0 = registerfile_array[10];
    a1 = registerfile_array[11];
    a2 = registerfile_array[12];
    a3 =  registerfile_array[13];
    a4 =  registerfile_array[14];
    a5 =  registerfile_array[15];
    a6 =  registerfile_array[16];
    a7 =  registerfile_array[17];
    s2 =  registerfile_array[18];
    s3 =  registerfile_array[19];
    s4 =  registerfile_array[20];
    s5 =  registerfile_array[21];
    s6 =  registerfile_array[22];
    s7 =  registerfile_array[23];
    s8 =  registerfile_array[24];
    s9 =  registerfile_array[25];
    s10 =  registerfile_array[26];
    s11 =  registerfile_array[27];
    t3 =  registerfile_array[28];
    t4 =  registerfile_array[29];
    t5 =  registerfile_array[30];
    t6 = registerfile_array[31];
end

endmodule
