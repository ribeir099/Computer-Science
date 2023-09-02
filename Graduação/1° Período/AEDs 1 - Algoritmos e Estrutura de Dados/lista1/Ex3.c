#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, idade, anoA = 2022, maior = 18;
    char niver;

    printf("\n\n Digite o ano em que nasceu: ");
    scanf("%d", &ano);
    printf("\n Voce ja fez aniversario esse ano?");
    printf(" Se sim digite S se nao digite N: ");
    scanf(" %c", &niver);

    idade = anoA - ano;

    if(niver == 'N'){
        idade -= 1;
        if(idade >= maior){
           printf("\n Voce ja tem idade para conseguir carteira de habilitacao.");
           printf("\n Voce tem %d anos.\n\n", idade);
        }
        else{
           printf("\n Voce ainda nao tem idade para conseguir carteira de habilitacao.");
           printf("\n Voce tem %d anos.\n\n", idade);
        }
    }
    else{
        if(idade >= maior){
           printf("\n Voce ja tem idade para conseguir carteira de habilitacao.");
           printf("\n Voce tem %d anos.\n\n", idade);
        }
        else{
           printf("\n Voce ainda nao tem idade para conseguir carteira de habilitacao.");
           printf("\n Voce tem %d anos.\n\n", idade);
        }
    }
    return 0;
}

