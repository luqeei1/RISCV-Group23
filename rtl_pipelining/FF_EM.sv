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
    input logic [DATA_WIDTH-1:0] ALUResultE,
    output logic [DATA_WIDTH-1:0] ALUResultM,
    input logic [DATA_WIDTH-1:0] WriteDataE,
    output logic [DATA_WIDTH-1:0] WriteDataM,
    input logic [WIDTH-1:0] RdE,
    output logic [WIDTH-1:0] RdM,
    input logic [DATA_WIDTH-1:0] PCPlus4E,
    output logic [DATA_WIDTH-1:0] PCPlus4M,
    input logic [2:0] modeAddrE,
    output logic [2:0] modeAddrM,
    input logic MemReadE,
    output logic MemReadM,
    //for debugging
    input logic [DATA_WIDTH-1:0] InstrE,
    output logic [DATA_WIDTH-1:0] InstrM
);

always_ff @(posedge clk) begin
    RegWriteM <= RegWriteE;
    ResultSrcM <= ResultSrcE;
    MemWriteM <= MemWriteE;
    ALUResultM <= ALUResultE;
    WriteDataM <= WriteDataE;
    RdM <= RdE;
    PCPlus4M <= PCPlus4E;
    modeAddrM <= modeAddrE;
    MemReadM <= MemReadE;
    //for debugging
    InstrM <= InstrE;
end

endmodule
