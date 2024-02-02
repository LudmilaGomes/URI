#include <stdio.h>

int main()
{

    double a, b, c;
    double maior = 0, medio = 0, menor = 0;

    scanf("%lf %lf %lf", &a, &b, &c);
    // primeiro: definir a, b e c do maior para o menor

    maior = a > b ? a : b;
    maior = maior > c ? maior : c;

    menor = a > b ? b : a;
    menor = menor > c ? c : menor;

    if ((maior == b && menor == c))
    {
        medio = a;
    }
    if ((maior == a && menor == c))
    {
        medio = b;
    }
    if ((maior == a && menor == b))
    {
        medio = c;
    }

    if ((maior == c && menor == b))
    {
        medio = a;
    }
    if ((maior == c && menor == a))
    {
        medio = b;
    }
    if ((maior == b && menor == a))
    {
        medio = c;
    }

    // printf("%f %f %f\n", maior, medio, menor);

    // agora, os ifs para os tipos de triangulos
    if (maior >= medio + menor)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ((maior * maior) == (medio * medio) + (menor * menor))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if ((maior * maior) > (medio * medio) + (menor * menor))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if ((maior * maior) < (medio * medio) + (menor * menor))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if ((maior == medio) && (medio == menor) && (menor == maior))
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if ((maior == medio) || (medio == menor) || (menor == maior))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}