#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, vogais = 0;
    char letra;

    printf("\n Digite a quantidade de letras que sera inserido: ");
    scanf("%d", &n);
    printf("\n Digite as leras: ");

    FILE *arquivo;
    arquivo = fopen("arquivo8.txt", "w");

    // Escrevendo os caracteres lidos no arquivo.
    for (int i = 0; i < n; i++) {
        scanf(" %c", &letra);
        fputc(letra, arquivo);
    }

    fclose(arquivo);

    arquivo = fopen("arquivo8.txt", "r");
    while (!feof(arquivo))
    {   
        // Verificando se o caractere lido é uma vogal.
        letra = fgetc(arquivo);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            vogais ++;
        }        
    }

    printf("\n Foram digitadas %d vogais.\n\n", vogais);

    return 0;
}