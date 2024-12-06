.text
.globl main

main:
    li      t2, 0x2000
iloop:
    lw      s10, 0 (t2)
    beq     s10, zero, iloop
    jal     ra, init
    j       iloop
    ret

init:
    addi    a0, zero, 0x1
    addi    a0, zero, 0x3
    addi    a0, zero, 0x7
    addi    a0, zero, 0xF
    addi    a0, zero, 0x1F
    addi    a0, zero, 0x3F
    addi    a0, zero, 0x7F
    addi    a0, zero, 0xFF
    ret



