# Lucas' Personal Statement

- Name: Lucas Venetz
- CID: 02387237
- GitHub handle: lucasvenetz

| Table of Contents |
|-|
| [Summary](#summary) |
| [Contributions](#Contributions) |
| [Self-reflection](#self-reflection) |

## Summary

- My main contributions were the `hazard unit`, `cache` and integrating the `pipelined processor`, which Theo and I debugged together.
- My [personal logbook](../logs/Lucas_log.md) contains more detailed information on my thought process during the design and debugging process and day-to-day progress.

## Contributions

### Lab 4
- I wrote the `program counter` module and integrated the reduced single-cycle with the `top` module.
- I also wrote the `top` module to integrated the reduced single-cycle processor.
- Due to some complications our commits for Lab 4 were done in a seperate repo, so I am unable to show the commits for this work. However The `program counter` that we used for single-cycle is essentially the same.

### Single Cycle
- As there was not much to add to the `program counter`, I helped out with the other modules, including the `sign extension`
- I also helped set up the initial test infrastructure, including individual unit tests for modules

| Contribution | Commits |
|-|-|
| `Program Counter` | [Commit](https://github.com/luqeei1/RISCV-Group23/commit/755ed7813b33a644026b0deda876ae2c68cfc9c1) |
| Debugging | [Commit](https://github.com/luqeei1/RISCV-Group23/commit/9f427e58ae6ae3840bc6875a63f09edbf07651ee) |
| Debugging | [Commit](https://github.com/luqeei1/RISCV-Group23/commit/087b27cf13a0f797ae4fa0255668e86eddaeac05) |
| `Top` | [Commit](https://github.com/luqeei1/RISCV-Group23/commit/4cbb468f31109eebddfbfa59a7fbfb47d6150b89) |

### Hazard Unit and Pipeline integration
- Because I did not have to do much for the single-cycle, I started working on the `hazard unit` early
- I was also the main contributor for fully integrating the `pipeline`, the schematic of which can be found in the team statement

### (1) Hazard Unit
- We had to implement three different hazard handling techniques: `RAW data dependency hazards`, `load word dependency hazard` and `control hazards due to an incorrect branch prediction, jumping or cache miss`. 
- For the `RAW data dependency hazards`, I implemented the following forwarding logic: 
**(i)** forwarding from the **writeback** stage and **(ii)** from the **execute** stage. We also had to modify the register file to only write on the *negative edge* to avoid the instruction in the decode stage using a register that is still being updated in the write-back stage. Theo and I worked out that this change enabled us to forward the data being read from the main memory in the **Memory stage** (if we are reading from the memory). 

- To detect a `LW dependency hazard`, I implemented a new signal `MemRead` that indicates when a `load type` instruction is executed. A stall signal is then propogated if `MemRead` is high and one of the source registers in the decode stage is needed in the execute stage.
- To stall, the fetch/decode flipflop simply inserts a **NOP** instruction in the pipeline, and the `program counter` is paused.

    ```
    InstrD <= 32'h00007013; // NOP: andi 0x 0x 0
    ```
- I also realised that the decode/execute flipflop only had to be flushed if an incorrect branch was taken (i.e the `branch prediction unit` made a wrong prediction), or an always jump instruction was taken (`JALR` or `JAL`). So we had a seperate flush signal `flushDE` to set the control signals to zero.
- A `miss_stall` also has to be executed if there is a cache miss, as the main memory has to be accessed and write the new data to the cache. 

|Contribution | Commits |
|-|-|
|`Hazard Unit` | [Commit](https://github.com/luqeei1/RISCV-Group23/commit/cbee762ebbada6378e3faca397ba29c0ae3e2323) |
|`LW hazard`| [Commit](https://github.com/luqeei1/RISCV-Group23/commit/e550bce4151987d3dbec5c434b290fdd7e1c3b48) |
|`Forwarding from Memory`| [Commit](https://github.com/luqeei1/RISCV-Group23/commit/0755f43210b30e945e93fe01002802459061148b) |
|`miss stall`| [Commit](https://github.com/luqeei1/RISCV-Group23/commit/9e2c14117a39edfcd85254775f8c24da967f400e) |

### (2) Pipeline integration
- I was again the main contributor to the `top` module, as I had already gotten started with the `hazard unit`, which requires a lot of additional control signals that I had to implement within other modules.
- Most of my time was spent debugging the pipelined processor with Theo, with most of the bugs stemming from incorrect `hazard handling`, handling `branch predictions` and overwriting issues in the `cache`.

|Contribution | Commits |
|-|-|
|`Top`| [Commit](https://github.com/luqeei1/RISCV-Group23/commit/0dedeea5d73900a4cc7295610d8979dea3bba555) |
|`D/E Flipflop flush`| [Commit](https://github.com/luqeei1/RISCV-Group23/commit/2f0ce5f364fdd10c8c6b06caf411388df8b1209c) |
|`Jump flush`| [Commit](https://github.com/luqeei1/RISCV-Group23/commit/defb919e0c6cfb1dc47ed30b71e4dde8ad865ef5) |

### (3) Cache
- I was also responsible for implementing the `cache`, where I went through several design iterations, and refactored the data memory.
- I initially designed a direct-mapped, write-back cache with dirty bit that I used a finite-state machine to implement. There would only be 3 states: `COMPARE_TAG`, `ALLOCATE` and `WRITE_BACK`, so a cache miss would have required a two-cycle stall. 

- However, during testing I kept on running into synchronization errors, where the state would switch before a hit could be detected.
- Unfortunately I did not have enough time to correctly sync my asynchronous and clocked logic. So I decided to implement a simpler write-through, direct-mapped cache where a cache miss would only require a one-cyle stall, and finite-state logic wouldn't be needed.

- The most common error I encountered was with single byte addressing, particularly byte overwriting with `sb` instructions, which was quite annoying to debug with 64 bit cachelines. Ifixed this with some clever byte splicing which I am pretty happy with.
```
if(hit0) begin
    cache_mem[set].way[0].data[(addr[2:0] * 8) +: 8] <= write_data[7:0];
end else if (hit1) begin
    cache_mem[set].way[1].data[(addr[2:0] * 8) +: 8] <= write_data[7:0];
end
```
<div align = "centre">
  <img src = "docs/images/gtkwave_cache.png"> </img>
</div>
**Writing byte to correct place in cacheline**

- After ensuring the basic cache would function, I changed the data structure of the cache memory to include **2 ways**, and implemented **spatial locality** by increasing the **block size to 8 bytes** (2 words).

- Using data structures significantly simplified the logic, and allowed for easy scaling if we wanted to add more ways to the cache.

|Contribution | Commits |
|-|-|
|`Write-back Cache (FSM)` | [Commit](https://github.com/luqeei1/RISCV-Group23/commit/30313ff45b0eac8fd8f73171f29b6bf520916298) |
|`Write-through Cache` | [Commit](https://github.com/luqeei1/RISCV-Group23/commit/66653bef6dede9d1e3954f9afa9e7e5931289e8a) |
|`Cache data struct`| [Commit](https://github.com/luqeei1/RISCV-Group23/commit/6dba5f8259aff036dff6878b9e785631525f1b46) |
|`Top to handle byte addressing`| [Commit](https://github.com/luqeei1/RISCV-Group23/commit/a185b848518ae909f769d5afe5d9abfc89d73fd0) |

## Self Reflection

### What I learnt
- Gained a much deeper understanding of a RISCV CPU on a RTL level, particularly in areas such as memory management and caching. Spending so much time tracing the different schematics for pipelining has significantly improved my ability to visualize the control and data paths. 

- Was a great opportunity to properly learn how to use gTest, and greatly improved my ability to read waveforms and single out the error and the problematic modules.

- Was my first time effectively using Github to collaborate, and I was able to quickly learn the many features of Git. Learning how to use version control, managing merge conflicts and using branches was especially helpful for debugging and for seperating a system that worked from one that was still in development.

### What I could have done differently

- I would have spent more time expanding the testbench and writing additional `asm` tests to isolate specific hazard handling errors and testing specific edge cases, especially for the cache. I spent too much of my time just locating the error within the program.

- We should have introduced a `.gitignore` from the start, as solving the merge conflicts resulting from the many junk files generated during testing was extremely annoying. I should have also used clearer commit messages and the co-authoring feature for proper contribution tracking and version control.

- For the cache, I should have started with the most basic design iteration and worked my way up knowing I could always fallback on a previous version, rather than spend hours debugging a complex design, and encountering many errors all at once. I would have really liked to get the write-back cache with the dirty bit working, but unfortunately did not have the time after finishing the write-through cache.


