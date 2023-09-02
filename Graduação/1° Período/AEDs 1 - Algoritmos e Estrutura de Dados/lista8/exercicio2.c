#include <stdio.h>
#include <stdlib.h>

// Criando a struct para o cadastro;
struct Registro{
    char nome[100];
    int telefone;
    float preco;
};

typedef struct Registro registro;

// Função que calcula o preço médio de todos os cadastros;
float mediaPrecos(registro cadastro[15]){
    float total = 0, media;
    for (int i = 0; i < 15; i++) {
        total += cadastro[i].preco; 
    }
    media = (float) total /  15;
    return media;
}

int main() {
    registro cadastros[15];
    float media = mediaPrecos(cadastros);

    // Exibindo o nome e o telefone das lojas que tem o preço abaixo da média;
    printf("\n\n Lojas com o preço abaixo da media: \n");
    for(int i = 0; i< 15; i++) {
        if(cadastros[i].preco < media){
            printf("\n Loja: %s \n Telefone %d\n", cadastros[i].nome, cadastros[i].telefone);
        }
    }

    return 0;
}