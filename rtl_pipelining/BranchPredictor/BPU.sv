module BPU #(
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic [DATA_WIDTH-1:0] RD,
    input logic [DATA_WIDTH-1:0] PCF,
    input logic ZeroE,
    input logic BranchE,
    output logic Flush,
    output logic [DATA_WIDTH-1:0] PCBPU,
    output logic PCBPUSrc
);

logic decision;
typedef enum {SNB, WNB, WB, SB} branch_state;
branch_state current_state, next_state;

always_ff @(posedge clk) begin
    if(RD[6:0] == 6'b011011) 
        PCBPU <= PCF + RD[12:20] //calculate next PC for branching
    if(BranchE) begin //Branch instr 2 cycles later
        if(ZeroE) //Branch condition was met
            next_state <= (current_state == SB) ? SB : branch_state'(current_state + 1);
        else
            next_state <= (current_state == SNB) ? SNB : branch_state'(current_state - 1);
        if(decision)
        //Add code to set output Flush if decision was wrong
    end
    else
        PCBPUSrc <= 1'b0;
end
//Add code so that PCBPUSrc goes to 0 after one clock cycle
always_comb
    case (current_state)
        SNB: PCBPUSrc = 1'b0;
        WNB: PCBPUSrc = 1'b0;
        WB: PCBPUSrc = 1'b1;
        SB: PCBPUSrc = 1'b1;
    endcase

endmodule
