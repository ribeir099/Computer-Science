#include <stdio.h>
#include <stdlib.h>

int increaseNum(int *num1, int *num2, int *num3);

int main() {
    int num1, num2, num3;

    // Recebendo 3 número inteiros do usuário.
    printf("\n\n Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("\n Digite outro numero inteiro: ");
    scanf("%d", &num2);
    printf("\n Digite outro numero inteiro: ");
    scanf("%d", &num3);

    // Chamando a função e passando o valor por referência.
    increaseNum(&num1, &num2, &num3);

    // Imprimindo os resultados.
    printf("\n A ordem dos valores ordenados e : %d, %d, %d\n\n", num1, num2, num3);

    return 0;
}

// Função que ordena os números de forma crescente.
int increaseNum(int *num1, int *num2, int *num3) {
    int temp;

    if (*num1 > *num3 && *num3 > *num2) {
        temp = *num2;
        *num2 = *num3;
        *num3 = *num1;
        *num1 = temp;
        return 0;
    }
    else if (*num2 > *num3 && *num3 > *num1) {
        temp = *num2;
        *num2 = *num3;
        *num3 = temp;
        return 0;
    }
    else if (*num2 > *num1 && *num1 > *num3) {
        temp = *num3;
        *num3 = *num2;
        *num2 = *num1;
        *num1 = temp;
        return 0;
    }
    else if (*num3 > *num1 && *num1 > *num2) {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
        return 0;
    }
    else if (*num1 > *num2 && *num2 > *num3) {
        temp = *num1;
        *num1 = *num3;
        *num3 = temp;
        return 0;
    }
    else if (*num1 == *num2 && *num2 == *num3){
        return 1;
    }
    else {
        return 0;
    }
}
