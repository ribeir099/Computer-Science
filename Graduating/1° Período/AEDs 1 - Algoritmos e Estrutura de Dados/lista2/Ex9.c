#include <stdio.h>
#include <stdlib.h>

int main()
{
    float compra, venda, lucro, lucroT, compraT = 0.0, vendaT = 0.0, margemLt, margemL;
    int cont = 0, lucro10 = 0 , lucro15 = 0, lucro20 = 0;

    printf("\n");

    do
    {
        printf("\n Mercadoria %d-\n", cont + 1);

        // Recebendo o valor do preço da mercadoria.
        printf(" Digite o preco de compra: ");
        scanf(" %f", &compra);

        // Recebendo o valor de venda da mercadoria.
        printf(" Digite o preco de venda: ");
        scanf(" %f", &venda);

        // Verificando se o valor de compra digitado é positivo.
        if (compra > 0)
        {   
            // Calculando o valor total de compra e venda.
            compraT += compra;
            vendaT += venda;

            // Calculando o lucro da mercadoria digitada.
            lucro = venda - compra;

            // Calculando a margem de lucro da mercadoria digitada.
            margemL = lucro / venda;

            if(margemL < 0.1){
                lucro10 ++;
            }
            else if((margemL >= 0.1) && (margemL <= 0.2)){
                lucro15 ++;
            }
            else{
                lucro20 ++;
            }

            // Somando a quantidade de mercadorias que foram inseridas.
            cont++;
        }
    
    // Condição de parada, se o usuário digitar um valor de compra negativo
    } while (compra > 0);

    // Calculando o lucro total.
    lucroT = vendaT - compraT;

    // Calculando o a margem de lucro total.
    margemLt = lucroT / vendaT;
  
    // Imprimindo os resultados.
    printf("\n\n %d mercadorias tiveram lucro < 10%%", lucro10);
    printf("\n %d mercadorias tiveram lucro >= 10%% e <= 20%%", lucro15);
    printf("\n %d mercadorias tiveram lucro > 20%%", lucro20);
    printf("\n\n O valor total de compra foi de: R$%.2f", compraT);
    printf("\n O valor total de venda foi de: R$%.2f", vendaT);
    printf("\n O valor total de lucro foi de: R$%.2f = a %.2f%%\n\n", lucroT, margemLt * 100);

    return 0;
}