#include <stdio.h>

int main()
{
    int x,y,z;

    for (x=1;x<10;x++)
    {
        for (y=0;y<10;y++)
        {
         for (z=0;z<10;z++)
    {
        if ((100*x+10*y+z==x*x*x+y*y*y+z*z*z)&&(x!=1))
      printf(" %d%d%d",x,y,z);
      if ((100*x+10*y+z==x*x*x+y*y*y+z*z*z)&&(x==1))
        printf("%d%d%d",x,y,z);
    }
                }
    }
}