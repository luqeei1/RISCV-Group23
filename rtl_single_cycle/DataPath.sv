module DataPath #(
    parameter WIDTH = 32
                


)(
    input logic [1:0]           ResultSrc,
    input logic [2:0]           modeBU,
    input logic                 clk,
    input logic [WIDTH-1:0]      A,
    input logic [WIDTH-1:0]      WD,
    input logic                  WE,
    output logic [WIDTH-1:0]     Result

);

    logic [7:0] ram_array [2**17 -1:0];

    initial begin
        $readmeh("datamem.hex", ram_array, 17'h10000, 17'h1FFFF);
    end;

    logic [WIDTH-1:0] RD;
    logic [WIDTH-1:0] addr;
    assign addr = {A[31:2], 2'b0};



always_ff @(posedge clk) begin
    if(WE) begin
        case(modeBU)
            3'b001: begin   // store word
                ram_array[addr] <= WD[31:24];
                ram_array[addr + 1] <= WD[23:16];
                ram_array[addr + 2] <= WD[15:8];
                ram_array[addr + 3] <= WD[7:0];
            end
            3'b010: begin   // store half word
                    ram_array[addr] <= WD[15:8];
                    ram_array[addr + 1] <= WD[7:0];
            end
            3'b011: begin   // store byte
                    ram_array[addr] <= WD[7:0];
            end
        endcase
    end
end

always_comb begin
    case(ResultSrc)
        2'b01 : 
            case(modeBU)
                3'b001: 
                    begin // load word
                        RD = {ram_array[addr],ram_array[addr + 1],ram_array[addr + 2],ram_array[addr + 3]}; 
                        Result = RD;
                    end                 
                3'b010: //load half word
                    begin
                        RD = {{16{ram_array[addr][7]}},ram_array[addr],ram_array[addr + 1]};
                        Result = RD;
                    end
                3'b011:
                    begin // load byte
                        RD = {{24{ram_array[{A[31:2], 2'b0}][7]}},ram_array[addr]};
                        Result = RD;
                    end
                3'b100:
                    begin //load unsigned half word
                        RD = {{{16'b0}},ram_array[addr}],ram_array[addr + 1]};
                        Result = RD;
                    end
                3'b101:
                    begin // load unsigned byte
                        RD = {{24'b0},ram_array[addr]};
                        Result = RD;
                    end 
            endcase
        2'b00 : Result = A;
        2'b10 : Result = A + 4;
    endcase
end        
endmodule
