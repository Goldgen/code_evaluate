#include <stdio.h>

int main()
{
    int x,y,z;//x雄鸡,y母鸡,z小鸡
    for (x=1;x<100/7;x++)
    {
        for (y=1;y<100/5;y++)
        {
            z=100-x-y;
            if ((7*x+5*y+z/3==100)&&(z%3==0))
            {printf("%d %d %d",x,y,z);}
        }
    }

}
