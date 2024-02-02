#include <stdio.h>

int main()
{

    int tempo, velocm;
    float total, combs = 12;

    scanf("%d", &tempo);
    scanf("%d", &velocm);

    total = (velocm * tempo) / combs;
    printf("%.3f\n", total);

    return 0;
}