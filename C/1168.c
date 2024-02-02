#include <stdio.h>

#define TAM_MAX 102

int main()
{
    int vezes, i, contador = 0;;
    char string[TAM_MAX];

    scanf("%d", &vezes);

    while(vezes--)
    {
        scanf("%s", string);

        for(i = 0; string[i] != '\0'; i++)
        {
            if(string[i] == '1')
            {
                contador = contador + 2;
            }
            if(string[i] == '2')
            {
                contador = contador + 5;
            }
            if(string[i] == '3')
            {
                contador = contador + 5;
            }
            if(string[i] == '4')
            {
                contador = contador + 4;
            }
            if(string[i] == '5')
            {
                contador = contador + 5;
            }
            if(string[i] == '6')
            {
                contador = contador + 6;
            }
            if(string[i] == '7')
            {
                contador = contador + 3;
            }
            if(string[i] == '8')
            {
                contador = contador + 7;
            }if(string[i] == '9')
            {
                contador = contador + 6;
            }if(string[i] == '0')
            {
                contador = contador + 6;
            }
        }
        printf("%d leds\n", contador);
        contador = 0;
    }

    return 0;
}