#include <stdio.h>

int main()
{
    int x, y, maior, menor;
    int i;
    int soma = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    maior = (x > y ? x : y);
    menor = (x < y ? x : y);

    for (i = menor; i <= maior; i++)
    {
        if (i % 13 != 0)
        {
            soma = soma + i;
        }
    }

    printf("%d\n", soma);

    return 0;
}