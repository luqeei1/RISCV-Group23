.text
.globl main

main:
    JAL ra, init            # jump to init and save return address in ra
    j   main                # unconditional jump back to main

init:
    li s0, 0x0        # s0 holds the current state
    li s1, 0xff       # s1 holds the target value
    li s2, 0x0       # s2 outputs the current state
    li s3, 0x4       # s3 controls the delay counter

loopi:
    slli s0, s0, 1
    addi s0, s0, 1
    and  s2, s1, s0 

wait:
    addi s3, s3, -1
    bne s3, zero, wait
    addi s3, zero, 0x4
    bne s1, s0, loopi       # if s1 != s0, jump to loopi and keep turning lights on
    addi s2, zero, 0        # if s1 == s0, turn off all lights
    ret