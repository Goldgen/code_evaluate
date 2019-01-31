#include <stdio.h>
#include <math.h>

int main(void)
{
    int d = 0;
    int p = 0;
    int r = 0;
    double m = 0;


    scanf("%d %d %d",&d,&p,&r);

    m=log(p/(p-d*(double)r/100))/log(1+(double)r/100);

    printf("%d",(int)(m+0.5));


    return 0;
}