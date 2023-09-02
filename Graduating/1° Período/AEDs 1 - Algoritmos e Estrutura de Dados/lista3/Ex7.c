#include <stdio.h>
#include <stdlib.h>

int sinal(int num);

int main() {
 int n;

  printf("\n\n Digite n: ");
  scanf("%d", &n);

  for ( int i = 0; i < n; i++) {
    int num, val;

    printf("\n Digite o valor que sera verificado o sinal: ");
    scanf("%d", &num);

    val = sinal(num);

    if(val == 1){
      printf("\n O numero %d e positivo\n\n", num);
    }
    else {
      printf("\n O numero %d e negativo\n\n", num);
    }
  }

  return 0;
}

int sinal(int num) {
  if (num >= 0){
    return 1;
  }
  return 0;
}