#include <stdio.h>

int main()
{

    int numero;
    int i;

    scanf("%d", &numero);

    for (i = 1; i <= numero; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}