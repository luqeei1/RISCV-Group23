# RISC-V Assembly Program to Test RV32I Instruction Set
.section .text
.globl _start

_start:
    # Initialize registers
    li t0, 10           # Test constant
    li t1, 20           # Test constant
    li t2, 5            # Test constant

    # Arithmetic Instructions
    add t3, t0, t1      # t3 = t0 + t1 (10 + 20 = 30)
    sub t4, t1, t0      # t4 = t1 - t0 (20 - 10 = 10)
    add t5, t3, t4      # t5 = t3 + t4 (30 + 10 = 40)

    # Logical Instructions
    and t6, t5, t2      # t6 = t5 & t2 (40 & 5 = 0)
    or t6, t6, t2       # t6 = t6 | t2 (0 | 5 = 5)

    # Branch Instruction Test
    beq t0, t0, skip    # Branch if Equal (always taken)
    li t6, 0xdead       # Fail if branch not taken
skip:
    bne t0, t1, continue # Branch if Not Equal (always taken)
    li t6, 0xdead       # Fail if branch not taken

continue:
    # Immediate Instructions
    addi t6, t6, 10     # t6 = t6 + 10 (5 + 10 = 15)
    andi t6, t6, 0xff   # t6 = t6 & 0xff (15 & 0xff = 15)

    # Finalize Result in a0
    mv a0, t6           # Move t6 to a0 (a0 = 15)

    # Infinite Loop
finish:
    bne a0, zero, finish