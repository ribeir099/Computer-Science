#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    char opcao;

    printf("\n\n Digite uma opcao: ");
    scanf(" %c", &opcao);
    printf(" Digite o salario: ");
    scanf(" %f", &salario);

    switch(opcao){
        case 'A':
            salario = salario + (salario * 0.08);
            printf("\n O novo salario e de: %.2f\n\n", salario);
            break;
        case 'B':
            salario = salario + (salario * 0.11);
            printf("\n O novo salario e de: %.2f\n\n", salario);
            break;
        case 'C':
            if(salario <= 1000){
                salario = salario + 350;
                printf("\n O novo salario e de: %.2f\n\n", salario);
                break;
            }
            else{
                salario = salario + 200;
                printf("\n O novo salario e de: %.2f\n\n", salario);
                break;
            }
        default:
            printf("\n ERRO!\n Digite uma opcao valida e tente novamente.\n\n");
            break;
    }

    return 0;
}
