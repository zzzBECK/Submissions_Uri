#include <stdio.h>

int main()
{
    float m[12][12], soma = 0;
    int linha, i, j;
    char opcao;

    scanf("%d %c", &linha, &opcao);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }

    for (j = 0; j < 12; j++)
    {
        soma += m[linha][j];
    }

    if (opcao == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma / 12);


    return 0;
}