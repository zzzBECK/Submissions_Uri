#include <stdio.h>
  
int main() 
{
   int initial, end;

   scanf("%d %d", &initial, &end);

   if (initial >= 12)
   {
       printf("O JOGO DUROU %d HORA(S)\n", 24 - initial + end);
   }
   else if (end == initial)
   {
       printf("O JOGO DUROU %d HORA(S)\n", 24);
   }
   else if (initial < 12)
   {
       printf("O JOGO DUROU %d HORA(S)\n", end - initial);
   }
   

    return 0;
}