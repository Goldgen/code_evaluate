#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,z;
   int mu,chu;
   for (x=0;x<10;x++){
   y=(100-10*x)%7;
   z=(3*x+600)%7;
   if (y==0&&z==0){
        mu=(100-10*x)/7;
        chu=(3*x+600)/7;
        printf("%d %d %d",x,mu,chu);

   }

   }


    return 0;
}
