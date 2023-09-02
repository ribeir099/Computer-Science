#include <stdio.h>
#include <stdlib.h>

double calculaS(int num);
int fatorial(int num);

int main()
{
    int n;
    double s;

    // Recebe do usuário o valor de n para o realizar o calculo de s.
    printf("\n\n Funcao que calcula o valor de S para N > 0: ");
    printf("\n S = 1/1! + 1/2!  + 1/3! + ...+1 /N!");
    printf("\n\n Digite valor de N: ");
    scanf("%d", &n);

    // Adiciona o retorno da função em uma variável e chama a função.
    s = calculaS(n);

    // Imprime os resultados.
    printf("\n O valor de S e %f. \n\n", s);

    return 0;
}


double calculaS(int num) {
    double val;

    // Atualiza o valor da variável com o valor calculado de s a cada passagem.
    val = 1.0 / fatorial(num);

    // Verifica se já foram realizado a quantidade estabelecida de chamadas da função, tornando a condição de parada da recursividade e retornando o valor de s.
    if (num == 1) {
        
        return val;
    }
    
    // Retorna o valor de s calculado e passa como paramnero o número decressido de 1.
    return val += calculaS(num - 1);
}

// Função que calcula o fatorial de um núro por meio de recursividade.
int fatorial(int num) {
  if(num == 0 || num == 1){
    return  1;
  } else{
    return  num * fatorial(num-1);
  }
}
