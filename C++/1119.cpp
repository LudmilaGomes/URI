#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

/*
Ideia utilizada:

Simulamos os saltos ocorridos em um círculo da seguinte forma:
Um vector armazena o número de cada pessoa no círculo de 1 a N (índices 0 a N - 1);
Alteramos as posições das pessoas nos vetores, simulando os saltos nos sentidos
horário e anti-horário, como pedido pela questão.

[sentido horário]
n = 10, k = (4 - 1)

1 2 3 4 5 6 7 8 9 10
2 3 4 5 6 7 8 9 10 1 (1 salto)
3 4 5 6 7 8 9 10 1 2 (2 salto)
4 5 6 7 8 9 10 1 2 3 (3 salto)

E o número 4, que passa a ser o primeiro elemento, é exibido e retirado do vector.

[sentido anti-horário]
n = 10, m = 3

1 2 3 4 5 6 7 8 9 10
10 1 2 3 4 5 6 7 8 9 (1 salto)
9 10 1 2 3 4 5 6 7 8 (2 salto)
8 9 10 1 2 3 4 5 6 7 (3 salto)

E o número 8, que passa a ser o primeiro elemento, é exibido e retirado do vector.
E assim por diante.
*/

void Espaco(int valor) // função para incluir os espaços da forma como a questão pede
{
    if (valor >= 0 && valor <= 9)
        printf("  ");
    if (valor >= 10 && valor <= 99)
        printf(" ");
}

vector<int> RetornaPessoaHorario(vector<int> vec, int k, int n) // retorna o vector após K saltos (no sentido horário)
{
    int aux;
    for (int i = 0; i < k - 1; i++)
    {
        aux = vec[0];           // 1 2 3 4 5 (aux = 1)
        vec.push_back(aux);     // 1 2 3 4 5 1
        vec.erase(vec.begin()); // 2 3 4 5 1
    }
    return vec;
}

vector<int> RetornaPessoaAntiHorario(vector<int> vec, int m, int n) // retorna o vector após M saltos (no sentido anti-horário)
{
    int aux;
    for (int i = 0; i < m; i++)
    {
        aux = vec[vec.size() - 1];    // 1 2 3 4 5 (aux = 5)
        vec.insert(vec.begin(), aux); // 5 1 2 3 4 5
        vec.erase(vec.end() - 1);     // 5 1 2 3 4
    }
    return vec;
}

int RetornaPosicao(vector<int> vec, int valor_elem) // retorna a posição de um elemento de um vector, dado seu valor
{
    int indice;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == valor_elem)
        {
            indice = i;
            break;
        }
    }
    return indice;
}

int main()
{
    int n_pessoas, saltos_hor, saltos_antihor; // respectivamente, entrada 'N', 'k' e 'm'
    int res_hor, res_anti_hor;                 // resultados para a contagem de pessoas no sentido horário e anti-horário
    vector<int> pessoa_hor, pessoa_anti_hor;   // armazena o número de cada pessoa
    int indice_hor, indice_anti_hor;           // guarda os índices dos valores que serão retirados dos vetores

    while (scanf("%d %d %d", &n_pessoas, &saltos_hor, &saltos_antihor) != EOF)
    {
        if (!(n_pessoas && saltos_hor && saltos_antihor)) // quando todas as entradas são iguais a zero, o programa é encerrado
            break;

        for (int i = 0; i < n_pessoas; i++)
        {
            pessoa_hor.push_back(i + 1);
        }

        for (int i = 0; i < n_pessoas; i++)
        {
            pessoa_anti_hor.push_back(i + 1);
        }

        while (n_pessoas) // o laço funciona enquanto a variável 'n_pessoas' for verdadeira (ou seja, != 0)
        {
            pessoa_hor = RetornaPessoaHorario(pessoa_hor, saltos_hor, n_pessoas);
            pessoa_anti_hor = RetornaPessoaAntiHorario(pessoa_anti_hor, saltos_antihor, n_pessoas);

            if (pessoa_hor[0] == pessoa_anti_hor[0]) // uma única pessoa é escolhida
            {
                Espaco(pessoa_hor[0]);
                printf("%d", pessoa_hor[0]);

                pessoa_hor.erase(pessoa_hor.begin());
                pessoa_anti_hor.erase(pessoa_anti_hor.begin());
                n_pessoas--; // 'n_pessoas' é decrementada em 1
            }
            else // duas pessoas são escolhidas
            {
                Espaco(pessoa_hor[0]);
                printf("%d", pessoa_hor[0]);
                Espaco(pessoa_anti_hor[0]);
                printf("%d", pessoa_anti_hor[0]);

                res_hor = pessoa_hor[0];
                res_anti_hor = pessoa_anti_hor[0];

                pessoa_hor.erase(pessoa_hor.begin());
                pessoa_anti_hor.erase(pessoa_anti_hor.begin());

                indice_hor = RetornaPosicao(pessoa_hor, res_anti_hor);
                indice_anti_hor = RetornaPosicao(pessoa_anti_hor, res_hor);

                pessoa_hor.erase(pessoa_hor.begin() + indice_hor);
                pessoa_anti_hor.erase(pessoa_anti_hor.begin() + indice_anti_hor);

                n_pessoas = n_pessoas - 2; // 'n_pessoas' é decrementada em 2
            }
            if (n_pessoas != 0)
                printf(",");
            else
                printf("\n");
        }
    }
    return 0;
}