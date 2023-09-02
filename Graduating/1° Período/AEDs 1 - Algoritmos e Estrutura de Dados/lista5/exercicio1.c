#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, *num1Ptr, *num2Ptr;

  // Recebe do usuário um número inteiro.
  printf("\n\n Digite um numero inteiro: ");
  scanf("%d", &num1);
  // Recebe do usuário um número inteiro.
  printf("\n Digite outro numero inteiro: ");
  scanf("%d", &num2);

  // Atribui aos ponteiros o endereço de suas respectivas variáveis.
  num1Ptr = &num1;
  num2Ptr = &num2;

  // Verifica qual endereço é maior e imprime na tela.
  if(num1Ptr > num2Ptr) {
    printf("\n O nuemro %d \n Tem o maior endereco %p\n\n", num1, num1Ptr);
  } else {
    printf("\n O nuemro %d \n Tem o maior endereco %p\n\n", num2, num2Ptr);
  }
  
  return 0;
}