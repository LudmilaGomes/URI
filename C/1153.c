#include <stdio.h>

int main()
{
    int numero;
    int multiplica = 1;

    scanf("%d", &numero);

    while (numero > 0)
    {
        multiplica = multiplica * numero;
        numero--;
    }

    printf("%d\n", multiplica);

    return 0;
}