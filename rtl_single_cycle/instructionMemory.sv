module instructionMemory #(
    parameter ADDRESS_WIDTH = 32,
              DATA_WIDTH = 32
)(
    input logic [ADDRESS_WIDTH-1:0]                  PC,
    output logic [DATA_WIDTH-1:0] instr
);

logic [7:0] rom_array [2**12 - 1 : 0];


initial begin
    $display("Loading rom.");
    $readmemh("pdf.hex", rom_array);     
    $display("ROM loaded successfully.");
end

always_comb begin
    instr = {{rom_array[PC[11:0] + 3]}, {rom_array[PC[11:0] + 2]}, {rom_array[PC[11:0] + 1]}, {rom_array[PC[11:0]]}};
end 

endmodule
