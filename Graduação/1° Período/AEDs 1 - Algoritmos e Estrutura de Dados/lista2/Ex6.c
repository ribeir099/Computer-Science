#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float e = 0;

    printf("\n\n Formula S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n \n");
    
    // Recebendo o valor de E do usuário.
    printf(" Digite o valor de E: ");
    scanf("%d", &n);

    // Calculando o valor de E
    for (int i = 1; i <= n; i++)
    {   
        
        // Adicionando a progressão do número calculado ao valor de E conforme a fórmula.
        e += 1.0 / i;
    }

    // Imprimindo o resultado.
    printf("\n O valor de E = %.4f\n\n", e);

    return (0);
}