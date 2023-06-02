#include <stdio.h>

int main()
{
    int vezes, i, dias;
    float suprimento;

    scanf("%d", &vezes);

    for (i = 1; i <= vezes; i++)
    {
        scanf("%f", &suprimento);
        dias = 0;
        while (suprimento > 1)
        {
            suprimento = (suprimento * 0.5);
            dias++;
        }
        printf("%d dias\n", dias);
    }
    return 0;
}