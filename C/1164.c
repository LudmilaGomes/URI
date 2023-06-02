#include <stdio.h>

int main()
{
    int i = 1, j = 1;
    int vezes, numero, soma = 0;

    scanf("%d", &vezes);

    while (i <= vezes)
    {
        scanf("%d", &numero);

        while (j < numero)
        {
            if (numero % j == 0)
            {
                soma = soma + j;
            }
            j++;
        }

        if (soma == numero)
        {
            printf("%d eh perfeito\n", numero);
        }
        else
        {
            printf("%d nao eh perfeito\n", numero);
        }
        soma = 0;
        j = 1;
        i++;
    }
    return 0;
}