#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;

    printf("\n\n Digite uma nota de 0 a 10: ");
    scanf("%d", &nota);

    if(nota >= 8 && nota <= 10){
        printf("\n Otimo\n\n");
    }
    else if(nota >= 7  && nota < 8){
        printf("\n Bom\n\n");
    }
    else if(nota >= 5 && nota < 7){
        printf("\n Regular\n\n");
    }
    else{
        printf("\n Insatisfatorio\n\n");
    }
    return 0;
}

