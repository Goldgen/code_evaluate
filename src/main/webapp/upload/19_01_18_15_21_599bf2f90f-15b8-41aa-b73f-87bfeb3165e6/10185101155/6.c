#include<stdio.h>
int main()
{
   int a,b,c,d,e;
   scanf("%d %d %d",&a,&b,&c);
   d = (a >= b)?a:b;
   e = (d >= c)?d:c;
   printf("%d",e);
   return 0;

}
