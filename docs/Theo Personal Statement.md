# Theo's Personal Statement of Contributions

For Lab4 labs, I chose to take charge of the control unit, sign extension module, and the instruction memory. This proved to be a very simple task with little issues, as we were given simple assembly language programs to run that required only a small number of instructions of the RV32I instruction set. I worked with Sid the most, who was responsible for the ALU. I needed to coordinate with him how the ALU decoder part of the control unit would interact with the ALU, and to make sure the right signals would be sent out of the ALU decoder, so that the right instructions would be executed. I helped with my own part in the top file, adding the necessary interconnecting wires and making sure signal names were all the same. Here are the following control signals sent by the control unit to the ALU to execute the correct commands:

<br>

| Control Signal | Operation                | Description                                      |
| --------------- | ------------------------ | ------------------------------------------------ |
| `4'b0000`       | Addition (`SrcA + SrcB`)      | Adds the two input operands.                     |
| `4'b0001`       | Subtraction (`SrcA - SrcB`)   | Subtracts the second operand from the first.     |
| `4'b0101`       | Left Shift (`SrcA << SrcB`)   | Left-shifts the first operand by the second operand number of bits. |
| `4'b1000`       | Set Less Than (`SrcA < SrcB`) | Sets `AluResult` to 32'b0 if the first operand is less than the second, otherwise 32'b1. |
| `4'b1001`       | Unsigned Set Less Than (`SrcA < SrcB`) | Sets `oAluResult` to 32'b0 if the first operand is less than the second (unsigned), otherwise 32'b1. |
| `4'b0010`       | XOR (`SrcA ^ SrcB`)          | Performs bitwise XOR on the two operands.       |
| `4'b0110`       | Right Shift Logical (`SrcA >> SrcB`) | Right-shifts the first operand by the second operand number of bits (logical shift). |
| `4'b0111`       | Right Shift Arithmetic (`SrcA >>> SrcB`) | Right-shifts the first operand by the second operand number of bits (arithmetic shift). |
| `4'b0011`       | OR (`SrcA \| SrcB`)         | Performs bitwise OR on the two operands.        |
| `4'b0100`       | AND (`SrcA & SrcB`)         | Performs bitwise AND on the two operands.       |

<br>
I also have an default signal in case of an invalid instruction input into the control unit. This will send a ALUControl signal of 4'b1111, which the ALU will be able to decode into an invalid signal, and then proceed to do nothing. We followed a similar approach to branches, whereby the ALUDecoder would send the same signal (ALUControl) to control the ALU to perform certain branch operations to determine if the branch condition is met or not. We use a "zero flag", although albeit the name, only indicates if the branch condition was met. We then use this branch flag in my Branch Prediciton Unit. Here are our following branch AluControl signals: 

<br>

| Control Signal | Operation                | Description                                      |
| --------------- | ------------------------ | ------------------------------------------------ |
| `4'b1010`       | BEQ (`SrcA == SrcB`)      | Zero flag high if equal             |
| `4'b1011`       | BNE (`SrcA != SrcB`)   | Zero flag high if not equal  |
| `4'b1100`       | BLT (`SrcA < SrcB`)   | Zero flag high if less than |
| `4'b1101`       | BGE (`SrcA >= SrcB`) | Zero flag high if greater than |
| `4'b1110`       | BLTU (`SrcA < SrcB`) (U) | Zero flag high if less than (unsigned) |
| `4'b1111`       | BGEU (`SrcA >= SrcB` (U)) | Zero flag high if greater than (unsigned)  |
| `4'b0000`       | INVALID | Invalid signal |

<br>

