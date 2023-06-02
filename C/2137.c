#include <stdio.h>
#include <string.h>

void OrdenaArrayStrings(char str[][5], int t){
    int i, trocou;
    char aux[5];

    trocou = 1;
    while(trocou)
    {
        trocou = 0;
        for(i = 0; i < t-1; i++)
        {
            if(strcmp(str[i], str[i+1]) > 0)
            {
                strcpy(aux, str[i]);
                strcpy(str[i], str[i+1]);
                strcpy(str[i+1], aux);
                trocou = 1;
            }
        }
    }
}

int main()
{
    int i;
    int quantCadastros;
    char codigoCadastro[1000][5];

    while(scanf("%d", &quantCadastros) != EOF)
    {
        for(i = 0; i < quantCadastros; i++)
        {
            scanf("%s", &codigoCadastro[i]);
        }

        OrdenaArrayStrings(codigoCadastro, quantCadastros);

        for(i = 0; i < quantCadastros; i++)
        {
            printf("%s\n", codigoCadastro[i]);
        }
    }

    return 0;
}