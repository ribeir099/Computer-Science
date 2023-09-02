#include <stdio.h>
#include <stdlib.h>

int main() {
  int inteiro, *inteiroPtr;
  float real, *realPtr;
  char caracter, *caracterPtr; 
  
  // Atribui aos ponteiros o endereço de suas respectivas variáveis.
  inteiroPtr = &inteiro;
  realPtr = &real;
  caracterPtr = &caracter;
  
  // Imprime na tela o valor e o endereço dos ponteiros e das variáveis.
  printf("\n\n A variavel inteiro tem o valor de %d\n com o endereco de memoria %p.", inteiro, &inteiro);
  printf("\n O ponteiro da variavel inteiro tem o valor de %d\n armazenando o endereco %p\n e tendo o endereco de memoria %p.", *inteiroPtr, inteiroPtr, &inteiroPtr);
  printf("\n\n A variavel real tem o valor de %f\n com o endereco de memoria %p.", real, &real);
  printf("\n O ponteiro da variavel real tem o valor de %f\n armazenando o endereco %p\n e tendo o endereco de memoria %p.", *realPtr, realPtr, &realPtr);
  printf("\n\n A variavel caracter tem o valor de %c\n com o endereco de memoria %p.", caracter, &caracter);
  printf("\n O ponteiro da variavel caracter tem o valor de %c\n armazenando o endereco %p\n e tendo o endereco de memoria %p.", *caracterPtr, caracterPtr, &caracterPtr);


  // Atribui os valores recebidos pelo usuário as variáveis através de seus respectivos ponteiros.
  printf("\n\n\n Digite um numero inteiro: ");
  scanf(" %d", inteiroPtr);
  printf("\n Digite um numero real: ");
  scanf(" %f", realPtr);
  printf("\n Digite um caractere: ");
  scanf(" %c", caracterPtr);
  
  // Imprime na tela o valor e o endereço dos ponteiros e das variáveis.
  printf("\n\n\n A variavel inteiro tem o valor de %d\n com o endereco de memoria %p.", inteiro, &inteiro);
  printf("\n O ponteiro da variavel inteiro tem o valor de %d\n armazenando o endereco %p\n e tendo o endereco de memoria %p.", *inteiroPtr, inteiroPtr, &inteiroPtr);
  printf("\n\n A variavel real tem o valor de %f\n com o endereco de memoria %p.", real, &real);
  printf("\n O ponteiro da variavel real tem o valor de %f\n armazenando o endereco %p\n e tendo o endereco de memoria %p.", *realPtr, realPtr, &realPtr);
  printf("\n\n A variavel caracter tem o valor de %c\n com o endereco de memoria %p.", caracter, &caracter);
  printf("\n O ponteiro da variavel caracter tem o valor de %c\n armazenando o endereco %p\n e tendo o endereco de memoria %p.\n\n", *caracterPtr, caracterPtr, &caracterPtr);
  
  return 0;
}