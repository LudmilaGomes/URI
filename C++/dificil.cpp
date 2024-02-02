#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct t_candidato
{
    string nome;
    int exp_prof;
    int habil_tec;
    int real_acad;
    int exp_total;
};

void somaExp(t_candidato *cand)
{
    int soma = 0;

    soma = cand->habil_tec + cand->exp_prof + cand->real_acad;
    cand->exp_total = soma;
}

int main()
{
    int n_cand;
    t_candidato auxiliar_cand;

    cin >> n_cand;

    t_candidato candidatos[n_cand];

    for (int i = 0; i < n_cand; i++)
    {
        cin >> candidatos[i].nome;
        cin >> candidatos[i].exp_prof;
        cin >> candidatos[i].habil_tec;
        cin >> candidatos[i].real_acad;

        somaExp(&candidatos[i]);
    }

    // método da bolha para ordenação em ordem decrescente
    for (int i = 0; i < n_cand; i++)
    {
        for (int j = i + 1; j < n_cand; j++)
        {
            if (candidatos[i].exp_total < candidatos[j].exp_total)
            {
                auxiliar_cand = candidatos[j];
                candidatos[j] = candidatos[i];
                candidatos[i] = auxiliar_cand;
            }
        }
    }

    // ordenar em ordem alfabética quando o total de pontos é igual
    for (int i = 0; i < n_cand; i++)
    {
        for (int j = i + 1; j < n_cand; j++)
        {
            if (candidatos[i].exp_total == candidatos[j].exp_total)
            {
                if (candidatos[i].nome[0] > candidatos[j].nome[0])
                {
                    auxiliar_cand = candidatos[i];
                    candidatos[i] = candidatos[j];
                    candidatos[j] = auxiliar_cand;
                }
            }
        }
    }

    for (int i = 0; i < n_cand; i++)
    {
        cout << candidatos[i].nome << endl;
    }

    return 0;
}