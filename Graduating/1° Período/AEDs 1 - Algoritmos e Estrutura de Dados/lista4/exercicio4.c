#include <stdio.h>
#include <stdlib.h>

int resto(int numerador, int denominador);

int main()
{
    int numerador, denominador, resultado;

    // Recebe do usuário o numerador e o denominador para realizar a divisão dos números
    printf("\n\n Digite o numerador: ");
    scanf("%d", &numerador);
    printf("\n Digite o denominador: ");
    scanf("%d", &denominador);

    // Adiciona o retorno da função em uma variável e chama a função.
    resultado = resto(numerador, denominador);

    // Imprime os resultados.
    printf("\n O resto da divisao dos numeros digitados e %d. \n\n", resultado);

    return 0;
}


int resto(int numerador, int denominador) {
    int cont = 0;

    // Verifica se o numerador é menor que o denominador, sendo a condição de parada da recursividade.
    if (numerador < denominador) {
        return numerador;
    }
    
    // Retorna a quantidade de vezes que o número já foi "dividido", passando como parâmetro o numerador decressido do denominador.
    return cont += resto((numerador - denominador), denominador);
}
