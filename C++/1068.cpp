#include <stdio.h>
#include <iostream>
#include <string>

// accepted

/*
Dada uma expressão qualquer com parênteses, indique se a quantidade de parênteses
está correta ou não, sem levar em conta o restante da expressão. Por exemplo:

a+(b*c)-2-a        está correto
(a+b*(2-c)-2+a)*2  está correto

enquanto

(a*b-(2+c)         está incorreto
2*(3-a))           está incorreto
)3+b*(2-c)(        está incorreto

Ou seja, todo parênteses que fecha deve ter um outro parênteses que abre correspondente
e não pode haver parênteses que fecha sem um previo parenteses que abre e a quantidade
total de parenteses que abre e fecha deve ser igual.

Entrada
Como entrada, haverá N expressões (1 <= N <= 10000), cada uma delas com até 1000 caracteres.

Saída
O arquivo de saída deverá ter a quantidade de linhas correspondente ao arquivo de entrada,
cada uma delas contendo as palavras correct ou incorrect de acordo com as regras acima fornecidas.
*/

using namespace std;

bool ExpressaoCorreta(string expressao)
{
    int posicao_par = 0;
    int posicao_par_inv = 0;
    int contador = 0;

    while (true)
    {
        if (posicao_par = (expressao.find("(", posicao_par) + 1))
        {
            contador++;
        }

        if (posicao_par_inv = (expressao.find(")", posicao_par_inv) + 1))
        {
            if (posicao_par_inv < posicao_par)
            {
                contador = -1;
                break;
            }
            contador--;
        }

        if ((posicao_par == 0) && (posicao_par_inv == 0))
        {
            break;
        }
    }

    if (contador == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string entrada;

    while (cin >> entrada)
    {
        if (ExpressaoCorreta(entrada) == true)
        {
            cout << "correct" << endl;
        }
        else
        {
            cout << "incorrect" << endl;
        }
    }

    return 0;
}