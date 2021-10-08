#include <stdio.h>

void matrix(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == n - 1 - i)
                printf("%d", 2);

            else if (i == j)
                printf("%d", 1);

            else
                printf("%d", 3);
        }
        printf("\n");
    }
}

int main()
{
    int n;

    while(scanf("%d",&n) != EOF)
    {
        matrix(n);
    }

    return 0;
}