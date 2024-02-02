#include <stdio.h>

int main()
{
    int vezes;
    int i;
    int valorA, valorB, jogA, jogB;

    while (1)
    {
        scanf("%d", &vezes);

        jogA = 0;
        jogB = 0;

        if (vezes == 0)
        {
            break;
        }

        for (i = 1; i <= vezes; i++)
        {
            scanf("%d %d", &valorA, &valorB);

            if (valorA > valorB)
            {
                jogA++;
            }
            else if (valorA == valorB)
            {
                jogA = jogA;
                jogB = jogB;
            }
            else
            {
                jogB++;
            }
        }
        printf("%d %d\n", jogA, jogB);
    }

    return 0;
}