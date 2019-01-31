#include <stdio.h>

int main()
{
   float x = 0;
   int y = 0;

   scanf("%f",&x);

   if(x < 0)
      y = -1;
   else if(x == 0)
      y = 0;
   else
      y = 1;

   printf("%d",y);

    return 0;
}