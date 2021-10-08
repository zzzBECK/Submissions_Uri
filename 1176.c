#include <stdio.h>

int main()
{
    int teste, i, num;
    unsigned long long int n[60];
    n[0] = 0;
    n[1] = 1;

    for (i = 2; i < 61; i++)
    {
        n[i] = n[i - 1] + n[i - 2];
    }

    scanf("%d", &teste);

    for (i = 0; i < teste; i++)
    {
        scanf("%d", &num);
        printf("Fib(%d) = %lld\n", num, n[num]);
    }

    return 0;
}