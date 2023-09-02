#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int veloM, veloD;

  printf("\n\n Digite a velocidade maxima: ");
  scanf("%d", &veloM);
  printf(" Digite a velocidade em que estava: ");
  scanf("%d", &veloD);

  if(veloD <= veloM){
    printf("\n Motorista respeitou a lei\n\n");
  }
  else{
    if(veloD <= veloM + 10){
      printf("\n Acima da velocidade permitida.");
      printf("\n Multa de 50 reais.\n\n");
    }
    else if((veloD > veloM + 10) && (veloD <= veloM + 30)){
      printf("\n Acima da velocidade permitida.");
      printf("\n Multa de 100 reais.\n\n");
    }
    else{
      printf("\n Acima da velocidade permitida.");
      printf("\n Multa de 200 reais.\n\n");
    }
  }

  return 0;
}