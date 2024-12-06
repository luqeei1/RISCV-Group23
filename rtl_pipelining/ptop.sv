/* verilator lint_off UNOPTFLAT */
/* verilator lint_off UNUSED */
/* verilator lint_off CASEINCOMPLETE */
module ptop#(
    parameter WIDTH = 32    
)(
    input logic clk,
    input logic rst,
    input logic trigger,
    output logic [WIDTH-1:0] a0,
    output logic [WIDTH-1:0] a1,
    output logic [WIDTH-1:0] a2,
    output logic [WIDTH-1:0] a3,
    output logic [WIDTH-1:0] a4,
    output logic [WIDTH-1:0] a5,
    output logic [WIDTH-1:0] a6,
    output logic [WIDTH-1:0] a7,
    output logic [WIDTH-1:0] t0,
    output logic [WIDTH-1:0] t1,
    output logic [WIDTH-1:0] t2,
    output logic [WIDTH-1:0] t3,
    output logic [WIDTH-1:0] t4,
    output logic [WIDTH-1:0] t5,
    output logic [WIDTH-1:0] t6,
    output logic [WIDTH-1:0] s0,
    output logic [WIDTH-1:0] s1,
    output logic [WIDTH-1:0] s2,
    output logic [WIDTH-1:0] s3,
    output logic [WIDTH-1:0] s4,
    output logic [WIDTH-1:0] s5,
    output logic [WIDTH-1:0] s6,
    output logic [WIDTH-1:0] s7,
    output logic [WIDTH-1:0] s8,
    output logic [WIDTH-1:0] s9,
    output logic [WIDTH-1:0] s10,
    output logic [WIDTH-1:0] s11
);
    // Pipeline Registers
    // FF_FD
    logic [WIDTH-1:0] PCF, PCPlus4F;
    logic [WIDTH-1:0] InstrF;
    logic [WIDTH-1:0] PCF_D, PCPlus4F_D;
    logic [WIDTH-1:0] InstrD;

    // FF_DE
    logic [WIDTH-1:0] RD1E, RD2E;
    logic [WIDTH-1:0] PCE, PCPlus4E;
    logic [4:0] RdE;
    logic [WIDTH-1:0] ImmExtE;
    logic RegWriteE, ALUSrcE, MemWriteE;
    logic [1:0] ResultSrcE;
    logic [3:0] ALUCtrlE;
    logic [2:0] modeBUE;

    // FF_EM
    logic [WIDTH-1:0] ALUResultM;
    logic [WIDTH-1:0] WriteDataM;
    logic [4:0] RdM;
    logic RegWriteM, MemWriteM;
    logic [1:0] ResultSrcM;
    logic [2:0] modeBUM;
    logic [WIDTH-1:0] PCPlus4M;

    // FF_MW
    logic [WIDTH-1:0] ALUResultW;
    logic [WIDTH-1:0] ReadDataW;
    logic [4:0] RdW;
    logic RegWriteW;
    logic [1:0] ResultSrcW;
    logic [WIDTH-1:0] PCPlus4W;

    // Control signals
    logic [1:0] PCSrc;
    logic [WIDTH-1:0] ExtImm;
    logic [2:0] ImmSrc;
    logic RegWrite;
    logic [3:0] ALUctrl;
    logic ALUSrc;
    logic [1:0] ResultSrc;
    logic MemWrite;
    logic [2:0] modeBU;
    logic Zero;

    // Datapath signals
    logic [WIDTH-1:0] RD1, RD2;
    logic [WIDTH-1:0] ALUResult;
    logic [WIDTH-1:0] RD;
    logic [WIDTH-1:0] Result;
    logic [WIDTH-1:0] SrcA, SrcB;

    // Pipeline Register
    always_ff @(posedge clk) begin
        if (rst) begin
            // Reset all pipeline registers
            {PCF_D, InstrD, PCPlus4F_D} <= '0;
            {RD1E, RD2E, PCE, RdE, ImmExtE, RegWriteE, ALUSrcE, MemWriteE, ResultSrcE, ALUCtrlE, modeBUE, PCPlus4E} <= '0;
            {ALUResultM, WriteDataM, RdM, RegWriteM, MemWriteM, ResultSrcM, modeBUM, PCPlus4M} <= '0;
            {ALUResultW, ReadDataW, RdW, RegWriteW, ResultSrcW, PCPlus4W} <= '0;
        end else begin
            // FD Register
            PCF_D <= PCF;
            InstrD <= InstrF;
            PCPlus4F_D <= PCPlus4F;

            // DE Register
            RD1E <= RD1;
            RD2E <= RD2;
            PCE <= PCF_D;
            RdE <= InstrD[11:7];
            ImmExtE <= ExtImm;
            RegWriteE <= RegWrite;
            ALUSrcE <= ALUSrc;
            MemWriteE <= MemWrite;
            ResultSrcE <= ResultSrc;
            ALUCtrlE <= ALUctrl;
            modeBUE <= modeBU;
            PCPlus4E <= PCPlus4F_D;

            // EM Register
            ALUResultM <= ALUResult;
            WriteDataM <= RD2E;
            RdM <= RdE;
            RegWriteM <= RegWriteE;
            MemWriteM <= MemWriteE;
            ResultSrcM <= ResultSrcE;
            modeBUM <= modeBUE;
            PCPlus4M <= PCPlus4E;

            // MW Register
            ALUResultW <= ALUResultM;
            ReadDataW <= RD;
            RdW <= RdM;
            RegWriteW <= RegWriteM;
            ResultSrcW <= ResultSrcM;
            PCPlus4W <= PCPlus4M;
        end
    end

    // Program Counter
    program_counter pc (
        .clk(clk),
        .rst(rst),
        .PCPlus4F(PCPlus4F),
        .PCTarget(PCE + ImmExtE),  // Branch/Jump target from Execute stage
        .PCSrc(PCSrc),
        .ZeroE(Zero),
        .ALUResult(ALUResult),
        .PCF(PCF)
    );

    // Instruction Memory
    instructionMemory instruction_memory (
        .instr(InstrF),
        .PC(PCF)
    );

    // Register File
    regfile regfile (
        .clk(clk),
        .AD1(InstrD[19:15]),  // rs1
        .AD2(InstrD[24:20]),  // rs2
        .AD3(RdW),            // Write register from Writeback stage
        .WE3(RegWriteW),
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
        .t0(t0), 
        .t1(t1), 
        .t2(t2), 
        .t3(t3),
        .t4(t4),
        .t5(t5), 
        .t6(t6),
        .s0(s0), 
        .s1(s1), 
        .s2(s2), 
        .s3(s3),
        .s4(s4), 
        .s5(s5), 
        .s6(s6), 
        .s7(s7),
        .s8(s8), 
        .s9(s9), 
        .s10(s10), 
        .s11(s11)
    );

    // Control Unit
    controlUnit control_unit (
        .Instr(InstrD),
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
        .ImmInput(InstrD),
        .ImmExt(ExtImm)
    );

    // ALU
    alu alu (
        .Zero(Zero),
        .ALUResult(ALUResult),
        .SrcA(RD1E),
        .SrcB(ALUSrcE ? ImmExtE : RD2E),
        .ALUctrl(ALUCtrlE)
    );

    // Data Memory
    data_memory data_memory (
        .clk(clk),
        .WE(MemWriteM),
        .modeBU(modeBUM),
        .ResultSrc(ResultSrcM),
        .A(ALUResultM),
        .WD(WriteDataM),
        .trigger(trigger),
        .RD(RD),
        .Result(Result)
    );

    // Result multiplexer for RegFile write data
    mux3 regfile_mux(
        .sel(ResultSrcW),
        .in0(ALUResultW),
        .in1(ReadDataW),
        .in2(PCPlus4W),
        .out(Result)
    );

endmodule
