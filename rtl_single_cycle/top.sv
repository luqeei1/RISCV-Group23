/* verilator lint_off UNOPTFLAT */
/* verilator lint_off UNUSED */
/* verilator lint_off CASEINCOMPLETE */
module top#(
    parameter WIDTH = 32
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0,
    output logic [WIDTH-1:0] a1,
    output logic [WIDTH-1:0]       a2,
    output logic [WIDTH-1:0]       a3,
    output logic [WIDTH-1:0]       a4,
    output logic [WIDTH-1:0]       a5,
    output logic [WIDTH-1:0]       a6,
    output logic [WIDTH-1:0]       a7,
    output logic [WIDTH-1:0]       a8,
    output logic [WIDTH-1:0]       a9,
    output logic [WIDTH-1:0]       a10,
    output logic [WIDTH-1:0]       a11,
    output logic [WIDTH-1:0]       a12,
    output logic [WIDTH-1:0]       a13,
    output logic [WIDTH-1:0]       a14,
    output logic [WIDTH-1:0]       a15,
    output logic [WIDTH-1:0]       a16,
    output logic [WIDTH-1:0]       a17,
    output logic [WIDTH-1:0]       a18,
    output logic [WIDTH-1:0]       a19,
    output logic [WIDTH-1:0]       a20,
    output logic [WIDTH-1:0]       t1

);

    // PC signals
    logic [1:0] PCSrc;
    logic [WIDTH-1:0] ExtImm;
    logic [WIDTH-1:0] PC;

    // instruction memory signals
    logic [WIDTH-1:0] addr;
    logic [WIDTH-1:0] instr;

    // sign extend signal
    logic [2:0] ImmSrc;

    // Register File signals
    logic [4:0] A1;
    logic [4:0] A2;
    logic [4:0] A3;
    logic RegWrite;
    logic [WIDTH-1:0] RD1;
    logic [WIDTH-1:0] RD2;


    // Control Unit
    logic  [3:0] ALUctrl;
    logic  ALUSrc;
    logic  [1:0] ResultSrc;
    logic  MemWrite;
    logic  [2:0] modeBU;

    // ALU
    logic  [WIDTH-1:0] ALUResult;
    logic  Zero;
    logic  [WIDTH-1:0] SrcA;
    logic  [WIDTH-1:0] SrcB;

    // Data Memory
    logic [WIDTH-1:0] RD;
    logic [WIDTH-1:0] Result;

    assign A1 = instr[19:15];       //rs1
    assign A2 = instr[24:20];       //rs2
    assign A3 = instr[11:7];        //rd
    assign addr = PC[WIDTH-1:0];

    assign SrcA = RD1;
    assign SrcB = (ALUSrc) ? ExtImm : RD2;

    // Result multiplexer for RegFile write data
    mux3 regfile_mux(
        .sel(ResultSrc),
        .in0(ALUResult),
        .in1(RD),
        .in2(PC+4),
        .out(Result)
    );

    // Program Counter
    program_counter pc (
        .clk(clk),
        .rst(rst),
        .PCPlus4F(PC + 4),
        .PCTarget(PC + ExtImm),
        .PCSrc(PCSrc),
        .ZeroE(Zero),
        .ALUResult(ALUResult),
        .PCF(PC)
    );

    //Register File
    regfile regfile (
        .clk(clk),
        .AD1(A1),
        .AD2(A2),
        .AD3(A3),
        .WE3(RegWrite),
        .WD3(Result),
        .RD1(RD1),
        .RD2(RD2),
        .a0(a0),
        .a1(a1),
        .a2(a2),
        .a3(a3),
        .a4(a4),
        .a5(a5),
        .a6(a6),
        .a7(a7),
        .a8(a8),
        .a9(a9),
        .a10(a10),
        .a11(a11),
        .a12(a12),
        .a13(a13),
        .a14(a14),
        .a15(a15),
        .a16(a16),
        .a17(a17),
        .a18(a18),
        .a19(a19),
        .a20(a20),
        .t1(t1)
    );

    // Instruction Memory
    instructionMemory instruction_memory (
        .instr(instr),
        .PC(PC)
    );

    // Control Unit
    controlUnit control_unit (
        .Instr(instr),
        .PCSrc(PCSrc),
        .ResultSrc(ResultSrc),
        .MemWrite(MemWrite),
        .ALUCtrl(ALUctrl),
        .ALUSrc(ALUSrc),
        .ImmSrc(ImmSrc),
        .RegWrite(RegWrite),
        .modeBU(modeBU)
    );

    // Sign Extend
    signExtend sign_extend (
        .ImmSrc(ImmSrc),
        .ImmInput(instr),
        .ImmExt(ExtImm)
    );

    // ALU
    alu alu (
        .Zero(Zero),
        .ALUResult(ALUResult),
        .SrcA(SrcA),
        .SrcB(SrcB),
        .ALUctrl(ALUctrl)
    );

    // Data Memory
    data_memory data_memory (
        .clk(clk),
        .WE(MemWrite),
        .modeBU(modeBU),
        .ResultSrc(ResultSrc),
        .A(ALUResult),
        .WD(RD2),
        .RD(RD),
        .Result(Result)
    );

endmodule
