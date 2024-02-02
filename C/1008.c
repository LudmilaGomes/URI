#include <stdio.h>

int main()
{

    int numero, hora;
    double valor, salario;

    scanf("%d %d %lf", &numero, &hora, &valor);
    salario = hora * valor;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}