#include <stdio.h>
#include <math.h>

int main(void)
{
   unsigned x,p,n,a;
   scanf("%u %u %u",&x,&p,&n);
    a=1;
    a<<=n;
    a-=1;
    a<<=p-n+1;
    x^=a;
    printf("%u",x);
    return 0;
}
