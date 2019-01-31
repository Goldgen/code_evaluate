#include<stdio.h>
#include<math.h>
int main()
{
   int n,m,x,a,b,c,d,y;

   scanf("%d %d",&n,&m);
   x=log10(n)+1;
   printf("%d ",x);
   b=m%x;
   a=n/pow(10,b);
   c=n-a*pow(10,b);
   d=c*pow(10,x-b);
   y=d+a;
   printf("%d",y);
   return 0;
}