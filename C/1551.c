#include <stdio.h>

#define TAM_MAX 1000

int main()
{
    char i;
    int vezes, j, contador = 0;
    char string[TAM_MAX];
    int alfabeto[26];

    for(j = 0; j < 26; j++)
    {
        alfabeto[j] = 0;
    }

    scanf("%d", &vezes);
    scanf("%*c");

    while(vezes--)
    {
        scanf("%[^\n]", string);
        scanf("%*c");

        for(i = 'a'; i <= 'z'; i++)
        {
            for(j = 0; string[j] != '\0'; j++)
            {
                if(string[j] == i && alfabeto[i - 97] == 0)
                {
                    alfabeto[i - 97] = 1;
                    contador++;
                }
            }
        }

        if(contador == 26)
        {
            printf("frase completa\n");
        }
        else if(contador >= 13)
        {
            printf("frase quase completa\n");
        }
        else
        {
            printf("frase mal elaborada\n");
        }

        contador = 0;

        for(j = 0; j < 26; j++)
        {
            alfabeto[j] = 0;
        }
    }

    return 0;
}