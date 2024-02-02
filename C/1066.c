int main()
{

    int numero;
    int i;
    int contP = 0,
        contI = 0,
        contPosit = 0,
        contNegat = 0;

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            contP++;
        }
        else
        {
            contI++;
        }

        if (numero > 0)
        {
            contPosit++;
        }
        else if (numero < 0)
        {
            contNegat++;
        }
    }

    printf("%d valor(es) par(es)\n", contP);
    printf("%d valor(es) impar(es)\n", contI);
    printf("%d valor(es) positivo(s)\n", contPosit);
    printf("%d valor(es) negativo(s)\n", contNegat);

    return 0;
}