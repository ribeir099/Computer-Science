#include <stdio.h>
#include <stdlib.h>

void maiorNum(int *num1, int *num2);

int main() {
    int num1, num2;

    // Recebe do usuário dois números inteiros.
    printf("\n\n Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("\n Digite outro numero inteiro: ");
    scanf("%d", &num2);

    // Chama a função passando os valores por referência.
    maiorNum(&num1, &num2);

    // Imprime o resultado na tela.
    printf("\n O valor do numero 1 e: %d", num1);
    printf("\n O valor do numero 2 e: %d\n\n", num2);

    return 0;
}

// Função que atribui o maior número a primeira variável.
void maiorNum(int *num1, int *num2) {
    // Verifica se o número 2 é maior que o número 1.
    if (*num2 > *num1) {
        // Inverte os valores do número 2 com o número 1.
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}