module program_counter #(
    parameter WIDTH = 32;
)(
    input logic clk,
    input logic rst,
    input logic PCSrc,
    input logic ZeroE,
    input logic jump,
    input logic PCPlus4F,   // input as [PCF + 4]
    input logic ALUResult, //for JALR instruction
    input logic [WIDTH-1:0] PCTarget, // input in top module as [PCE + ImmOp]
    output logic [WIDTH-1:0] PCF
);

logic [WIDTH-1:0] out;

always_comb begin
    case (PCSrc)
        3'b000: // PCNEXT
            out = PCPlus4F;
        3'b001: //ALWAYS JUMP
            out = PCTarget;
        3'b101: begin //COND JUMP
            if(ZeroE)
                out = PCTarget;
            else
                out = PCPlus4F;
        end
        3'b100: begin //INV COND JUMP
            if(ZeroE)
                out = PCPlus4F;
            else
                out = PCTarget;
        end
        3'b010: begin   // JALR
            out = ALUResult;
    endcase
end     

always_ff @(posedge clk) begin
    if(!stall) begin
        PCF <= rst ? 32'b0 : out;
    end
end

endmodule
