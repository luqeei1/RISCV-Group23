# RISCV-Group23

## Joint Statement and Structure

This repo contains all components, testing and results for the RV32I single-cycle processor and the RV32I pipelined processor with cache, as well as videos of the functional tests on the Vbuddy. It also contains a log of what tasks each of us completed on what days and everyone also has their personal statements, which can be seen in the table below:

| Name       | CID | Link to Logbook | Personal Statement |
|------------|--------|-----|------|
| Akarsh Gopalam     | 02395592       |   [Akarsh's Log](./docs/logs/Akarsh_log.md)  |   [Akarsh's Personal Statement](./docs/Akarsh_Personal_Statement.md)   |
| Lucas Venetez     |  02387237 |  [Lucas's Log](./docs/logs/Lucas_log.md)    |   |
| Siddharth Mishra   |    02382743    |   [Sid's Log](./docs/logs/Sid_log.md)   |  [Sid's Personal Statement](./docs/Siddharth_Personal_Statement.md)  |
| Theodore Shah     |  02380127      |  [Theo's Log](./docs/logs/Theo_log.md)    |    |

<br />

## IMPORTANT: HOW TO RUN THE SCRIPTS (read this before running any scripts !)

To run scripts on the ```main``` branch (which contains the functional pipelined processor with two-way cache and a branch prediction unit), you need to upgrade to the **latest version** of Verilator, which is ```Verilator 5.0231```. 

please connect VBUDDY:

```
~/Documents/iac/lab0-devtools/tools/attach_usb.sh
```
These instructions are suitable if running from Windows. the first command should connect the Vbuddy, and the second command lets you know what the name of the port that Vbuddy is connected to. if this is different from the ```vbuddy.cfg``` file, then update this and check the name via: 

```
ls /dev/ttyU*
```

### Running the Tests 1-4 

Use ``` cd tb ``` to make sure you are in the ``` tb ``` directory and run the script as follows:

```
./doit.sh
```

make sure that ``` data_memory.sv ``` contains ``` data_memory.hex ``` and that ```instruction_memory.sv ``` contains ```pdf.hex```. 


This can be repeated for all versions of our RISCV-32I cpu. 

[See the single-cycle processor here](./rtl_single_cycle)

[See the pipelined processor here](./rtl_pipelining)

<br />

Our group decided to maintain a single branch and push any changes to main to simplfy the process and mitigate the effects of merge conflicts that would arise if separate branches were maintained (as we had experienced in Lab4). Also note that debugging was often done as a group with multiple people working on a single laptop, so some people's work may be committed through another person's laptop. Work was evenly divided among the group but everybody contributed to debugging and this often meant making edits to files that we didn't contribute directly to. 

<br />

## RV32I Single-Cycle Design

### Task Allocation

We met up as a team and based on the tasks we had each done during Lab4, we decided to split up our tasks for the single-processor as follows:

| Component       | Akarsh | Sid | Theo | Lucas |
|------------|--------|-----|------|-------|
| alu.sv     |        |  M   |      |       |
| data_memory.sv     |  M |     |      |       |
| program_counter.sv   |        |     |      |    M   |
| instruction_memory.sv     |    P    |  P   |    M  |       |
| regfile.sv     |   P     |   M  |      |       |
| ALUDecoder.sv     |        |     |   M   |    P   |
| controlUnit.sv     |        |  P   |   M   |       |
| signExtend.sv     |        |     |    M  |       |
| mux3.sv     |        |     |      |    M   |
| top.sv     |   P    |  M  |  P   |    P   |


M - Main Contributor
P - Partial Contributor

<br />

### Creating the F1.s assembly code

The brief required us to implement the F1 starting light algorithm from Lab 3 in the RV32I instruction set, with the condition that we must use a ```jal``` instruction because at least one subroutine was to be implemented.
We also added a random delay interval between lights and adding a trigger everytime the lights reset. Below are the registers used:

| Register       | Function |
|------------|--------|
| ```a0```     |   Tracking overall system state (```0``` if waiting, ```1``` if active)     |
| ```a1```      |  Holds the current LED pattern (initialised with arbitrarily chosen ```0xABC```) |
| ```a2```      |  Stores intermediate results in ```led_sequence``` |
| ```a3```      |  Stores the delay count in ```delay_subroutine``` and temporarily holds shifted bits after XOR operations in ```led_sequence```  |
| ```a4```    |    Holds the stopping pattern (```0xFF```)    |
| ```a5```      |  Checks the trigger condition in ```wait_trigger``` |
| ```t0```      |  Temporary register while ```a0``` is updated with new states |
| ```ra```      |  Special register holding return address after subroutine is called |

Broadly speaking, the program:

- waits for a trigger (connected to ```0x100```)
- If triggered, starts the sequence of LEDs and checks at each updated pattern if the current pattern was equal to the target stopping pattern held in ```a4 ``` using a ```beq``` instruction.
- If equal, the pattern would be completed and the program would wait for another trigger. In between every LED sequence, a pseudo-random delay has been incorporated

The delay has been "randomised" through a simple LFSR process, with an initial seed of ```0xABC``` being modified repeatedly using shifts and XOR operations, with the new value used to determine the delay before turning on the subsequent LED. We limited the range of delay by only extracting the lower 5 bits, allowing us to keep any delays reasonable. 

Screenshots of waveforms showing the working F1.s script and specific signals can be viewed [here](./Test_Results/Images/F1_single_cycle). Also can be referenced in Siddharth's personal statement. 

To run this specific code, the instruction memory would need to read the ```program.hex``` file. 

### Testing the probability density function tests

There were three files: gaussian.mem, noisy.mem, and triangle.mem , which could be run by running the ```./pdf.sh``` command on terminal, ensuring it was being tested via the pdfgen_tb.cpp testbench. We ensured that the pdf would plot very fast, we decided to ignore when a0 was zero. This change was made in the test bench. The full explanation can be found in Akarsh's logbook. Videos can be shown below. 

### F1 Lights (Single Cycle)

[![](https://img.youtube.com/vi/kvJkfpa182A/0.jpg)](https://www.youtube.com/watch?v=kvJkfpa182A)

### F1 Lights (Pipelined)

[![](https://img.youtube.com/vi/hqBxMIpIb7w/0.jpg)](https://www.youtube.com/watch?v=hqBxMIpIb7w)

### Triangle PDF

[![](https://img.youtube.com/vi/jg93zmgKeUM/0.jpg)](https://www.youtube.com/watch?v=jg93zmgKeUM)

### Noisy PDF

[![](https://img.youtube.com/vi/Xb7KfGf_f7Y/0.jpg)](https://www.youtube.com/watch?v=Xb7KfGf_f7Y)

### Gaussian PDF

[![](https://img.youtube.com/vi/1BHme1be_hA/0.jpg)](https://www.youtube.com/watch?v=1BHme1be_hA)


### Tests 1-5:

Running Tests 1-5 can be done by running the ```./doit.sh``` script after navigating to the ```tb``` directory, and modifying ```instruction_memory.sv``` in the lines shown:


<div align = "centre">
  <img src = "images/passed

Then modify ```data_memory.sv``` as shown:

// inesrt image

The results should be as follows:

// insert image 

## RV32I Pipelined Design

| Component       | Akarsh | Sid | Theo | Lucas |
|------------|--------|-----|------|-------|
| ALU     |        |  M   |      |       |
| Data Memory     |  M |     |      |   P    |
| Program Counter   |        |     |      |    M   |
| Instruction Memory     |    P    |  P   |    M  |       |
| Sign Extend     |        |     |      |       |
| Register File     |   P     |   M  |      |       |
| Control Unit     |        |  P   |   M   |   P    |
| Top (single-cycle)     |       |  M  |     |       |
| Branch Prediction     |       |  P  |  M  |       |
| Pipeline Flip Flops     |       |    |  M  |       |
| Hazard Unit     |       |    |  P  |   M    |
| Cache     |       |    |    |   M    |
| Top (pipelining)     |       |  P  |     |   M    |


M - Main Contributor
P - Partial Contributor

