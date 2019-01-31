#include<stdio.h>
#include<math.h>
int main()
{
   int x,p,n,a,b,c,d,e;
   scanf("%d %d %d",&x,&p,&n);
   a = pow(2.0,(double)n) - 1 ;
   b = a<<=p-n+1;
   c = ~b;
   d = (~x) & b;
   e = c & x;
   x = d | e;
   printf("%d",x);
   return 0 ;
}
