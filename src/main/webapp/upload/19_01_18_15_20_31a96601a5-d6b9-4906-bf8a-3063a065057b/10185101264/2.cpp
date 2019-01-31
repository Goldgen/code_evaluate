#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int x,p,n,i,t=0;

    scanf("%u %u %u",&x,&p,&n);
    for(i=0;i<=p;i++)
        t=t+pow(2,i);

    x=x&t;
    x=x>>(p-n+1);

    printf("%u",x);

    return 0;
}