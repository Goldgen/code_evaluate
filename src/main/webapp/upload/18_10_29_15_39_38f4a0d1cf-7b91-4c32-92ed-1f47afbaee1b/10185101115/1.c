#include <stdio.h>
#include <stdlib.h>

int main()
{
for (int x=1;x<=13;x++)
{
    for(int y=1;y<=18;y++)
    {
        for(int z=3;z<98;z+=3)
        {
        if((7*x+5*y+1.0/3.0*z==100)&&(x+y+z==100))
        {
            printf("%d %d %d",x,y,z);
            break;
        }
        else if((7*x+5*y+1.0/3.0*z>100)||(x+y+z>100))
            break ;
        }
        if(x+y+0>100)
        {
            break ;
        }
    }
}
    return 0;
}