module hazard_unit #(
    parameter WIDTH = 5
)(
    input logic [WIDTH-1:0] RdM,
    input logic [WIDTH-1:0] RdW,
    input logic [WIDTH-1:0] RdE,
    input logic [WIDTH-1:0] Rs1E,
    input logic [WIDTH-1:0] Rs2E,
    input logic RegWriteM,
    input logic RegWriteW,
    input logic MemReadE,
    input logic flushBranch,
    output logic [1:0] ForwardAE,
    output logic [1:0] ForwardBE,
    output logic stall,
    output logic flush
);

    always_comb begin
        ForwardAE = 2'b00;
        ForwardBE = 2'b00;
        stall = 1'b0;

        /* forwardAE
            00: no forwarding
            01: forwarding from resultW (writeback stage)
            10: forwaring from ALUresult (execute stage)  */

        //specify RdW or RdM not refer to $zero register
        if (RegWriteW && (Rs1E == RdW) && (RdW != 0)) begin
            ForwardAE = 2'b01;
        end else if (RegWriteM && (Rs1E == RdM) && (RdM != 0)) begin
            ForwardAE = 2'b10;
        end

        // ForwardBE - same implementation (for second source register)

        if (RegWriteW && (Rs2E == RdW) && (RdW !=0)) begin
            ForwardBE = 2'b01;
        end else if (RegWriteM && (Rs2E == RdM) && (RdM != 0)) begin
            ForwardBE = 2'b10;
        end

        // stall for lw dependency
        // stall = (MemReadE && ((RdE == Rs1E) || (RdE == Rs2E)));

        // flush if: (1) stall occurs, (2) branch instruction and prediction is wrong
        flush = stall || flushBranch;
    
    end

endmodule
