#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "vbuddy.cpp"    

#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     
  int tick;       
  int pattern = 0;

  std::ignore = system("touch data_memory.hex");

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vtop * top = new Vtop;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("F1.vcd");
 
  // initialise Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("F1: LED Pattern");
  vbdSetMode(0);        // Set to continuous mode

  // initialise simulation inputs
  top->clk = 1;
  top->rst = 0;
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    // Display pattern on VBuddy
    if (top->a7 == 0x31) {      // Check for VBuddy ecall
      vbdBar(top->a1);          // Display value from a1 register
      pattern = top->a1;        // Save current pattern
    }

    // set up input signals of testbench
    top->rst = (simcyc < 3);    // assert reset for 1st cycle
    vbdCycle(simcyc);

    if (Verilated::gotFinish())  exit(0);
  }

  vbdClose();     
  tfp->close(); 
  exit(0);
}
