# s0: current state
# s1: target value
# s2: output state
# s3: delay counter
# t0: temporary register

.text
.globl main

main:
    JAL ra, init
    j   main

init:
    lui t0, 0x0
    addi t0, t0, 0x0
    si t0, 0x0

    lui t0, 0x0
    addi t0, t0, 0xff
    si t0, 0x4

    lui t0, 0x0
    addi t0, t0, 0x0
    si t0, 0x8

    lui t0, 0x0
    addi t0, t0, 0x4
    si t0, 0xc

    li s0, 0x0
    li s1, 0x4 
    li s2, 0x8
    li s3, 0xc      

loopi:
    slli s0, s0, 1 
    addi s0, s0, 1
    and s2, s1, s0
    si s2, 0x8

wait:
    addi s3, s3, -1 
    bne s3, zero, wait 
    lui t0, 0x0
    addi s3, t0, 0x4 
    bne s1, s0, loopi
    addi s2, zero, 0
    si s2, 0x8
    ret
