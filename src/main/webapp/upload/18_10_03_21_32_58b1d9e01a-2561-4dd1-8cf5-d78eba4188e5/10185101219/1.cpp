#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int d;
    int p;
    int r;
    int M;
    float m;
    float R;
    scanf("%d %d %d",&d,&p,&r);
    R=(float)r/100;
    m=log(p/(p-d*R))/log(1+R);
    M=ceil(m);
    printf("%d",M);
    return 0;
}

