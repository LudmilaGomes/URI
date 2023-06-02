#include <stdio.h>

int main()
{
    int i;
    int vezes;
    int nAlunos;
    int notas[1000];
    int notasComp[1000];    // array com as notas já ordenadas para comparar com o array de notas desordenadas e contar quantas pessoas permaneceram no mesmo lugar;
    int trocou = 1,
        nTrocas = 0;
    int aux;
    int contadorAlunos = 0;

    //printf("Digite o numero de vezes: ");
    scanf("%d", &vezes);

    while(vezes--)
    {
        //printf("Digite o numero de alunos: ");
        scanf("%d", &nAlunos);

        for(i = 0; i < nAlunos; i++)
        {
            //printf("Digite a nota do aluno %d: ", i+1);
            scanf("%d", &notas[i]);
        }

        for(i = 0; i < nAlunos; i++)
        {
            notasComp[i] = notas[i];
        }

        while(trocou)
        {
            trocou = 0;
            for(i = 0; i < nAlunos - 1; i++)
            {
                if(notasComp[i] < notasComp[i + 1])
                {
                    aux = notasComp[i];
                    notasComp[i] = notasComp[i + 1];
                    notasComp[i + 1] = aux;
                    trocou = 1;
                    nTrocas++;
                }
            }
        }

        for(i = 0; i < nAlunos; i++)
        {
            if(notas[i] == notasComp[i])
            {
                contadorAlunos++;
            }
        }

        printf("%d\n", contadorAlunos );
        trocou = 1;
        nTrocas = 0;
        contadorAlunos = 0;
    }
    return 0;
}