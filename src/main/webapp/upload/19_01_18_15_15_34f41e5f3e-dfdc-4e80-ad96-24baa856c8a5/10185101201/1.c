#include<stdio.h>
int main()
{
    int x, y, z;
        for(x=1;x<=14;x++)
            for (y = 1; y <= 20; y++)
                {
                    z = 100 - x - y;
                    if(z%3==0 && 7 * x + 5 * y + (100 - x - y) / 3 == 100)
                    printf("%d %d %d",x,y,z);
                }
}