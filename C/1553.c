#include <stdio.h>

int main()
{
    int i, j, aux, trocou = 1;
    int nPerguntas, nFrequente;
    int numeroPergunta[1000];
    int contadorPerguntas[101];
    int contador = 0;

    while(1)
    {
        scanf("%d %d", &nPerguntas, &nFrequente);

        if(nPerguntas == 0 || nFrequente == 0)
        {
            break;
        }

        for(i = 0; i < nPerguntas; i++)
        {
            scanf("%d", &numeroPergunta[i]);
        }

        trocou = 1;
        while(trocou)                                        /// laço para ordenar os numeros do array numeroPergunta em ordem crescente - correto
        {
            trocou = 0;
            for(i = 0; i < nPerguntas-1; i++)
            {
                if(numeroPergunta[i] > numeroPergunta[i + 1])
                {
                    aux = numeroPergunta[i];
                    numeroPergunta[i] = numeroPergunta[i + 1];
                    numeroPergunta[i + 1] = aux;

                    trocou = 1;
                }
            }
        }

        for(i = 0; i < 100; i++)
        {
            contadorPerguntas[i] = 0;
        }

        for(i = 0; i < nPerguntas; i++)                     /// laço para o array numeroPerguntas
        {
            for(j = 0; j < 100; j++)                        /// laço para o array contadorPerguntas
            {
                if(numeroPergunta[i] == j)
                {
                    contadorPerguntas[j]++;
                }
            }
        }

        /**
        numeroPerguntas     - armazena as perguntas realizadas
        contadorPerguntas   - armazena o numero de vezes que uma pergunta realizada foi repetida
        contador            - armazena quantas perguntas podem ser adicionadas ao site, de acordo com o
                            o número de vezes que uma pergunta deve ser feita para ser considerada “frequente”.
        */

        for(i = 0; i < 100; i++)
        {
            if(contadorPerguntas[i] != 0)
            {
                if(contadorPerguntas[i] >= nFrequente)
                {
                    contador++;
                }
            }
        }

        printf("%d\n", contador);

        for(i = 0; i < 100; i++)
        {
            contadorPerguntas[i] = 0;
        }

        contador = 0;
    }

    return 0;
}