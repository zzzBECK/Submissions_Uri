#include <stdio.h>

int main()
{
    int n = 1, i, j;

    

    while (n != 0)
    {
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d", 1);
            }
            printf("\n");
        }
    }

    return 0;
}