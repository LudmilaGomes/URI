#include <stdio.h>

#define TAMANHO_ARRAY 20

int main()
{
    int i;
    int vetor[TAMANHO_ARRAY];
    int aux;

    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < TAMANHO_ARRAY/2; i++)
    {
        if(i == 0)
        {
            aux = vetor[0];
            vetor[0] = vetor[TAMANHO_ARRAY - 1];
            vetor[TAMANHO_ARRAY - 1] = aux;
        }
        else
        {
            aux = vetor[i];
            vetor[i] = vetor[TAMANHO_ARRAY - (i + 1)];
            vetor[TAMANHO_ARRAY - (i + 1)] = aux;
        }
    }

    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}