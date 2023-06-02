#include <stdio.h>

int main()
{
    int i;
    int vezes;
    int casasTab;
    unsigned long long int tabuleiro[64];
    unsigned long long int soma = 0;

    scanf("%d", &vezes);

    for(i = 0; i < 64; i++)
    {
        if(i == 0)
        {
            tabuleiro[0] = 1;
        }
        else
        {
            tabuleiro[i] = tabuleiro[i-1] * 2;
        }
    }

    while(vezes--)
    {
        scanf("%d", &casasTab);

        for(i = 0; i < casasTab; i++)
        {
            soma = soma + tabuleiro[i];
        }
        printf("%llu kg\n", soma/12000);
        soma = 0;
    }
    return 0;
}