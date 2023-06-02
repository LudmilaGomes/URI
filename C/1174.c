#include <stdio.h>

#define TAMANHO_ARRAY 100

int main()
{
    int i;
    double vetor[TAMANHO_ARRAY];

    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        scanf("%lf", &vetor[i]);
    }

    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        if(vetor[i] <= 10)
        {
            printf("A[%d] = %.1lf\n", i, vetor[i]);
        }
    }

    return 0;
}