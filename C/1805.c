#include <stdio.h>

int main()
{
    unsigned long long valor1, valor2;

    scanf("%llu %llu", &valor1, &valor2);

    if ((valor1 <= valor2))
    {
        printf("%llu\n", ((((valor1 + valor2) * (valor2 - valor1 + 1)) / 2)));
    }
    else
    {
        return 0;
    }
    return 0;
}