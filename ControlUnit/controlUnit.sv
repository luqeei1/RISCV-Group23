module controlUnit #(
) (
    input logic [6:0] op,
    input logic [14:12] funct3,
    input logic funct7,
    input logic zero,
    output logic JumpD,
    output logic BranchD,
    output logic [1:0] ResultSrcD,
    output logic MemWriteD,
    output logic [2:0] ALUControlD,
    output logic ALUSrcD,
    output logic [1:0] ImmSrcD,
    output logic RegWriteD
);
    logic [1:0] ALUOp; 
    always_comb begin
        case (op)
            7'b0110011: RegWriteD = 1'b1; ImmSrcD = 3'b111; ALUSrcD = 1'b0; MemWriteD = 1'b0; ResultSrcD = 2'b00; BranchD = 1'b0; JumpD = 1'b0; ALUOp = 2'b10; //R-type
            7'b0010011: RegWriteD = 1'b1; ImmSrcD = 3'b000; ALUSrcD = 1'b1; MemWriteD = 1'b0; ResultSrcD = 2'b00; BranchD = 1'b0; JumpD = 1'b0; ALUOp = 2'b10; //I-type
            7'b0000011: RegWriteD = 1'b1; ImmSrcD = 3'b000; ALUSrcD = 1'b1; MemWriteD = 1'b0; ResultSrcD = 2'b01; BranchD = 1'b0; JumpD = 1'b0; ALUOp = 2'b00; //Load-type
            7'b0100011: RegWriteD = 1'b0; ImmSrcD = 3'b001; ALUSrcD = 1'b1; MemWriteD = 1'b1; ResultSrcD = 2'b00; BranchD = 1'b0; JumpD = 1'b0; ALUOp = 2'b00; //S-type
            7'b1100011: RegWriteD = 1'b0; ImmSrcD = 3'b010; ALUSrcD = 1'b0; MemWriteD = 1'b0; ResultSrcD = 2'b00; BranchD = 1'b1; JumpD = 1'b0; ALUOp = 2'b01; //B-type
            7'b0110111: RegWriteD = 1'b1; ImmSrcD = 3'b011; ALUSrcD = 1'b1;  //U-type (lui)
            7'b0010111: ImmSrcD = 3'b011; //U-type (auipc)
            7'b1101111: RegWriteD = 1'b1; ImmSrcD = 3'b100; ALUSrcD = 1'b0; MemWriteD = 1'b0; ResultSrcD = 2'b10; BranchD = 1'b0; JumpD = 1'b1; ALUOp = 2'b11; //J-type (jal)
            7'b1100111: RegWriteD = 1'b1; ImmSrcD = 3'b100; ALUSrcD = 1'b0; MemWriteD = 1'b0; ResultSrcD = 2'b10; BranchD = 1'b0; JumpD = 1'b1; ALUOp = 2'b11; //J-type (jalr)
            default: RegWriteD = 1'b0; ImmSrcD = 3'b111; ALUSrcD = 1'b1; MemWriteD = 1'b0; ResultSrcD = 2'b11; BranchD = 1'b0; JumpD = 1'b0; ALUOp = 2'b11; //Invalid
        endcase
    end

    ALUDecoder alu_decoder (
        .ALUOp(ALUOp),
        .op(op[5]),
        .funct3(funct3),
        .funct7(funct7),
        .ALUControlD(ALUControlD)
    );

endmodule
