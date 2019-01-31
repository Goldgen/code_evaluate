#include <stdio.h>


int main()
{
    unsigned x=0,y=0;
    int p=0,n=0;
    scanf("%u\n%d\n%d",&x,&p,&n);

    y=(x>>(p+1-n)&~(~0<<n));
    printf("%u",y);


    return 0;
}