#include <stdio.h>
  
int main() 
{
   int initialHour, endHour, initialMin, endMin, hora = 0, min = 0;


   scanf("%d %d %d %d", &initialHour, &initialMin, &endHour, &endMin);

   hora = endHour - initialHour;

   if (hora < 0)
   {
       hora += 24 ;
   }

   min = endMin - initialMin;

   if (min < 0)
   {
       min += 60;
       hora--;
   }

   if (initialHour == endHour && initialMin > endMin)
   {
       hora = 23;
       min = endMin - initialMin + 60;
   }



   if(initialHour == endHour && initialMin == endMin)
   {
       printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
   }
   else
   {
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);
   }

    



    return 0;
}