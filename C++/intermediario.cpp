#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct aresta
{
    int origem, destino, peso;
};

class Grafo
{
public:
    vector<vector<int>> lista_adj;

    Grafo(vector<aresta> const &arestas, int x, int n)
    {
        lista_adj.resize(3 * n);

        for (auto &aresta : arestas)
        {
            int v = aresta.origem;
            int u = aresta.destino;
            int peso = aresta.peso;

            if (peso == 3 * x)
            {
                lista_adj[v].push_back(v + n);
                lista_adj[v + n].push_back(v + 2 * n);
                lista_adj[v + 2 * n].push_back(u);
            }

            else if (peso == 2 * x)
            {
                lista_adj[v].push_back(v + n);
                lista_adj[v + n].push_back(u);
            }

            else
            {
                lista_adj[v].push_back(u);
            }
        }
    }
};

void achaMenorCaminho(Grafo const &grafo, int inicio, int fim, int n)
{
    vector<bool> desc(3 * n, false);

    desc[inicio] = true;

    vector<int> predecessor(3 * n, -1);

    queue<int> q;
    q.push(inicio);

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        if (curr == fim)
        {
            int cost = -1;
            cout << cost << endl;
        }

        for (int v : grafo.lista_adj[curr])
        {
            if (!desc[v])
            {
                desc[v] = true;
                q.push(v);

                predecessor[v] = curr;
            }
        }
    }
}

int main()
{
    int n_vertice, n_aresta, vert_inicial;

    cin >> n_vertice;
    cin >> n_aresta;
    cin >> vert_inicial;

    aresta ar[n_aresta];

    for (int i = 0; i < n_aresta; i++)
    {
        cin >> ar->origem;
        cin >> ar.;
        cin >> vert_inicial;
    }

    return 0;
}