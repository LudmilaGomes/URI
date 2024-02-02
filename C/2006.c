#include <stdio.h>

int main()
{

    int cha, i, a;
    int correto = 0;

    scanf("%d", &cha);
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &a);
        if (a == cha)
        {
            correto++;
        }
    }
    printf("%d\n", correto);
    return 0;
}