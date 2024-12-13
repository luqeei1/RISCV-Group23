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
- Added support for single byte addressing in FSM
- Integrated data memory into top memory module
- Fixed error where trying $readmem file addresses beyond bounds of ram array - base address should have been 17 bits not 32 bits

# 7/12
- Created top file for pipelined cpu, integration of all modules
- Integrated hazard handling and word forwarding logic
- Integrated branch prediction unit with the program counter
- Created a new signal MemRead for the hazard unit

# 8/12
- Simplified PCnext logic, use jump and branch signals rather than hardcode PcSrc
- Debugging pipelined cpu and conflicting signals
- For stalls, insert nop instruction 0x0007013 andi 0x 0x 0 in fetch/decode stage
- Cleaned up data memory: moved RD select logic out of the data memory and corrected logic to properly handle byte addressing
- Changed regfile to write on the negative edge - passes Test3

# 9/12
- Debug pipeline for lw dependencies
- Fixed flushing logic - only have to flush DE flipflop when branch prediction is wrong
- Added flush for whenever a JAL occurs
- Added new logic to forward from the memory stage 

# 10/12
- Tried debugging write-back cache
- Synchronization issues with clocked and synchronous logic, COMPARE_TAG state was changing to the ALLOCATE state (to populate cache) even when there is a cache hit, because it takes a cycle before computing cache hit. 
- Unable to move logic to always_comb block because of synchronization issues 

# 11/12
- Changed cache to direct-mapped, write-through with 32-bit cachelines. 
- Fixed how stalls are executed when there is a cache miss
- Fixed single-byte addresing, and byte overwriting issues
- 32-bit cache was working, so increased block size to 8 bytes.
- Got 64-bit cacheline working for Test3.

# 12/12 - 13/12
- Pipelined processor with branch prediction unit with write-through cache passes Test3 but fails pdf program. For some reason cache was affecting the synchronization logic in the branch prediction unit, and the oldBranch variable was not being properly written to from the first element of the queue, leading to an incorrect jump. Error only occured in one cycle.
- Theo changed branch prediction to static branch, which solved the previous issue, and PC is now jumping correctly. 
- But introduced another non-obvious issue, and could only see a deviation from normal datamemory output in the ~300k cycle. Seems to be an addressing issue.
- Error happened to be mistake with LRU synchronization, leading to really inconsistent outputs in the cache out.
- After removing LRU policy and changes in branch prediction logic finally passed all tests, including the pdf program.

# 14/12
- Working on personal statement and team statement.