For the sign extension unit, I followed the instruction set information given by: https://www.cs.sfu.ca/~ashriram/Courses/CS295/assets/notebooks/RISCV/RISCV_CARD.pdf. This gave me information about which instructions have immediate constants to be sign extended and how they are structured. I-type, S-type, B-type, U-type, JAL, and JALR all use immediate constants and they are all different in where their MSB is located and how the rest of the immediate constant is stored. I had to be careful to not make errors in concatenation to prevent future debugging which can prove tiresome. Although in the initial programs given to us, not many instructions were required, I decided to implement all the instruction types in the sign extension unit anyways to save myself time in the future. The sign extension unit takes an input called ImmSrc, which comes from my control unit. Although initially only 2 bits wide to accomodate the R-type, I-type and J-type instructions, I had to extend it to 3 bits to accomodate the ability to indicate which of the 6 different instructions to sign extend in the full RV32I instruction set. Here is the following module: 
<br />
![Screenshot 2024-12-13 220754](https://github.com/user-attachments/assets/004ff73d-55d6-4c61-be30-e7193c256994)
<br>

 **rtl_single_cycle:**  
 </br>

o   Worked on the ALU 
</br>
o   Worked on the Register File 
</br>
o   Worked on the Top File
</br>
o   I also helped to debug many files (discovering errors especially when writing the top.sv files and running tests), primarily Instruction Memory and Control Unit
</br>
o   Also made changes to every other module at different points, a full summary of which can be found in my commit history
</br>

**rtl_pipelining:**

o   Worked on the ALU
</br>
o   Worked on the Register File
</br>
o   Worked on the Top File
o   Helped to debug the Branch Prediction Unit (BPU) and also the top files

# Explanations of Contributions to the RV32I Processors 
## F1.s Assembly Code
I was the main contributor to this assembly code and planned and tested this. The program was split into various parts, which I explain below.

```
main:
        addi    a0, zero, 0                  
        li      a4, 0xff                     
        li      a1, 0xABC
```
The main function involved loading ```0xff``` into register ```a4```, and ```0xABC``` into register ```a1```. Prior to this, ```addi``` initialises ```a0``` as zero. 

```
wait_trigger:
        addi    a0, zero, 0                  
        lw      a5, 0x100(zero)              
        andi    a5, a5, 1                    
        beq     a5, zero, wait_trigger       

        addi    a0, zero, 1 
```
The wait_trigger function was responsible for waiting for the trigger. As good practice, ```a0``` was once again initialised to 0, and this was followed by loading the word from the value stored at the memory address ```0x100``` into the register ```a5```. The value at this memory address represents the trigger. This is followed by the instructions ```andi a5, a5, 1``` and ```beq a5, zero, wait_trigger```, which check if the LSB of a5 is 1, and if not it loops back to the start of this function. 
We check if the LSB is 1, and this is the condition to activate the trigger condition. The program then exits the loop and sets ```a0``` to 1 to indicate this. 

```
led_sequence:
    mv      a2, a1                       
    srli    a3, a2, 2                    
    xor     a2, a2, a3                   
    srli    a3, a2, 1                    
    xor     a2, a2, a3                   
    slli    a2, a2, 1                    
    ori     a2, a2, 1                    
    mv      a1, a2                       
```
This is the main function that creates the actual sequence of LEDs baesd on the operations above. ```a1``` contains the curernt LED state and copies this to ```a2``` to store the original value. It then conducts a shift right operation by 2, and then this value undergoes an XOR operation, followed by another set of ```srli``` and ```xor``` operations and then comducts an ```or``` operation and stores it back into ```a1```. This allows new bit patterns to be generated everytime the loop is run, as the value of ```a1``` changes with every cycle.

```
pattern_complete:
        li      a3, 50                      
        jal     ra, delay_routine           

        j       wait_trigger  
```
The pattern_complete subroutine starts with the ```li a3, 50``` instruction, which loads 50 into register ```a3```. This is the base delay at the end of the delay routine, meaning that it will always be at least this value before it resets. The ```jal``` instruction jumps and links register ```ra``` and executes the delay_routine, which is shown below. The ```j wait_trigger``` instruction is an unconditional jump to wait_trigger.

So ultimately, I have added this so that when the pattern is complete, a delay is introduced and it will jump back to waiting for the trigger.

