#include <stdio.h>
#include <string.h>

int main()
{
    int teste, i, j, aux;

    scanf("%d", &teste);

    for (i = 0; i < teste; i++)
    {
        int a, b;
        aux = 0;

        scanf("%d %d", &a, &b);

        if (b > a)
        {
            aux = 1;
        }
        else
        {
            while (b > 0)
            {
                if (a % 10 == b % 10)
                {
                    a /= 10;
                    b /= 10;
                }
                
                else
                {
                    aux = 1;
                    break;
                }  
            }
        }

    if (aux)
        printf("nao encaixa\n");
    else 
        printf("encaixa\n");
    }

    

    return 0;
}