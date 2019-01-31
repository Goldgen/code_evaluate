#include <stdio.h>

int main()
{
    int x,y,z;//z为小鸡只数
    for (x=1;x<=14;x++)
    {
        for(y=1;y<=20;y++)
        {
            for(z=1;z<=100;z++)
            {
               if((z%3==0)&&(7*x+5*y+z/3==100)&&(x+y+z==100))
               printf("%d %d %d",x,y,z);
            }
        }

    }
    return 0;
}
