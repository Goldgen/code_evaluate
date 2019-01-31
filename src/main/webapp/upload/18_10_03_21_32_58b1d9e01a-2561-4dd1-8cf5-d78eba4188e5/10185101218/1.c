#include<stdio.h>
#include<math.h>
int main(void)
{
    int d,p,m;
    float r;
    scanf("%d%d%f",&d,&p,&r);
	r=r/100;
    m=log(p/(p-d*r))/log(1+r)+0.5;
    printf("%d",m);
    return 0;
}
