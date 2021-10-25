#include <stdio.h>

int main()
{
    int n, i, fib[46] = {0, 1};

    scanf("%d", &n);

    for (i = 2; i < 46; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (i = 0; i < n; i++)
    {
        if (i == n - 1)
            printf("%d\n", fib[i]);
        else
            printf("%d ", fib[i]);
    }


    return 0;
}