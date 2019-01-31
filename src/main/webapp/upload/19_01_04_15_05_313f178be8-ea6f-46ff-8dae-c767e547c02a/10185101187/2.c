#include <stdio.h>
#include <math.h>

int main()
{
   int a, b, c, n, y, d=0;
   scanf("%d+%d=%d", &a, &b, &c);

   for(n=0; a*pow(10,n)<1e4; n++)
   {
       if(a*pow(10,n)+b==c)
       {
           printf("%d", n);
           d = 1;
           break;
       }
   }

   if(d==0)
   {
       for(y=0; b*pow(10,y)<1e4; y++)
       {
           if(b*pow(10,y)+a==c)
           {
               printf("-%d", y);
               break;
           }
       }
   }
}