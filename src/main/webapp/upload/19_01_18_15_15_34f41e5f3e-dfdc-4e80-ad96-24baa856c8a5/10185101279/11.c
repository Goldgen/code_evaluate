
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
   int i,x,y,z;
   for(i=100;i<=999;i++)
   {
       z=i%10;
       y=(i%100-z)/10;
       x=(i-10*y-z)/100;
       if((i==x*x*x+y*y*y+z*z*z)&&i<407)
        printf("%d ",i);
        if(i==407)
            printf("%d",i);
   }
  return 0;
}
































