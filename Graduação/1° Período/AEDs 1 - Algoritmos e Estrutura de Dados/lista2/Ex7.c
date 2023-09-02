#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, numF, numAnt1 = 0, numAnt2 = 1, temp;

    printf("\n\n Os  L  primeiros  elementos  da  série  de  Fibonacci.\n");
    
    // Recebendo quantos números da sequência de fibonacci ele quer imprimir.
    printf(" Digite o valor de L: ");
    scanf("%d", &num);

    printf("\n");

    for (int i = 0; i < num; i++)
    {
        // Imprimindo os números da sequência de fibonacci.
        printf(" %d,", numAnt1);

        // Calculando o número de fibonacci e atualizando as variáveis
        numF = (numAnt1 + numAnt2);
        temp = numAnt1;
        numAnt1 = numAnt2;
        numAnt2 += temp;
    }

     printf("\n\n");
  
  return 0;
}