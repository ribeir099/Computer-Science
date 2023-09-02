#include <stdio.h>
#include <stdlib.h>

float mediaAprovados(int alunos);

int main() {
  int alunos;
  float media;

  printf("\n\n Digite quantas notas vao ser inseridas: ");
  scanf("%d", &alunos);

  media = mediaAprovados(alunos);

  printf("\n A média das notas dos alunos aprovados foi de: %.2f\n\n", media);
  
  return 0;
}

float mediaAprovados(int alunos) {
  float media = 0.0, nota;
  int aprovados = 0;

  for (int i = 0; i < alunos; i++) {
    printf("\n Digite a nota do aluno %d: ", i + 1);
    scanf("%f", &nota);
    
    if(nota >= 6) {
      media += nota;
      aprovados ++;
    }
  }

  media = media / aprovados;

  if(aprovados == 0) {
    return 0;
  } else {
    return media;
  }
}