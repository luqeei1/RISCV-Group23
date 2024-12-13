module FF_FD #(
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic flush,
    input logic stall,
    input logic [DATA_WIDTH-1:0] RD,
    output logic [DATA_WIDTH-1:0] InstrD,
    input logic [DATA_WIDTH-1:0] PCF,
    output logic [DATA_WIDTH-1:0] PCD,
    input logic [DATA_WIDTH-1:0] PCPlus4F,
    output logic [DATA_WIDTH-1:0] PCPlus4D
);

always_ff @(posedge clk) begin
    if(flush)
        InstrD <= 32'h00007013; // NOP: andi 0x 0x 0
    else if (!stall) begin
        InstrD <= RD;
        PCD <= PCF;
        PCPlus4D <= PCPlus4F;
    end
end

endmodule
