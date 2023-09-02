#include <stdio.h>
#include <stdlib.h>

float funcaoS(int n);

int main() {
    int n;
    float s;

    printf("\n\n Formula S = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!\n");
    
    printf(" Digite o valor de E: ");
    scanf("%d", &n);

   s = funcaoS(n);

   printf("\n O valor de S e: %.4f\n\n", s);

    return 0;
}

float funcaoS(int n) {
    float fat = 1.0, s = 1.0;

    for (int i = 1; i <= n; i++) {   
        fat = fat * i;
        s += 1 / fat;
    }

    return s;
}
