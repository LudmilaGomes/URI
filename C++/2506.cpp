#include <stdio.h>
#include <iostream>

/*

Os pacientes que chegam na fila do SUS passam por uma triagem imediatamente
e vão para a fila de atendimento. Na triagem a enfermeira anota o horário de
entrada do paciente e quantos minutos ele tem até que sua condição de saúde
se torne crítica. Sabe-se que os pacientes são atendidos de 30 em 30 minutos
(sempre nas horas cheias ou meias horas) quando na fila de atendimento. O
inicio da triagem e do atendimento se dá às 7h da manhã, se não há nenhum
paciente sendo atendido e a fila está vazia, o primeiro paciente é atendido
no instante que chega na triagem. O médico atende até o último paciente na
fila. A preocupação é se algum paciente atingiu uma condição crítica enquanto
não tenha sido atendido. Para tanto você foi convidado para verificar na fila
quantos pacientes atingem a condição crítica.

Entrada
A entrada contém vários casos de teste. Cada caso de teste começa com uma linha
com o número inteiro N, 0 < N < 25;o número de pacientes que chegam à triagem. A
seguir são N linhas com os valores inteiros H, M e C, com 7 < H < 19, e 0 ≤ M <60,
a hora e minuto que o paciente chega à triagem. O paciente da linha i sempre chega
antes que, e no máximo junto com, o paciente da linha i + 1. E 0 ≤C ≤ 720 o número
de minutos antes do paciente atingir a condição crítica de saúde.

Saída
Para cada caso de teste pede-se que se imprima em uma linha única o número de
pacientes que atingiram a condição crítica ainda na fila de atendimento.

7 0 20      -> 7 20
7 0 30      -> 7 30
7 30 20     -> 7 50
8 15 30     -> 8 45

*/

using namespace std;

int main()
{
    int numero;
    int hora, minuto, min_est_critico;
    int hora_atual;
    int cont_pacientes;

    while (cin >> numero)
    {
        cont_pacientes = 0;
        hora_atual = 420; // 420 minutos = 7 horas

        for (int i = 0; i < numero; i++)
        {
            int hora_paciente;
            int hora_paciente_crit;

            cin >> hora;
            cin >> minuto;
            cin >> min_est_critico;

            hora_paciente = (hora * 60) + minuto;
            hora_paciente_crit = hora_paciente + min_est_critico;

            while (hora_atual < hora_paciente)
            {
                hora_atual = hora_atual + 30;
            }

            if (hora_atual > hora_paciente_crit)
            {
                cont_pacientes++;
            }

            hora_atual = hora_atual + 30;
        }

        printf("%d\n", cont_pacientes);
    }

    return 0;
}

/*

6
7 10 20
7 15 45
8 20 10
8 25 34
10 20 10
10 25 35

paciente 1
crit 7:30
hora atual 7:30

paciente 2
crit 8:30
hora atual 8:30

paciente 3
crit 8:59 (atingiu)
hora atual 9:00

hora atual 9:00
hora atual 9:30
hora atual 10:00
hora atual 10:30

*/