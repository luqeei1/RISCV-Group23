`include "def.sv"
module program_counter #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    input logic [1:0] PCSrc,
    input logic ZeroE,
    input logic [WIDTH-1:0] PCPlus4F,   // input as [PCF + 4]
    input logic [WIDTH-1:0] ALUResult, //for JALR instruction
    input logic [WIDTH-1:0] PCTarget, // input in top module as [PCE + ImmOp]
    output logic [WIDTH-1:0] PCF
);

logic [WIDTH-1:0] out;

always_comb begin
    case (PCSrc)
        `PC_NEXT: // PCNEXT
            out = PCPlus4F;
        `PC_JUMP: 
            out = PCTarget;
        `PC_COND_JUMP: begin //COND JUMP
            if(ZeroE)
                out = PCTarget;
            else
                out = PCPlus4F;
        end
        `PC_JALR:  // JALR
            out = ALUResult;
        default:
            out = PCPlus4F;
    endcase
end     

always_ff @(posedge clk) begin
    if(rst)
        PCF <= 32'b0;              // On reset, this goes to zero
    else
        PCF <= out;                // If not reset, this updates the PC with the next value
end

endmodule
