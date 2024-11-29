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
        2'b00: ALUControl = 4'b000; //add (lw,sw)
        2'b01: ALUControl = 4'b001; //subtract (beq)
        2'b10: begin //R type and I type (they share the same case)
            case (funct3)
                3'b000: begin
                    if({op, funct7} == 2'b11)
                        ALUControl = 4'b001; //subtract (sub)
                    else
                        ALUControl = 4'b000; //add (add)
                end
                3'b001: ALUControl = 4'b //shift left logical
                3'b010: ALUControl = 4'b101; //set less than (slt)
                3'b011: ALUControl = 4'b //set less than unsigned (sltu)
                3'b100: ALUControl = 4'b //xor
                3'b101: begin
                    if({op, funct7} == 2'b11)
                        ALUControl = 4'b //shift right arithmetic
                    else
                        ALUControl = 4'b //shift right logic
                end 
                3'b110: ALUControl = 4'b011; //or
                3'b111: ALUControl = 4'b010; //and
                default: ALUControl = 4'b111; //Invalid
            endcase
        end
        default: ALUControl = 4'b111; //Invalid
    endcase
end

endmodule 
