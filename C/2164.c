#include <stdio.h>
#include <math.h>

double Fibonacci(int valor)
{
    double fibonacci;

    fibonacci = ( pow((1 + sqrt(5))/2, valor) - pow((1 - sqrt(5))/2, valor) )/ sqrt(5);

    return fibonacci;
}

int main()
{
    int numero;

    scanf("%d", &numero);

    printf("%.1lf\n", Fibonacci(numero) );

    return 0;
}