#include <stdio.h>
#include <stdlib.h>

void tipoTriangulo(float a, float b, float c);

int main() {
    int n;

    printf("\n\n O programa ira ler N triângulos (valores dos 3 lados) \n e para cada triângulo exibe qual é o tipo de triângulo formado.");
    printf("\n\n Digite o valor de N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        float x,y, z;
        printf("\n\n Digite o valor de x: ");
        scanf("%f", &x);
        printf("\n Digite o valor de y: ");
        scanf("%f", &y);
        printf("\n Digite o valor de z: ");
        scanf("%f", &z);

        tipoTriangulo(x, y, z);
    }

    return 0;
}

void tipoTriangulo(float a, float b, float c){
    int condicao = 1;

    if((c > a + b) || (b > a + c) || (a > b + c)){
        condicao = 0;
    }
    if(condicao){
        if((a == b) && (b == c) && (c == a)){
            printf("\n\n Triangulo Equilatero.\n\n");
        }
        else if((a == b) || (a == c) || (b == c)){
            printf("\n\n Triangulo Isoceles.\n\n");
        }
        else{
            printf("\n\n Triangulo Escaleno.\n\n");
        }
    }
    else{
        printf("\n\n Valores invalidos de triangulos.\n\n");
    }
}