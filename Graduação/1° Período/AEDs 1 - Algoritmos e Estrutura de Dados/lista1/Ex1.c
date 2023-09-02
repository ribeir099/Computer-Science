#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;

    printf("\n\n  Digite dois numeros separados por espaco: ");
    scanf("%f %f", &num1, &num2);

    if(num1 > num2){
        printf("\n\n  O maior numero e: %.2f\n\n", num1);
    }
    else{
        printf("\n\n  O maior numero e: %.2f\n\n", num2);
    }
    return 0;
}

