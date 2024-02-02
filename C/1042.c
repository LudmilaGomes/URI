#include <stdio.h>

int main()
{
    int x, y, z, maior, menor, medio;

    scanf("%d %d %d", &x, &y, &z);

    maior = menor = x;
    if (y > maior)
    {
        maior = y;
        if (z > maior)
        {
            maior = z;
            medio = y;
            menor = x;
        }
        else if (z < maior)
        {
            if (z > x)
            {
                medio = z;
                menor = x;
            }
            else
            {
                medio = x;
                menor = z;
            }
        }
    }
    else
    {
        maior = x;
        if (z > maior)
        {
            maior = z;
            if (x > y)
            {
                medio = x;
                menor = y;
            }
            else
            {
                medio = y;
                menor = x;
            }
        }
        else if (z < maior)
        {
            if (z > y)
            {
                medio = z;
                menor = y;
            }
            else
            {
                medio = y;
                menor = z;
            }
        }
    }

    printf("%d\n", menor);
    printf("%d\n", medio);
    printf("%d\n", maior);

    printf("\n%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}