#include <stdio.h>
#include <stdlib.h>

void fillVector(float *vetor);
int negNumbers(float *vetor);
void printVector(float *vetor);
int size = 0;

int main() {
    float vector[10];

    fillVector(vector);
    int negNums = negNumbers(vector);
    printVector(negNums);

    return 0;
}

void fillVector (float *vetor) {
  for (int i = 0; i < 10; i++) {
    printf("\n Digite um numero: ");
    scanf("%f", vetor);
    vetor++;  
  }
}

int negNumbers(float *vetor) {
  int j = 0;
  for (int i = 0; i < 10; i++) {
    if(*vetor < 0) {
        size ++;
    }
    vetor++;  
  }
  vetor -= 10;
  float *negVector = malloc (size * sizeof (float));
  for (int i = 0; i < 10; i++) {
    if(*vetor < 0) {
        (negVector[j]) = *vetor;
        j++;
        //printf("\n %.1f \n", negVector[j - 1]);
    }
    vetor++;  
  }
  return negVector;
}

void printVector(float *vetor) {
    printf("\n Os valores negativos sao: ");
    for (int i = 0; i < size; i++) {
        printf("%.1f ", *vetor);
        vetor++;
    }
    printf("\n\n");
}