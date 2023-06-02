#include <stdio.h>

int main()
{
    int numero;
    int cont = 0;

    scanf("%d", &numero);

    while(1)
    {
        if(numero % 2 != 0)
        {
            printf("%d\n", numero);
            cont++;
        }

        numero++;

        if(cont == 6)
        {
            break;
        }
    }
    return 0;
}