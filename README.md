# RISCV-Group23


[See the single-cycle processor here](./rtl_single_cycle)

[See the pipelined processor here](./rtl_pipelining)

## Task Allocation

Our group decided to maintain a single branch and push any changes to main to simplfy the process and mitigate the effects of merge conflicts that would arise if separate branches were maintained (as we had experienced in Lab4). Based on the tasks we had each done during Lab4, we decided to split up our tasks for the single-processor as follows:

| Task       | Akarsh | Sid | Theo | Lucas |
|------------|--------|-----|------|-------|
| alu.sv     |        |  **   |      |       |
| DataPath.sv     |  ** |     |      |       |
| program_counter.sv   |        |     |      |    **   |
| regfile.sv     |        |   **  |      |       |
| ALUDecoder.sv     |        |     |   **   |       |
| controlUnit.sv     |        |     |   **   |       |
| signExtend.sv     |        |     |    **  |       |
| testbench     |   X     |  X   |     |       |
| DataMemoryTest.cpp    |   **     |    |     |       |


** - Main Contributor
* - Partial Contributor


