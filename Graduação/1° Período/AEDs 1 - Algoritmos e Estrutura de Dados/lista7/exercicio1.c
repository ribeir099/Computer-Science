#include <stdio.h>
#include <stdlib.h>

void vetorNotas (float *notas);
void mediaNotas (float *notas);

int main(void) {
  float notas[10];
  
  vetorNotas(notas);
  mediaNotas(notas);

  return 0;
}

void vetorNotas (float *notas) {
  for (int i = 0; i < 10; i++) {
    printf("\n Digite a nota do aluno %d: ", i +1);
    scanf("%f", notas);
    notas++;  
  }
}

void mediaNotas (float *notas) {
  float total = 0, media;
  int alunosAM = 0;
  for (int i = 0; i < 10; i++) {
    total += *notas;
    notas++;  
  }
  media = total / 10;
  notas -= 10;
  for (int i = 0; i < 10; i++) {
    if (*notas > media) {
      alunosAM ++;
    }
    notas++;  
  }
  printf("\n A media dos alunos foi: %.2f", media);
  printf("\n %d alunos obtiveram nota acima da media.\n\n", alunosAM);
}