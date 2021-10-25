#include <stdio.h>
#include <string.h>

int main(){

   int teste, i, j, count;

   char palavra[6] = {}, one[3] = "one";


   scanf("%d", &teste);


   for(i = 0; i < teste; i++)
   {
      count = 0;
      scanf("%s", palavra);

      if (strlen(palavra) > 3)
      {
         printf("3\n");
      }

      else
      { 
         for (j = 0; j < 3; j++)
         {
            if (palavra[j] == one[j])
               count++;
         }

         if (count >= 2)
         {
            printf("1\n");
         }
         else
         {
            printf("2\n");
         } 

      }   
   } 
    
    return 0;
}