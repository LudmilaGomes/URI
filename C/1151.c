#include <stdio.h>

int main()
{

    int numero, novo; // numero que sera lido no scanf; numero seguinte da sequencia
    int ant1, ant2;   // numeros iniciais da sequencia
    int i;            // contador do for

    ant1 = 1;
    ant2 = 0;

    scanf("%d", &numero);

    if (numero == 1)
    {
        printf("0\n");
    }
    else if (numero == 2)
    {
        printf("0 1\n");
    }
    else
    {
        printf("0 1 ");

        for (i = 3; i <= numero; i++)
        {
            novo = ant1 + ant2;
            printf("%d", novo);

            if (i == numero)
            {
                printf("\n");
            }
            else
            {
                printf(" ");
            }
            ant2 = ant1;
            ant1 = novo;
        }
    }
    return 0;
}