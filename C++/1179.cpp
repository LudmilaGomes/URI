#include <iostream>

/*

BEE 1179

Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores
forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições.
Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e
utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura,
deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro
os valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.

Entrada
A entrada contém 15 números inteiros.

*/

#define QUANT_NUM 15
#define TAM_ARRAY 5

using namespace std;

int main()
{
    // declaração das variáveis necessárias
    int arrayPar[5];        // array para armazenar os pares
    int arrayImpar[5];      // array para armazenar os ímpares
    int numero;             // variável para armazenar os valores recebidos do usuário
    int endereco_par = 0;   // variável para armazenar e incrementar o valor do endereço do array par
    int endereco_impar = 0; // variável para armazenar e incrementar o valor do endereço do array ímpar
    // as variáveis de endereço são usadas para verificar se chegamos ao fim dos arrays

    // laço de repetição que vai até o número 15; usado para receber 15 valores do usuário
    for (int i = 0; i < QUANT_NUM; i++)
    {
        cin >> numero;

        // verifica se o array foi preenchido (que ocorre quando endereco_par é igual a 5)
        if (endereco_par == 5)
        {
            // endereco_par agora é igual a 0 (para que os novos valores sejam colocados no começo do array)
            endereco_par = 0;
            // exibimos todo o array
            for (int j = 0; j < TAM_ARRAY; j++)
            {
                cout << "par[" << j << "] = " << arrayPar[j] << endl;
            }
        }

        // verifica se o array foi preenchido (que ocorre quando endereco_par é igual a 5)
        if (endereco_impar == 5)
        {
            // endereco_impar agora é igual a 0 (para que os novos valores sejam colocados no começo do array)
            endereco_impar = 0;
            // exibimos todo o array
            for (int j = 0; j < TAM_ARRAY; j++)
            {
                cout << "impar[" << j << "] = " << arrayImpar[j] << endl;
            }
        }

        // verificamos se o número recebido é par ou ímpar
        if (numero % 2 == 0)
        {
            // guardamos o número no endereço indicado por endereco_par e endereco_par é incrementada
            arrayPar[endereco_par] = numero;
            endereco_par++;
        }
        else
        {
            // guardamos o número no endereço indicado por endereco_impar e endereco_impar é incrementada
            arrayImpar[endereco_impar] = numero;
            endereco_impar++;
        }

        // quando chegamos ao fim do laço de repetição, exibimos os últimos valores
        if (i == QUANT_NUM - 1)
        {
            for (int j = 0; j < endereco_impar; j++)
            {
                cout << "impar[" << j << "] = " << arrayImpar[j] << endl;
            }

            for (int j = 0; j < endereco_par; j++)
            {
                cout << "par[" << j << "] = " << arrayPar[j] << endl;
            }
        }
    }

    return 0;
}