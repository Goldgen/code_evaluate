#include <stdio.h>
#include <math.h>

main()
{

    int d, p,m;
    float t,r;
    scanf("%d %d %f",&d,&p,&r);

    t=log(p/(p-d*r/100))/log(1+r/100);
    m=floor(t + 0.5);
    printf("%d",m);
}
