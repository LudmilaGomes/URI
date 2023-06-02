#include <iostream>
#include <stdio.h>

// tentativa 1 - falhou: excede limite de tempo do URI/Beecrowd

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

Recebemos o número de elementos de um array;
Recebemos o número de consultas que serão realizadas;
Criamos um arrays usando o número de elementos dado;

Como funciona a consulta: são recebidos dois valores,
respectivamente, a k-ésima ocorrência (inteiro k) de
um elemento v e o próprio elemento v.

*/

int main()
{
    // declaração das variáveis necessárias
    int num_elementos, num_consultas; // quantidade de elementos do arrays, quantidade de consultas que serão feitas;
    int ocorrenciaK, valorNoVetor;    // número da ocorrência, valor do elemento
    int contador = 0;                 // contador para ser incrementado e comparado com a variável ocorrenciaK

    while (scanf("%d %d", &num_elementos, &num_consultas) != EOF)
    {
        // declaramos o vetor após receber o número de elementos que ele terá
        int vetor[num_elementos];

        // laço de repetição para receber e guardar os elementos no array
        for (int i = 0; i < num_elementos; i++)
        {
            int numero;
            scanf("%d", &numero);
            vetor[i] = numero;
        }

        // laço de repetição para realização das consultas
        for (int i = 0; i < num_consultas; i++)
        {
            // recebemos os valores de ocorrência e valor do elemento
            scanf("%d", &ocorrenciaK);
            scanf("%d", &valorNoVetor);

            // realizamos a verificação em outro laço de repetição que percorre o vetor
            for (int j = 0; j < num_elementos; j++)
            {
                // verificamos se o elementos do vetor na posição [i] é igual à variável valorNoVetor
                if (vetor[j] == valorNoVetor)
                {
                    // incrementamos o contador quando achamos o valor que queríamos no vetor
                    contador++;

                    // verificamos se o contador é igual à variável ocorrenciaK
                    if (contador == ocorrenciaK)
                    {
                        // se sim, imprimimos o valor de j + 1
                        printf("%d\n", j + 1);
                        break;
                    }
                }
                else
                {
                    continue;
                }
            }
            // quando o contador é diferente da variável ocorrenciaK
            if (contador < ocorrenciaK)
            {
                // significa que a ocorrência K do valor V não foi encontrado no vetor e exibimos '0'
                printf("0\n");
            }
            // o contador volta a ser igual a 0 para as próximas consultas
            contador = 0;
        }
    }

    return 0;
}