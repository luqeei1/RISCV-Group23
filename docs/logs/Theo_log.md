# Theo's Logbook
## 14/11 - 21/11 (Lab 4)
- Responsible for the instruction memory, control unit, and sign extension unit
- Wrote unit tests for each module

## 26/11
- Planning what signals would be needed for stalls and flushing for pipelining
- Discussed possible basic branch prediction algorithms and how they could be implemented

## 27/11
- Suggested using a constant definition file for better code readability

## 28/11
- Updated the control unit to support all of the I, R, U, and J type instructions
- Discussed ways to implement the U type, JAL, and JALR instructions

## 29/11
- Added logic to the ALUDecoder to support all of the RV32I Branch instructions

## 2/12
- Started work on the branch prediction unit
- Changed the ouput "PCSrc" from the control unit from one bit to two bits, working with Lucas's "program_counter.sv" module to ensure my output signal matched his input signal logic

## 3/12
- Added modeBU logic to the control unit so that we can control whether word, half, or byte addressing occurs
- Adhered to the signals set by Akarsh in his "dataPath.sv" module

## 4/12 
- Changed ControlUnit logic for JALR and U-type instructions
- Improved and finished the branch prediction unit

## 5/12
- Added extra necessary signals to the pipeline FF's
- Wrote a working unit test for the ControlUnit/ALUDecoder

## 6/12 
- Helped debug the F1 simulation 
- Successful in getting the F1 simulation working
- Wrote testbenches for all Tests and converted into HEX files

## 7/12
- Passed Test 1 and Test 2
- Worked on and solving issues with Test 3 and Test 4
- Started testing with the PDF simulation/test