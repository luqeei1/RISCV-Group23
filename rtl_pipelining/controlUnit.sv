module controlUnit #(
    parameter DATA_WIDTH = 32
) (
    input logic [DATA_WIDTH-1:0] InstrD, 
    output logic [1:0] ResultSrcD ,
    output logic MemWriteD,
    output logic JumpD,
    output logic BranchD,
    output logic [3:0] ALUControlD,
    output logic ALUSrcD,
    output logic [2:0] ImmSrcD,
    output logic RegWriteD,
    output logic [2:0] modeAddr,
    output logic MemReadD
);
    logic [6:0] op = InstrD[6:0];
    logic [14:12] funct3 = InstrD[14:12];
    logic funct7 = InstrD[30];
    logic [1:0] ALUOp; 
    logic Store;
    logic Load;

    always_comb begin
        case (op)
            7'b0110011: begin RegWriteD = 1'b1; ImmSrcD = 3'b111; ALUSrcD = 1'b0; MemWriteD = 1'b0; JumpD = 1'b0; BranchD = 1'b0; ResultSrcD = 2'b00; Store = 1'b0; Load = 1'b0; ALUOp = 2'b10; MemReadD = 0; end //R-type
            7'b0010011: begin RegWriteD = 1'b1; ImmSrcD = 3'b000; ALUSrcD = 1'b1; MemWriteD = 1'b0; JumpD = 1'b0; BranchD = 1'b0; ResultSrcD = 2'b00; Store = 1'b0; Load = 1'b0; ALUOp = 2'b10; MemReadD = 1; end //I-type
            7'b0000011: begin RegWriteD = 1'b1; ImmSrcD = 3'b000; ALUSrcD = 1'b1; MemWriteD = 1'b0; JumpD = 1'b0; BranchD = 1'b0; ResultSrcD = 2'b01; Store = 1'b0; Load = 1'b1; ALUOp = 2'b00; MemReadD = 1; end //Load-type
            7'b0100011: begin RegWriteD = 1'b0; ImmSrcD = 3'b001; ALUSrcD = 1'b1; MemWriteD = 1'b1; JumpD = 1'b0; BranchD = 1'b0; ResultSrcD = 2'b00; Store = 1'b1; Load = 1'b0; ALUOp = 2'b00; MemReadD = 0; end //S-type
            7'b1100011: begin RegWriteD = 1'b0; ImmSrcD = 3'b010; ALUSrcD = 1'b0; MemWriteD = 1'b0; JumpD = 1'b0; BranchD = 1'b1; ResultSrcD = 2'b00; Store = 1'b0; Load = 1'b0; ALUOp = 2'b01; MemReadD = 0; end //B-type
            7'b0110111: begin RegWriteD = 1'b1; ImmSrcD = 3'b011; ALUSrcD = 1'b1; MemWriteD = 1'b0; JumpD = 1'b0; BranchD = 1'b0; ResultSrcD = 2'b00; Store = 1'b0; Load = 1'b0; ALUOp = 2'b00; MemReadD = 0; end //U-type (lui)
            7'b0010111: begin RegWriteD = 1'b1; ImmSrcD = 3'b011; ALUSrcD = 1'b1; MemWriteD = 1'b0; JumpD = 1'b0; BranchD = 1'b0; ResultSrcD = 2'b00; Store = 1'b0; Load = 1'b0; ALUOp = 2'b00; MemReadD = 0; end //U-type (auipc)
            7'b1101111: begin RegWriteD = 1'b1; ImmSrcD = 3'b100; ALUSrcD = 1'b0; MemWriteD = 1'b0; JumpD = 1'b1; BranchD = 1'b0; ResultSrcD = 2'b10; Store = 1'b0; Load = 1'b0; ALUOp = 2'b11; MemReadD = 0; end //J-type (jal)
            7'b1100111: begin RegWriteD = 1'b1; ImmSrcD = 3'b100; ALUSrcD = 1'b0; MemWriteD = 1'b0; JumpD = 1'b1; BranchD = 1'b0; ResultSrcD = 2'b10; Store = 1'b0; Load = 1'b0; ALUOp = 2'b00; MemReadD = 0; end //I-type (jalr)
            default: begin RegWriteD = 1'b0; ImmSrcD = 3'b111; ALUSrcD = 1'b1; MemWriteD = 1'b0; JumpD = 1'b0; BranchD = 1'b0; ResultSrcD = 2'b11; Store = 1'b0; Load = 1'b0; ALUOp = 2'b11; MemReadD = 0; end //Invalid
        endcase

        if(Store) begin
            case (funct3)
                3'b000: modeAddr = 3'b011; //store byte
                3'b001: modeAddr = 3'b010; //store half word
                3'b010: modeAddr = 3'b001; //store word
                default: modeAddr = 3'b000; //Invalid
            endcase
        end
        else if (Load) begin
            case (funct3)
                3'b000: modeAddr = 3'b011; //load byte
                3'b001: modeAddr = 3'b010; //load half word
                3'b010: modeAddr = 3'b001; //load word
                3'b100: modeAddr = 3'b101; //load unsigned byte
                3'b101: modeAddr = 3'b100; //load unsigned half word
                default: modeAddr = 3'b000; //Invalid
            endcase
        end
        else 
            modeAddr = 3'b000; //Invalid
    end

    ALUDecoder alu_decoder (  
        .ALUOp(ALUOp),
        .op(op[5]),
        .funct3(funct3),
        .funct7(funct7),
        .ALUControl(ALUControlD)
    );

endmodule
