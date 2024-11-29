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

// ALU output into Data Memory

    always_comb begin
        case (ALUctrl)
        4'b0000:    ALUResult = SrcA + SrcB;                                   // ADD 
        4'b0001:    ALUResult = SrcA - SrcB;                                   //SUBTRACT
        4'b0010:    ALUResult = SrcA ^ SrcB;                                   //XOR
        4'b0011:    ALUResult = SrcA | SrcB;                                   //OR
        4'b0100:    ALUResult = SrcA & SrcB;                                   //AND
        4'b0101:    ALUResult = SrcA << SrcB[4:0];                             // SLL
        4'b0110:    ALUResult = SrcA >> SrcB[4:0];                             //SRL
        4'b0111:    ALUResult = $signed(SrcA) >>> SrcB[4:0];                   //SRA
        4'b1000:    ALUResult = $signed(SrcA) < $signed(SrcB) ? 1 : 0;         // SLT
        4'b1001:    ALUResult = SrcA < SrcB ? 1 : 0;                           // SLTU
        default:    ALUResult = '0;
        endcase
    end

// Zero flag

    always_comb begin
        case (ALUctrl)
        4'b1010:    Zero = (SrcA == SrcB);                         //BEQ
        4'b0010:    Zero = (SrcA != SrcB);                         //BNE
        4'b0110:    Zero = ($signed(SrcA) < $signed(SrcB));        //BLT
        4'b0111:    Zero = ($signed(SrcA) >= $signed(SrcB));       //BGE
        4'b1000:    Zero = (SrcA < SrcB);                          //BLTU
        4'b1001:    Zero = (SrcA >= SrcB);                         //BGEU
        default:    Zero = 1'b0;
        endcase
    end
    
endmodule