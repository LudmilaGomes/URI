#include <stdio.h>
#include <string.h>

int main()
{
    char codigoBacteria[101];
    char codigoResistencia[101];
    char *indica;

    while(scanf("%s", codigoBacteria) != EOF)
    {
        scanf("%s", codigoResistencia);

        indica = strstr(codigoBacteria, codigoResistencia);

        if(indica != NULL)
        {
            printf("Resistente\n");
        }
        else
        {
            printf("Nao resistente\n");
        }
    }

    return 0;
}