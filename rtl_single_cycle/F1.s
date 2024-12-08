.text
.globl main

main:
        addi    a0, zero, 0                  # Start with LEDs off
        li      a4, 0xff                     # LED mask for checking completion
        la      a1, seed                     # Load address of seed

wait_trigger:
        addi    a0, zero, 0                  # Ensure LEDs are off while waiting
        lw      a5, 0x100(zero)              # Read button input
        andi    a5, a5, 1                    # Mask to get button state
        beq     a5, zero, wait_trigger       # If button not pressed, keep waiting

        addi    a0, zero, 1                  # Start with first LED

led_sequence:
        # Generate pseudo-random number using LFSR
        lw      a2, 0(a1)                    # Load current seed
        srli    a3, a2, 2                    # Shift right by 2
        xor     a2, a2, a3                   # XOR with shifted value
        srli    a3, a2, 1                    # Shift right by 1
        xor     a2, a2, a3                   # XOR with shifted value
        slli    a2, a2, 1                    # Shift left by 1
        ori     a2, a2, 1                    # Set lowest bit
        sw      a2, 0(a1)                    # Store new seed

        # Create small delay from random value
        andi    a3, a2, 0x1F                 # Get 5 bits (0-31)
        addi    a3, a3, 20                   # Add base delay of 20
        jal     ra, delay_routine            # Call delay subroutine

        # Add next LED to pattern
        slli    t0, a0, 1                    # Shift 1 to get next LED position
        ori     a0, t0, 1                    # Combine with existing pattern

        # Check if pattern is complete
        beq     a0, a4, pattern_complete     # If all LEDs are on, complete the sequence
        j       led_sequence                 # Otherwise, continue sequence

pattern_complete:
        # Add a delay while all LEDs are on
        li      a3, 50                      # Delay at the end
        jal     ra, delay_routine           # Call delay subroutine

        j       wait_trigger                # Go back to waiting (will reset LEDs)

# Delay subroutine
delay_routine:
        addi    a3, a3, -1                  # Decrement counter
        bne     a3, zero, delay_routine     # Continue until counter is 0
        ret                                 # Return to caller

.data
seed:   .word   0xABC                       # Initial seed value
