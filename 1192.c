#include <stdio.h>

int main()
{
    int teste, i;

    scanf("%d", &teste);

    for (i = 0; i < teste; i++)
    {
        int x, y;
        char letra;
        scanf("%d%c%d", &x, &letra, &y);

        if (x == y)
        {
            printf("%d\n", x * y);
        }

        else if (letra >= 65 && letra <= 90)
        {
            printf("%d\n", y - x);
        }
        else 
            printf("%d\n", x + y);
    }


    return 0;
}