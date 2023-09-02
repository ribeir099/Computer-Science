#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float vetor[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sizeVector = (sizeof (vetor) / sizeof (float));
    printf("\n Os valores negativos sao: ");
    for (int i = 0; i < sizeVector; i++) {
        printf("%.1f ", vetor[i]);
    }
    printf("\n\n %d \n\n", strlen(vetor));

    return 0;
}