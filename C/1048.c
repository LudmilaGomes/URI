#include <stdio.h>

int main()
{

    float salario;
    float novo, reajuste;
    int porcent;

    scanf("%f", &salario);

    if ((salario > 0) && (salario <= 400))
    {
        novo = salario * 1.15;
        reajuste = novo - salario;
        porcent = 15;
    }
    else if ((salario >= 400.01) && (salario <= 800))
    {
        novo = salario * 1.12;
        reajuste = novo - salario;
        porcent = 12;
    }
    else if ((salario >= 800.01) && (salario <= 1200))
    {
        novo = salario * 1.10;
        reajuste = novo - salario;
        porcent = 10;
    }
    else if ((salario > 1200.01) && (salario <= 2000))
    {
        novo = salario * 1.07;
        reajuste = novo - salario;
        porcent = 7;
    }
    else if (salario > 2000)
    {
        novo = salario * 1.04;
        reajuste = novo - salario;
        porcent = 4;
    }

    printf("Novo salario: %.2f\n", novo);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", porcent);

    return 0;
}