module instruction_memory #(
    parameter WIDTH = 32
)(
    input logic [WIDTH-1:0]                  PC,
    output logic [WIDTH-1:0] instr
);

logic [7:0] rom_array [2**16 - 1 : 0];


initial begin
    $display("Loading rom.");
    $readmemh("InstructionFiles/Test1.hex", rom_array);     
    $display("ROM loaded successfully.");
end

always_comb begin
    instr = {{rom_array[PC + 3]}, {rom_array[PC + 2]}, {rom_array[PC + 1]}, {rom_array[PC]}};
end 

endmodule
