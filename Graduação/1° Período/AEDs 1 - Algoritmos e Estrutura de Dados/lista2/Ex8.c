#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, numF, numAnt1 = 0, numAnt2 = 1, temp, cond = 1;

    printf("\n\n Todos os elementos da série de Fibonacci menores que L.\n");
    
    // Recebendo quantos números da sequência de fibonacci ele quer imprimir.
    printf(" Digite o valor de L: ");
    scanf("%d", &num);

    printf("\n");

    while(cond)
    {
        // Imprimindo os números da sequência de fibonacci.
        printf(" %d,", numAnt1);

        // Calculando o número de fibonacci e atualizando as variáveis
        numF = (numAnt1 + numAnt2);
        temp = numAnt1;
        numAnt1 = numAnt2;
        numAnt2 += temp;

        // Verificando se o número de fibonacci calculado é menor que L.
        if(numAnt1 > num){
            cond = 0;
        }
    }
    
     printf("\n\n");
  
  return 0;
}