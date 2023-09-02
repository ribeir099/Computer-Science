#include <stdio.h>
#include <stdlib.h>

int contaDigitos(int n);

int main()
{
    int num, algarismos;

    // Recebe do usuário um número inteiro.
    printf("\n\n Digite um numero inteiro: ");
    scanf("%d", &num);

    // Adiciona o retorno da função em uma variável e chama a função.
    algarismos = contaDigitos(num);

    // Imprime os resultados.
    printf("\n O numero digitado tem %d digitos.\n\n", algarismos);


    return 0;
}

int contaDigitos(int n) {
    int digitos = 1;

    // Verifica se é o último digito do número e retorna o total de algarismos do número.
    // Também é a condição de parada da função recursiva.
    if (n < 10) {
        return digitos;
    }

    // Retorna o número com um digito a menos de forma recursiva.
    return digitos += contaDigitos(n / 10);
}