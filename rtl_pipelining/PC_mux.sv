module PC_mux #(
    parameter WIDTH = 32
)(
    input logic [1:0] PCSrc,
    input logic ZeroE,
    input logic [WIDTH-1:0] PCPlus4F,   // input as [PCF + 4]
    input logic [WIDTH-1:0] ALUResult, //for JALR instruction
    input logic [WIDTH-1:0] PCTarget, // input in top module as [PCE + ImmOp]

    output logic [WIDTH-1:0] PC,
    output logic branch
);


always_comb begin
    case (PCSrc)
        2'b00: // PCNEXT
            PC = PCPlus4F;
            branch = 0;
        2'b01: //ALWAYS JUMP
            PC = PCTarget;
            branch= 1;
        2'b10: begin //COND JUMP
            if(ZeroE)
                PC = PCTarget;
                branch = 1;
            else
                PC = PCPlus4F;
                branch = 0;
        end
        2'b11:  // JALR
            PC = ALUResult;
            branch = 1;
        default:
            $display("INVALID PCSrc");
            PC = PCPlus4F;
            branch = 0;
    endcase
end

endmodule
