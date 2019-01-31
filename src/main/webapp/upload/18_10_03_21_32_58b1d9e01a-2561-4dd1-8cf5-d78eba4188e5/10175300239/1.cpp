#include <stdio.h>
#include <math.h>

int main()
{
    int d=0;
    int p=0;
    int a=0;
    float r=0.0f;
    int m=0;
    scanf("%d %d %d",&d,&p,&a);
    r=(float)a/100.0;
    m=(int)(log(p/(p-d*r))/log(1+r)+0.5);
    printf("%d",m);
    return 0;
}