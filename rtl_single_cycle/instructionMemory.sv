module instructionMemory #(
    parameter DATA_WIDTH = 32,
    parameter BYTE_WIDTH = 8
) (
    input  logic [31:0] addr,
    output logic [31:0] instr
);

logic [BYTE_WIDTH-1:0] mem [32'hbfc00fff:32'hbfc00000];
logic [11:0] word_addr;

initial begin
    $readmemh("F1.mem", mem);
    $display("INFO: Instruction memory loaded");
end

always_comb begin
    word_addr = addr[11:0];
    instr = {mem[word_addr+3], mem[word_addr+2], 
            mem[word_addr+1], mem[word_addr]};
end
    
endmodule