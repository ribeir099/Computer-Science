#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mediaS, mediaF, maior = 0, percent, salario, salarioT = 0, totalH = 0.0;
    int filhos, filhosT = 0, total100 = 0;

    printf("\n");

    do
    {

        printf("\n Habitante %.0f-\n", totalH + 1);

        // Recebendo o valor do salário do usuário.
        printf(" Digite seu salario: ");
        scanf(" %f", &salario);

        // Recebendo a quantidade de filhos do usuário.
        printf(" Digite quantos filhos tem: ");
        scanf(" %d", &filhos);

        // Verificando se o salário digitado é positivo.
        if (salario > 0)
        {   
            // Somando todos os salários inseridos.
            salarioT += salario;

            // Somando a quantidade de filhos inserida.
            filhosT += filhos;

            // Armazenando o maior salário digitado.
            if (salario > maior)
            {
                maior = salario;
            }

            // Armazenando o total de pessoas com salário até 100 reais.
            if(salario <= 100){
                total100 += 1;
            }

            // Somando a quantidade de habitantes que participaram da pesquisa.
            totalH++;
        }
    
    // Condição de parada, se o usuário digitar um salário negativo
    } while (salario > 0);

    // Calculando a média de salário da população.
    mediaS = salarioT / totalH;

    // Calculando a média de filhos da população.
    mediaF = filhosT / totalH;
    
    // Calculando o percentual de pessoas com salário até 100 reais.
    percent = (total100 * 100) / totalH;

    // Imprimindo os resultados.
    printf("\n\n A media do salario da populacao e: R$%.2f", mediaS);
    printf("\n A media de filhos da populacao e: %.0f filhos", mediaF);
    printf(" \n O maior salario e: R$%.2f", maior);
    printf(" \n O percentual de pessoas com salario ate R$100,00: %.2f%%\n\n", percent);

    return 0;
}