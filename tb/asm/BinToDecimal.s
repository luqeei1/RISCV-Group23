    .section .text
    .globl _start

_start:
    # Initialize registers
    li t0, 0b101010101011100   # t0: Binary number to convert (example: 0b101010101011100 which is 21852)
    li t1, 0            # t1: Decimal result (initialize to 0)
    li t2, 1            # t2: Multiplier (initialize to 1)

convert_loop:
    # Check if all bits have been processed (t0 == 0)
    beqz t0, finish

    # Extract the least significant bit
    andi t3, t0, 1      # t3 = t0 & 1 (mask lowest bit)

    # Multiply the bit by the current multiplier using repeated addition
    li t4, 0            # t4 = 0 (initialize result of multiplication)
    li t5, 0            # t5 = counter
multiply_loop:
    beq t5, t3, add_done # If counter == t3, stop multiplication
    add t4, t4, t2      # t4 += t2 (add multiplier to result)
    addi t5, t5, 1      # Increment counter
    j multiply_loop
add_done:

    # Add the result to the decimal total
    add t1, t1, t4      # t1 = t1 + t4

    # Shift t0 right by 1 to process the next bit
    srli t0, t0, 1

    # Update the multiplier (multiply by 2 using addition)
    add t2, t2, t2      # t2 = t2 + t2

    # Repeat the loop
    j convert_loop

finish:
    # Store the result in a0 (decimal equivalent)
    mv a0, t1

    # Infinite loop
infinite_loop:
    j infinite_loop
