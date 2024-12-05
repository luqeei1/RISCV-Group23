module ALUDecoder #(
) (
    input logic [1:0] ALUOp,
    input logic op,
    input logic [2:0] funct3,
    input logic funct7,
    output logic [3:0] ALUControl
);

always_comb begin
    case (ALUOp)
        2'b00: ALUControl = 4'b0000; //add (S-type, Load-type)

        2'b01: begin //B-type
            case (funct3)
                3'b000: ALUControl = 4'b1010; //BEQ
                3'b001: ALUControl = 4'b0010; //BNE
                3'b100: ALUControl = 4'b0110; //BLT
                3'b101: ALUControl = 4'b0111; //BGE
                3'b110: ALUControl = 4'b1000; //BLTU
                3'b111: ALUControl = 4'b1001; //BGEU
                default: ALUControl = 4'b1111;
            endcase
        end

        2'b10: begin //R type and I type (they share the same case)
            case (funct3)
                3'b000: begin
                    if({op, funct7} == 2'b11)
                        ALUControl = 4'b0001; //subtract (sub)
                    else
                        ALUControl = 4'b0000; //add (add)
                end
                3'b001: ALUControl = 4'b0101; //shift left logical
                3'b010: ALUControl = 4'b1000; //set less than (slt)
                3'b011: ALUControl = 4'b1001; //set less than unsigned (sltu)
                3'b100: ALUControl = 4'b0010; //xor
                3'b101: begin
                    if({op, funct7} == 2'b11)
                        ALUControl = 4'b0111; //shift right arithmetic
                    else
                        ALUControl = 4'b0110; //shift right logic
                end 
                3'b110: ALUControl = 4'b0011; //or
                3'b111: ALUControl = 4'b0100; //and
                default: ALUControl = 4'b1111; //Invalid
            endcase
        end

        default: ALUControl = 4'b1111; //Invalid
    endcase
end

endmodule 
