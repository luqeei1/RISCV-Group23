module instructionMemory #(
    parameter ADDRESS_WIDTH = 32,
              DATA_WIDTH = 32
)(
    input logic [31:0]                  PC,
    output logic [DATA_WIDTH-1:0] instr
);

logic [7:0] rom_array [32'hBFC00000:32'hBFC00FFF];


initial begin
    $display("Loading rom.");
    $readmemh("program.hex", rom_array);     
    $display("ROM loaded successfully.");
end

// Check if PC is in the valid range
logic ValidAddr;
assign ValidAddr = (PC[31:12] == 20'hBFC00); // Only accept addresses in 0xBFC00000–0xBFC00FFF

// Fetch instruction only if address is valid, 0 otherwise
assign instr = ValidAddr ? {{rom_array[PC + 3]}, {rom_array[PC + 2]}, {rom_array[PC + 1]}, {rom_array[PC]}} : 32'b0;

endmodule
