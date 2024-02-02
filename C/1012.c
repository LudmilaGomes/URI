#include <stdio.h>

int main()
{

    double a, b, c;
    double areaTri, areaC, areaTra, areaQ, areaRet;
    double pi = 3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);

    areaTri = a * c / 2;
    areaC = pi * c * c;
    areaTra = (a + b) * c / 2;
    areaQ = b * b;
    areaRet = a * b;

    printf("TRIANGULO: %.3f\n", areaTri);
    printf("CIRCULO: %.3f\n", areaC);
    printf("TRAPEZIO: %.3f\n", areaTra);
    printf("QUADRADO: %.3f\n", areaQ);
    printf("RETANGULO: %.3f\n", areaRet);

    return 0;
}