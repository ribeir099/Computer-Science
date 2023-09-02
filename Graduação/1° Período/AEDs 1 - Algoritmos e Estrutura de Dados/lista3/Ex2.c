#include <stdio.h>
#include <stdlib.h>

void pesquisa(int habitantes);

int main() {
    int n;

    printf("\n Digite o numero de habitantes que vao participar da pesquisa: ");
    scanf("%d", &n);

    pesquisa(n);

    return 0;
}

void pesquisa(int habitantes) {
    float salarioT = 0, filhosT = 0, mediaS = 0, mediaF = 0;
    
    for (int i = 0; i < habitantes; i++) {
        float salario;
        int filhos;
        printf("\n Habitante %d-\n", i + 1);

        // Recebendo o valor do salário do usuário.
        printf(" Digite seu salario: ");
        scanf(" %f", &salario);

        // Recebendo a quantidade de filhos do usuário.
        printf(" Digite quantos filhos tem: ");
        scanf(" %d", &filhos);

        // Somando todos os salários inseridos.
        salarioT += salario;

        // Somando a quantidade de filhos inserida.
        filhosT += filhos;
    }

    // Calculando a média de salário da população.
    mediaS = salarioT / habitantes;

    // Calculando a média de filhos da população.
    mediaF = filhosT / habitantes;

    // Imprimindo os resultados.
    printf("\n\n A media do salario da populacao e: R$%.2f.", mediaS);
    printf("\n A media de filhos da populacao e: %.1f filhos.\n\n", mediaF);
}