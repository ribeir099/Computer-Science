#include <stdio.h>
#include <stdlib.h>

void nota(float num1, float num2, float num3, char letra);

int main() {
    int n;

    printf("\n\n Digite 3 notas de um aluno e uma letra.\n Se a letra for A, sera calculado a média aritmética das notas do aluno.\n Se for P, sera calculado a media ponderada das notas do aluno.\n");

    printf("\n Digite de quantos alunos sera inserido a nota: ");
    scanf(" %d", &n);

    for (int i = 0; i < n; i++) {
        float nota1, nota2, nota3;
        char letra;

        printf("\n Digite a nota 1: ");
        scanf(" %f", &nota1);
        printf("\n Digite a nota 2: ");
        scanf(" %f", &nota2);
        printf("\n Digite a nota 3: ");
        scanf(" %f", &nota3);
        printf("\n Digite a letra: ");
        scanf(" %c", &letra);

        nota(nota1, nota2, nota3, letra);
    }


    return 0;
}

void nota(float num1, float num2, float num3, char letra) {
    float media;
    if (letra == 'A') {
        media = (num1 + num2 + num3) / 3;
        printf("\n A media aritmetica das notas do aluno foi: %.2f\n\n", media);
    }
    else if (letra == 'P') {
        media = ((num1 * 5) + (num2 * 3) + (num3 * 2)) / 10;
        printf("\n A media ponderada das notas do aluno foi: %.2f\n\n", media);
    }
    else {
        printf("\n Letra invalida.\n\n");
    }
}