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
  tfp->open ("VCD/F1.vcd");
 
  // initialise Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("F1: LED Pattern");
  vbdSetMode(1);        // Set to button mode

  // initialise simulation inputs
  top->clk = 1;
  top->rst = 1;
  top->trigger = 1;

  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    if (simcyc < 5) {
      top->trigger = 1;
    }
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval();
      top->eval();  // Second eval for pipeline stability
    }

    // Display pattern on VBuddy and get button state
    vbdBar(top->a0 & 0xFF);
    pattern = top->a0;

    // Modify reset timing for pipeline flush
    top->rst = (simcyc < 5);  // Extended reset period for pipeline flush
    vbdCycle(simcyc);

    if (Verilated::gotFinish())  exit(0);
  }

  //vbdClose();     
  tfp->close(); 
  exit(0);
}
