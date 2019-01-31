#include <stdio.h>
#include <math.h>

int main()
{
    int d=0;
    int p=0;
    float r=0;
    int R=0;
    int m=0;
    scanf("%d %d %d",&d,&p,&R);
    r = R*0.01;
    m=log(p/(p-d*r))/log(1+r)+0.5;
    printf("%d",m);
    return 0;
}