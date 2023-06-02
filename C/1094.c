#include <stdio.h>

int main()
{
    int i;
    int vezes, quantia;
    int rato, sapo, coelho;
    char animal;

    scanf("%d", &vezes);

    rato = 0;
    sapo = 0;
    coelho = 0;

    for (i = 1; i <= vezes; i++)
    {
        scanf("%d %c", &quantia, &animal);

        switch (animal)
        {
        case 'r':
        case 'R':
            rato = rato + quantia;
            break;

        case 's':
        case 'S':
            sapo = sapo + quantia;
            break;

        case 'c':
        case 'C':
            coelho = coelho + quantia;
            break;
        }
    }

    printf("Total: %d cobaias\n", (coelho + sapo + rato));
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", ((coelho * 100.0) / (coelho + sapo + rato)));
    printf("Percentual de ratos: %.2f %%\n", ((rato * 100.0) / (coelho + sapo + rato)));
    printf("Percentual de sapos: %.2f %%\n", ((sapo * 100.0) / (coelho + sapo + rato)));

    return 0;
}