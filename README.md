# Working Pipelined Processor (Initial version with hazard handling and branch prediction unit that passed the testcases)

This branch contains the ```rtl_pipelining``` folder that we had initially worked on, referring to the pipelined processor with hazard handling and branch prediction ONLY. 

For the final version of pipelined (which includes the cache too, refer to the ```main``` branch). This branch does NOT contain cache. 

To run the Tests 1-5, navigate to the ```tb``` directory, and run ```./doit.sh```. This should pass all testcases. It should also pass the tests for every pdf function. Ensure that the data_memory and instruction_memory files are reading the correct files. 

For the F1 lights, ensure that:
- the ```instruction_memory.sv``` file is always reading ```F1_pipelined.hex```, which can be found in the ```InstructionFiles``` sub-folder within ```rtl_pipelining```. It should be as follows within this initialisation:

```
initial begin
    $display("Loading rom.");
    $readmemh("InstructionFiles/F1_pipelined.hex", rom_array);     
    $display("ROM loaded successfully.");
end
```

- ```Data_memory.sv``` needs to read ```data_memory.hex```
- Also ensure that the Vbuddy is properly connected and to the correct port name specified in the ```vbuddy.cfg``` file.