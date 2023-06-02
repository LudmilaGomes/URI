#include <stdio.h>

int main()
{
    int i, j;
    int nLinhas, nColunas;
    int indLinha = 0,
        indColuna = 0;

    scanf("%d", &nLinhas);
    scanf("%d", &nColunas);

    int matriz[nLinhas][nColunas];

    for(i = 0; i < nLinhas; i++)
    {
        for(j = 0; j < nColunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 1; i < nLinhas-1; i++)
    {
        for(j = 1; j < nColunas-1; j++)
        {
            if(matriz[i][j] == 42)
            {
                if( matriz[i-1][j-1] == 7 && matriz[i-1][j] == 7 && matriz[i-1][j+1] == 7 && matriz[i][j-1] == 7 && matriz[i][j+1] == 7 && matriz[i+1][j-1] == 7 && matriz[i+1][j] == 7 && matriz[i+1][j+1] == 7 )
                {
                    indLinha = i;
                    indColuna = j;
                }
            }
        }
    }

    if(indLinha == 0 && indColuna == 0)
    {
        printf("%d %d\n", indLinha, indColuna);
    }
    else
    {
        printf("%d %d\n", indLinha + 1, indColuna + 1);
    }

    return 0;
}