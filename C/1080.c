#include <stdio.h>

int main()
{
    int i, valor, maior, menor, posicao;

    maior = 0;
    menor = 0;
    posicao = 0;
    for (i = 1; i <= 100; i++)
    {
        scanf("%d", &valor);

        if (i == 1)
        {
            maior = valor;
            menor = valor;
        }

        if (valor > maior)
        {
            maior = valor;
            posicao = i;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}