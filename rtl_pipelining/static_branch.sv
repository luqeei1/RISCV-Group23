/* verilator lint_off LATCH */
module static_branch #(
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic [DATA_WIDTH-1:0] RD,
    input logic [DATA_WIDTH-1:0] PCF,
    input logic ZeroE,
    input logic JumpE, 
    input logic BranchE,
    output logic flushBranch,
    output logic [DATA_WIDTH-1:0] PCBPU,
    output logic PCBPUSrc
);

logic [31:0] branchAddr;

always_comb begin
    PCBPUSrc = 1'b0;
    if(RD[6:0] == 7'b1100011 && !JumpE) begin
        PCBPU = PCF + {{20{RD[31]}}, RD[7], RD[30:25], RD[11:8], 1'b0}; //calculate destination address
        branchAddr = PCF;
        PCBPUSrc = 1'b1;
    end
    else begin //current instruction is not a branch instruction
        PCBPU = 32'b0;
    end

    if(BranchE) begin //Branch instr 2 cycles later
        if(ZeroE) begin //If jump decision was correct
            flushBranch = 1'b0;
        end
        else begin //If jump decision was incorrect
            flushBranch = 1'b1; //Flush pipeline
            PCBPUSrc = 1'b1;
            PCBPU = branchAddr + 32'd4;
        end
    end
    else
        flushBranch = 1'b0;
end

endmodule
