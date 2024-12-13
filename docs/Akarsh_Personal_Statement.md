



# Data Memory

Following the release of the project, I took over the task to create the data memory. Since the data memory requires both the ability to read and write data, it was clear that I needed to use RAM. According to the memory map, the data memory would have to span from 0x00000 to 0x1FFFF which means the size of the RAM would have to be 2 to the power of 17:

<br> </br>
<div align = "centre"> 
    <img src= "images/ram_array.png"> </img>
</div>

<br> </br>
I also included [7:0] to define the size of the data stored at each location - a byte, which is equal to 8 bits. This allowed for the loading and storing instructions which involved bytes and half words. To differentiate between the different load and store instructions, I used a variable named “modeBU” ("modeAddr" in pipelining) which is 3 bits wide. This was due to the fact that we had 5 store instructions so we needed to ensure we cover all cases. If we take a look at modeBU inside the data memory module, we can see that each case of modeBU corresponds to a certain execution of both the load and store instructions, however, the use of write enable allows us to choose whether we write to a memory location then read from it (this occurs when write enable is high) or just read from a certain memory location (which occurs when write enable is low). 

<br> </br>
<div align = "centre"> 
    <img src= "images/we.png"> </img>
</div>
<br> </br>

If we take a look at the way I have implemented both load and store, we can see that they are in little-endian form.

<br> </br>
<div align = "centre"> 
    <img src= "images/littleendian.png"> </img>
</div>
<br> </br>




Within the load instructions (in the single cycle version of data memory), we can see that I have used a variable called ResultsSrc which determined what the output of the data memory would be which corresponds to this multiplexer in the diagram of the single cycle RISCV 32I cpu.These correspond to the following:

- Load instructions
- JAL and JALR
- Instructions where the use of data memory is not needed

<br> </br>
<div align = "centre"> 
    <img src= "images/resultsrc.png"> </img>
</div>
<br> </br>

Here we can see that if ResultSrc = 2’b01, we know we are executing a load instruction. Similarly, when we have a JAL, I designed it so we can make the output of the ALU equal to the PC value which is then inputted into the data memory. Following this, I wrote and executed unit tests using g-test software for different cases within data memory to test its functionality and prepare it for integration in the single cycle RISCV 32I processor.




<br> </br>


# Instruction Memory


<a href="https://github.com/luqeei1/RISCV-Group23/commit/67c91858f425cf738670c74c8de2a4793a8549af">Commit for Instruction Memory Debugging</a>




Within instruction memory, I assisted with debugging. Firstly, I enabled the program counter’s current value to be inputted into instruction memory as follows:




Here we can see that I have updated the values of PC + i by allowing for the entire value of PC to be used to locate the address of the instruction memory. This is due to the fact that we are in little-endian format, the corresponding bits are before the address specified by that corresponding amount. This program counter will then update by 4 which means we can repeat this process for all instructions within the instruction memory. Following this, me and Sid both agreed that we should ensure that the program counter’s value is within the desired range, which lead us to take PC[11:0] rather than PC (note the [11:0] which was added later at <a href="https://github.com/luqeei1/RISCV-Group23/commit/32798887e1d8c79ff78bd59db8a0c182e24d179c">this commit</a> because of a later change we make to the size of the instruction memory).  


<div align = "centre"> 
    <img src= "images/instr.png"> </img>
</div>


which is later changed to 

<div align = "centre"> 
    <img src= "images/instrchange.png"> </img>
</div>
<br> </br>







# Register File


<a href = "https://github.com/luqeei1/RISCV-Group23/commit/cbdb7d9fcbdde2ae97d09bab87daa309f1da0c28#diff-60f57560fdc14ccd71bf8a650bad62d786aabc1a17997980f4f1955be6c61f90R22" > Commit can be found here </a>




Within the register file, I assisted with the implementation of the full registers (all 32) in the processor as shown in the commit above. From here, they were ready to be assigned to their specific register names and functions. I also added this to the top file.

# General commitment to single cycle


I regularly assisted with debugging within the single cycle design, ensuring that we had an optimal performance in all tests. For example, I went through sign extension to ensure that the ImmExt variable was receiving the required data width. Here, I increased the size of the lower bits in the assignment shown below to allow the full 32 bits to be fed into ImmExt. This can be found <a href="https://github.com/luqeei1/RISCV-Group23/commit/67c91858f425cf738670c74c8de2a4793a8549af"> here </a>.



# PDF Testing


During the testing of the probability density function generation, I was the main contributor to fixing issues as well as writing the testbench to ensure our program was running up to the standard we were expecting it to. Initially, I experienced a problem that the pdf would only plot a0 = 0, leading to the vcd file for the pdf program taking a very long time to run. To fix this, we decided to reduce the size of the instruction memory from 2 to the power of 16 spaces to 2 to the power of 12 spaces, reducing the intense memory reservation the program would take. I went on to change the instruction memory size due to this as mentioned before.




In addition to this, I made it so the program would only plot when a0 was not equal to zero meaning that this would skip approximately 250,000 cycles (in single cycle) where a0 was zero, enabling us to start the plotting almost instantly. Following this, I decided to implement the condition that if the cycle we are currently on is divisible by 3, plot the value to reduce the number of samples we would have to plot. This was carried forward to the pipelining case.

<div align = "centre"> 
    <img src= "images/a0.png" width = 500px> </img>
</div>






This reduced the size of the pdf plot and allowed it to be fully displayed on one screen instead of spanning across multiple screen instances on the vbuddy display.


<div align = "centre"> 
    <img src= "images/gaussian.png" width = 500px> </img>
</div>
gaussian
<br> </br>

<div align = "centre"> 
    <img src= "images/noisy.png" width = 500px> </img>
</div>
noisy
<br> </br>

<div align = "centre"> 
    <img src= "images/triangle.png" width = 500px> </img>
</div>
triangle
<br> </br>





# General commitments to other aspects within our project


Within pipelining, I assisted with debugging throughout the process. Me and sid spent a lot of time identifying the problems arising with JALR instructions in pipelining where jumps which were adjacent to each other would result in a fault in the address after the jump, communicating with the rest of the team to discuss a solution to fix this. In addition to this, I regularly scanned through my modules when changes were made to ensure the logical functionality remained.

# Conclusion


In conclusion, I thoroughly enjoyed this project and I am pleased with my skills acquired doing so, both from a hardware understanding as well as its underlying software aspects. To improve, I believe I should further investigate the connections of my components to the design as a whole, aiding me to cut down time used for debugging.








