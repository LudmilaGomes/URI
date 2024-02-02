#include <stdio.h>

int main()
{

    int dist;
    double combs, total;

    scanf("%d", &dist);
    scanf("%lf", &combs);

    total = dist / combs;
    printf("%.3f km/l\n", total);

    return 0;
}