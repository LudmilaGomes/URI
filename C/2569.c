#include <string.h>
#include <stdlib.h>

int main()
{
    char caracOperacao, i;
    char x[10000], y[10000]; // caracteres de numeros que serão recebidos pelo usuario;
    int numeroX, numeroY;    // as strings anteriores serão transformadas em inteiros; 'numeroX' e 'numeroY' serão somados/multiplicados;
    char str[100000];        // a soma dos inteiros 'numeroX' e 'numeroY' será transformada em uma string;
    int resultado;           // 'str' será convertida para inteiro; 'resultado' armazenará esta conversão;

    scanf("%s %c %s", x, &caracOperacao, y);

    for(i = 0; x[i] != '\0'; i++)
    {
        if(x[i] == '7')
        {
            x[i] = '0';
        }
    }

    numeroX = atoi(x);

    for(i = 0; y[i] != '\0'; i++)
    {
        if(y[i] == '7')
        {
            y[i] = '0';
        }
    }

    numeroY = atoi(y);

    if(caracOperacao == '+')
    {
        sprintf(str, "%d", (numeroX + numeroY) );
    }
    else
    {
        sprintf(str, "%d", (numeroX * numeroY) );
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '7')
        {
            str[i] = '0';
        }
    }

    resultado = atoi(str);

    printf("%d\n", resultado);

    return 0;
}