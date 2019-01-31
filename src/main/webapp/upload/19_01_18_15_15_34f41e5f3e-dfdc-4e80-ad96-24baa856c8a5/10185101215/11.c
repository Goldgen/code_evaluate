#include<stdio.h>
#include<math.h>
int main (void)
{
   int i=0,x,y,z;
   for(x=1;x<10;x++)
   for(y=0;y<10;y++)
   for(z=0;z<10;z++)
   {
       if(100*x+10*y+z==x*x*x+y*y*y+z*z*z)
         {
             i++;
             if(i==1)
                printf("%d ",100*x+10*y+z);
             if(i==2)
                printf("%d ",100*x+10*y+z);
                if(i==3)
                printf("%d ",100*x+10*y+z);
                if(i==4)
                printf("%d",100*x+10*y+z);



         }
   }

    return 0;
}