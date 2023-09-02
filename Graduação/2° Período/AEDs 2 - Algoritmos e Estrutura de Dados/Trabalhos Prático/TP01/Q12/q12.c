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

int palindromo(char palavra[], int inicio, int fim){
  int resp = 0;

  if(inicio < fim && palavra[inicio] == palavra[fim]){
    resp = palindromo(palavra, (inicio + 1), (fim - 1));
  } else {
    resp = palavra[inicio] == palavra[fim];
  }
  
  return resp;
}

int main(void) {
  entradas palavras[1000];
  int numEntrada = 0;
  do {
    scanf(" %[^\n]", palavras[numEntrada].entrada);
   } while (isFim(palavras[numEntrada++].entrada) == 0);
  numEntrada--;

  for(int i = 0; i < numEntrada; i++){
    int igual = palindromo(palavras[i].entrada, 0, (strlen(palavras[i].entrada) - 1));
    if(igual){
      printf("SIM\n");
    } else{
      printf("NAO\n");
    }
  }
  return 0;
}