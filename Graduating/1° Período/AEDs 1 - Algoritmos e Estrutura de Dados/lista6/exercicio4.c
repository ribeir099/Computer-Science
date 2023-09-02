#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    char letra;
    int linhas = 1;

    // Abrindo o arquivo em modo leitura.
    arquivo = fopen("arquivo3.txt", "r");

    // Percorrendo todo o arquivo.
    while (!feof(arquivo))
    {
        // Lendo um caractere do arquivo.
        letra = fgetc(arquivo);

        // Imprimindo o caractere lido na tela.
        printf("%c", letra);

        // Verificando se houve uma quebra de linha no arquivo.
        if (letra == '\n') {
            linhas ++;
        }
    }
    fclose(arquivo);

    printf("\n\n O arquivo possui %d linhas\n\n", linhas);

    return 0;
}