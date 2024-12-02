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
    output logic [1:0] ForwardAE,
    output logic [1:0] ForwardBE,
    output logic stall
);

    always_comb begin
        forwardAE = 2'b00;
        forwardBE = 2'b00;
        stall = 1'b0;

        /* forwardAE
            00: no forwarding
            01: forwarding from resultW (writeback stage)
            10: forwaring from ALUresult (execute stage)  */

        if (RegWriteW && (Rs1E == RdW)) begin
            ForwardAE = 2'b01;
        end else if (RegWriteM && (Rs1E == RdM)) begin
            ForwardBE = 2'b10;
        end

        // ForwardBE - same implementation (for second source register)

        if (RegWriteW && (Rs2E == RdW)) begin
            ForwardBE = 2'b01;
        end else if (RegWriteM && (Rs2E == RdM)) begin
            ForwardBE = 2'b10;
        end

        // stall for lw dependency

        if(MemReadE && ((RdE == Rs1E) || (RdE == Rs2E))) begin
            stall = 1'b1;
        end

        // flush instruction after lw data hazard?
    
    end
