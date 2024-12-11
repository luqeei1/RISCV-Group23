Data Memory


Following the release of the project, I took over the task to create the data memory. Since the data memory requires both the ability to read and write data, it was clear that I needed to use RAM. According to the memory map, the data memory would have to span from 0x00000 to 0x1FFFF which means the size of the RAM would have to be 2 to the power of 17 minus 1: 



I also included [7:0] to define the size of the data stored at each location - a byte, which is equal to 8 bits. This allowed for the loading and storing instructions which involved bytes and half words. To differentiate between the different load and store instructions, I used a variable named “modeBU” which is 3 bits wide. This was due to the fact that we had 5 store instructions so we needed to ensure we cover all cases. 

I used WE to denote when to write or not as seen in my code 



Here we see that we only write when this is high. This allows for reading without the need to write. Similarly, I implemented a variable called ResultsSrc which is 2 bit wide to allow for the following:

Load instructions
JAL and JALR
Instructions where the use of data memory is not needed

			

Here we can see that if ResultSrc = 2’b01, we know we are executing a load instruction. Similarly, when we have a JAL, I made it so we can make the output of the ALU equal to the PC value which is then inputted into the data memory. 


Following this, I wrote and executed unit tests using g-test software for each possible case within data memory to test its functionality and prepare it for integration in the single cycle RISCV 32I processor. 

If we take a look at the way I have implemented both load and store, we can see that they are in little-endian form




Instruction Memory

Corresponding commit can be found here 


Within instruction memory, I assisted with debugging. Firstly, I enabled the program counter’s current value to be inputted into instruction memory as follows:



Here we can see that I have updated the values of PC + i by allowing for the entire value of PC to be used to locate the address of the instruction memory. This is due to the fact that ____.



I also went through sign extension to ensure that the ImmExt variable was receiving the required data width. Here, I increased the size of the lower bits in the assignment shown below to allow the full 32 bits to be fed into ImmExt






Register File 

Commit can be found here

Within the register file, I assisted with the implementation of the full registers (all 32) in the processor as shown in the commit above. From here, they were ready to be assigned to their specific register names and functions. 



