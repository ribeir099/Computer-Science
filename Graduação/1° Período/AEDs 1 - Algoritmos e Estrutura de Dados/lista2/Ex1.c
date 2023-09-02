#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sequencia, positivo = 0, negativo = 0, zero = 0, num;

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

    // Imprimindo os resultados.
    printf("\n Foram digitados %d numeros positivos", positivo);
    printf("\n Foram digitados %d numeros negativo", negativo);
    printf("\n Foram digitados %d numeros zero\n\n", zero);

    return 0;
}