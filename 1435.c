#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    while (n != 0)
    {
        int array[n][n], count = 1, a = 0, b  = 0;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                   array[i][j] = 1;
            }
        }

        for (i = a; i < n; i++)
        {
            for (j = b; j < n; j++)
            {
                array[i][j] = count;
                b++;
                n--;
                count++;
            }
        }


        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0)
                    printf("%3d", array[i][j]);

                else
                    printf("%3d", array[i][j]);
            }
            printf("\n");
        }

        printf("\n");


        scanf("%d", &n);
    }

    return 0;
}