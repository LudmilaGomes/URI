#include <stdio.h>

int main()
{
    int i;
    double idade, soma;

    soma = 0;
    idade = 1;
    i = 0;
    while ((idade > 0))
    {
        scanf("%lf", &idade);
        if (idade > 0)
        {
            soma = soma + idade;
            i++;
        }
    }
    printf("%.2lf\n", (soma / i));
    return 0;
}