#include <stdio.h>

#define TAM_MAX 12

int main()
{
    int linha;
    int i, j;
    char operacao;
    double matriz[TAM_MAX][TAM_MAX];
    double soma = 0,
           media;
    
    scanf("%d%*c", &linha);
    scanf("%c", &operacao);
    
    for(i = 0; i < TAM_MAX; i++)
    {
        for(j = 0; j < TAM_MAX; j++)
        {
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    for(j = 0; j < TAM_MAX; j++)
    {
        soma = soma + matriz[linha][j];
    }

    if(operacao == 'S')
    {
        printf("%.1f\n", soma);
    }
    else if(operacao == 'M')
    {
        media = soma/TAM_MAX;
        printf("%.1f\n", media);
    }
    
    return 0;
}