# Working Pipelined Processor (Initial version with hazard handling and branch prediction unit that passed the testcases)

This branch contains the ```rtl_pipelining``` folder that we had initially worked on, referring to the pipelined processor with hazard handling and branch prediction ONLY. 

For the final version of pipelined (which includes the cache too, refer to the ```main``` branch). This branch does NOT contain cache. 

## How to run Tests 1-5
To run the Tests 1-5, navigate to the ```tb``` directory, and run ```./doit.sh```. This should pass all testcases. It should also pass the tests for every pdf function. Ensure that the ```data_memory.sv``` is reading ```data_memory.hex``` and the ```instruction_memory.sv``` file is reading ```InstructionFiles/pdf.hex```

## How to run F1 lights
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

## How to run PDF functions

To test PDF, ensure that the Data Memory contains the path to read either ```MemoryFiles/gaussian.mem```, ```MemoryFiles/noisy.mem``` or ```MemoryFiles/triangle.mem``` depending on which pdf function you desire to test.

The ```instruction_memory.sv``` file should always contain ```pdf.hex```

For a gaussian PDF test, the ```data_memory.sv``` file should contain gaussian.mem

For a noisy PDF test, the ```data_memory.sv``` file should contain noisy.mem

For a triangle PDF test, the ```data_memory.sv``` file should contain triangle.mem
