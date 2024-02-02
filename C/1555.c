#include <stdio.h>
 
int Rafael(int x, int y)
{
    return (3 * 3 * x * x) + (y * y);
}

int Beto(int x, int y)
{
    return 2 * (x * x) + (5 * 5 * y * y);
}

int Carlos(int x, int y)
{
    return (- 100 * x) + (y * y * y);
}

int main()
{
    int vezes;
    int x, y;

    scanf("%d", &vezes);

    while(vezes--)
    {
        scanf("%d %d", &x, &y);

        if(Rafael(x, y) > Beto(x, y) )
        {
            if(Rafael(x, y) > Carlos(x, y))
            {
                printf("Rafael ganhou\n");
            }
            else
            {
                printf("Carlos ganhou\n");
            }
        }
        else
        {
            if(Beto(x, y) > Carlos(x, y))
            {
                printf("Beto ganhou\n");
            }
            else
            {
                printf("Carlos ganhou\n");
            }
        }

    }
    return 0;
}