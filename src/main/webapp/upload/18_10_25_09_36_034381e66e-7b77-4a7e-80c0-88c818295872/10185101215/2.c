#include<stdio.h>
#include<math.h>
int main (void)
{
   float x,s,y;
   int i;
   for(i=1;i<=5;i++)
   {
       scanf("%f",&x);
       s+=x;
   }
   y=s/5;
   printf("%.1f",y);
   return 0;
}
