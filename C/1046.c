#include <stdio.h>

int main()
{
    int inicio, fim, contador;

    scanf("%d %d", &inicio, &fim);

    if (inicio == fim)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
        return 0;
    }

    if (inicio < fim)
    {
        for (inicio = inicio; inicio < 23; inicio++)
        {
            contador++;

            if (inicio == fim - 1)
            {
                printf("O JOGO DUROU %d HORA(S)\n", contador);
                break;
            }
        }
    }
    else if (inicio > fim)
    {
        for (inicio = inicio; inicio < 24; inicio++)
        {
            contador++;

            if (inicio == 23)
            {
                for (inicio = 0; inicio <= fim; inicio++)
                {
                    contador++;
                    if (inicio == fim)
                    {
                        printf("O JOGO DUROU %d HORA(S)\n", contador - 1);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}