#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sequencia, positivo = 0, negativo = 0, zero = 0, num;
    float percentP, percentN, percentZ;

    // Recebendo do usuário a quantidade de valores que serão digitados.
    printf("\n\n Digite a quantidade de valores que serao digitados: ");
    scanf("%d", &sequencia);

    // Executando um laço de repetição da quantidade de valores recebidos.
    for (int i = 0; i < sequencia; i++)
    {
        // Recebendo o próximo número da sequência.
        printf(" Digite o numero: ");
        scanf("%d", &num);

        // Verificando e contando se o número é positivo, negativo ou zero.
        if (num > 0)
        {
            positivo++;
        }
        else if (num < 0)
        {
            negativo++;
        }
        else
        {
            zero++;
        }
    }

    // Canculando o percentual de valores positivo, negativo ou zero em relação ao total.
    percentP = (positivo * 100) / sequencia;
    percentN = (negativo * 100) / sequencia;
    percentZ = (zero * 100) / sequencia;

    // Imprimindo os resultados.
    printf("\n Foram digitados %d numeros positivos = %.2f%% do total.", positivo, percentP);
    printf("\n Foram digitados %d numeros negativo = %.2f%% do total.", negativo, percentN);
    printf("\n Foram digitados %d numeros zero = %.2f%% do total.\n\n", zero, percentZ);

    return 0;
}