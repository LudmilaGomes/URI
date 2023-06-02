#include <stdio.h>

#define TAMANHO_ARRAY 10

int main()
{
    int i;
    int vetor[TAMANHO_ARRAY];

    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        scanf("%d", &vetor[i]);
        if(vetor[i] <= 0)
        {
            vetor[i] = 1;
        }
    }

    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        printf("X[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}