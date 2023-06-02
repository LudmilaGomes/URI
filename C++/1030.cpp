#include <iostream>
#include <stdio.h>

using namespace std;

// usamos a fórmula para o problema de Josephus: t(n,k) = ( t(n-1,k) + k ) % n

int form_josephus(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }
    return ((form_josephus(n - 1, k) + k) % n);
}

int main()
{
    int n_pessoas, n_saltos, n_casos;

    cin >> n_casos;

    for (int i = 0; i < n_casos; i++)
    {
        cin >> n_pessoas;
        cin >> n_saltos;

        printf("Case %d: %d\n", i + 1, form_josephus(n_pessoas, n_saltos) + 1);
    }

    return 0;
}