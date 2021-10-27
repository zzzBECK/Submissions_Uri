#include <stdio.h>

unsigned long long int fat(unsigned long long int n)
{
    if (n == 0)
        return 1;
    else
        return n * fat(n - 1);
}

int main()
{
    int m, n;
    unsigned long long int f;

    scanf("%d %d", &m, &n);

    while (getchar() != EOF)
    {
        f = fat(m) + fat(n);

        printf("%llu\n", f);
        
        scanf("%d %d", &m, &n);
    }


    return 0;
}