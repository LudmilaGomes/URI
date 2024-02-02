#include <stdio.h>

int main()
{

    int numero, i;
    int cont = 0;

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            cont++;
        }
    }

    printf("%d valores pares\n", cont);

    return 0;
}