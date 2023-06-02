#include <stdio.h>

int main()
{
    int i, numero;
    scanf("%d", &numero);

    i = 1;
    while (i <= numero)
    {
        if (numero % i == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}