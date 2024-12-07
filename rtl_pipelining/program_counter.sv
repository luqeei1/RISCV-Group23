module program_counter #(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    input logic PC,
    input logic stall,

    output logic [WIDTH-1:0] PCF
);

always_ff @(posedge clk) begin
    if(!stall) begin
        PCF <= rst ? 32'b0 : PC;
    end
end

endmodule
