module DataPath #(
    parameter WIDTH = 32
                


)(
    input logic [1:0]           ResultSrc,
    input logic [1:0]           modeBU,
    input logic                 clk,
    input logic [WIDTH-1:0]      A,
    input logic [WIDTH-1:0]      WD,
    input logic                  WE,
    output logic [WIDTH-1:0]     Result
    


);

    initial begin
        $readmemh("datamem.mem",ram_array);
    end;

    logic [7:0] ram_array [2**17 -1:0];
    logic [WIDTH-1:0] RD;



always_ff @(posedge clk) 
    begin
        case(WE)
            1'b1:
                begin
                case(modeBU)
                    2'b01: 
                        begin
                            ram_array[{A[31:2], 2'b0}] <= WD[31:24];
                            ram_array[{A[31:2], 2'b0} +1] <= WD[23:16];
                            ram_array[{A[31:2], 2'b0} +2] <= WD[15:8];
                            ram_array[{A[31:2], 2'b0} +3] <= WD[7:0];
                            RD <= {ram_array[{A[31:2], 2'b0}],ram_array[{A[31:2], 2'b0}+1],ram_array[{A[31:2], 2'b0}+2],ram_array[{A[31:2], 2'b0}+3]};
                        end
                    2'b10:
                        begin
                            ram_array[{A[31:2], 2'b0}] <= WD[31:24];
                            ram_array[{A[31:2], 2'b0} + 1] <= WD[23:16];
                            RD <= {{16'b0},ram_array[{A[31:2], {2'b0}}],ram_array[{A[31:2], {2'b0}} + 1]};
                        end
                    2'b11:
                        begin
                            ram_array[A] <= WD[7:0];
                            RD <= {{24'b0},ram_array[A]};
                        end
                    2'b00: RD <= 32'b0;
                endcase
                end

            1'b0:
                begin
                    RD <= {ram_array[A],ram_array[A+1],ram_array[A+2],ram_array[A+3]};
                end
        endcase
    end

always_comb begin
    case(ResultSrc)
        2'b01 : Result = RD;
        2'b00 : Result = A;
        2'b10 : Result = A + 4;
        2'b11 : Result = 0;
    endcase
end
        
        


endmodule
