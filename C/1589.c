#include <stdio.h>

int main()
{

    int vezes, r1, r2, soma;
    int i;

    scanf("%d", &vezes);

    for (i = 1; i <= vezes; i++)
    {
        scanf("%d %d", &r1, &r2);
        soma = r1 + r2;
        printf("%d\n", soma);
    }

    return 0;
}