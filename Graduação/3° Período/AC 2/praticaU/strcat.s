.data
    str1: .asciiz "Hello, "    # Primeira string
    str2: .asciiz "world!"     # Segunda string
    result: .space 100         # Espaço para a string resultante

.text
.globl main
.globl strcat

strcat:
    # Argumentos:
    # a0: Endereço da primeira string
    # a1: Endereço da segunda string
    # a2: Endereço da string resultante

    la t0, 0(a0)        # Carrega o endereço da primeira string em t0
    la t1, 0(a1)        # Carrega o endereço da segunda string em t1
    la t2, 0(a2)        # Carrega o endereço da string resultante em t2

    copy_loop:
        lbu t3, 0(t0)   # Carrega um caractere da primeira string em t3
        sb t3, 0(t2)    # Armazena o caractere na string resultante
        beqz t3, end    # Verifica se chegou ao final da primeira string

        addi t0, t0, 1  # Avança para o próximo caractere na primeira string
        addi t2, t2, 1  # Avança para o próximo caractere na string resultante

        j copy_loop

    end:
        lbu t3, 0(t1)   # Carrega um caractere da segunda string em t3
        sb t3, 0(t2)    # Armazena o caractere na string resultante
        addi t1, t1, 1  # Avança para o próximo caractere na segunda string
        addi t2, t2, 1  # Avança para o próximo caractere na string resultante
        bnez t3, end   # Verifica se chegou ao final da segunda string

        jr ra           # Retorna para a função chamadora

main:
    la a0, str1        # Passa o endereço da primeira string em a0
    la a1, str2        # Passa o endereço da segunda string em a1
    la a2, result      # Passa o endereço da string resultante em a2
    jal strcat         # Chama a função strcat

    li a0, 4           # Escolhe o número de syscall (impressão de string)
    la a1, result      # Passa o endereço da string resultante para a syscall
    li a2, 100         # Passa o comprimento máximo da string resultante para a syscall
    ecall              # Chama a syscall

    li a7, 10          # Escolhe o número de syscall (encerramento do programa)
    ecall              # Chama a syscall
