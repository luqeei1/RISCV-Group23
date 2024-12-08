module FF_MW #(
    parameter DATA_WIDTH = 32,
    parameter WIDTH = 5
)(
    input logic clk,
    input logic RegWriteM,
    output logic RegWriteW,
    input logic [1:0] ResultSrcM,
    output logic [1:0] ResultSrcW,
    input logic [DATA_WIDTH-1:0] ALUResultM,
    output logic [DATA_WIDTH-1:0] ALUResultW,
    input logic [DATA_WIDTH-1:0] ReadDataM,
    output logic [DATA_WIDTH-1:0] ReadDataW,
    input logic [WIDTH-1:0] RdM,
    output logic [WIDTH-1:0] RdW,
    input logic [DATA_WIDTH-1:0] PCPlus4M,
    output logic [DATA_WIDTH-1:0] PCPlus4W
);

always_ff @(posedge clk) begin
    RegWriteW <= RegWriteM;
    ResultSrcW <= ResultSrcM;
    ALUResultW <= ALUResultM;
    ReadDataW <= ReadDataM;
    RdW <= RdM;
    PCPlus4W <= PCPlus4M;
end

endmodule
