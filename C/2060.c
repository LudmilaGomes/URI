#include <stdio.h>

#define TAM_MAX 1000

int main()
{
    int i;
    int quantNumeros;
    int vetor[TAM_MAX];
    int cont2 = 0,
        cont3 = 0,
        cont4 = 0,
        cont5 = 0;

    scanf("%d", &quantNumeros);

    for(i = 0; i < quantNumeros; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < quantNumeros; i++)
    {
        if(vetor[i] % 2 == 0)
        {
            cont2++;
        }

        if(vetor[i] % 3 == 0)
        {
            cont3++;
        }

        if(vetor[i] % 4 == 0)
        {
            cont4++;
        }

        if(vetor[i] % 5 == 0)
        {
            cont5++;
        }
    }

    printf("%d Multiplo(s) de 2\n", cont2);
    printf("%d Multiplo(s) de 3\n", cont3);
    printf("%d Multiplo(s) de 4\n", cont4);
    printf("%d Multiplo(s) de 5\n", cont5);

    return 0;
}