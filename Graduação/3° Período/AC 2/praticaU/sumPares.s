main:
addi s0, zero, 0

loop:
addi t0, zero, 4
ecall
beqz a0, end
andi t0, a0, 1
bnez t0, loop
add s0, s0, a0
j loop

end:
mv a0, s0
addi t0, zero, 1
ecall
