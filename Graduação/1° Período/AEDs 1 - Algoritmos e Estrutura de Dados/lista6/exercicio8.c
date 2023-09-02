#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    float numMin = 10*10*10, numMax = -10*10*10, media, soma = 0, linhas = 0, num;

    arquivo = fopen("arquivo9.txt", "r");

    while (!feof(arquivo))
    {
        fscanf(arquivo, "%f", &num);

        // Verificando se o numero lido é o menor.
        if (num < numMin) {
            numMin = num;
        }
        // Verificando se o numero lido é o maior.
        if (num > numMax) {
            numMax = num;
        }
        soma += num;
        linhas ++;
    }

    fclose(arquivo);

    media = soma / linhas;

    printf("\n\n O menor numero desse arquivo e %.2f.", numMin);
    printf("\n O maior numero desse arquivo e %.2f.", numMax);
    printf("\n A media dos numeros do arquivo e %.2f.\n\n", media);

    return 0;
}