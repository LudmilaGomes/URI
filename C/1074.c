#include <stdio.h>

int main()
{
    int quantidade, i, numero;
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++)
    {
        scanf("%d", &numero);
        if ((numero % 2 == 0) && (numero != 0) && (numero > 0))
        {
            printf("EVEN POSITIVE\n");
        }
        else if ((numero % 2 == 0) && (numero != 0) && (numero < 0))
        {
            printf("EVEN NEGATIVE\n");
        }
        else if ((numero % 2 != 0) && (numero != 0) && (numero > 0))
        {
            printf("ODD POSITIVE\n");
        }
        else if ((numero % 2 != 0) && (numero != 0) && (numero < 0))
        {
            printf("ODD NEGATIVE\n");
        }
        else if (numero == 0)
        {
            printf("NULL\n");
        }
    }
    return 0;
}