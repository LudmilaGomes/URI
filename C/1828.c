#include <stdio.h>
#include <string.h>

int main()
{
    int vezes, i;
    char sheldon[8];
    char raj[8];

    scanf("%d", &vezes);

    for(i = 1; i <= vezes; i++)
    {
        scanf("%s", sheldon);
        scanf("%s", raj);

        if(strcmp(sheldon, raj) == 0)
        {
            printf("Caso #%d: De novo!\n", i);
        }
        else if( strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "papel") == 0 )
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if( strcmp(sheldon, "papel") == 0 && strcmp(raj, "pedra") == 0 )
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if( strcmp(sheldon, "pedra") == 0 && strcmp(raj, "lagarto") == 0 )
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if( strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "Spock") == 0 )
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if( strcmp(sheldon, "Spock") == 0 && strcmp(raj, "tesoura") == 0 )
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if( strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "lagarto") == 0 )
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if( strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "papel") == 0 )
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if( strcmp(sheldon, "papel") == 0 && strcmp(raj, "Spock") == 0 )
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if( strcmp(sheldon, "Spock") == 0 && strcmp(raj, "pedra") == 0 )
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if( strcmp(sheldon, "pedra") == 0 && strcmp(raj, "tesoura") == 0 )
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else
        {
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }

    return 0;
}