int main()
{
    float n1, n2, n3, n4, media, nExame;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10);
    printf("Media: %.1f\n", media);

    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f", &nExame);
        printf("Nota do exame: %.1f\n", nExame);

        if (((media + nExame) / 2) >= 5.0)
        {
            printf("Aluno aprovado.\n");
            media = ((media + nExame) / 2);
        }
        else if (((media + nExame) / 2) <= 4.9)
        {
            printf("Aluno reprovado.\n");
            media = ((media + nExame) / 2);
        }
        printf("Media final: %.1f\n", media);
    }

    return 0;
}