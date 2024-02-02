#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

// recebe um vector e um número de k saltos; retorna o vector com valores em posições alteradas
vector<int> RetornaPessoaHorario(vector<int> vec, int k, int n)
{
    int aux;
    for (int i = 0; i < k - 1; i++)
    {
        aux = vec[0];
        vec.push_back(aux);
        vec.erase(vec.begin());
    }
    return vec;
}

vector<int> RetornaPessoaAntiHorario(vector<int> vec, int m, int n)
{
    int aux;
    for (int i = 0; i < (n - m); i++) // ERRO NO (n - m)
    {
        aux = vec[0];
        vec.push_back(aux);
        vec.erase(vec.begin());
    }
    return vec;
}

int main()
{
    int n, k, m, resultado1, resultado2;
    vector<int> pessoa_valor1, pessoa_valor2;
    int valor_hor;

    for (int i = 0; i < 5; i++)
    {
        pessoa_valor1.push_back(i + 1);
    }

    for (int i = 0; i < 5; i++)
    {
        pessoa_valor2.push_back(i + 1);
    }

    pessoa_valor1 = RetornaPessoaHorario(pessoa_valor1, 6, 5);
    pessoa_valor2 = RetornaPessoaAntiHorario(pessoa_valor2, 6, 5);

    resultado1 = pessoa_valor1[0];
    resultado2 = pessoa_valor2[0];

    printf("n = 5, k = 6, m = 6: %d, %d\n", resultado1, resultado2);

    return 0;
}