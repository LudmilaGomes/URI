#include <stdio.h>

int main()
{
    int vezes;
    int i;
    float n1, n2, n3, media;

    scanf("%d", &vezes);

    for(i = 1; i <= vezes; i++)
    {
        scanf("%f %f %f", &n1, &n2, &n3);

        media = ( ((n1 * 2) + (n2 * 3) + (n3 * 5)) / (10) );
        printf("%.1f\n", media);
    }

    return 0;
}

// gcc 1079.c -o 1079.exe
// .\"1079.exe"