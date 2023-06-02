#include <stdio.h>

int main()
{

    int vezes, valor, i;
    int indicador_in, indicador_out;

    scanf("%d", &vezes);

    indicador_in = 0;
    indicador_out = 0;
    for (i = 1; i <= vezes; i++)
    {
        scanf("%d", &valor);

        if ((valor >= 10) && (valor <= 20))
        {
            indicador_in = indicador_in + 1;
        }
        else
        {
            indicador_out = indicador_out + 1;
        }
    }

    printf("%d in\n", indicador_in);
    printf("%d out\n", indicador_out);

    return 0;
}