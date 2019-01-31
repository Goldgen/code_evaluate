#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long d=0L;
    long p=0L;
    int r=0;
    int m=0;
    scanf("%d %d %d",&d,&p,&r);
    m=floor(log((float)p/(p-d*r/100))/log(1+(float)r/100)+0.5);
    printf("%d",m);
    return 0;
}