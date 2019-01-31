
#include <stdio.h>
int main(void)
{
   int a,b,c,d;
   scanf("%d %d %d %d",&a,&b,&c,&d);
   if(a>=b&&a>=c&&a>=d)
   printf("%d",a);
   else if(b>=d&&b>=c)
   printf("%d",b);
   else if(c>=d)
   printf("%d",c);
   else
    printf("%d",d);
    return 0;
}
