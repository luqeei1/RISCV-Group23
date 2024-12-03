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

logic [12:0] queue[$]; // Each element is 13 bits wide
logic [12:0] jumpData;
logic [1:0] forwardJumpCounter;
logic [1:0] backwardJumpCounter;

always_ff @(posedge clk) begin
    if(RD[6:0] == 6'b1100011) begin //current instruction is a branch  
        PCBPU <= PCF + {{20{RD[31]}}, RD[7], RD[30:25], RD[11:8], 1'b0}; //calculate next PC for branching
        if(RD[31] == 0) begin //forward jump
            if(forwardJumpCounter == 2'b10 | 2'b11) begin //take forward jump
                PCBPUSrc <= 1'b1;
                queue.push_back({1'b1, RD[31], RD[7], RD[30:25], RD[11:8]});
            end
            if(forwardJumpCounter == 2'b00 | 2'b01) begin //don't take forward jump
                PCBPUSrc <= 1'b0;
                queue.push_back({1'b0, RD[31], RD[7], RD[30:25], RD[11:8]});
            end
        end
        if(RD[31] == 1) begin //backward jump
            if(backwardJumpCounter == 2'b10 | 2'b11) begin //take backward jump
                PCBPUSrc <= 1'b1;
                queue.push_back({1'b1, RD[31], RD[7], RD[30:25], RD[11:8]});
            end
            if(backwardJumpCounter == 2'b00 | 2'b01) begin //don't take backward jump
                PCBPUSrc <= 1'b0;
                queue.push_back({1'b0, RD[31], RD[7], RD[30:25], RD[11:8]});
            end
        end
    end
    else begin //current instruction is not a branch instruction
        PCBPUSrc <= 1'b0;
        Flush <= 1'b0;
    end

    if(BranchE) begin //Branch instr 2 cycles later
        jumpDecision <= queue[0];
        if(jumpDecision[12] == ZeroE) begin //If jump decision was correct
            Flush <= 1'b0;
            if(jumpDecision[11] == 0)
                forwardJumpCounter <= (forwardJumpCounter == 2'b11) ? 2'b11 : forwardJumpCounter + 1; //Increment forward jump counter
            if(jumpDecision[11] == 1)
                backwardJumpCounter <= (backwardJumpCounter == 2'b11) ? 2'b11 : backwardJumpCounter + 1; //Increment back jump counter
        end
        if(jumpDecision[12] != ZeroE) begin //If jump decision was incorrect
            Flush <= 1'b1; //Flush pipeline
            PCBPU <= PCF - {{20{RD[31]}}, RD[7], RD[30:25], RD[11:8], 1'b0} //Reverse jump by jump offset + 8
            if(jumpDecision[11] == 0)
                forwardJumpCounter <= (forwardJumpCounter == 2'b00) ? 2'b00 : forwardJumpCounter - 1; //Decrement forward jump counter
            if(jumpDecision[11] == 1)
                backwardJumpCounter <= (backwardJumpCounter == 2'b00) ? 2'b00 : backwardJumpCounter - 1; //Decrement back jump counter
        end
        queue.pop_front(); //Discard top element in queue
    end
    else
        PCBPUSrc <= 1'b0;
        Flush <= 1'b0;
end


//Add code so that PCBPUSrc goes to 0 after one clock cycle

endmodule
