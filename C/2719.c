#include <stdio.h>

int main()
{
    int vezes;
    int i, j;
    int quantPresente, pesoMax;
    int peso, somaPesos;
    int viagens;
    
    somaPesos = 0;
    viagens = 1;

    scanf("%d", &vezes);

    for(i = 1; i <= vezes; i++)
    {
        scanf("%d %d", &quantPresente, &pesoMax);

        for(j = 1; j <= quantPresente; j++)
        {
            scanf("%d", &peso);
            somaPesos = somaPesos + peso;

            if(somaPesos > pesoMax)
            {
                viagens++;
                somaPesos = peso;
            }
        }

        printf("%d\n", viagens);
        somaPesos = 0;
        viagens = 1;
    }
    return 0;
}