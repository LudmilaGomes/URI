#include <stdio.h>
#include <math.h>

int main()
{

    double raio, pi = 3.14159, potencia, resp;
    scanf("%lf", &raio);

    potencia = pow(raio, 3);
    resp = (4.0 / 3) * pi * potencia;
    printf("VOLUME = %.3f\n", resp);

    return 0;
}