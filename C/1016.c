#include <stdio.h>

int main()
{

    int dist, tempo;
    int veloc = 2;

    scanf("%d", &dist);

    tempo = dist * veloc;
    printf("%d minutos\n", tempo);

    return 0;
}