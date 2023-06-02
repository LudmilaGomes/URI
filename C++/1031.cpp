#include <iostream>
#include <stdio.h>

using namespace std;

/*

Durante uma crise de energia na Nova Zelândia no inverno passado
(causada por uma escassez de chuva e, consequentemente, por causa
dos níveis baixos nas barragens hidrográficas), um esquema de
contingência foi desenvolvido para desligar a energia para as
áreas do país de forma sistemática, de uma forma totalmente justa.
O país foi dividido em N regiões (Auckland seria a região número 1
e Wellington a número 13). Um número, m, seria escolhido randomicamente
e a energia deveria ser desligada primeiro na região 1 (claramente o
ponto de início mais justo) e então em cada m região após esta, indo
de uma a outra região e ignorando as regiões já desligadas. Por exemplo,
se N = 17 e m = 5, a energia deverá ser desligada em todas as regiões
seguindo a seguinte ordem: 1,6,11,16,5,12,2,9,17,10,4,15,14,3,8,13,7.

O problema é que, claramente seria mais justo desligar a região de
Wellington por último (Isso porque é onde a sede da empresa se encontra).
Portanto, para um dado N (regiões), o número aleatório m (salto)
precisa ser cuidadosamente escolhido de forma que a região 13 seja
a última região a ser escolhida.

Escreva um programa que leia o número de regiões e determine o menor
número m que assegure que Wellington (região 13) possa continuar
funcionando enquanto o resto do país esteja desligado.

Entrada
A entrada consistirá de uma série de linhas, cada uma contendo o
número de regiões N (13 ≤ N ≤ 100 ). O fim da entrada é indicado
por uma linha consistindo de um valor zero (0).

Saída
A saída consistirá de uma série de linhas, uma linha para cada linha
de entrada. Cada linha consistirá de um m de acordo com o esquema acima apresentado.

*/

// usamos a fórmula para o problema de Josephus: t(n,k) = ( t(n-1,k) + k ) % n

/*

Ideia: no problema de Josephus, temos n pessoas; a cada k saltos, uma das pessoas é morta;
o resultado é que uma pessoa sobra sem morrer (o valor da pessoa na sequência é dada pela fórmula).

Aplicamos essa ideia ao problema de Crise de Energia, em que temos n cidades e k saltos; a
diferença é que, agora, achamos o valor de k para que a última cidade seja a de número 12.
Assim, vamos testar para valores de k até que o resultado seja 12, e exibimos o valor de k.

*/

int form_josephus(int n, int k)
{
    // teste para quando o número de pessoas é 1 (ela não morre), de acordo com o problema de Josephus
    if (n == 1)
    {
        return 0;
    }
    return ((form_josephus(n - 1, k) + k) % n);
}

int main()
{
    // variáveis utilizadas: número de regiões (entrada) e número de saltos (saída)
    int n_regioes, n_saltos;

    while (scanf("%d", &n_regioes) != EOF)
    {
        // lemos valores até que seja digitado o valor '0'
        if (!n_regioes)
            break;

        n_saltos = 1; // o valor de saltos começa em 1
        while (1)
        {
            // testamos o resultado para vários ks possíveis; quando a última região a sobrar for a 12, o laço infinito 'morre'
            if ((form_josephus(n_regioes - 1, n_saltos) + 1) % n_regioes == 12)
            {
                break;
            }
            ++n_saltos; // incrementamos o número de saltos para o próximo teste
        }
        printf("%d\n", n_saltos);
    }

    return 0;
}