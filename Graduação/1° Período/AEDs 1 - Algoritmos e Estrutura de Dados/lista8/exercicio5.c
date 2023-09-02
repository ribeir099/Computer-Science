#include <stdio.h>
#include <stdlib.h>

// Criando a struct para o cadastro dos clientes;
struct Cliente{
    char nome[100];
    char endereco[500];
    int telefone;
};

typedef struct Cliente cliente;

// Função que cadastra o cliente;
void cadastraCliente(cliente pessoa){
    printf("\n Nome: ");
    scanf("%s", pessoa.nome);
    printf("\n Endereco: ");
    scanf("%s", pessoa.endereco);
    printf("\n Telefone: ");
    scanf("%d", pessoa.telefone);
}

// Função que imprimi as informaçoes do cliente;
void informacoesCliente(cliente pessoa){
    printf("\n Nome: %s", pessoa.nome);
    printf("\n Endereco: %s", pessoa.endereco);
    printf("\n Telefone: %s", pessoa.telefone);
}


int main() {
    // Criando dois clientes;
    cliente cliente1, cliente2;

    // Cadastrando os dois clientes;
    cadastraCliente(cliente1);
    cadastraCliente(cliente2);

    // Exibindo as informações dos dois clientes;
    informacoesCliente(cliente1);
    informacoesCliente(cliente2);

    return 0;
}