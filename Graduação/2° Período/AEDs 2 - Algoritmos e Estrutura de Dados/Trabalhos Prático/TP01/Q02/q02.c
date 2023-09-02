#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Palavras{
  char entrada[1000];
};
typedef struct Palavras entradas;

int isFim(char palavra[]){
  return (strlen(palavra) == 3 && palavra[0] == 'F' && palavra[1] == 'I' && palavra[2] == 'M');
}

int palindromo(char palavra[]){
  int inicio = 0;
  int fim = strlen(palavra) - 1;
  for(int i = 0; i < strlen(palavra) / 2; i++){
    if(palavra[inicio] != palavra[fim]){
      return 0;
    }
    inicio ++;
    fim --;
  }
  return 1;
}

int main(void) {
  entradas palavras[1000];
  int numEntrada = 0;
  do {
    scanf(" %[^\n]", palavras[numEntrada].entrada);
   } while (isFim(palavras[numEntrada++].entrada) == 0);
  numEntrada--;

  for(int i = 0; i < numEntrada; i++){
    int igual = palindromo(palavras[i].entrada);
    if(igual){
      printf("SIM\n");
    } else{
      printf("NAO\n");
    }
  }
  return 0;
}