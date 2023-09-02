#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, total;

    printf("\n\n Digite dois numeros inteiros separados por espaco: ");
    scanf("%d %d", &num1, &num2);

    total = num1 + num2;

    if(total >= 10){
        total += 5;
        printf("\n\n %d\n\n", total);
    }
    else{
        total += 7;
        printf("\n\n %d\n\n", total);    }
    return 0;
}

