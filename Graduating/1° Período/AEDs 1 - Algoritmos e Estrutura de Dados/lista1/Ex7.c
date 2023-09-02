#include <stdio.h>
#include <stdlib.h>

int main()
{
    float y, x;

    printf("\n\n Digite o valor de x: ");
    scanf(" %f", &x);

    if(x <= 1){
        y = 1;
        printf("\n\n O valor de y e: %.2f\n\n", y);
    }
    else if(x > 1 && x <= 2){
        y = 2;
        printf("\n\n O valor de y e: %.2f\n\n", y);
    }
    else if(x > 2 && x <= 3){
        y = x * x;
        printf("\n\n O valor de y e: %.2f\n\n", y);
    }
    else{
        y = x * x * x;
        printf("\n\n O valor de y e: %.2f\n\n", y);
    }


    return 0;
}
