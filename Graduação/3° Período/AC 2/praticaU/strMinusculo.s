main:
# ler string tamanho a1 e armazenar no endereco apontado por a0
addi a0, zero, 0x000005e0 # endereco aleatorio
addi a1, zero, 5 # 5 = tamanho da string
addi t0, zero, 6
ecall

str:
beqz a1, end
# ler byte unsigned
lbu t1, a0, 0
# 97 = a, minusculo e 65 = A, maiusculo
addi t0, t1, -96
addi a1, a1, -1
addi a0, a0, 1
blt t0, zero, str
addi s0, s0, 1
j str

end:
mv a0, s0
addi t0, zero, 1
ecall