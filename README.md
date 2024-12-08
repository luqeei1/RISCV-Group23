# RISCV-Group23

## Structure

This repo contains all components, testing and results for the RV32I single-cycle processor and the RV32I pipelined processor with cache, as well as videos of the functional tests on the Vbuddy. It also contains a log of what tasks each of us completed on what days and everyone also has their personal statements, which can be seen in the table below:

| Name       | CID | Link to Logbook | Personal Statement |
|------------|--------|-----|------|-------|
| Akarsh     |        |   (./docs/Akarsh_log.md)  |      |
| Lucas     |   |     |   (./docs/Lucas_log.md)   |
| Sid   |        |     |  (./docs/Sid_log.md)   |
| Theo     |        |     | (./docs/Theo_log.md)    |

[See the single-cycle processor here](./rtl_single_cycle)

[See the pipelined processor here](./rtl_pipelining)

Our group decided to maintain a single branch and push any changes to main to simplfy the process and mitigate the effects of merge conflicts that would arise if separate branches were maintained (as we had experienced in Lab4). Also note that debugging was often done as a group with multiple people working on a single laptop, so some people's work may be committed through another person's laptop. Work was evenly divided among the group but everybody contributed to debugging and this often meant making edits to files that we didn't contribute directly to. 

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

### Creating the F1.s assembly code

The brief required us to implement the F1 starting light algorithm from Lab 3 in the RV32I instruction set, with the condition that we must use a ```jal``` instruction because at least one subroutine was to be implemented.


### 


## RV32I Pipelined Design

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
| PC_mux.sv     |       |    |    |       |
| mux2.sv     |       |    |    |       |
| mux3.sv     |        |     |      |    M   |
| top.sv     |       |  P  |  M   |       |
| BPU.sv     |       |  P  |  M  |    P   |
| FF_DE.sv     |       |    |    |       |
| FF_EM.sv     |       |    |    |       |
| FF_FD.sv     |       |    |    |       |
| FF_MW.sv     |       |    |    |       |
| hazard_unit.sv     |       |    |    |       |

M - Main Contributor
P - Partial Contributor




## RV32I Pipelined Design (with cache)

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
| top.sv     |       |  P  |  M   |       |
| BPU.sv     |       |  P  |  M  |    P   |
| cache_data_structs.sv     |       |    |    |    M   |
| cache_FSM.sv     |       |    |    |    M   |

M - Main Contributor
P - Partial Contributor

