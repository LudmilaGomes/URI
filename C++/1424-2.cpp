#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>

// tentativa 2 - deu certo

/*

BEE 1424

Dado um vetor de inteiros, sua tarefa é encontrar a k-ésima ocorrência (da esquerda
para a direita) de um inteiro v no vetor. Para tornar o problema mais difícil (e mais
interessante!), você deve responder a m consultas deste tipo.

Entrada
Há vários casos de teste. A primeira linha de cada caso de teste contém dois inteiros
n e m (1 ≤ n, m ≤ 100.000), o número de elementos no vetor e o número de consultas a
serem respondidas, respectivamente. A próxima linha contém n inteiros positivos não maiores
que 1.000.000, que descrevem o vetor. As próximas m linhas contém dois inteiros k e v cada
(1 ≤ k ≤ n, 1 ≤ v ≤ 1.000.000), descrevendo as consultas.

O arquivo de entrada termina com fim-de-arquivo (EOF). O tamanho do arquivo de entrada
não excede 5 Mb.

Saída
Para cada consulta, imprima o índice do vetor (1-indexado) da ocorrência solicitada.
Se tal ocorrência não existe, imprima 0 ao invés.

*/

/*

Substituiremos o array comum por um 'map' com chave e valor, respectivamente,
um inteiro e um vector.

Como usamos o mapa: o inteiro representará os valores recebidos; o vector irá armazenar os valores de i
do laço de repetição quando um valor é recebido. Basicamente, o vector irá armazenar a quantidade de
ocorrências de um valor. Obs.: no primeiro laço de repetição, inicializamos i = 1!

Exemplo: recebemos 8 números do usuário (2, 2, 7, 4, 1, 7, 1, 4)
                              quando i = 1  2  3  4  5  6  7  8

Nosso mapa tem esse aspecto:

mapa{ 2: [1, 2],
      4: [4, 8],
      7: [3, 6],
      1: [5, 7]
}

Exemplo: recebemos 8 números do usuário (1, 3, 2, 2, 4, 3, 2, 1)
                              quando i = 1  2  3  4  5  6  7  8

Nosso mapa tem esse aspecto:

mapa{ 1: [1, 8],
      3: [2, 6],
      2: [3, 4, 7],
      4: [5]
}

*/

using namespace std;

int main()
{
    // declaração das variáveis necessárias
    int num_elementos, num_consultas; // quantidade de elementos do arrays, quantidade de consultas que serão feitas;
    int ocorrenciaK, valorNoVetor;    // número da ocorrência, valor do elemento
    int contador = 0;                 // contador para ser incrementado e comparado com a variável ocorrenciaK
    map<int, vector<int>> mapa;       // mapa para armazenar um inteiro associado a um vector

    while (scanf("%d %d", &num_elementos, &num_consultas) != EOF)
    {
        for (int i = 1; i <= num_elementos; i++)
        {
            // número recebido do usuário
            int numero;
            scanf("%d", &numero);

            // guardamos o número em uma posição no mapa
            mapa[numero].push_back(i);
        }

        for (int i = 0; i < num_consultas; i++)
        {
            // recebemos os valores para ocorrenciaK e valorNoVetor
            scanf("%d", &ocorrenciaK);
            scanf("%d", &valorNoVetor);

            // se a k-ésima ocorrência de um valor é maior que o tamanho do vector daquele inteiro...
            if (ocorrenciaK > mapa[valorNoVetor].size())
            {
                //  ...então, não há ocorrência K e exibimos 0
                printf("0\n");
            }
            else // caso contrário, imprimimos o índice do vetor da ocorrência solicitada
            {
                // usamos "ocorrenciaK - 1" pois este é o endereço no array
                printf("%d\n", mapa[valorNoVetor][ocorrenciaK - 1]);
            }
        }

        // o mapa é esvaziado
        mapa.clear();
    }

    return 0;
}