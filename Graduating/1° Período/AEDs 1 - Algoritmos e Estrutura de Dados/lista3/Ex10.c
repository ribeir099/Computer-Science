#include <stdio.h>
#include <stdlib.h>

char categoriaNadador(int idade);

int main() {
  int idade;
  char categoria;

  printf("\n\n Digite a idade do nadador: ");
  scanf("%d", &idade);

  categoria = categoriaNadador(idade);

  printf("\n A categoria do nadador e: %c\n\n", categoria);
  
  return 0;
}

char categoriaNadador(int idade) {
  char categoria;

  if (idade >= 5 && idade <= 7) {
    categoria = 'F';
  }
  else if (idade >= 8 && idade <= 10) {
    categoria = 'E';
  }
  else if (idade >= 11 && idade <= 13) {
    categoria = 'D';
  }
  else if (idade >= 14 && idade <= 15) {
    categoria = 'C';
  }
  else if (idade >= 16 && idade <= 17) {
    categoria = 'B';
  }
  else {
    categoria = 'A';
  }
  
  return categoria;
}