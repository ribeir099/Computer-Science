#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, x;

    printf("\n\n Digite o valor de a: ");
    scanf(" %f", &a);
    printf(" Digite o valor de b: ");
    scanf(" %f", &b);

    x = (b * -1) / a;

    printf("\n A raiz da equacao e: %.2f\n\n", x);

    return 0;
}

