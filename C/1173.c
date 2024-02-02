#include <stdio.h>

#define TAMANHO_ARRAY 10

int main()
{
    int i;
    int vetor[TAMANHO_ARRAY];
    int numero;

    scanf("%d", &numero);

    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        if(i == 0)
        {
            vetor[i] = numero;
        }
        else
        {
            vetor[i] = vetor[i - 1] * 2 ;
        }
    }

    for(i = 0; i < TAMANHO_ARRAY; i++)
    {
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}