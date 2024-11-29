// add once done

module alu #(
    parameter CONTROL_WIDTH = 4,
    parameter DATA_WIDTH = 32
) (
    input logic     [DATA_WIDTH-1:0]   SrcA,
    input logic     [DATA_WIDTH-1:0]   SrcB,
    input logic     [CONTROL_WIDTH-1:0] ALUctrl,
    output logic    [DATA_WIDTH-1:0]   ALUResult,
    output logic                        Zero
);


endmodule