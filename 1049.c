#include <stdio.h>
#include <string.h>
  
int main() 
{
   char a1[20];
   char a2[20];
   char a3[20];

   scanf("%s", &a1);
   scanf("%s", &a2);
   scanf("%s", &a3);


   if (!strcmp(a1, "vertebrado") == 1)
   {
       
       if (!strcmp(a2, "ave") == 1)
       {
           if (!strcmp(a3, "carnivoro") == 1)
           {
               printf("aguia\n");
           }
           else
           {
               printf("pomba\n");
           }
       }
       else
       {
           if (!strcmp(a3, "onivoro") == 1)
           {
               printf("homem\n");
           }
           else
           {
               printf("vaca\n");
           }
       }
   }
   else
   {
       if (!strcmp(a2, "inseto") == 1)
       {
           if (!strcmp(a3, "hematofago") == 1)
           {
               printf("pulga\n");
           }
           else
           {
               printf("lagarta\n");
           }
       }
       else
       {
           if (!strcmp(a3, "hematofago") == 1)
           {
               printf("sanguessuga\n");
           }
           else
           {
               printf("minhoca\n");
           }
       }
   }


    return 0;
}