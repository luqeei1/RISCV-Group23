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

// Branch information struct
typedef struct packed {
    logic [31:0] branchAddr;  // Branch address
    logic [31:0] targetAddr;  // Branch target address
    logic direction;          // Branch direction: 0 = forward, 1 = backward
    logic prediction;         // Predicted outcome: 1 = taken, 0 = not taken
} BranchInfo;

// Queue to store branch information
localparam QUEUE_SIZE = 16;
BranchInfo branch_queue[QUEUE_SIZE];
logic [$clog2(QUEUE_SIZE)-1:0] queue_front;  // Index for front of queue
logic [$clog2(QUEUE_SIZE)-1:0] queue_back;   // Index for back of queue
logic [$clog2(QUEUE_SIZE):0] queue_count;    // Count of elements in queue

BranchInfo newBranch, oldBranch;
logic forwardJumpDecisionCorrect, backwardJumpDecisionCorrect;
logic [1:0] forwardJumpCounter, backwardJumpCounter;

initial begin
    forwardJumpCounter = 2'b10;
    backwardJumpCounter = 2'b10;
    queue_front = 0;
    queue_back = 0;
    queue_count = 0;
end

// Task for enqueue operation
task enqueue(input BranchInfo branch);
    if (queue_count < QUEUE_SIZE) begin
        branch_queue[queue_back] <= branch;
        queue_back <= (queue_back + 1) % QUEUE_SIZE;
        queue_count <= queue_count + 1;
    end else begin
        $display("Error: Branch queue is full");
    end
endtask

// Task for dequeue operation
task dequeue(output BranchInfo branch);
    if (queue_count > 0) begin
        branch <= branch_queue[queue_front];
        queue_front <= (queue_front + 1) % QUEUE_SIZE;
        queue_count <= queue_count - 1;
    end else begin
        $display("Error: Branch queue is empty");
        branch <= 'x;
    end
endtask

// Combination logic for predictions
always_comb begin
    if (RD[6:0] == 7'b1100011 && !JumpE) begin
        PCBPU = PCF + {{20{RD[31]}}, RD[7], RD[30:25], RD[11:8], 1'b0};
        newBranch.branchAddr = PCF;
        newBranch.targetAddr = PCBPU;
        newBranch.direction = RD[31];

        if (RD[31] == 1'b0) begin
            PCBPUSrc = (forwardJumpCounter >= 2'b10);
            newBranch.prediction = PCBPUSrc;
        end else begin
            PCBPUSrc = (backwardJumpCounter >= 2'b10);
            newBranch.prediction = PCBPUSrc;
        end
    end else begin
        PCBPUSrc = 0;
    end

    flushBranch = 0;
    if (BranchE && queue_count > 0) begin
        oldBranch = branch_queue[queue_front];

        if (oldBranch.prediction != ZeroE) begin
            flushBranch = 1;
            PCBPUSrc = 1;
            PCBPU = ZeroE ? oldBranch.targetAddr : oldBranch.branchAddr + 4;
        end
    end
end

// Sequential logic for counters and queue
always_ff @(posedge clk) begin
    if (RD[6:0] == 7'b1100011 && !JumpE)
        enqueue(newBranch);

    if (BranchE && queue_count > 0) begin
        dequeue(oldBranch);

        if (oldBranch.direction == 1'b0) begin
            forwardJumpCounter <= (ZeroE == oldBranch.prediction)
                ? forwardJumpCounter + 1
                : forwardJumpCounter - 1;
        end else begin
            backwardJumpCounter <= (ZeroE == oldBranch.prediction)
                ? backwardJumpCounter + 1
                : backwardJumpCounter - 1;
        end
    end
end

endmodule