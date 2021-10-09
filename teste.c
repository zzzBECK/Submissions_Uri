#include <stdio.h>

int main()
{
    int m[12][12], i, j;

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            if (j == 11 - i)
                printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}