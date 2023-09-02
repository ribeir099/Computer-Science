#include <stdio.h>
#include <stdlib.h>

void fillVector(float *vetor1, float *vetor2);
void mergeVectors(float *vetor1, float *vetor2);
void printVector(float *vetor);

int main() {
    float vetorX[10];
    float vetorY[10];

    fillVector(vetorX, vetorY);
    mergeVectors(vetorX, vetorY);

    return 0;
}

void fillVector(float *vetor1, float *vetor2) {
    printf("\n Preenchendo o vetor X\n");
    for (int i = 0; i < 10; i++) {
        printf("\n Digite um numero: ");
        scanf("%f", vetor1);
        vetor1++;
    }
    printf("\n Preenchendo o vetor Y\n");
    for (int i = 0; i < 10; i++) {
        printf("\n Digite um numero: ");
        scanf("%f", vetor2);
        vetor2++;
    }
}

void mergeVectors(float *vetor1, float *vetor2) {
    float vetorXY[10];
    for (int i = 0; i < 10; i++) {
        if(i % 2 == 0) {
            vetorXY[i] = *vetor2;
        } else {
            vetorXY[i] = *vetor1;
        }
        vetor1++;
        vetor2++;
    }
    printVector(vetorXY);
}

void printVector(float *vetor) {
    printf("\n Os valores do vetor sao: ");
    for (int i = 0; i < 10; i++) {
        printf("%.1f ", *vetor);
        vetor++;
    }
    printf("\n\n");
}