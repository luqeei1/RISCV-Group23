    .text
    .globl main

    main:
        addi    a0, zero, 0x0                # LED pattern starts at 0
        la      a1, seed                     # Load address of seed
        li      a4, 0xFF                     # Value to check for reset

    wait_trigger:
        lw      a5, 0x100(zero)              # Read button input
        andi    a5, a5, 0x1                  # Mask to get button bit
        beq     a5, zero, wait_trigger       # If button not pressed, keep waiting

    shift_loop:
        slli    a0, a0, 1                    # Shift left by 1
        ori     a0, a0, 0b1                  # Set rightmost bit to 1

        # Random number generation
        lw      a2, 0(a1)                    # Load current seed
        li      a3, 16807                    # Multiplier (prime)
        mul     a2, a2, a3                   # Generate random number
        addi    a2, a2, 997                  # Add increment
        sw      a2, 0(a1)                    # Store new seed
        
        srli    a3, a2, 8                   # Get delay value
        addi    a3, a3, 8                   # Add base delay

    delay_loop:
        addi    a3, a3, -1                   # Decrement counter
        bne     a3, zero, delay_loop         # Continue until counter is 0

        andi    a0, a0, 0xFF                 # Keep only lower 8 bits
        beq     a0, a4, reset                # Reset if all bits are 1
        beq     zero, zero, shift_loop       # Continue pattern

    reset:
        addi    a0, zero, 0x0                # Reset LED pattern
        beq     zero, zero, wait_trigger     # Wait for next trigger

    .data
    seed:   .word 12345                      # Initial seed value
    

