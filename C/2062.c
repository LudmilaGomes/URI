#include <stdio.h>

int main()
{
    int i;
    int quantPalavras;
    char string[21];

    scanf("%d%*c", &quantPalavras);

    while(quantPalavras--)
    {
        scanf("%s", string);

        for(i = 0; string[i] != '\0'; i++) // contador para a quantidade de caracteres => "URI" e "OBI" tem, ambas, 3 caracteres (indice 2);
        {
            ;
        }
        //printf("i: %d\n", i);

        if(i == 3) // quando há 3 caracteres;
        {
            i = 0;
            if(string[i] == 'U' && string[i+1] == 'R' && string[i+2] != 'I')
            {
                //printf("teste\n");
                string[i+2] = 'I';
            }

            if(string[i] == 'O' && string[i+1] == 'B' && string[i+2] != 'I')
            {
                //printf("teste\n");
                string[i+2] = 'I';
            }
        }
        printf("%s", string);
        if(quantPalavras != 0) // desvio condicional para adicionar o espaço adequado apó a string
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}