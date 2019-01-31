#include<stdio.h>
int main()
{
   int a,b,c,d,e,f,g;
   scanf("%d %d %d %d",&a,&b,&c,&g);
   d = (a >= b)?a:b;
   e = (d >= c)?d:c;
   f = (e >= g)?e:g;
   printf("%d",f);
   return 0;

}
