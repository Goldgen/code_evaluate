#include <stdio.h>
#include <math.h>
int main()
{
    double height=100,s=0;
    int i=0;
    for(;i<10;i++)
    {
        s+=height*1.5;
        height=height/2;
    }
    printf("%.3lf %.3lf",s-height,height);
    return 0;
}
