#include <stdio.h>
#include <math.h>

/**
 * Problema 1554: Crie uma função que retorna a distância entre dois pontos que recebe x1, y1 e x2, y2 dos pontos.
 */

double Distancia(int posicaoX1, int posicaoY1, int posicaoX2, int posicaoY2)
{
    double distancia;

    distancia = (pow( posicaoX2 - posicaoX1, 2) + pow( posicaoY2 - posicaoY1, 2));
    
    return distancia;
}

int main()
{
    int i, j;
    int vezes;
    int bolasDisp,
        posicaoBrancaX, posicaoBrancaY,
        posicaoQualquerX, posicaoQualquerY;
    int bolaMaisProx;
    double distancia, menorDistancia;

    scanf("%d", &vezes);

    while(vezes--)
    {
        scanf("%d", &bolasDisp);

        scanf("%d %d", &posicaoBrancaX, &posicaoBrancaY);

        for(i = bolasDisp, j = 1; i > 0; i--, j++)
        {
            scanf("%d %d", &posicaoQualquerX, &posicaoQualquerY);

            distancia = Distancia(posicaoBrancaX, posicaoBrancaY, posicaoQualquerX, posicaoQualquerY);

            if(j == 1) // primeira repeticao do for
            {
                menorDistancia = distancia;
                bolaMaisProx = j;
            }
            else if(menorDistancia > distancia)
            {
                menorDistancia = distancia;
                bolaMaisProx = j;
            }
        }
        printf("%d\n", bolaMaisProx);
    }
    return 0;
}