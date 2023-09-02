#include <stdio.h>
#include <stdlib.h>

void main() {
  float t = 2000;
  float r, n, f, u, b, c;
  int compare;

  printf("\n Digite o valor de r: ");
  scanf("%f", &r);

  printf("\n Digite o valor de n: ");
  scanf("%f", &n);

  f = (int)(t / r);
  u = t - (f * r);
  b = n / f;
  compare = (int)b;
  if(compare != b){
    b = compare + 1;
  }
  c = b * t;

  printf("\n Blocagem = %.0f", f);
  printf("\n Espaço não usado = %.0f", u);
  printf("\n Número de blocos = %.0f", b);
  printf("\n Consumo de espaço = %.0f", c);
  printf("\n");
  
}
