#include <stdio.h>

int main()
{

    int i;
    int cont = 0;
    float valor;

    for (i = 1; i <= 6; i++)
    {
        scanf("%f", &valor);

        if (valor > 0)
        {
            cont++;
        }
    }
    printf("%d valores positivos\n", cont);

    return 0;
}