#include <stdio.h>
#include <stdlib.h>
int main()
{  double a;
   int y;
   scanf("%lf",&a);
if(a<0)
   {   y=-1;
       printf("%d",y);
   }
if(a==0)
   {   y=0;
        printf("%d",y);
   }   
if(a>0)
   {   y=1;
       printf("%d",y);
   }
    return 0;
}