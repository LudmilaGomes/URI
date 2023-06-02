#include <stdio.h>

#define TAM_MAX 20000

int main()
{
    int i, j, aux, trocou;
    int bilhetesOriginais, qPessoas;
    int nSequenciaBilhete[TAM_MAX];
    int contadorBilhetes[10001];
    int contador = 0;

    while(1)
    {
        scanf("%d %d", &bilhetesOriginais, &qPessoas);

        if(bilhetesOriginais == 0)
        {
            break;
        }

        for(i = 0; i < qPessoas; i++)
        {
            scanf("%d", &nSequenciaBilhete[i]);
        }

        trocou = 1;
        while(trocou)                                        /// laço para ordenar os numeros do array nSequenciaBilhete em ordem crescente - correto
        {
            trocou = 0;
            for(i = 0; i < qPessoas-1; i++)
            {
                if(nSequenciaBilhete[i] > nSequenciaBilhete[i + 1])
                {
                    aux = nSequenciaBilhete[i];
                    nSequenciaBilhete[i] = nSequenciaBilhete[i + 1];
                    nSequenciaBilhete[i + 1] = aux;

                    trocou = 1;
                }
            }
        }

        for(i = 0; i < 10000; i++)
        {
            contadorBilhetes[i] = 0;
        }

        for(i = 0; i < qPessoas; i++)                     /// laço para o array
        {
            for(j = 0; j < 10000; j++)                        /// laço para o array
            {
                if(nSequenciaBilhete[i] == j)
                {
                    contadorBilhetes[j]++;
                }
            }
        }

        /**
        nSequenciaBilhete   - armazena todos os bilhetes recebidos
        contadorBilhetes    - armazena o numero de vezes que os numeros X, Y, ... dos bilhetes repetiram
        contador            - armazena quantos numeros de bilhetes foram clonados
        */

        for(i = 0; i < 10000; i++)
        {
            if(contadorBilhetes[i] != 0)
            {
                if(contadorBilhetes[i] > 1)
                {
                    contador++;
                }
            }
        }

        printf("%d\n", contador);

        for(i = 0; i < 10000; i++)
        {
            contadorBilhetes[i] = 0;
        }

        contador = 0;
    }
    return 0;
}