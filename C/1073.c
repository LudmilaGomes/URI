#include <stdio.h>

int main()
{

    int n, i, resultado;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            resultado = i * i;
            printf("%d^2 = %d\n", i, resultado);
        }
    }

    return 0;
}