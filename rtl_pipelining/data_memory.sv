module data_memory #(
    parameter WIDTH = 32

)(
    input logic [2:0]           modeAddr,
    input  logic [1:0]          ResultSrc,
    input logic                 clk,
    input logic [WIDTH-1:0]      A,
    input logic [WIDTH-1:0]      WD,
    input logic                  trigger,
    input logic                  WE,
    output logic [WIDTH-1:0]     RD
);

    logic [7:0] ram_array [2**17 -1:0];

    initial begin
        $display("Loading ram.");
        $readmemh("../rtl_pipelining/datamem.mem", ram_array, 17'h00000, 17'h1FFFF);
        $display("Ram loaded");
    end

always_ff @(posedge clk) begin
        if(WE) begin
            case(modeAddr)
                3'b001: // store word
                    begin
                        ram_array[{A[16:2],2'b0}] <= WD[31:24];
                        ram_array[{A[16:2],2'b0} +1] <= WD[23:16];
                        ram_array[{A[16:2],2'b0} +2] <= WD[15:8];
                        ram_array[{A[16:2],2'b0} +3] <= WD[7:0];
                    end
                3'b010: // store half word
                    begin
                        ram_array[{A[16:2],2'b0}] <= WD[15:8];
                        ram_array[{A[16:2],2'b0} + 1] <= WD[7:0];
                    end
                3'b011: // store byte
                    begin
                        ram_array[{A[16:2],2'b0}] <= WD[7:0];
                    end
                3'b100:
                    begin
                        ram_array[{A[16:2],2'b0}] <= WD[15:8];
                        ram_array[{A[16:2],2'b0} + 1] <= WD[7:0];
                    end
                3'b101: 
                    begin
                        ram_array[{A[16:2],2'b0}] <= WD[7:0];
                    end
                default:
                    ram_array[{A[16:2],2'b0}] <= 8'b0;
            endcase
        end
    end

always_comb begin
    if (A == 32'h100) begin
        RD = {31'b0, trigger};  // Return trigger when reading 0x100
    end
    else begin
        case(modeAddr)
            3'b001: 
                begin // load word
                    RD = {ram_array[{A[16:2],2'b0}],ram_array[{A[16:2],2'b0} + 1],ram_array[{A[16:2],2'b0} + 2],ram_array[{A[16:2],2'b0} + 3]}; 
                end                 
            3'b010: //load half word
                begin
                    RD = {{16{ram_array[{A[16:2],2'b0}][7]}},ram_array[{A[16:2],2'b0}],ram_array[{A[16:2],2'b0} + 1]};
                end
            3'b011:
                begin // load byte
                    RD = {{24{ram_array[{A[16:2],2'b0}][7]}},ram_array[{A[16:2],2'b0}]};
                end
            3'b100:
                begin //load unsigned half word
                    RD = {{{16'b0}},ram_array[{A[16:2],2'b0}],ram_array[{A[16:2],2'b0} + 1]};
                end
            3'b101:
                begin // load unsigned byte
                    RD = {{24'b0},ram_array[{A[16:2],2'b0}]};
                end 
        endcase
    end
end
        
endmodule
