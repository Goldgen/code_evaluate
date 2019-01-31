#include <stdio.h>
int main()
{
    int i;
    double height=100,sum=100;
    for( i=1;i<=10;i++)
    {
        height=height*0.5;
        sum+=height*2;
    }

    printf("%.3lf %.3lf",sum,height);
    return 0;
}