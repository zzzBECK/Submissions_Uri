#include <stdio.h>

int fib(int n, int* count)
{
    *count += 1;

    if (n == 0)

        return 0;

    else if(n == 1)

        return 1;

    else
    {
        return fib(n - 1, count) + fib(n - 2, count);
    }
}    

int main() 
{
    int n, count = -1, i, times, result;

    scanf("%d", &times);

    for (i = 0; i < times; i++)
    {
        scanf("%d", &n);

        result = fib(n, &count);

        printf("fib(%d) = %d calls = %d\n", n, count, result);

        count = -1;

    }
    
    
    return 0;
}