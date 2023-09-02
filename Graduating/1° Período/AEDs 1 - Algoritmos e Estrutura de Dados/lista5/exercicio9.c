#include <stdio.h>
#include <stdlib.h>

// Definição da constante pi.
double PI = 3.141592;

void calcCircunferencia (float R, float *compr, float *area);

int main() {
    float R, compr, area;

    // Recebendo o valor do raio inserido pelo usuário.
    printf("\n\n Digite o raio da circunferencia: ");
    scanf("%f", &R);

    calcCircunferencia(R, &compr, &area);

    // Imprimindo os resultados, o comprimento e a área de uma circunferência.
    printf("\n O comprimento calculado foi %.2f", compr);
    printf("\n A area calculado foi %.2f\n\n", area);


    return 0;
}

// Função que calcula o comprimento e a área de uma determinada circunferência.
void calcCircunferencia (float R, float *compr, float *area) {
    *compr = 2 * PI * R;
    *area = PI * (R * R);
}