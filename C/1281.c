#include <stdio.h>
#include <string.h>

int main()
{
    int vezes, i, j;
    int qProdDisp;                              // quantidade de produtos disponíveis na feira
    char produtosDisp[1000][100];               // string com os nomes dos produtos disponiveis
    double precoProdDisp[1000];                 // array com os precos dos produtos disponíveis
    int quantProdutos;                          // quantidade de produtos que dona Parcinova comprou
    char produtosParcinova[1000][100];          // string com os nomes dos produtos comprados pela dona Parcinova
    double quantProdParcinova[1000];            // quantidade de cada um dos produtos comprados por dona Parcinova
    double precoFinal = 0;

    scanf("%d", &vezes);

    while(vezes--)
    {
        scanf("%d", &qProdDisp);

        for(i = 0; i < qProdDisp; i++)
        {
            scanf("%s", &produtosDisp[i]);
            scanf("%lf", &precoProdDisp[i]);
        }

        scanf("%d", &quantProdutos);

        for(i = 0; i < quantProdutos; i++)
        {
            scanf("%s", &produtosParcinova[i]);
            scanf("%lf", &quantProdParcinova[i]);
        }

        for(i = 0; i < quantProdutos; i++)
        {
            for(j = 0; j < qProdDisp; j++)
            {
                if( strcmp(produtosParcinova[i], produtosDisp[j]) == 0 )
                {
                    precoFinal = precoFinal + ( precoProdDisp[j] * quantProdParcinova[i] );
                }
            }
        }

        printf("R$ %.2lf\n", precoFinal);
        precoFinal = 0;
    }

    return 0;
}