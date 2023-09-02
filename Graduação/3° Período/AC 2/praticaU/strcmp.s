.data
    str1: .asciiz "string1"    # Primeira string
    str2: .asciiz "string2"    # Segunda string

.text
.globl main
.globl strcmp

strcmp:
    # Argumentos:
    # a0: Endereço da primeira string
    # a1: Endereço da segunda string

    lbu t0, 0(a0)        # Carrega o primeiro caractere da primeira string
    lbu t1, 0(a1)        # Carrega o primeiro caractere da segunda string
    beqz t0, check_end   # Verifica se chegou ao final da primeira string
    beqz t1, not_equal   # Verifica se chegou ao final da segunda string

compare_loop:
    beq t0, t1, next_char   # Compara os caracteres
    li a0, 1               # Retorna 1 se forem diferentes
    j end

next_char:
    addi a0, a0, 1         # Avança para o próximo caractere na primeira string
    addi a1, a1, 1         # Avança para o próximo caractere na segunda string
    lbu t0, 0(a0)          # Carrega o próximo caractere da primeira string
    lbu t1, 0(a1)          # Carrega o próximo caractere da segunda string
    bnez t0, compare_loop  # Verifica se chegou ao final da primeira string

check_end:
    beqz t1, equal      # Verifica se chegou ao final da segunda string
    li a0, 1            # Retorna 1 se forem diferentes
    j end

equal:
    li a0, 0           # Retorna 0 se forem iguais

not_equal:
    j end

main:
    la a0, str1        # Passa o endereço da primeira string em a0
    la a1, str2        # Passa o endereço da segunda string em a1
    jal strcmp         # Chama a função strcmp
    move a1, a0        # Move o resultado para a1 para impressão
    li a0, 1           # Escolhe o número de syscall (impressão)
    ecall              # Chama a syscall

end:
    li a7, 10          # Escolhe o número de syscall (encerramento do programa)
    ecall              # Chama a syscall
