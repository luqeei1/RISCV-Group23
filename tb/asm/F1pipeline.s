.text
.globl main

main:
        addi    a0, zero, 0                  
        li      a4, 0xff                     
        li      a1, 0xABC                    

wait_trigger:
        addi    a0, zero, 0                  
        lw      a5, 0x100(zero)              
        andi    a5, a5, 1                    
        beq     a5, zero, wait_trigger       

        addi    a0, zero, 1                  

led_sequence:
        mv      a2, a1                       
        srli    a3, a2, 2                    
        xor     a2, a2, a3                   
        srli    a3, a2, 1                    
        xor     a2, a2, a3                   
        slli    a2, a2, 1                    
        ori     a2, a2, 1                    
        mv      a1, a2                       

        andi    a3, a2, 0x1F                 
        addi    a3, a3, 20                   
        jal     ra, delay_routine            

        slli    t0, a0, 1                    
        ori     a0, t0, 1                    

        beq     a0, a4, pattern_complete     
        j       led_sequence                 

pattern_complete:
        li      a3, 50                      
        jal     ra, delay_routine           

        j       wait_trigger                 

delay_routine:
        addi    a3, a3, -1                  
        bne     a3, zero, delay_routine     
        ret       
        