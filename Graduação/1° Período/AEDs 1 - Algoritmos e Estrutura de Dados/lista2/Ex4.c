#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float e = 1, fat = 1;

    printf("\n\n Formula E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!\n");
    
    // Recebendo o valor de E do usuário.
    printf(" Digite o valor de E: ");
    scanf("%d", &n);

    // Calculando o valor de E
    for (int i = 1; i <= n; i++)
    {   
        // Calculando o fatorial do número.
        fat = fat * i;

        // Adicionando o fatorial do número calculado ao valor de E conforme a fórmula.
        e += 1 / fat;
    }

    // Imprimindo o resultado.
    printf("\n O valor de E = %.4f\n\n", e);

    return (0);
}