#include <stdio.h>

int main()
{
    int numero;
    int i;

    while (1)
    {
        scanf("%d", &numero);

        if (numero == 0)
        {
            break;
        }

        for (i = 1; i <= numero; i++)
        {
            if (i == numero)
            {
                printf("%d\n", i);
            }
            else
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}