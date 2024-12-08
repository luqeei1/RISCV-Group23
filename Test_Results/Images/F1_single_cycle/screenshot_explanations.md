## F1.s testing waves

This screenshot shows the initialisation of all the signals. PCF increments by 4, and so the instruction being read (shown through instr) is the next instruction in F1.s. Following the next instruction, a4 is initialised to 0xff, which can be seen through the signals. This shows that the program counter is incrementing correctly and the correct instructions are being fetched. 

## F1.s trigger test single cycle

This screenshot shows the value of instr is FE078AE3 prior to the trigger being pressed - this indicates it is in the part of the code where it is waiting for a trigger. After this, it goes low and the code then jumps to the first instruction and restarts the process of LED sequence. 

## F1.s waveform showing seed values changing

This screenshot shows the seed values changing (in register a1), and the values of the registers a2, a3 and t0.