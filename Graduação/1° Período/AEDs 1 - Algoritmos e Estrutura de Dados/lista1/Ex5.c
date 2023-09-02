#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diaria, diariaD, totalN, totalD, diferenca;
    int apT = 75, apN, apD;

    apN = apT - (apT * 0.5);
    apD = apT - (apT * 0.2);

    printf("\n\n Digite o valor da diaria: ");
    scanf("%f", &diaria);

    diariaD = diaria - (diaria * 0.25);
    totalN = apN * diaria;
    totalD = apD * diariaD;
    diferenca = totalD - totalN;

    printf("\n O valor da diaria promocional e: %.2f", diariaD);
    printf("\n O valor total arrecadado em dia promocional e de: %.2f", totalD);
    printf("\n O valor total arrecadado em dia normal e de: %.2f", totalN);
    printf("\n A diferenca entre os valores arrecadados e de: %.2f\n\n", diferenca);

    return 0;
}
