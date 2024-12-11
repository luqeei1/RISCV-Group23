/* verilator lint_off LATCH */
module BPU #(
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

typedef struct packed{
    logic [31:0] branchAddr; //Branch address
    logic [31:0] targetAddr; //Branch target address
    logic direction; //Branch direction: 0 = forward, 1 = backward
    logic prediction; //Predicted outcome: 1 = taken, 0 = not taken
} BranchInfo;

BranchInfo branch_queue[$]; //Queue to store branch information 
BranchInfo newBranch;
BranchInfo oldBranch;
logic forwardJumpDecisionCorrect;
logic backwardJumpDecisionCorrect;
logic [1:0] forwardJumpCounter; //2 bit forward counter
logic [1:0] backwardJumpCounter; //2 bit backward counter

initial begin
    forwardJumpCounter = 2'b10;
    backwardJumpCounter = 2'b10;
end


always_comb begin
    //if(RD[6:0] == 7'b1100011 && !JumpE) begin //current instruction is a branch
    if(RD[6:0] == 7'b1100011) begin
        PCBPU = PCF + {{20{RD[31]}}, RD[7], RD[30:25], RD[11:8], 1'b0}; //calculate destination address
        newBranch.branchAddr = PCF; 
        newBranch.targetAddr = PCF + {{20{RD[31]}}, RD[7], RD[30:25], RD[11:8], 1'b0};
        newBranch.direction = RD[31];
        if(RD[31] == 1'b0) begin //forward jump
            if(forwardJumpCounter >= 2'b10) begin //take forward jump
                PCBPUSrc = 1'b1;
                newBranch.prediction = 1'b1;
            end
            else begin //don't take forward jump
                PCBPUSrc = 1'b0;
                newBranch.prediction = 1'b0;
            end
        end
        else begin //backward jump
            if(backwardJumpCounter >= 2'b10) begin //take backward jump
                PCBPUSrc = 1'b1;
                newBranch.prediction = 1'b1;
            end
            else begin //don't take backward jump
                PCBPUSrc = 1'b0;
                newBranch.prediction = 1'b0;
            end
        end
        branch_queue.push_back(newBranch);
    end
    else begin //current instruction is not a branch instruction
        PCBPUSrc = 1'b0;
    end

    if(BranchE) begin //Branch instr 2 cycles later
        if(oldBranch.prediction == ZeroE) begin //If jump decision was correct
            flushBranch = 1'b0;
            if(oldBranch.direction == 1'b0)
                forwardJumpDecisionCorrect = 1'b1;
            if(oldBranch.direction == 1'b1)
                backwardJumpDecisionCorrect = 1'b1;
        end
        if(oldBranch.prediction != ZeroE) begin //If jump decision was incorrect
            flushBranch = 1'b1; //Flush pipeline
            PCBPUSrc = 1'b1;
            if(ZeroE == 0) //If jump should've not been taken
                PCBPU = oldBranch.branchAddr + 32'd4; //Jump to following instruction after branch
            else //If jump should've been taken
                PCBPU = oldBranch.targetAddr; //Jump to target address of branch
        end
        branch_queue.pop_front(); //Discard top element in queue 
    end
    else
        flushBranch = 1'b0;
end

always_ff @(negedge clk) begin
    if(BranchE) begin 
        oldBranch <= branch_queue[0];
        if (oldBranch.direction == 1'b0) begin
            forwardJumpCounter <= (ZeroE == oldBranch.prediction)
                ? ((forwardJumpCounter == 2'b11) ? 2'b11 : forwardJumpCounter + 1) //Increment forward counter
                : ((forwardJumpCounter == 2'b00) ? 2'b00 : forwardJumpCounter - 1); //Decrement forward counter
        end else begin
            backwardJumpCounter <= (ZeroE == oldBranch.prediction)
                ? ((backwardJumpCounter == 2'b11) ? 2'b11 : backwardJumpCounter + 1) //Increment backward counter
                : ((backwardJumpCounter == 2'b00) ? 2'b00 : backwardJumpCounter - 1); //Decrement forward counter
        end
    end
end

endmodule
