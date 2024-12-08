/* verilator lint_off UNOPTFLAT */
/* verilator lint_off UNUSED */
/* verilator lint_off CASEINCOMPLETE */
/* verilator lint_off PINMISSING */
/* verilator lint_off MULTITOP */ 

module top#(
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
    logic [WIDTH-1:0] PC;
    logic [WIDTH-1:0] InstrF;
    logic [WIDTH-1:0] PCD, PCPlus4D;
    logic [WIDTH-1:0] InstrD;

    // FF_DE
    logic [WIDTH-1:0] RD1E, RD2E;
    logic [WIDTH-1:0] PCE, PCPlus4E;
    logic RegWriteE, ALUSrcE, MemWriteE;
    logic [1:0] ResultSrcE;
    logic [3:0] ALUControlE;
    logic [2:0] modeBUE;
    logic [WIDTH-1:0] WriteDataE;

    // FF_EM
    logic RegWriteM, MemWriteM;
    logic [1:0] ResultSrcM;
    logic [2:0] modeAddrM;

    // FF_MW
    logic [WIDTH-1:0] ReadDataW;
    logic RegWriteW;
    logic [1:0] ResultSrcW;
    logic [WIDTH-1:0] PCPlus4W;

    // Control signals
    logic [WIDTH-1:0] ExtImmD;
    logic [WIDTH-1:0] ExtImmE;
    logic [2:0] ImmSrc;
    logic RegWriteD;
    logic [3:0] ALUControlD;
    logic ALUSrcD;
    logic [1:0] ResultSrcD;
    logic MemWriteD;
    logic [2:0] modeBU;
    logic ZeroE;
    logic MemReadD;
    logic MemReadE;

    logic JumpD;
    logic JumpE;
    logic BranchD;
    logic BranchE;

    // Datapath signals
    logic [WIDTH-1:0] RD1, RD2;
    logic [WIDTH-1:0] RD;
    logic [WIDTH-1:0] Result;
    logic [WIDTH-1:0] SrcA, SrcB;

    logic [4:0] Rs1D;
    logic [4:0] Rs2D;
    logic [4:0] RdD;
    logic [4:0] Rs1E;
    logic [4:0] Rs2E;
    logic [WIDTH-1:0] ResultW;
    logic [WIDTH-1:0] SrcBE;

    // Hazard Unit
    logic [1:0] ForwardAE;
    logic [1:0] ForwardBE;
    logic flush;
    logic stall;

    // Branch Prediction Unit
    logic flushBranch;
    logic BPU_Src;
    logic [WIDTH-1:0] PC_predict;
    logic [WIDTH-1:0] PC_next;

    assign PCPlus4F = PCF + 4;
    assign Rs1D = InstrD[19:15];
    assign Rs2D = InstrD[24:20];
    assign RdD = InstrD[11:7];

    // Hazard Unit
    hazard_unit hazard_unit (
        .RdM(RdM),
        .RdW(RdW),
        .RdE(RdE),
        .Rs1E(Rs1E),
        .Rs2E(Rs2E),
        .RegWriteM(RegWriteM),
        .RegWriteW(RegWriteW),
        .MemReadE(MemReadE),
        .flushBranch(flushBranch),
        .ForwardAE(ForwardAE),
        .ForwardBE(ForwardBE),
        .stall(stall),
        .flush(flush)
    );

    BPU branch_prediction_unit (
        .clk(clk),
        .RD(RD),
        .PCF(PCF),
        .ZeroE(Zero),
        .BranchE(BranchE),
        
        .flushBranch(flushBranch),
        .PCBPU(PC_predict),
        .PCBPUSrc(BPU_Src)
    );

    // Program Counter
    PC_mux PC_mux (
        .PCPlus4F(PCPlus4F),
        .PCTarget(PCE + ExtImmE),  // Branch/Jump target from Execute stage
        .JumpE(JumpE),
        .BranchE(BranchE),
        .ZeroE(ZeroE),
        .ALUResult(ALUResult),
        .PC(PC)
    );

    mux2 BPU_mux (
        .sel(BPU_Src),
        .in0(PC),
        .in1(PC_predict),
        .out(PC_next)
    );

    program_counter program_counter (
        .clk(clk),
        .rst(rst),
        .PC(PC_next),
        .stall(stall),
        .PCF(PCF)
    );

    // Instruction Memory
    instruction_memory instruction_memory (
        .instr(InstrF),
        .PC(PCF)
    );

    regfile regfile (
        .clk(clk),
        .AD1(Rs1D),  // rs1
        .AD2(Rs2D),  // rs2
        .AD3(RdW),            // Write register from Writeback stage
        .WE3(RegWriteW),
        .WD3(ResultW),
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
        .InstrD(InstrD),
        .InstrD(InstrD),
        .ResultSrcD(ResultSrcD),
        .MemWriteD(MemWriteD),
        .ALUControlD(ALUControlD),
        .ALUSrcD(ALUSrcD),
        .ImmSrcD(ImmSrc),
        .RegWriteD(RegWriteD),
        .modeBUD(modeBU),
        .BranchD(BranchD),
        .JumpD(JumpD),
        .MemReadD(MemReadD)
    );

    // Sign Extend
    signExtend sign_extend (
        .ImmSrc(ImmSrcD),
        .ImmInput(InstrD),
        .ImmExt(ExtImmD)
        .ImmExt(ExtImmD)
    );

    mux3 forwardAE_mux (
        .sel(ForwardAE),
        .in0(RD1E),
        .in1(ResultW),
        .in2(ALUResultM),
        
        .out(SrcA)
    );

    mux3 forwardBE_mux (
        .sel(ForwardBE),
        .in0(RD2E),
        .in1(ResultW),
        .in2(ALUResultM),

        .out(WriteDataE)
    );

    mux2 alu_SrcBE_mux (
        .sel(ALUSrcE),
        .in0(WriteDataE),
        .in1(ExtImmE),

        .out(SrcBE)
    );

    // ALU
    alu alu (
        .ZeroE(Zero),
        .ALUResult(ALUResultE),
        .SrcA(SrcAE),
        .SrcB(ALUSrcE ? ExtImmE : RD2E),
        .ALUctrl(ALUControlE)
    );

    // Data Memory
    data_memory data_memory (
        .clk(clk),
        .WE(MemWriteM),
        .modeAddr(modeAddrM),
        .ResultSrc(ResultSrcM),
        .A(ALUResultM),
        .WD(WriteDataM),
        .trigger(trigger),
        .RD(RD),
        .Result(ResultW)
    );

    // Result multiplexer for RegFile write data
    mux3 regfile_mux(
        .sel(ResultSrcW),
        .in0(ALUResultW),
        .in1(ReadDataW),
        .in2(PCPlus4W),
        
        .out(Result)
    );

    FF_FD pipeline_FD(
        .clk(clk),
        .RD(InstrF),
        .PCF(PCF),
        .PCPlus4F(PCPlus4F),
        .flush(flush),
        .stall(stall),

        .InstrD(InstrD),
        .PCD(PCD),
        .PCPlus4D(PCPlus4D)
    );

    FF_DE pipeline_DE (
        .clk(clk),
        .flush(flush),
        .RegWriteD(RegWriteD),
        .ResultSrcD(ResultSrcD),
        .MemWriteD(MemWriteD),
        .JumpD(JumpD),
        .BranchD(BranchD),
        .ALUControlD(ALUControlD),
        .ALUSrcD(ALUSrcD),
        .RD1(RD1),
        .RD2(RD2),
        .PCD(PCD),
        .Rs1D(Rs1D),
        .Rs2D(Rs2D),
        .RdD(RdD),
        .ExtImmD(ExtImmD),
        .PCPlus4D(PCPlus4D),
        .MemReadD(MemReadD),
        .modeAddrD(modeAddrD),

        .RegWriteE(RegWriteE),
        .ResultSrcE(ResultSrcE),
        .MemWriteE(MemWriteE),
        .JumpE(JumpE),
        .BranchE(BranchE),
        .ALUControlE(ALUControlE),
        .ALUSrcE(ALUSrcE),
        .RD1E(RD1E),
        .RD2E(RD2E),
        .PCE(PCE),
        .Rs1E(Rs1E),
        .Rs2E(Rs2E),
        .RdE(RdE),
        .ExtImmE(ExtImmE),
        .PCPlus4E(PCPlus4E),
        .modeAddrE(modeAddrE),
        .MemReadE(MemReadE)
    );

    FF_EM pipeline_EM (
       .clk(clk),
       .RegWriteE(RegWriteE),
       .ResultSrcE(ResultSrcE),
       .MemWriteE(MemWriteE),
       .ALUResultE(ALUResultE),
       .WriteDataE(WriteDataE),
       .RdE(RdE),
       .PCPlus4E(PCPlus4E),
       .modeAddrE(modeAddrE),

       .RegWriteM(RegWriteM),
       .ResultSrcM(ResultSrcM),
       .MemWriteM(MemWriteM),
       .ALUResultM(ALUResultM),
       .WriteDataM(WriteDataM),
       .RdM(RdM),
       .PCPlus4M(PCPlus4M),
       .modeAddrM(modeAddrM)
    );

    FF_MW pipeline_MW (
        .clk(clk),
        .RegWriteM(RegWriteM),
        .ResultSrcM(ResultSrcM),
        .ALUResultM(ALUResultM),
        .RD(RD),
        .RdM(RdM),
        .PCPlus4M(PCPlus4M),

        .RegWriteW(RegWriteW),
        .ResultSrcW(ResultSrcW),
        .ALUResultW(ALUResultW),
        .ReadDataW(ReadDataW),
        .RdW(RdW),
        .PCPlus4W(PCPlus4W)
    );

endmodule
