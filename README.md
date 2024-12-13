# Working Single-Cycle and Working Pipelined Processors (Initial versions that passed the testcases)

This branch contains the ```rtl_single_cycle``` and ```rtl_pipelining``` folders that we had initially worked on, referring to the single-cycle processor and pipelined processor ONLY. For the final version of pipelined (which includes the cache and the BPU, refer to the ```main``` branch)

To run the Tests 1-4 for both these folders, navigate to the ```tb``` directory, and run ```./doit.sh```. This should pass all testcases. It should also pass the tests for every pdf function and the F1 lights. Ensure that the data_memory and instruction_memory files are reading the correct files. 
