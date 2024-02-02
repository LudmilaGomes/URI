#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n_entrada;
    int cont_soma = 0;

    cin >> n_entrada;

    for (int i = 0; i < n_entrada; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            cont_soma += i;
        }
    }
    cout << cont_soma << endl;

    return 0;
}