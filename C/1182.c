#include <stdio.h>

#define TAM_MAX 12

int main()
{
    int coluna;
    int i, j;
    char operacao;
    double matriz[TAM_MAX][TAM_MAX];
    double soma = 0;

    scanf("%d%*c", &coluna);
    scanf("%c", &operacao);

    for(i = 0; i < TAM_MAX; i++)
    {
        for(j = 0; j < TAM_MAX; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for(i = 0; i < TAM_MAX; i++)
    {
        soma = soma + matriz[i][coluna];
    }

    if(operacao == 'S')
    {
        printf("%.1f\n", soma);
    }
    else if(operacao == 'M')
    {
        printf("%.1f\n", soma/TAM_MAX);
    }

    return 0;
}