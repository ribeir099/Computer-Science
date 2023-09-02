#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo1, *arquivo2, *arquivo3;
    char letra;
    arquivo1 = fopen("arquivo4.txt", "r");
    arquivo2 = fopen("arquivo5.txt", "r");
    arquivo3 = fopen("arquivo6.txt", "w");

    // Percorrendo todo o arquivo.
    while (!feof(arquivo1))
    {
        letra = fgetc(arquivo1);

        // Copiando os caracteres lidos no novo arquivo.
        if (letra != EOF) {
            fputc(letra, arquivo3);
        }        
    }

    // Percorrendo todo o arquivo.
    while (!feof(arquivo2))
    {
        letra = fgetc(arquivo2);
        
        // Copiando os caracteres lidos no novo arquivo.
        if (letra != EOF) {
            fputc(letra, arquivo3);
        }        
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    return 0;
}