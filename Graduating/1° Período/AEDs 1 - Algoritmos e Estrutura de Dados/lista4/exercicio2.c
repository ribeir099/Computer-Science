#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int n);

int main()
{
    int num, soma;

    // Recebe do usuário um número inteiro.
    printf("\n\n Digite um numero inteiro: ");
    scanf("%d", &num);

    // Adiciona o retorno da função em uma variável e chama a função.
    soma = somaDigitos(num);

    // Imprime os resultados.
    printf("\n A soma dos digitos do numero digtado e %d. \n\n", soma);


    return 0;
}


int somaDigitos(int n) {

    // Verifica se o número não é mais divisível por 10, verifica se é o último/primeiro digito do numero e retorna o seu valor.
    // Também é a condição de parada da função recursiva.
    if (n % 10 == n) {
        return n;
    }

    // Retorna o número com um digito a menos mais o seu ultimo algarismo de forma recursiva.     
    return ((n % 10) + somaDigitos(n / 10));
}
