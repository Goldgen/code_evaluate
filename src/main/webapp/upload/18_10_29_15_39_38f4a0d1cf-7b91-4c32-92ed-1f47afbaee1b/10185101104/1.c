#include <stdio.h>

int main()
{
    int x,y,z;
    for(x=1;x<15;x++)
    {

        for(y=1;y<20;y++)
        {
            for(z=1;z<100;z++)
            {
                if(7*x+5*y+z==100&&x+y+3*z==100)
                    printf("%d %d %d",x,y,3*z);
            }
        }
    }
    return 0;
}