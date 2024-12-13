# This program tests all Branch Type instructions
.section .text
.globl _start

_start:
    # Initialize registers
    li t0, 5         # Test value 1
    li t1, 10        # Test value 2
    li t2, 5         # Test value 3
    li t3, 0         # Counter for branch passes

    # Test beq (branch if equal)
    beq t0, t2, beq_pass
    j beq_fail
beq_pass:
    addi t3, t3, 1   # Increment counter
beq_fail:

    # Test bne (branch if not equal)
    bne t0, t1, bne_pass
    j bne_fail
bne_pass:
    addi t3, t3, 1   # Increment counter
bne_fail:

    # Test blt (branch if less than)
    blt t0, t1, blt_pass
    j blt_fail
blt_pass:
    addi t3, t3, 1   # Increment counter
blt_fail:

    # Test bge (branch if greater than or equal)
    bge t1, t0, bge_pass
    j bge_fail
bge_pass:
    addi t3, t3, 1   # Increment counter
bge_fail:

    # Test bltu (branch if less than, unsigned)
    li t4, 0xFFFFFFFF # Large unsigned value
    bltu t0, t4, bltu_pass
    j bltu_fail
bltu_pass:
    addi t3, t3, 1   # Increment counter
bltu_fail:

    # Test bgeu (branch if greater than or equal, unsigned)
    li t5, 0         # Small unsigned value
    bgeu t4, t5, bgeu_pass
    j bgeu_fail
bgeu_pass:
    addi t3, t3, 1   # Increment counter
bgeu_fail:

    # Finalize result in a0
    mv a0, t3        # Non-zero result (number of branches passed)

    # Infinite loop
finish:
    j finish         # Loop forever
