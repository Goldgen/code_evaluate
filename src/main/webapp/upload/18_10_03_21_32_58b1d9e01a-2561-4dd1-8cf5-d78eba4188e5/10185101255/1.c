#include <stdio.h>
#include <math.h>

int main()
{
    int d,p,r,m;
    scanf("%d %d %d",&d,&p,&r);
    double R;
    R=r*0.01;
    m=floor(log(p/(p-d*R))/log(1+R)+0.5);
    printf("%d",m);
    
    return 0;
    
}
