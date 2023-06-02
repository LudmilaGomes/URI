#include <stdio.h>

#define TAM_MAX 40000

int main()
{
    int trocou = 1;
    int i, j, aux;
    int nValores;
    int vetorValores[TAM_MAX];
    int maior; /// maior valor do array vetorValores; é o último elemento do vetorContador.

    scanf("%d", &nValores);

    for(i = 0; i < nValores; i++)
    {
        scanf("%d", &vetorValores[i]);
    }

    while(trocou)   /// laço de repetição para ordenar o vetorValores pelo método da bolha (ordem crescente)
    {
        trocou = 0;
        for(i = 0; i < nValores - 1; i++)
        {
            if(vetorValores[i] > vetorValores[i + 1])
            {
                aux = vetorValores[i];
                vetorValores[i] = vetorValores[i + 1];
                vetorValores[i + 1] = aux;

                trocou = 1;
            }
        }
    }

    maior = vetorValores[nValores-1];   /// a variável maior armazena o maior valor do vetorValores e usa esse número para criar um vetorContador

    int vetorContador[maior+1];         /// declaração do vetorContador que irá armazenar a quantidade de vezes que um número aparece (número de entrada)

    for(i = 0; i < maior+1; i++)       /// laço de repetição para zerar todos os elementos do vetorContador
    {
        vetorContador[i] = 0;
    }

    for(i = 0; i < nValores; i++)
    {
        for(j = 0; j < maior+1; j++)
        {
            if(vetorValores[i] == j)
            {
                vetorContador[j]++;
            }
        }
    }

    for(i = 0; i < maior+1; i++)
    {
        if(vetorContador[i] != 0)
        {
            printf("%d aparece %d vez(es)\n", i, vetorContador[i]);
        }
    }
    return 0;
}