#include<stdio.h>
#include<math.h>
int main (void)
{
   int i,j;
   float sum=0,m=1;
   for(i=1;i<=10;i++)
   {
       for(j=1;j<=i;j++)
        m*=j;
       sum+=1/m;
       m=1;
   }
   printf("%f",sum+1);
    return 0;
}