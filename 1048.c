#include <stdio.h>
  
int main() 
{
   double x;

   double perc[] = {15, 12, 10, 7, 4};

   scanf("%lf", &x);

   if (x <= 400)
   {
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %c\n", x * 1.15, (x * 1.15) - x, perc[0], '%');
   }
   else if (x <= 800)
   {
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %c\n", x * 1.12, (x * 1.12) - x, perc[1], '%');
   }
   else if (x <= 1200)
   {
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %c\n", x * 1.1, (x * 1.1) - x, perc[2], '%');
   }
   else if(x <= 2000)
   {
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %c\n", x * 1.07, (x * 1.07) - x, perc[3], '%');
   }
   else
   {
       printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %c\n", x * 1.04, (x * 1.04) - x, perc[4], '%');
   }


    



    return 0;
}