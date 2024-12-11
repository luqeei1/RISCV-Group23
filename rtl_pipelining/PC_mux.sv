module PC_mux #(
    parameter WIDTH = 32
)(
    input logic ZeroE,
    input logic JumpE,
    input logic BranchE,
    input JALRE,
    input logic [WIDTH-1:0] PCPlus4F,   // input as [PCF + 4]
    input logic [WIDTH-1:0] ALUResult, //for JALR instruction
    input logic [WIDTH-1:0] PCTarget, // input in top module as [PCE + ImmOp]

    output logic [WIDTH-1:0] PC
);

always_comb begin
    // by default increment PC by 4
    PC = PCPlus4F;
    if(JumpE)
        PC = (JALRE) ? ALUResult : PCTarget;  // JALR or unconditional jump (jal)
    // else if(BranchE && ZeroE)
    //     PC = PCTarget;  // conditional jump: branch taken
end

endmodule
