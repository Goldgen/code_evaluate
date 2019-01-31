#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    for(x=1;x<14;x++)
    {
        for(y=1;y<=(99-7*x)/5;y++)
        {
            z=(100-7*x-5*y)*3;
            if(x+y+z==100)
                printf("%d %d %d",x,y,z);
        }
    }
    return 0;
}
