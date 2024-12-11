# Summary of what I did

I was the primary editor of the team documentation, and I worked primarily on the ALU, Register File, both top files and was also responsible for writing the F1.s assembly code and testing this. For the pipelined processor, I was also responsible for debugging certain sections of the Branch Prediction Unit and the hazard unit, as well as conducting tests. 

 **rtl_single_cycle:**  
 </br>
o	Worked on the ALU 
</br>
o	Worked on the Register File 
</br>
o	Worked on the Top File
</br>
o	I also helped to debug many files (discovering errors especially when writing the top.sv files and running tests), primarily Instruction Memory and Control Unit
</br>
o	Also made changes to every other module at different points, a full summary of which can be found in my commit history
</br>

**rtl_pipelining:**

o	Worked on the ALU
</br>
o	Worked on the Register File
</br>
o	Worked on the Top File
o	Helped to debug the Branch Prediction Unit (BPU) and also the top files
# Explanations of Contributions to the RV32I Single-Cycle Processor 
## F1.s Assembly Code
I was the main contributor to this assembly code and planned, wrote and tested this. 
## ALU
The ALU performs arithmetic and logic operations on two operands. Every arithmetic instruction specified on the RISC-V instruction set are implemented, even if not every instruction has been used. 
I chose to do this so that if we wanted to utilise these instructions in the future, it would be possible for any future designs:

| ```ALUCtrl``` value | Operation |
|------------|--------|
| 0000 |    SrcA + SrcB | 
| 0001 | SrcA – SrcB | 
| 0010 |    SrcA ^ SrcB | 
| 0011   |   SrcA | SrcB | 
| 0100 |   SrcA & SrcB |  
| 0101     |    SrcA << SrcB[4:0] |  
| 0110     |    SrcA >> SrcB[4:0] | 
| 0111     |    $signed(SrcA) >>> SrcB[4:0] |
| 1000     |   $signed(SrcA) < $signed(SrcB) ? 1 : 0 |   
|1001 | SrcA < SrcB ? 1 : 0 | 
| 1010 |    ZeroE = (SrcA == SrcB) | 
| 1011 |    ZeroE = (SrcA != SrcB) | 
| 1100 |    ZeroE = ($signed(SrcA) < $signed(SrcB)) | 
| 1101 |    ZeroE = ($signed(SrcA) >= $signed(SrcB)) | 
| 1110 |    ZeroE = (SrcA < SrcB) | 
| 1111 |    ZeroE = (SrcA >= SrcB) | 

I added ```CONTROL_WIDTH```, which refers to the bit width of this signal and it is 4 bits wide – this is a modification from the 3 bits given to us in the Project Brief’s schematic and was needed to sufficiently implement all the ALU operations and the Zero flags for branching. 
The ```DATA_WIDTH``` is 32 bits, as is standard on this RISC-V processor and this refers to the bit width of the input and output data.
```SrcA``` and ```SrcB``` are the two operand inputs into the ALU, and ```ALUCtrl``` is a control signal from the Control Unit that specifies which operation needs to be performed. Based on the ```ALUCtrl``` input, I specified the different cases as shown in the table above, which perform different operations, and ensured that the Control Unit’s implementation corresponded with these cases. 




## Register File
I initialised and implemented all the registers in the regfile.sv file, which included an ```ADDRESS_WIDTH = 5``` because this specifies 25 bit width of the register addresses and thus supports 32 registers. As usual, ```DATA_WIDTH``` took a value of 5. 
Based on the RISC-V specification, the following registers are used for the following purposes:
| Register | Purpose |
|------------|--------|
| ```a0-a7``` |    Argument Registers | 
| ```t0-t6``` | Temporary Registers | 
| ```s0-s11``` | Saved Registers   | 

The line 
if (WE3)
    registerfile_array[AD3] <= (AD3 == 5'b0) ? 32'b0 : WD3;
shows that if there’s an attempt to write into the register of address 5’b0 (so register x0), it should always be 32’b0, so this register can never be written into. The purpose of this is to contain a constant zero value. 

## Top File (and memory files), and debugging of the F1.s assembly

I created the top file after all the other components had already been instantiated, and we needed to create this to tie the various components of the RISC-V processor together and ensure they were integrated properly. 
I created an initial version of this file and tested it using the assembly code I had created to see if the F1 lights implementation worked. However, whilst doing this we received a lot of errors, often due to incorrect signal declarations, inconsistent bit widths or typos and syntax errors in signal names across modules – we all worked together as a group to debug these. 
I helped to debug the data_memory and instruction_memory files, and I also added a trigger input signal (which needed to be instantiated in the top and data_memory files and also added into the F1_tb.cpp file which was used to test it). This would incorporate with the F1 assembly code and required me to set ```vbdSetMode(1)```, as this would mean it needed the button to be pressed. I also added the ```top->trigger = vbdFlag()``` line, implying the button state would be fetched before the clock edge and that it would depend on the state of this flag. 
We ran this code and after debugging some other errors, we managed to get the implementation to work properly. We also managed to successfully pass the other tests 1-4, however we still had some issues with the pdf.s assembly and display on the Vbuddy. 

## Debugging the pdf.s generation and display on the Vbuddy
After I made the changes described above, the pdf generation for the gaussian function did generate but took a long time to do so. It required nearly 250,000 clock cycles to even display and this took nearly half an hour. A variety of optimisations were implemented to try and solve this. 
To resolve this issue, I changed the data_memory.sv file to read the contents of the .mem file up to the size of an array defined as 32’h0001000, based on the memory mapping provided. I also modified the size of the rom_array in the instruction_memory file to have a width of 2^12 instead of 2^17, which may have been slowing the generation down. However, these did not fix the issue. 
Me and Akarsh spent hours on debugging this issue, until we added a simple if statement in the pdfgen.tb cpp file, which was placed within the for loop that iterated across simcyc. We discovered that a0 was being plotted every single cycle, which was extremely slow – instead our condition ensured that we would only plot if top->a0 held a non-zero value, thus meaning our implementation was much faster and the gaussian file was generated quickly. After this, it was trivial to implement the noisy.mem and triangle.mem files. 

# Explanations of Contributions to the RV32I Pipelined and Cached Processor 

## F1_pipelined. s assembly code

I adapted the code from the single-cycle to fit the pipelined processor, and whilst the assembly remained the same, there was a consistent problem with the hazard detection which caused us to only get 2 LEDs displaying at any point. This led to us needing to update the hazard_unit.sv file 

# Reflections
## Technical Skills Learnt
I learn how to:

## Soft Skills Learnt
## Things I would do differently
-	While debugging, we
