module DataMemory #(
    parameter WIDTH = 32
                


)(
    input logic [1:0]            address_mode,
    input logic [1:0]                    ResultSrc,
    input logic [WIDTH-1:0]      A,
    input logic [WIDTH-1:0]      WD,
    input logic                  WE,
    output logic [WIDTH-1:0]     Result
    


);

    logic [7:0] ram_array [2**17 -1:0];
    logic [WIDTH-1:0] RD;

always_ff @(posedge clk) 
    begin
    if (wen == 1'b1)
        ram_array[ALUout] <= WriteData;    // CHANGE TO single byte addressing
        RD = ram_array[ALUout];
    else
        ram_array[ALUout] <= ram_array[ALUout];
        RD = ram_array[ALUout];
    end 

    begin 
        case(ResultSrc)
            1'b01 : Result <= RD;
            1'b00 : Result <= A;
            0'b10 : Result <= 
    end 


endmodule