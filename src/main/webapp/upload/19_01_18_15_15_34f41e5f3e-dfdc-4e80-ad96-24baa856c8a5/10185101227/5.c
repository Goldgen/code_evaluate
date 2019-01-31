#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
   int s,h,x,y;
   x=1;s=0;
   while (x<=99)
   {s=s+x;
   x+=2;}
   printf("%d ",s);
   y=2;h=0;
   while (y<=100)
   {h=h+y;
   y+=2;}
   printf("%d",h);
    return 0;
}
