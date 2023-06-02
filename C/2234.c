#include <stdio.h>

int main()
{

    int h, p;
    float media;

    scanf("%d %d", &h, &p);

    media = h / (p * 1.0);

    printf("%.2lf\n", media);

    return 0;
}