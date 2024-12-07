module FF_FD #(
    parameter DATA_WIDTH = 32
)(
    input logic clk,
    input logic FlushD,
    input logic StallD,
    input logic [DATA_WIDTH-1:0] RD,
    output logic [DATA_WIDTH-1:0] InstrD,
    input logic [DATA_WIDTH-1:0] PCF,
    output logic [DATA_WIDTH-1:0] PCD,
    input logic [DATA_WIDTH-1:0] PCPlus4F,
    output logic [DATA_WIDTH-1:0] PCPlus4D
);

always_ff @(posedge clk) begin
    if(FlushD) begin
        InstrD <= 32'd0;
        PCD <= 32'd0;
        PCPlus4D <= 32'd0;
    end
    else if(StallD) begin
        InstrD <= InstrD;
        PCD <= PCD;
        PCPlus4D <= PCPlus4D;
    end
    else begin
        InstrD <= RD;
        PCD <= PCF;
        PCPlus4D <= PCPlus4F;
    end
end

endmodule
