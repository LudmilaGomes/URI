#include <stdio.h>
#include <math.h>

int main(void)
{
    float x1, x2, y1, y2, pot1, pot2, raiz;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    pot1 = pow((x2 - x1), 2);
    pot2 = pow((y2 - y1), 2);
    raiz = sqrt(pot1 + pot2);

    printf("%.4f\n", raiz);

    return 0;
}