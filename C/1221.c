#include <stdio.h>
#include <math.h>

int EhPrimo(int numero, int contador)
{
    if(numero % contador == 0)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int vezes;
    long long int numero;
    int i, j;
    int indica = 1;
    double raiz;

    scanf("%d", &vezes);

    for(i = 1; i <= vezes; i++)
    {
        scanf("%lld", &numero);

        raiz = sqrt(numero);

        for(j = 2; j <= raiz; j++)
        {
            indica = EhPrimo(numero, j);
            if(indica == 0)
            {
                break;
            }
        }

        if(indica == 1)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Not Prime\n");
        }
        indica = 1;
    }

    return 0;
}