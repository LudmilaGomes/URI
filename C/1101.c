#include <stdio.h>

int main()
{
    int numero1, numero2;
    int menor, maior;
    int soma;

    numero1 = 1;
    numero2 = 1;
    soma = 0;
    while (1)
    {
        scanf("%d %d", &numero1, &numero2);

        if ((numero1 > 0) && (numero2 > 0))
        {
            if (numero1 > numero2)
            {
                maior = numero1;
                menor = numero2;
            }
            else
            {
                maior = numero2;
                menor = numero1;
            }

            while (menor <= maior)
            {
                printf("%d ", menor);
                soma = soma + menor;
                menor++;
            }
            printf("Sum=%d\n", soma);
            soma = 0;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}