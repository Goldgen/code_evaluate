#include<stdio.h>
#include<math.h>
#define N 100
int main (void)
{
     int x,y,z;
     for(x=1;x<15;x++)
        for(y=1;y<20;y++)
        for(z=3;z<98;z+=3)
     {
         if(x+y+z==100&&7*x+5*y+z/3==100)
            printf("%d %d %d",x,y,z);
     }

    return 0;
}