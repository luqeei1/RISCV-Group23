# Working Single-Cycle Processor (Initial version that passed the testcases)

This branch contains the primary deliverable of this coursework, which is the fully verified single-cycle processor. This works fine on the older version of Verilator, as well as the new one.

For details on this and any test results, refer to the main branch as well as our individual logbooks and personal statements.

To run these files:


## IMPORTANT: HOW TO RUN THE SCRIPTS (read this before running any scripts !)

To run scripts on the ```main``` branch (which contains the functional pipelined processor with two-way cache and a branch prediction unit), you need to upgrade to the **latest version** of Verilator, which is ```Verilator 5.0231```. 

please connect VBUDDY:

```
~/Documents/iac/lab0-devtools/tools/attach_usb.sh
```
These instructions are suitable if running from Windows. the first command should connect the Vbuddy, and the second command lets you know what the name of the port that Vbuddy is connected to. if this is different from the ```vbuddy.cfg``` file, then update this and check the name via: 

```
ls /dev/ttyU*
```

### Running the Tests 1-4 

Use ``` cd tb ``` to make sure you are in the ``` tb ``` directory and run the script as follows:

```
./doit.sh
```

make sure that ``` data_memory.sv ``` contains ``` data_memory.hex ``` and that ```instruction_memory.sv ``` contains ```pdf.hex```. 
