#include <stdio.h>

void func(int x, int y)
{
    int rafael = (9 * x * x) + (y * y);
    int beto = (2 * x * x) + (25 * y * y);
    int carlos = (-100 * x) + (y * y * y);

    if (rafael > beto && rafael > carlos)
        printf("Rafael ganhou\n");

    else if (beto > rafael && beto > carlos)
        printf("Beto ganhou\n");

    else
        printf("Carlos ganhou\n");
}

int main()
{
    int i, n, x, y;
    
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        func(x, y);
    }

    return 0;
}