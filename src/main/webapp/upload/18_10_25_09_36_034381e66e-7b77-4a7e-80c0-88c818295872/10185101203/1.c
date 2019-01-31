#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height=100,b=0;
    float total=100;
    for(int count=1;count<=10;++count)
    {
        total=total+2*b;
        height=0.5*height;
        b=height;

    }
    printf("%.3f %.3f",total,height);
    return 0;
}