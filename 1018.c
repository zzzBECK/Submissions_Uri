#include <stdio.h>

int main()
{
    int a, c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0, c1 = 0;

    scanf("%d", &a);

    printf("%d\n", a);

    while (a != 0)
    {
        if (a >= 100)
        {
            c100++;
            a -= 100;
        }
        else if (a >= 50)
        {
            c50++;
            a -= 50;
        }
        else if (a >= 20)
        {
            c20++;
            a -= 20;
        }
        else if (a >= 10)
        {
            c10++;
            a -= 10;
        }
        else if (a >= 5)
        {
            c5++;
            a -= 5;
        }
        else if (a >= 2)
        {
            c2++;
            a -= 2;
        }
        else if (a >= 1)
        {
            c1++;
            a -= 1;
        }
    }
   
    
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",c100, c50, c20, c10, c5, c2, c1);
    

    return 0;
    
}