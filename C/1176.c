#include <stdio.h>

// Fibonacci 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368 75025 121393 196418 317811 5142290
// Contagem: 0 1 2 3 4 5 6  7  8  9 10...

unsigned long long int Fib(int numero)
{
    int i;
    unsigned long long int novo;
    unsigned long long int ant1, ant2;

    ant1 = 1;
    ant2 = 0;

    for(i = 2; i <= numero; i++)
    {
        novo = ant1 + ant2;
        ant2 = ant1;
        ant1 = novo;
    }
    return novo;
}

int main()
{
    int vezes, numero;
    unsigned long long int novo;

    scanf("%d", &vezes);

    while(vezes--)
    {
        scanf("%d", &numero);

        if(numero == 0)
        {
            printf("Fib(%d) = 0\n", numero);
        }
        else if(numero == 1)
        {
            printf("Fib(%d) = 1\n", numero);
        }
        else
        {
            printf("Fib(%d) = %llu\n", numero, Fib(numero));
        }
    }

    return 0;
}