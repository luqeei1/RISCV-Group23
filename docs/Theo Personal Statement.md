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
o   Collaborated on the instruction memory and built on top of the Lab4 version 
</br>
o   Worked on extending the control unit to accomodate all signals in the RV32I instruction set
</br>
o   Added my units to the top file
</br>
o   Wrote unit tests for the control unit/alu decoder and for the sign extension unit, and passed them
</br>
o   Edited other modules to align with signal naming and signal values (mode BU at some point had to be altered as the control unit and data memory had different signals for loading and storing bytes
</br>

As part of the single cycle CPU, we were tasked to expand our instruction set to accomodate byte addressing. We agreed on adding a signal, named "modeAddr", which would decide whether to load a word, half-word or a byte and likewise for storing. Due to the impossibility of loading and storing on the same cycle, we could get away with reusing the signal for the load and store functions. As there are 5 different laod instructions, we decided to make the modeAddr signal 3 bits wide to accomodate them all, even though the assembly programs don't require half-word addressing. The modeAddr signal is set in the control unit, set by the func3 signal of the input instruction, and is shown in the following image: 
<br>
![image](https://github.com/user-attachments/assets/c9755cf0-5743-4a7c-888f-261a85f05487)
<br>
Once the top file was finished and the testbenches created, we were ready to start testing some of the assembly language programs. I collaborated with others in debugging the errors, and we were soon to get all the tests running for single cycle with little effort. 

**rtl_pipelining:**

o   Worked on the branch prediction unit
</br>
o   Collaborated on the hazard unit to make sure the branch prediction unit and hazard unit worked together
</br>
o   Created the pipeline FF required, including adding stall and flush functionality

For a pipelined processor, you need to have clocked FF's to be able to run multiple instructions in each of the 5 stages: Fetch, Decode, Execute, Memory, and Write(back). As a team, we discussed early on what signals we wanted to implement, what to call them and how wide they should be. This made it easier to implement all the FF required, although it did prove to a laborious task. For each signal going through the FF's, we named with a letter at the end with the stage it was found in. We also did this for signals that were not particularly needed in certain stages of the CPU, but were useful for debugging. For example, we passed the instruction signal through the DE, EM, and MW flip flop's as we wanted to see which instructions were in each stage of the processor. 

### Static Branch Unit and Branch Prediciton Unit

My main contribution to the pipelined processor was the branch predictor unit. After learning about the branch prediction state machine/algorithmn, I was eager to implement this into our own RISCV CPU. Before I started work on the branch predictor unit, I quickly designed a static branch unit, which identifies a branch instruction and overiddes the program counter with it's own signal "PCBPU". The static branch unit will always decide to take the branch, calculating the target address of the branch and making sure the next instruction fetched is the instruction at the target address of the branch. This was done as I didn't want to hold up my teammates who may want to test their designs, and I didn't want them to test them with a unfinished and faulty branch prediction unit. The static branch unit is shown below: 
</br>
![image](https://github.com/user-attachments/assets/55262e90-8c63-4587-8cd1-78b72544bde4)
***Inputs***
RD: The output from instruction memory, the most fastest way to access what instruction is going to be decoded next
PCF: The input into instruction memory, used to log the branch address
ZeroE: The output from ALU, that goes high if the branch condition is met and low otherwise
JumpE: The output from the DE flip flop, indicating if a jump instruction is being executed
BranchE: The output from the DE flip flop
<br>
***Outputs***
flushBranch: The input into the hazard unit to tell it to flush the flip flops
PCBPU: The input into the BPU_mux
PCSrc: The input into the BPU_mux
<br>

The static branch predictor works by first identifying if a branch instruction is going to be decoded next, by reading the output from the instruction memory, also can be named as InstrF. If the fetched instruction is a branch instruction, then we calculate the target address of the branch by adding the current fetched program counter, PCF, and the immediate offset of the branch instruction. The immediate offset had to be sign extended before being able to be added with the program counter. We also set our internal signal "branchAddr" to the current program counter, so that we can remember the address of the branch instruction. Lastly, we set the signal PCBPUSrc to high. PCBPUSrc is a mux select signal that controls the two input mux "BPU_mux". BPU_mux takes in two options, PCBPU and the output from the program counter, and outputs PCF, the next address. This makes it so that the BPU can "override" the next instruction address with it's own address if it wants to. This makes deciding on whether to take a branch or not, and what to do if it's decision is incorrect much easier as it is responsive. 
<br>
Therefore, if the current fetched instruction is a branch, the static branch unit, calulates the branch target address and makes sure the next instruction address is the branch destination address. Else, the PCBPUSrc is low, and the next address is calulated from the program counter instead. Once the branch has been executed, the static branch unit waits for the branch decicion to be determined, indicated by the signal BranchE, which tells the unit if the branch instruction is being executed or not. If it is, we look at whether the branch condition was met or not, by looking at the ZeroE signal, which comes from the ALU. If the ZeroE signal is high, then the branch condition was met and so the unit doesn't have to do anything and so doesn't flush the flip flops as the correct instructions are going to be executed. However, the signal is low, indicating that the branch condition was not met, the unit must instead revert it's changes and jump back to the original branch address (+4) to execute the correct next instruction. This is why it stores the branch address. Therefore, PCBPU is set to the branch address + 4, and PCBPSrc is set high to make sure the branch unit's address is the next instruciton address. We also set the flush signal high, so that we can flush the wrong signals from being executed. After testing, we realised that the static branch unit would not work as intended if the instruction being executed was a jump instruction while the branch unit was decoding a branch instruction and setting the next instruction address. This was because the BPU_mux, which takes an input from the program counter, has a larger priority than the program counter, so that if a jump were to be executed while a branch was being fetched, the jump would not execute. We solved this by adding the condition that for the branch unit to decode a branch, the current instruction being executed would not be a jump. 

### Branch Prediciton Unit

After the static branch unit was completed and we had a working pipelined processor, I started work on the branch prediciton unit. Following the lecture slide given, I decided to follow the branch prediction algorithmn of a 2 bit state machine. This branch prediciton unit would make decisions on whether to take a forward or backward jump or not. I decided to make the decision to have two state machines for forward and backward branches, as this would be easy to implement but still effective. A more effective solution would've been having a table of all different branches encountered, and having a separate state machine counter for all of them, but I decided this would've been too difficult to implement. The following states of the counter are shown below:
</br>
o  00 - Don't take the branch (Strong)
</br>
o  01 - Don't take the branch (Weak)
</br>
o  10 - Take the branch (Weak)
</br>
o  11 - Take the branch (Strong)
</br>

I decided to implement the state machine as a 2 bit counter, as it simplified the logic in the branch prediction unit. The state machine works as follows:
</br>
o If the decision is wrong - Decrement the respective counter by one
</br>
o If the decision is right - Increment the respective counter by one
</br>
o If the state is 00, and the decision is wrong - Keep the counter at 00
</br>
o If the state is 11, and the decision is right - Keep the counter at 11
</br>

