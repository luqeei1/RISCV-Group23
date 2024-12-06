module BPU #(
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic [DATA_WIDTH-1:0] RD,
    input logic [DATA_WIDTH-1:0] PCF,
    input logic ZeroE,
    input logic BranchE,
    output logic flushBranch,
    output logic [DATA_WIDTH-1:0] PCBPU,
    output logic PCBPUSrc
);

typedef struct {
    logic [31:0] branchAddr; //Branch address
    logic [31:0] targetAddr; //Branch target address
    logic direction; //Branch direction: 0 = forward, 1 = backward
    logic prediction; //Predicted outcome: 1 = taken, 0 = not taken
} BranchInfo;

BranchInfo branch_queue[$]; //Queue to store branch information
BranchInfo newBranch;
BranchInfo oldBranch;
logic [1:0] forwardJumpCounter; //2 bit forward counter
logic [1:0] backwardJumpCounter; //2 bit backward counter

always_ff @(posedge clk) begin
    if(RD[6:0] == 6'b1100011) begin //current instruction is a branch  
        newBranch.branchAddr <= PCF; 
        PCBPU <= PCF + {{20{RD[31]}}, RD[7], RD[30:25], RD[11:8], 1'b0}; //calculate destination address
        newBranch.targetAddr <= PCF + {{20{RD[31]}}, RD[7], RD[30:25], RD[11:8], 1'b0};
        newBranch.direction <= RD[31];
        if(RD[31] == 1'b0) begin //forward jump
            if(forwardJumpCounter == 2'b10 | 2'b11) begin //take forward jump
                PCBPUSrc <= 1'b1;
                newBranch.prediction <= 1'b1;
            end
            if(forwardJumpCounter == 2'b00 | 2'b01) begin //don't take forward jump
                PCBPUSrc <= 1'b0;
                newBranch.prediction <= 1'b0;
            end
        end
        if(RD[31] == 1'b1) begin //backward jump
            if(backwardJumpCounter == 2'b10 | 2'b11) begin //take backward jump
                PCBPUSrc <= 1'b1;
                newBranch.prediction <= 1'b1;
            end
            if(backwardJumpCounter == 2'b00 | 2'b01) begin //don't take backward jump
                PCBPUSrc <= 1'b0;
                newBranch.prediction <= 1'b0;
            end
        end
        branch_queue.push_back(newBranch);
    end
    else begin //current instruction is not a branch instruction
        PCBPUSrc <= 1'b0;
    end

    if(BranchE) begin //Branch instr 2 cycles later
        oldBranch <= queue[0];
        if(oldBranch.prediction == ZeroE) begin //If jump decision was correct
            flushBranch <= 1'b0;
            if(oldBranch.direction == 1'b0)
                forwardJumpCounter <= (forwardJumpCounter == 2'b11) ? 2'b11 : forwardJumpCounter + 1; //Increment forward jump counter
            if(oldBranch.direction == 1'b1)
                backwardJumpCounter <= (backwardJumpCounter == 2'b11) ? 2'b11 : backwardJumpCounter + 1; //Increment back jump counter
        end
        if(oldBranch.prediction != ZeroE) begin //If jump decision was incorrect
            flushBranch <= 1'b1; //Flush pipeline
            if(ZeroE == 0) //If jump should've not been taken
                PCBPU <= oldBranch.branchAddr + 32'd4; //Jump to following instruction after branch
            else //If jump should've been taken
                PCBPU <= oldBranch.targetAddr; //Jump to target address of branch
            if(oldBranch.direction == 1'b0)
                forwardJumpCounter <= (forwardJumpCounter == 2'b00) ? 2'b00 : forwardJumpCounter - 1; //Decrement forward jump counter
            if(oldBranch.direction == 1'b1)
                backwardJumpCounter <= (backwardJumpCounter == 2'b00) ? 2'b00 : backwardJumpCounter - 1; //Decrement back jump counter
        end
        queue.pop_front(); //Discard top element in queue
    end
    else
        flushBranch <= 1'b0;
end

endmodule
