# Sid's Logbook
## 14/11 - 21/11 (Lab 4)
- Responsible for the ALU and Register File
- Wrote unit tests for testing the ALU

## 28/11
- Added branch instructions and complete ALU operations
- Added initial register file implementation with minimal testing

## 29/11
- Created ALU testbench script, kept modifying and debugging the file until all test cases for all specified instructions were passed using GTest
- Created Register File

## 30/11
- Cleaned up GitHub repo, removing redundant files and creating folders for pipelined and single cycle implementations
- Wrote the F1.s assembly code for the light sequence

## 1/12 - 3/12
- Created a testbench and tested the F1.s assembly code using the Vbuddy 
- Created the alu.sv and regfile.sv files for pipelined implementation 

## 4/12
- Modified top.sv file to include data_memory.sv
- Created instructionMemory.sv
- Debugged inconsistencies in signal names across alu.sv, program_counter.sv, data_memory.sv, control_unit.sv, reg_file.sv to make them compatible with top.sv file
- Renamed DataPath.sv and DataPathTest.cpp to less confusing names			
- added arbitary values to datamem.hex to bypass an error. CHANGE LATER
- modified default case on signExtend block, correcting syntax errors with the case on controlUnit.sv
- Began testing the F1 script on the lights

## 5/12 - 6/12
- Implemented and tested F1 script, iteratively including a random delay and a trigger
- assembled program.hex and wrote into it
- Many hours were spent debugging the testbench for the F1 light sequence
