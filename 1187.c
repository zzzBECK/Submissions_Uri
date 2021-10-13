#include <stdio.h>

int main()
{
    char opcao;
    double m[12][12], soma = 0;
    int i, j, coluna = 11, count = 0, c = 0;

    scanf("%c", &opcao);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }

    for (i = 0; i < 12; i++)
    {
        for (j = c; j < coluna; j++)
        {
            if (i != j && j != 11 - i && i < 5)
            {
                soma += m[i][j];
                count++;
            }
        }
        c++;
        coluna--;
    }

    if (opcao == 'S')
        printf("%.1lf\n", soma);
    else
        printf("%.1lf\n", soma / count);

    return 0;
}