#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
   int s,x,y,z,i;
   s=100;i=0;
   while (s<=999)
   { x=s%10;
   y=((s-x)/10)%10;
     z=(s-x-10*y)/100;
     if (s==x*x*x+y*y*y+z*z*z)
        {++i;
        if (i==1)
        printf("%d",s);
        else
        printf(" %d",s);}
    ++s;}

   return 0;
}
