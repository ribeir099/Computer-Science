#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int num, soma = 0;

    printf("\n\n Digite um numero inteiro: ");
    scanf("%d", &num);

    // Verificando quais são os números divisiveis.
    for (int i = num; i >= 1; i--) {
        if (num % i == 0) {
            printf("\n O numero %d e divisivel por %d.", num, i);
            soma += i;
        }
    }
    printf("\n\n");

    arquivo = fopen("arquivo7.txt", "w");
    // Escrevendo no arquivo a soma dos divisores do numero.
    fprintf(arquivo, "A soma dos divisores do numero %d e %d.", num, soma);
    fclose(arquivo);

    return 0;
}