#include<stdio.h>
#include<math.h>
int main()
{
    float x=2,y=1,i,z;
   float sum=0;
   for(i=1;i<=50;i++)
   {
       sum+=x/y;
       z=x;
       x=x+y;
       y=z;
   }
   printf("%.2f",sum);
   return 0;
}