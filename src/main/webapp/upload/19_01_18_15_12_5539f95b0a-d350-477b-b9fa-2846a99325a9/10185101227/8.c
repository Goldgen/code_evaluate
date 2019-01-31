#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{

   int a,b,c,x,y,middle;
   scanf("%d%d%d",&a,&b,&c);
   if (a!=b&&b!=c&&a!=c)
     {
    if(a>b)
        x=a,y=b;
    else
        x=b,y=a;
    if (y>c)
        middle=y;
    else
   {
    if (x<c)
        middle=x;
    else
       middle=c;
   }
     }
    if (a==b)
       middle=a;
    if  (c==b)
       middle=b;
    if  (c==a)
        middle=c;
        printf("%d",middle);
   return 0;

}
