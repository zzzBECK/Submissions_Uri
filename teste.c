#include <stdio.h>
#include <string.h>


int main()
{
   int teste, i;
   char op;
   char malditos_cromossomos[3];

   scanf("%d", &teste);

   for (i = 0; i < teste; i++)
   {
      scanf("%s", &malditos_cromossomos);
      op = malditos_cromossomos[1];

      if(malditos_cromossomos[0] == malditos_cromossomos[2])
         printf("%d\n", (malditos_cromossomos[0] - '0') * (malditos_cromossomos[2] - '0'));

      else if(op >= 65 && op <= 90)
         printf("%d\n", (malditos_cromossomos[2] - '0') - (malditos_cromossomos[0] - '0'));

      else if(op >= 97 && op <= 122)
         printf("%d\n", (malditos_cromossomos[0] - '0') + (malditos_cromossomos[2] - '0'));
   }
   
   return 0;
}