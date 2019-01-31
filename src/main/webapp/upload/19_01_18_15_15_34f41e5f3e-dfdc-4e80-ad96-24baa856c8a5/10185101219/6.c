#include <stdio.h>
#include <stdlib.h>

int main()

{
  int a,b,c,d;
   scanf("%d %d",&a,&b);
   if(a>=b)
    c=b;
   else
    c=a;
   for(d=c;d<=c;--d)
    if(a%d==0&&b%d==0)
    break;
    printf("最大公约数是: %d",d);
    return 0;
}
