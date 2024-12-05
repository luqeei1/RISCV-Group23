module signExtend #(
    parameter DATA_WIDTH = 32
) (
    input logic [2:0] ImmSrcD,
    input logic [31:7] ImmInput,
    output logic [DATA_WIDTH-1:0] ImmExtD 
);
    always_comb begin
        case (ImmSrcD)
            3'b000: ImmExtD = {{20{ImmInput[31]}}, ImmInput[31:20]}; //I-type
            3'b001: ImmExtD = {{20{ImmInput[31]}}, ImmInput[31:25], ImmInput[11:7]}; //S-type
            3'b010: ImmExtD = {{20{ImmInput[31]}}, ImmInput[7], ImmInput[30:25], ImmInput[11:8], 1'b0}; //B-type
            3'b011: ImmExtD = {ImmInput[31:12], 3'h000}; //U-type
            3'b100: ImmExtD = {{13{ImmInput[31]}}, ImmInput[19:12], ImmInput[20], ImmInput[30:21]}; //J-type
            default: ImmExtD = '0;
        endcase
    end
endmodule
