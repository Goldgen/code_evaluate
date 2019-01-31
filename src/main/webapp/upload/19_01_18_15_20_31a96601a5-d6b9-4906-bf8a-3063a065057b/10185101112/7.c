#include <stdio.h>

int main()
{
   int a,b,c,d,max_ab,max_c,max_d;
   scanf("%d %d %d %d",&a,&b,&c,&d);
   max_ab=(a>b)?a:b;
   max_c=(max_ab>c)?max_ab:c;
   max_d=(max_c>d)?max_c:d;
   printf("%d",max_d);
   return 0;
}