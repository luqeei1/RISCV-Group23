# Summary of what I did

I was the primary editor of the team documentation, and I worked primarily on the ALU, Register File, both top files and was also responsible for writing the F1.s assembly code and testing this. For the pipelined processor, I was also responsible for debugging certain sections of the Branch Prediction Unit and the hazard unit, as well as conducting tests. 

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

```
delay_routine:
        addi    a3, a3, -1                  
        bne     a3, zero, delay_routine     
        ret
```
The delay_routine subroutine is the subroutine which is responsible for the delay. ```addi a3, a3, -1``` decrements the value in the register by 1 and reduces the counter in ```a3``` to track how many iterations are left prior to the delay ending. The next line is responsible for checking if ```a3``` is equal to 0 or not via a ```bne``` instruction, and if it is, the loop exits and it returns back to the start. It not, it jumps back to the start of this subroutine and restarts the loop. 

## ALU
The ALU performs arithmetic and logic operations on two operands. Every arithmetic instruction specified on the RISC-V 32I instruction set are implemented, even if not every instruction has been used. 
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

```SrcA``` and ```SrcB``` are the two operand inputs into the ALU, and ```ALUCtrl``` is a control signal from the Control Unit that specifies which operation needs to be performed. Based on the ```ALUCtrl``` input, I specified the different cases as shown in the table above, which perform different operations, and ensured that the Control Unit’s implementation corresponded with these cases; this also required collaboration with Theo, who had made the Control Unit for single-cycle.



## Register File
I initialised and implemented all the registers in the regfile.sv file, which included an ```ADDRESS_WIDTH = 5``` because this specifies 25 bit width of the register addresses and thus supports 32 registers. As usual, ```DATA_WIDTH``` took a value of 32. 
Based on the RISC-V specification, the following registers are used for the following purposes:
| Register | Purpose |
|------------|--------|
| ```a0-a7``` |    Argument Registers | 
| ```t0-t6``` | Temporary Registers | 
| ```s0-s11``` | Saved Registers   | 

The line 
```
if (WE3)
    registerfile_array[AD3] <= (AD3 == 5'b0) ? 32'b0 : WD3;
```
shows that if there’s an attempt to write into the register of address 5’b0 (so register x0), it should always be 32’b0, so this register can never be written into. The purpose of this is to contain a constant zero value. 

## Top File (and memory files), and debugging of the F1.s assembly

I created the top file after all the other components had already been instantiated, and we needed to create this to tie the various components of the RISC-V processor together and ensure they were integrated properly. 

</br>
I created an initial version of this file and tested it using the assembly code I had created to see if the F1 lights implementation worked. However, whilst doing this we received a lot of errors, often due to incorrect signal declarations, inconsistent bit widths or typos and syntax errors in signal names across modules – we all worked together as a group to debug these. 

</br>

I helped to debug the data_memory and instruction_memory files, and I also added a trigger input signal (which needed to be instantiated in the top and data_memory files and also added into the F1_tb.cpp file which was used to test it). This would incorporate with the F1 assembly code and required me to set ```vbdSetMode(1)``` , as this would mean it needed the button to be pressed. I also added the ```top->trigger = vbdFlag()``` line, implying the button state would be fetched before the clock edge and that it would depend on the state of this flag. 

We ran this code and after debugging some other errors, we managed to get the implementation to work properly. We also managed to successfully pass the other tests 1-4, however we still had some issues with the pdf.s assembly and display on the Vbuddy. 

## Debugging the pdf.s generation and display on the Vbuddy
After I made the changes described above, the pdf generation for the gaussian function did generate but took a long time to do so. It required nearly 250,000 clock cycles to even display and this took nearly half an hour. A variety of optimisations were implemented to try and solve this. 
To resolve this issue, I changed the data_memory.sv file to read the contents of the .mem file up to the size of an array defined as 32’h0001000, based on the memory mapping provided below:

<div align="center">
  <img width = "33%" src="images/memory.jpg">
</div>

This memory mapping told us that Data Memory is (0x00000000 to 0x0x0001FFFF), which means there are 131,072 addresses (2^17 addresses), and that Instruction Memory is only between 0xBFC00000 and 0xBFC00FFFF (2^12 addresses)

