#include <stdio.h>

int Anos(int populacaoA, int populacaoB, double crescimentoA, double crescimentoB)
{
    int contdAnos = 0;

    while(populacaoA <= populacaoB)
    {
        populacaoA = (populacaoA * (crescimentoA + 100)) / 100;
        populacaoB = (populacaoB * (crescimentoB + 100)) / 100;
        contdAnos++;
        if(contdAnos > 100)
        {
            break;
        }
    }
    return contdAnos;
}

int main()
{
    int vezes;
    int populA, populB;
    double crescA, crescB;

    scanf("%d", &vezes);

    while(vezes--)
    {
        scanf("%d %d %lf %lf", &populA, &populB, &crescA, &crescB);

        if(Anos(populA, populB, crescA, crescB) > 100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {
            printf("%d anos.\n", Anos(populA, populB, crescA, crescB));
        }
    }
    return 0;
}
