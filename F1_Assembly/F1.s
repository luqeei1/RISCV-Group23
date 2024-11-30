# calculates the sum of all numbers from 0 to 255

init:
    addi t0, x0, 0
    addi a0, x0, 0xFF
    addi t3, x3, 0
    
main:
    beq t0, a0, end
    addi t0, t0, 1
    add t3, t3, t0
    
    # Vbuddy output
    addi a0, t0, 0      # Copy counter to a0
    li a7, 0x07         # Vbuddy function code for plotting
    ecall               # Call Vbuddy to display/plot value
    
    j main

end:
    add a0, t3, x0
    ret
    