#include <stdio.h>
#include <stdlib.h>

// Criando a struct para o cadastro;
struct Cadastro{
    int codigo;
    char email[100];
    int horas;
    char pagina;
};

typedef struct Cadastro cadastro;

// Função que calcula o total que o cliente devera pagar;
float relatorio(cadastro cliente){
    float total = 0;
    if(cliente.horas <= 20){
        if(cliente.pagina == 'S') {
            total = 35 + 40;
        } else {
            total = 35;
        }
    } else {
        if(cliente.pagina == 'S') {
            total = 35 + (cliente.horas - 20) * 2.5 + 40;
        } else {
            total = 35 + (cliente.horas - 20) * 2.5;
        }
    }
    return total;
}

// Funçao que recebe os parametros para o preenchimento do cadastro dos clientes;
void geraClientes(cadastro clientes[], int size){
    for (int i = 0; i < size; i++) {
        printf("\n Cliente %d \n", i + 1);
        printf("\n Codigo: ");
        scanf("%d", &clientes[i].codigo);
        printf("\n Email: ");
        scanf("%s", &clientes[i].email);
        printf("\n Horas de acesso: ");
        scanf("%d", &clientes[i].horas);
        printf("\n Possui pagina: ");
        scanf("%s", &clientes[i].pagina);
    }
}

int main() {
    // Criando 5 clientes;
    cadastro clientes[5];

    // Preenchendo as informaçoes dos clientes;
    geraClientes(clientes, 5);

    // Calculando e imprimindo o total que cada cliente deve pagar;
    for (int i = 0; i < 5; i++) {
        float total = relatorio(clientes[i]);
        printf("\n O cliente %d deve pagar %.2f reais.\n", i + 1, total);
    }
    return 0;
}