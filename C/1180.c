#include <stdio.h>

#define TAM_MAX 1000

int main()
{
    int i;
    int numero;
    int ar[TAM_MAX];
    int indice, menor;

    scanf("%d", &numero);

    for(i = 0; i < numero; i++)
    {
        scanf("%d", &ar[i]);
    }

    menor = ar[0];
    for(i = 0; i < numero; i++)
    {
        if(menor > ar[i])
        {
            menor = ar[i];
            indice = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", indice);

    return 0;
}