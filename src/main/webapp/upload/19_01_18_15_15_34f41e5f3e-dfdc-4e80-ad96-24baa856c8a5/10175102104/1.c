#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y,z,i;
    for(x=1;x<=100/7;x++)
    {
        for(y=1;y<=100/5;y++)
        {
            z=x*9+6*y;
            i=x+y+z;
            if(i==100)
            {
                printf("%d %d %d",x,y,z);
            }
        }
    }
    return 0;
}
