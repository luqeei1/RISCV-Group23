# RISCV-Group23

## Structure

This repo contains all components, testing and results for the RV32I single-cycle processor and the RV32I pipelined processor with cache, as well as videos of the functional tests on the Vbuddy. It also contains a log of what tasks each of us completed on what days and everyone also has their personal statements, which can be seen in the table below:

| Name       | CID | Link to Logbook | Personal Statement |
|------------|--------|-----|------|
| Akarsh     |        |   [Akarsh's Log](./docs/logs/Akarsh_log.md)  |      |
| Lucas     |   |  [Lucas's Log](./docs/logs/Lucas_log.md)    |   |
| Sid   |    02382743    |   [Sid's Log](./docs/logs/Sid_log.md)   |    |
| Theo     |        |  [Theo's Log](./docs/logs/Theo_log.md)    |    |

<br />

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

[The complete F1.s assembly code can be seen here](./rtl_single_cycle/F1.s)

// insert working video here

Screenshots of waveforms showing the working F1.s script and specific signals can be viewed [here](./Test_Results/images/F1_single_cycle)

### Testing the pdf.s script

### Tests 1-4:

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

