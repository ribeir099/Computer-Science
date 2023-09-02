#include <stdio.h>
#include <stdlib.h>

int main()  {
    FILE *arquivo;
    int tamanho = 0, a = 0;
    char letra;

    // Abrindo o arquivo em modo leitura.
    arquivo = fopen("arquivo2.txt", "r");

    // Percorrendo todo o arquivo.
    while (!feof(arquivo))  {

        // Lendo um caractere do arquivo.
        letra = fgetc(arquivo);

        // Contando se o caractere lido é a letra a.
        if (letra == 'a') {
            a ++;
        }

    }

    fclose(arquivo);

    printf("\n\n No arquivo2 tem %d de letras a.\n\n", a);

    return 0;
}