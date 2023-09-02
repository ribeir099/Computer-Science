#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont39 = 0, cont2 = 0, cont5 = 0;

    // Verificando a divisibilidade de  cada um dos 10 numeros que serão digitados.
    for (int i = 0; i < 10; i++)
    {
        int temp = 0;

        // Recebendo o número do usuário
        printf(" Digite um numero: ");
        scanf("%d", &num);

        // Verificando se o número é diviśivel por 3 e 9 ao mesmo tempo.
        if (((num % 3) == 0) && ((num % 9) == 0))
        {
            cont39 ++;
            temp ++;
        }
        
        // Verificando se o número é diviśivel por 2.
        if ((num % 2) == 0)
        {
            cont2 ++;
            temp ++;
        }

        // Verificando se o número é diviśivel por 5.
        if ((num % 5) == 0)
        {
            cont5 ++;
            temp ++;
        }

        // Verificando se o número não é divisível por nenhum dos números.
        if (temp == 0)
        {
            printf("\n Numero %d nao e divisivel pelos valores.\n\n", num);
        }
    }

    // Imprimindo os resultados.
    printf("\n %d numeros divisiveis por 3 e 9", cont39);
    printf("\n %d numeros divisiveis por 2", cont2);
    printf("\n %d numeros divisiveis por 5\n\n", cont5);

    return 0;
}