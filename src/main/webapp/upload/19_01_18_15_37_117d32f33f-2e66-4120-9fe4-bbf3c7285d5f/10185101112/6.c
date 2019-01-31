#include <stdio.h>

int main()
{
   int a,b,c,max_ab,max_c;
   scanf("%d %d %d",&a,&b,&c);
   max_ab=(a>b)?a:b;
   max_c=(max_ab>c)?max_ab:c;
   printf("%d",max_c);
   return 0;
}
