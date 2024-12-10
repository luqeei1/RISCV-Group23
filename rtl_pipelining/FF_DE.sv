module FF_DE #(
    parameter DATA_WIDTH = 32,
    parameter WIDTH = 5
)(
    input logic clk,
    input logic flushBranch,
    input logic MemReadD,
    output logic MemReadE,
    input logic RegWriteD,
    output logic RegWriteE,
    input logic [1:0] ResultSrcD,
    output logic [1:0] ResultSrcE,
    input logic MemWriteD,
    output logic MemWriteE,
    input logic JumpD, 
    output logic JumpE,
    input logic BranchD,
    output logic BranchE,
    input logic [3:0] ALUControlD,
    output logic [3:0] ALUControlE,
    input logic ALUSrcD,
    output logic ALUSrcE,
    input logic [DATA_WIDTH-1:0] RD1,
    output logic [DATA_WIDTH-1:0] RD1E,
    input logic [DATA_WIDTH-1:0] RD2,
    output logic [DATA_WIDTH-1:0] RD2E,
    input logic [DATA_WIDTH-1:0] PCD,
    output logic [DATA_WIDTH-1:0] PCE,
    input logic [WIDTH-1:0] Rs1D,
    output logic [WIDTH-1:0] Rs1E,
    input logic [WIDTH-1:0] Rs2D,
    output logic [WIDTH-1:0] Rs2E,
    input logic [WIDTH-1:0] RdD,
    output logic [WIDTH-1:0] RdE,
    input logic [DATA_WIDTH-1:0] ExtImmD,
    output logic [DATA_WIDTH-1:0] ExtImmE,
    input logic [DATA_WIDTH-1:0] PCPlus4D,
    output logic [DATA_WIDTH-1:0] PCPlus4E,
    input logic [2:0] modeAddrD,
    output logic [2:0] modeAddrE,
    //for debugging
    input logic [DATA_WIDTH-1:0] InstrD,
    output logic [DATA_WIDTH-1:0] InstrE
);

always_ff @(posedge clk) begin
    if(flushBranch) begin
        JumpE <= 0;
        BranchE <= 0;
        RegWriteE <= 0;
        MemWriteE <= 0;
    end else begin
        JumpE <= JumpD;
        BranchE <= BranchD;
        RegWriteE <= RegWriteD;
        MemWriteE <= MemWriteD;
        MemReadE <= MemReadD;
        ResultSrcE <= ResultSrcD;
        ALUControlE <= ALUControlD;
        ALUSrcE <= ALUSrcD;
        RD1E <= RD1;
        RD2E <= RD2;
        PCE <= PCD;
        Rs1E <= Rs1D;
        Rs2E <= Rs2D;
        RdE <= RdD;
        ExtImmE <= ExtImmD;
        PCPlus4E <= PCPlus4D;
        modeAddrE <= modeAddrD;
        InstrE <= InstrD;
    end
end
endmodule
