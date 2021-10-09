#include <stdio.h>

int main()
{
    char opcao;
    float m[12][12], soma = 0;
    int i, j, coluna = 11, count = 0;

    scanf("%c", &opcao);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            soma += m[i][j];
            count++;
        }
        coluna--;
    }

    if (opcao == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma / count);

    return 0;
}