As a result, I modified the size of the rom_array in the instruction_memory file to have a width of 2^12, which may have been slowing the generation down. A commit similar to this can be referenced <a href = "https://github.com/luqeei1/RISCV-Group23/commit/32798887e1d8c79ff78bd59db8a0c182e24d179c">here</a>. However, these did not fix the issue. 

Me and Akarsh spent hours on debugging this issue, until we added a simple if statement in the pdfgen.tb cpp file, which was placed within the for loop that iterated across simcyc. We discovered that a0 was being plotted every single cycle, which was extremely slow – instead our condition ensured that we would only plot if top->a0 held a non-zero value, thus meaning our implementation was much faster and the gaussian file was generated quickly. After this, it was trivial to implement the noisy.mem and triangle.mem files. 

## General Debugging for the pipelined processors

When conducting tests on the triangle.mem plot on the Vbuddy, I discovered that it did not display at all. I made modifications to the testbench, and divided the number of samples by 4, resulting in it displaying. The previous value of 3 did not plot accurately. This line was modified in ```pdfgen_tb.cpp``` to:

```
    if(top->a0 != 0) {
      if (top->a0 % 4 == 0){
        vbdPlot(int (top->a0), 0, 255);
        vbdCycle(simcyc);
        }
    }
```



## F1_pipelined. s assembly code

I adapted the code from the single-cycle to fit the pipelined processor, and whilst the assembly remained the same, there was a consistent problem with the hazard detection which caused us to only get 2 LEDs displaying at any point. This led to us needing to update the hazard_unit.sv file 

## Miscallenous Changes 

In addition to the above, I also helped Akarsh with the ```/doit.sh``` file to run all the tests using the same script, and I also learnt some commands which I had to implement to properly run the pipelined scripts.

For example, in the ```F1_pipelined.sh``` file, there were a number of components which were instantiated in other .sv files, which were then in turn instantiated in the ```top.sv``` file. This caused an issue, which was rectified by adding the line:
```--top-module top \``` into the ```F1_pipelined.sh``` file. This explicitly declared that ```top.sv``` 

# Reflections
I enjoyed this project deeply and I obtained a number of skills in the process, which are outlined below.
## Technical Skills Learnt
-   SystemVerilog syntax and how to use Verilator, gaining a deeper understanding of how a processor works
- Learnt how to use GTest in testbenches to verify if tests pass 
-   How to use GTKwave to simulate signal values and test how these changed in response to others. This was extremely useful in debugging as it could help me visually see the expected result and the actual result while simulating
-    Learnt the fundamentals of using GitHub and became confident in using it by the end of the project. This facilitated greater collaboration between the group
-   I learnt how to debug errors systematically and use the $display function to assist me in this. I also learnt how to suppress warnings, which reduced the number of inconsequential warnings
-   Consolidated my knowledge of C++ through debugging and writing of testbenches. 
-   Researched and implemented specific components of a CPU and saw how they integrated together
## Soft Skills Learnt and utilised
-   Increased collaboration and learning how to overcome challenges as a group
-   Communication was very strong most of the time, attributed to a good working relationship with all members of the group and an active WhatsApp group
-   Learnt how to work better under a tight deadline and time pressure, leading to my prioritisation and time management skills being improved
-   Improved perseverance while debugging
## Things I would do differently
- Ensuring the whole team had a complete working understanding of the whole architecture, even if they were only responsible for a few components. I could have understood cache more deeply as this was a limiting factor when trying to debug this    
- I would have understood and employed GTKWave as a potential debugging solution earlier, as I hadn't used this to its full extent during Labs 1-4, which led to me needing to learn this and utilise this properly during the coursework. Next time, I would make sure to be on top of the tools 
- While debugging, Akarsh and I spent an all-nighter trying to fix issues with the pipelined processor however our productivity declined later into the night. In the future, we would not repeat this and focus on more organised and systematic approaches to debugging 
-  We should have worked in smaller more focused sessions rather than long sessions without breaks. 

## Conclusion

It’s been a fulfilling project, from planning till final implementation. I have learnt a lot of skills and am looking forward to extending my knowledge of digital architecture in the future. 

 
