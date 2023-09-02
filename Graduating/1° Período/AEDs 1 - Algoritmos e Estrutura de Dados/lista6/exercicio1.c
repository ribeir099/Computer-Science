#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int i = 1;

    // Abertura/criação do arquivo em modo escrita.
    arquivo = fopen("arquivo1.txt", "w");

    while (i <= 10) {
        // Escrevendo no arquivo o valor de i.
        fprintf(arquivo, "%d \n", i);

        i++;
    }

    // Fechando o arquivo.
    fclose(arquivo);

    return 0;
}