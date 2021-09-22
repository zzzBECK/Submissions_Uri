#include <stdio.h>

int main()
{

    int x, y, z = 0, i, maior, menor;

    scanf("%d %d", &x, &y);

    if (x > y)
    {
        maior = x;
        menor = y + 1;
    }
    else
    {
        maior = y;
        menor = x + 1;
    }

    for (i = menor; i < maior; i++)
    {
        if (i % 2 != 0)
        {
            z += i;
        }
    }

    printf("%d\n", z);


    return 0;
}