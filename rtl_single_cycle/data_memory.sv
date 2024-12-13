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

    logic [7:0] ram_array [2**17 -1:0];

initial begin
    $readmemh("data_memory.hex", ram_array, 32'h00010000);      // run data_memory.hex if trying to pass tests 1-4
    //$readmemh("gaussian.mem", ram_array, 32'h00010000);       // replace gaussian.mem with any other .mem file if trying to run the pdf functions for triangle and noisy
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
    if (A == 32'h100) begin
        RD = {31'b0, trigger};  // Return trigger when reading 0x100
        Result = RD;
    end
    else begin
        case(ResultSrc)
            2'b01: begin 
                case(modeBU)
                    3'b001: 
                        begin // load word
                            RD = {ram_array[{A[16:0]} + 3],ram_array[{A[16:0]} + 2],ram_array[{A[16:0]} + 1],ram_array[{A[16:0]}]}; 
                            Result = RD;
                        end                 
                    3'b010: //load half word
                        begin
                            RD = {{16{ram_array[{A[16:0]}][7]}},ram_array[{A[16:0]} + 1],ram_array[{A[16:0]}]};
                            Result = RD;
                        end
                    3'b011:
                        begin // load byte
                            RD = {{24{ram_array[{A[16:0]}][7]}},ram_array[{A[16:0]}]};
                            Result = RD;
                        end
                    3'b100:
                        begin //load unsigned half word
                            RD = {{{16'b0}},ram_array[{A[16:0]} + 1],ram_array[{A[16:0]}]};
                            Result = RD;
                        end
                    3'b101:
                        begin // load unsigned byte
                            RD = {{24'b0},ram_array[{A[16:0]}]};
                            Result = RD;
                        end 
                    default:
                        Result = RD;
                endcase
            end
            2'b00: Result = A;
            2'b10: Result = A + 4;
            default: Result = A;
        endcase
    end
end
        
        


endmodule
