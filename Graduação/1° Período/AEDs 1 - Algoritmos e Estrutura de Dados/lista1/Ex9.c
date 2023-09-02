#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char simbolo;

  printf("\n\n Digite um simbolo: ");
  scanf(" %c", &simbolo);

  switch(simbolo){
    case '<':
      printf("\n SINAL DE MENOR\n\n");
      break;
    case '>':
      printf("\n SINAL DE MAIOR\n\n");
      break;
    case '=':
      printf("\n SINAL DE IGUAL\n\n");
      break;
    default:
      printf("\n OUTRO SINAL\n\n");
  }
  return 0;
}