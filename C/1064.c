#include <stdio.h>

int main()
{

    int i;
    int cont = 0;
    double valor, soma = 0;

    for (i = 1; i <= 6; i++)
    {
        scanf("%lf", &valor);

        if (valor > 0)
        {
            soma = soma + valor;
            cont++;
        }
    }
    printf("%d valores positivos\n", cont);
    printf("%.1lf\n", (soma / cont));

    return 0;
}