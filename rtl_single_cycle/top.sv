module top#(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0,
    output logic [WIDTH-1:0] a1,
    output logic [WIDTH-1:0] a7
);

    // PC
    logic [1:0] PCsrc
    logic [WIDTH-1:0] ExtImm;
    logic [WIDTH-1:0] PC;
    logic [WIDTH-1:0] PCnext;
    logic ZeroE;

    // instruction memory
    logic [WIDTH-1:0] addr;
    logic [WIDTH-1:0] instr;

    // sign extend
    logic [2:0] ImmSrc;

    // Register File
    logic [4:0] A1;
    logic [4:0] A2;
    logic [4:0] A3;
    logic WE3;
    logic [WIDTH-1:0] RD1;
    logic [WIDTH-1:0] RD2;


    // Control Unit
    logic  PCSrc;
    logic  [3:0] ALUctrl;
    logic  ALUSrc;
    logic  RegWrite;

    // ALU
    logic  [WIDTH-1:0] ALUResult;
    logic  Zero;
    logic  [WIDTH-1:0] SrcA;
    logic  [WIDTH-1:0] SrcB;

    //Memory Initialisation
    initial begin
        $readmemh("F1.mem", instruction_memory.mem);
    end 

    assign A1 = instr[19:15];       //rs1
    assign A2 = instr[24:20];       //rs2
    assign A3 = instr[11:7];        //rd
    assign addr = PC[WIDTH-1:0];

    assign SrcA = RD1;
    assign SrcB = (ALUSrc) ? ExtImm : RD2;


    pc program_counter (
        .clk(clk),
        .rst(rst),
        .PCPlus4F(PC + 4),
        .PCTarget(PC + ExtImm),
        .PCSrc(PCSrc),
        .ZeroE(ZeroE),
        .PCF(PCnext)
    );

    RegisterFile regfile (
        .clk(clk),
        .AD1(A1),
        .AD2(A2),
        .AD3(A3),
        .WE3(RegWrite),
        .WD3(ALUResult),
        .RD1(RD1),
        .RD2(RD2),
        .a0(a0),
        .a1(a1),
        .a7(a7)
    );

    instructionMemory instruction_memory (
        .addr(addr),
        .instr(instr)
    );

    controlUnit control_unit (
        .op(instr[6:0]),
        .funct3(instr[14:12]),
        .funct7(instr[31:25]),
        .PCSrc(PCSrc),
        .ALUControl(ALUctrl),
        .IMMSrc(ImmSrc),
        .RegWrite(RegWrite),
        .ALUSrc(ALUSrc),
        .zero(Zero)
    );

    signExtend sign_extend (
        .IMMSrc(ImmSrc),
        .ImmExt(ExtImm),
        .ImmInput(instr)
    );

    ALU ALU (
        .EQ(Zero),
        .ALUout(ALUResult),
        .ALUop1(SrcA),
        .ALUop2(SrcB),
        .ALUControl(ALUctrl)
    );

    // Update PC
    always_ff @(posedge clk) begin
        if (rst)
            PC <= 32'h0;
        else
            PC <= PCnext;
    end

endmodule