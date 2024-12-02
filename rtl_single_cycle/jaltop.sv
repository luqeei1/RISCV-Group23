module jaltop #(
    parameter WIDTH = 32

)(

   input logic clk,
    input logic rst,
    input logic PCSrc,
    input logic ZeroE,
    input logic jump,
    input logic PCPlus4F,   // input as [PCF + 4]
    input logic ALUResult, //for JALR instruction
    input logic [WIDTH-1:0] PCTarget, // input in top module as [PCE + ImmOp]
    input logic [6:0] op,
    input logic imm,
    input logic [2:0]           ResultSrc,
    input logic [1:0]           modeBU,
    input logic [WIDTH-1:0]      A,
    input logic [WIDTH-1:0]      WD,
    input logic                  WE,
    output logic                PCF,
    output logic                Result
);


case(op)
    6'b1101111:
        begin 
            program_counter pc(
                .clk(clk),
                .rst(rst),
                .PCSrc(PCSrc),
                .ZeroE(ZeroE),
                .jump(jump),
                .PCPlus4F(),
                .ALUResult(imm),
                .PCTarget(PCTarget)
                .PCF(PCF)
            );

            DataPath datapath(
                .ResultSrc(ResultSrc),
                .modeBU(modeBU),
                .clk(clk),
                .A(A),
                .WD(WD),
                .WE(WE),
                .Result(PCF+4)
            );
            
        end 

endcase 

endmodule
    

