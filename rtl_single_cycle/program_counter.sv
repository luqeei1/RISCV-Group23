module program_counter #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    input logic [1:0] PCSrc,
    input logic ZeroE,
    input logic jump,
    input logic [WIDTH-1:0] PCPlus4F,   // input as [PCF + 4]
    input logic [WIDTH-1:0] ALUResult, //for JALR instruction
    input logic [WIDTH-1:0] PCTarget, // input in top module as [PCE + ImmOp]
    output logic [WIDTH-1:0] PCF
);

logic [WIDTH-1:0] out;

always_comb begin
    case (PCSrc)
        2'b00: // PCNEXT
            out = PCPlus4F;
        2'b01: //ALWAYS JUMP
            out = PCTarget;
        2'b10: begin //COND JUMP
            if(ZeroE)
                out = PCTarget;
            else
                out = PCPlus4F;
        end
        2'b11:  // JALR
            out = ALUResult;
    endcase
end     

always_ff @(posedge clk) begin
    if(!stall) begin
        PCF <= rst ? 32'b0 : out;
    end
end

endmodule
