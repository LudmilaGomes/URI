#include <stdio.h>

int ValorDoGolpe(int ataque, int defesa, int nivel, int bonus)
{
    if(nivel % 2 == 0)
    {
        return ( ((ataque + defesa) / 2) + bonus );
    }
    else
    {
        return ( ((ataque + defesa) / 2) );
    }
}

int main(void){
    int vezes;
    int bonus,
        ataque1, defesa1, n1,
        ataque2, defesa2, n2;
    int valorGolpe1, valorGolpe2;

    scanf("%d", &vezes);

    while(vezes--)
    {
        scanf("%d", &bonus);
        scanf("%d %d %d", &ataque1, &defesa1, &n1);
        scanf("%d %d %d", &ataque2, &defesa2, &n2);

        valorGolpe1 = ValorDoGolpe(ataque1, defesa1, n1, bonus);

        valorGolpe2 = ValorDoGolpe(ataque2, defesa2, n2, bonus);

        if(valorGolpe1 > valorGolpe2)
        {
            printf("Dabriel\n");
        }
        else if(valorGolpe2 > valorGolpe1)
        {
            printf("Guarte\n");
        }
        else
        {
            printf("Empate\n");
        }

    }

    return 0;
}