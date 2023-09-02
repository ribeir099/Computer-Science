#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo;
    int tamanho = 0;
    char texto[100000];

    // Recebendo do usuario um texto.
    printf("\n\n Digite um texto:\n\t");
    gets(texto);

    // Verificando o tamanho do texto inserido pelo usuario.
    tamanho = strlen(texto);

    // Abertura/criação do arquivo em modo escrita.
    arquivo = fopen("arquivo2.txt", "w");

    // Escrevendo no arquivo o texto inserido pelo usuario.
    fprintf(arquivo, "%s", texto);

    // Fechando o arquivo.
    fclose(arquivo);

    return 0;
}