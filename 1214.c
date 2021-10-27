#include <stdio.h>

int main()
{
    int teste, i, j, k, qtd, nota;

    scanf("%d", &teste);

    for (i = 0; i < teste; i++)
    {
        scanf("%d", &qtd);
        int notas[qtd];
        double total = 0, media;

        for (j = 0; j < qtd; j++)
        {
            scanf("%d", &nota);
            notas[j] = nota;
            total += nota;
        }

        media = total / qtd;
        total = 0;

        for (k = 0; k < qtd; k++)
        {
            if (notas[k] > media)
            {
                total++;
            }

        }

        printf("%.3lf%%\n", total / qtd * 100);

    }

    return 0;
}