#include <stdio.h>

#define TAM_MAX 10000

int main()
{
    int i, j;
    int nBotas;
    int tamanhoBota[TAM_MAX];
    char peBota[TAM_MAX];
    int indicaDisponivel[TAM_MAX];
    int contador = 0;

    while(scanf("%d", &nBotas) != EOF)
    {
        for(i = 0; i < nBotas; i++)
        {
            scanf("%d%*c%c", &tamanhoBota[i], &peBota[i]);
        }

        for(i = 0; i < nBotas; i++)
        {
            indicaDisponivel[i] = 1;
        }

        for(i = 0; i < nBotas; i++)
        {
            for(j = 0; j < nBotas; j++)
            {
                if( (i != j) && (tamanhoBota[i] == tamanhoBota[j]) && indicaDisponivel[i] == 1 && indicaDisponivel[j] == 1 )
                {
                    if(peBota[i] != peBota[j])
                    {
                        indicaDisponivel[i] = 0;
                        indicaDisponivel[j] = 0;
                        contador++;
                    }
                }
            }
        }
        printf("%d\n", contador);
        contador = 0;
    }

    return 0;
}