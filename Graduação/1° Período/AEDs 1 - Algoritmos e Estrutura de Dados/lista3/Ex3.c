#include <stdio.h>
#include <stdlib.h>

void crescente(int num1, int num2, int num3);

int main() {
  int n;

  printf("\n\n O programa ira ler N conjuntos de 3 valores e imprimilos em ordem crescente.");
  printf("\n Digite o valor de N: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int num1, num2, num3;

    printf("\n Digite o numero 1: ");
    scanf("%d", &num1);
    printf("\n Digite o numero 2: ");
    scanf("%d", &num2);
    printf("\n Digite o numero 3: ");
    scanf("%d", &num3);

    crescente(num1, num2, num3);
  }

  return 0;
}

void crescente(int num1, int num2, int num3) {
  if ((num1 > num2 && num1 > num3) && (num2 > num3)) {
    printf("\n A ordem crescente desses numeros e: %d, %d, %d\n", num3, num2, num1);
  }
  else if ((num1 > num2 && num1 > num3) && (num2 < num3)) {
    printf("\n A ordem crescente desses numeros e: %d, %d, %d\n", num2, num3, num1);
  }
  else if ((num3 > num2 && num3 > num1) && (num2 > num1)) {
    printf("\n A ordem crescente desses numeros e: %d, %d, %d\n", num1, num2, num3);
  }
  else if ((num3 > num2 && num3 > num1) && (num2 < num1)) {
    printf("\n A ordem crescente desses numeros e: %d, %d, %d\n", num2, num1, num3);
  }
  else if ((num2 > num1 && num2 > num3) && (num1 > num3)) {
    printf("\n A ordem crescente desses numeros e: %d, %d, %d\n", num3, num1, num2);
  }
  else {
    printf("\n A ordem crescente desses numeros e: %d, %d, %d\n", num1, num3, num2);
  }
}