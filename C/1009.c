#include <stdio.h>

int main(void)
{
    char nome;
    double salario, montante, total;

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &montante);
    total = salario + montante * 0.15;

    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}