# Lucas Logbook
## 14/11 - 21/11
- Created the Program Counter for Lab 4
- Helped with control unit, sign extension module
- Created top module for Lab 4, managing port decleration between modules and interconnecting wires

## 26/11
- Planning what signals would be needed for stalls and flushing for pipelining
- Discussed possible basic branch prediction algorithms and how they could be implemented

## 27/11
- Added hazard unit, implementing word forwarding and stalls
- Added general module for muxes
- Added a Constant definition file for better code readability

## 28/11
- Helped implement byte addressing and half-word addressing
- Designed direct-mapped cache with write-back caching
- Looked at using a FSM to implement caching

## 29/11
- Modified program counter module to include all jump/branch instructions
- Wrote unit test for program counter and passed

# 2/12
- Wrote unit test for program counter
- Added cache FSM and cache data structure modules (direct-mapped cache)
- Added top module to integrate data memory and cache

# 3/12
- Made some changes to data memory
- Added top file for single cycle
- Fixed bug in hazard unit where there was unintended word forwarding when RdW or RdM were 0

# 5/12