#include <stdio.h>

int main()
{

    int codigo, quant;
    float preco;

    scanf("%d %d", &codigo, &quant);

    if (codigo == 1)
    {
        preco = 4.00;
        preco = preco * quant;
    }
    else if (codigo == 2)
    {
        preco = 4.50;
        preco = preco * quant;
    }
    else if (codigo == 3)
    {
        preco = 5.00;
        preco = preco * quant;
    }
    else if (codigo == 4)
    {
        preco = 2.00;
        preco = preco * quant;
    }
    else if (codigo == 5)
    {
        preco = 1.50;
        preco = preco * quant;
    }

    printf("Total: R$ %.2f\n", preco);

    return 0;
}