#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int votoN = 0, votoB = 0, voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, voto;

  do{
      // Recebendo o voto do usuário.
    printf("\n Digite seu voto: ");
    scanf("%d", &voto);

    // Contando os votos.
    switch(voto){
      case 1:
        voto1 ++;
        break;
      case 2:
        voto2 ++;
        break;
      case 3:
        voto3 ++;
        break;
      case 4:
        voto4 ++;
        break;
      case 5:
        votoN ++;
        break;
      case 6:
        votoB ++;
        break;
    }
    // Condição de parada do loop, se o voto digitado for igual a zero ou negativo.
  }while(voto > 0);
  
  // Imprimindo os resultados obtidos.
  printf("\n Foram %d votos para o candidato 1", voto1);
  printf("\n Foram %d votos para o candidato 2", voto2);
  printf("\n Foram %d votos para o candidato 3", voto3);
  printf("\n Foram %d votos para o candidato 4", voto4);
  printf("\n Foram %d votos nulos", votoN);
  printf("\n Foram %d votos brancos\n\n", votoB);
  
  return 0;
}