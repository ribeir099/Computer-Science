#include <stdio.h>
#include <stdlib.h>

float valorS(int N);

int main() {
  int n;
  float S;
  
  printf("\n\n Formula que retorna o valor de S \n a partir do valor de n \n S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3)");
  printf("\n\n Digite o valor de n: ");
  scanf("%d", &n);

  S = valorS(n);

  printf("\n O valor de S e: %.2f\n\n", S);
  
  return 0;
}

float valorS(int N) {
  float S = 0.0;

  for (int i = 1; i <= N; i++){    
    S += ((float)((i * i) + 1) / (float)(i + 3));
  }
  return S;
}