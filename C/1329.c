#include <stdio.h>

int main()
{
    int i, j;
    int vezes, jogo;
    int contadorMaria = 0;
    int contadorJoao = 0;

    while (1)
    {
        scanf("%d", &vezes);

        if (vezes == 0)
        {
            break;
        }

        for (i = 1; i <= vezes; i++)
        {
            scanf("%d", &jogo);
            if (jogo == 0)
            {
                contadorMaria++;
            }

            if (jogo == 1)
            {
                contadorJoao++;
            }
        }
        printf("Mary won %d times and John won %d times\n", contadorMaria, contadorJoao);
        contadorMaria = 0;
        contadorJoao = 0;
    }
    return 0;
}