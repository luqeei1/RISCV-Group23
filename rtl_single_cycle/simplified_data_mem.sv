module data_memory #(
    parameter WIDTH = 32
                


)(
    input logic [2:0]           modeBU,
    input  logic [1:0]          ResultSrc,
    input logic                 clk,
    input logic [WIDTH-1:0]      A,
    input logic [WIDTH-1:0]      WD,
    input logic                  trigger,
    input logic                  WE,
    output logic [WIDTH-1:0]     RD,
    output logic [WIDTH-1:0]     Result
    
    


);

    logic [31:0] ram_array [32'h0001FFFF:0];


initial begin
    // Read the contents of "gaussian.mem" into the data_array up to the size of the array
    $readmemh("gaussian.mem", ram_array);
end



   



always_ff @(posedge clk) begin
        if(WE) begin
            case(modeBU)
                3'b001: // store word
                    begin
                        ram_array[{A[16:0]}] <= WD[31:24];
                        ram_array[{A[16:0]} +1] <= WD[23:16];
                        ram_array[{A[16:0]} +2] <= WD[15:8];
                        ram_array[{A[16:0]} +3] <= WD[7:0];
                    end
                3'b010: // store half word
                    begin
                        ram_array[{A[16:0]}] <= WD[15:8];
                        ram_array[{A[16:0]} + 1] <= WD[7:0];
                    end
                3'b011: // store byte
                    begin
                        ram_array[{A[16:0]}] <= WD[7:0];
                    end
                3'b100:
                    begin
                        ram_array[{A[16:0]}] <= WD[15:8];
                        ram_array[{A[16:0]} + 1] <= WD[7:0];
                    end
                3'b101: 
                    begin
                        ram_array[{A[16:0]}] <= WD[7:0];
                    end
                default:
                    ram_array[{A[16:0]}] <= 8'b0;
            endcase
        end
    end

always_comb begin
    if (ResultSrc == 2'b01) begin
        RD = ram_array[A];
        Result = RD;
    end
    else if(ResultSrc == 2'b00) begin
        Result = A;
    end
end
        
        


endmodule
