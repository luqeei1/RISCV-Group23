module FF_EM #(
    parameter DATA_WIDTH = 32,
    parameter WIDTH = 5
)(
    input logic clk,
    input logic RegWriteE,
    output logic RegWriteM,
    input logic [1:0] ResultSrcE,
    output logic [1:0] ResultSrcM,
    input logic MemWriteE,
    output logic MemWriteM,
    input logic [DATA_WIDTH-1:0] ALUResult,
    output logic [DATA_WIDTH-1:0] ALUResultM,
    input logic [DATA_WIDTH-1:0] WriteDataE,
    output logic [DATA_WIDTH-1:0] WriteDataM,
    input logic [WIDTH-1:0] RdE,
    output logic [WIDTH-1:0] RdM,
    input logic [DATA_WIDTH-1:0] PCPlus4E,
    output logic [DATA_WIDTH-1:0] PCPlus4M
);

always_ff @(posedge clk) begin
    RegWriteM <= RegWriteE;
    ResultSrcM <= ResultSrcE;
    MemWriteM <= MemWriteE;
    ALUResultM <= ALUResult;
    WriteDataM <= WriteDataE;
    RdM <= RdE;
    PCPlus4M <= PCPlus4E;
end

endmodule
