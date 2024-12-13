# Working Single-Cycle Processor (Initial version that passed the testcases)

This branch contains the primary deliverable of this coursework, which is the fully verified single-cycle processor. This works fine on the older version of Verilator, as well as the new one.

For details on this and any test results, refer to the main branch as well as our individual logbooks and personal statements.


## IMPORTANT: HOW TO RUN THE SCRIPTS (read this before running any scripts)

please connect VBUDDY:

```
~/Documents/iac/lab0-devtools/tools/attach_usb.sh
```
These instructions are suitable if running from Windows. the first command should connect the Vbuddy, and the second command lets you know what the name of the port that Vbuddy is connected to. if this is different from the ```vbuddy.cfg``` file, then update this and check the name via: 

```
ls /dev/ttyU*
```

### Running the Tests 1-5

Use ``` cd tb ``` to make sure you are in the ``` tb ``` directory and run the script as follows:

```
./doit.sh
```

make sure that ``` data_memory.sv ``` contains ``` data_memory.hex ``` and that ```instruction_memory.sv ``` contains ```pdf.hex```. 

## How to run F1 lights
For the F1 lights, ensure that:
- the ```instruction_memory.sv``` file is always reading ```program.hex```. It should be as follows within this initialisation:

```
initial begin
    $display("Loading rom.");
    $readmemh("program.hex", rom_array);     
    $display("ROM loaded successfully.");
end
```

- ```Data_memory.sv``` needs to read ```data_memory.hex```
- Also ensure that the Vbuddy is properly connected and to the correct port name specified in the ```vbuddy.cfg``` file

- ```note``` Trigger may need to be clicked a few times before lights begin. This is dependant on the Vbuddy. 


### Testing the probability density function tests

There were three files: gaussian.mem, noisy.mem, and triangle.mem , which could be run by running the ```./pdf.sh``` command on terminal, ensuring it was being tested via the ```pdfgen_tb.cpp``` testbench. To ensure that the pdf would plot very fast, we decided to ignore when a0 was zero. This change was made in the test bench. The full explanation can be found in Akarsh's logbook.

To test PDF, ensure that the Data Memory contains your memory file of interest with the right path

The ```instruction_memory.sv``` file should always contain ```pdf.hex```.

the following ```.mem``` files are found in the sub-folder ```MemoryFiles``` : 

 - For a gaussian PDF test, the ```data_memory.sv``` file should contain ```gaussian.mem```
  
 - For a noisy PDF test, the ```data_memory.sv``` file should contain ```noisy.mem```
  
 - For a triangle PDF test, the ```data_memory.sv``` file should contain ```triangle.mem```


