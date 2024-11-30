module DataMemory #(
    parameter WIDTH = 32
                


)(
    input logic [1:0]           address_mode,
    input logic [1:0]           ResultSrc,
    input logic                 clk,
    input logic [WIDTH-1:0]      A,
    input logic [WIDTH-1:0]      WD,
    input logic                  WE,
    output logic [WIDTH-1:0]     Result
    


);

    logic [7:0] ram_array [2**17 -1:0];
    logic [WIDTH-1:0] RD;

    initial begin
            $readmemh("datamem.mem", ram_array);
    end;
    
always_comb begin
    case(ResultSrc)
        2'b01 : Result = RD;
        2'b00 : Result = A;
        2'b10 : Result = A + 4;
    endcase
end

always_ff @(posedge clk) 
    begin
        case(WE)
            0'b1:
                begin
                ram_array[A] <= WD;    // CHANGE TO single byte addressing
                RD = ram_array[A];
                end
            0'b1:
            begin
            ram_array[A] <= ram_array[A];
            RD = ram_array[A];
            end
        endcase
    end
        
        


endmodule
