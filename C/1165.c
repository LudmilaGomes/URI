#include <stdio.h>

int main()
{
    int cont1, cont2, cont3; // contadores
    int numero, vezes;

    scanf("%d", &vezes);

    cont3 = 0;
    for (cont1 = 1; cont1 <= vezes; cont1++)
    {
        scanf("%d", &numero);

        for (cont2 = 2; cont2 < numero; cont2++)
        {
            if (numero % cont2 == 0)
            {
                cont3 = 1;
            }
        }
        if (cont3 == 0)
        {
            printf("%d eh primo\n", numero);
        }
        else
        {
            printf("%d nao eh primo\n", numero);
        }
        cont3 = 0;
    }
    return 0;
}