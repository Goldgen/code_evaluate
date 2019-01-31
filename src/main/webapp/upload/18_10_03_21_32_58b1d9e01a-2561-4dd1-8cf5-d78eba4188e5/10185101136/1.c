#include <stdio.h>
#include <math.h>

int main()
{
    int p,d,r;
    double fr;

    scanf("%d%d%d",&d,&p,&r);
    fr=r/100.0;
    printf("%.0f",round(log(p/(p-d*fr))/log(1+fr)));
    return 0;
}
