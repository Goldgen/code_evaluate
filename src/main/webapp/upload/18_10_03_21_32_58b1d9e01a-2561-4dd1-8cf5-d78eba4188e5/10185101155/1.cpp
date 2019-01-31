#include <stdio.h>
#include <math.h>
int main(void)
{
    int d, p, r;
    double m;
    d = 0;
    p = 0;
    r = 0;
    scanf("%d %d %d", &d, &p, &r);
    m=log(p/(p-d*(double)r/100))/log(1+(double)r/100);
    printf("%d",(int)(m+0.5));
    return 0;

}