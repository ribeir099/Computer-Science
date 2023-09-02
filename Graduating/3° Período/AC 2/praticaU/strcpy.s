strcpy:
# precisaremos retornar o a0, salvar antes de usar o a0
add t0, a0, zero

loop:

# ler byte unsigned
lbu t1, 0(a1)

# escrever byte unsigned
sb t1, 0(a0)

# incrementar a0 e a1
addi a1, a1, 1
addi a0, a0, 1

# verificar se string terminou
bne t1, zero, loop

# recuperar a0 original
add a0, t0, zero
ret

main:
# ler string tamanho a1 e armazenar no endereco apontado por a0
addi a0, zero, 0x000005e0
addi a1, zero, 5
addi t0, zero, 6
ecall


# chamar strcpy, a0 destino, a1 source
addi a0, zero, 0x000005c0
addi a1, zero, 0x000005e0
call strcpy

ret
