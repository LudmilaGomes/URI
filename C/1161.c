#include <stdio.h>

unsigned long long int Fatorial(unsigned long long int numero, unsigned long long int fatorial)
{
    if(numero == 0)
    {
        return 1;
    }
    else
    {
        while(numero > 0)
        {
            fatorial = fatorial * numero;

            numero--;
        }
    }
    return fatorial;
}

int main()
{
    int i;
    unsigned long long int numero1, numero2;
    unsigned long long int soma = 0;
    unsigned long long int fatorial;

    numero1 = 1;
    while( (scanf("%llu %llu", &numero1, &numero2)) != EOF)
    {
        //scanf("%llu %llu", &numero1, &numero2);

        fatorial = 1;

        if(numero1 == -1)
        {
            return 0;
        }

        soma = soma + Fatorial(numero1, fatorial);

        fatorial = 1;

        soma = soma + Fatorial(numero2, fatorial);

        printf("%llu\n", soma);
        soma = 0;
    }

    return 0;
}