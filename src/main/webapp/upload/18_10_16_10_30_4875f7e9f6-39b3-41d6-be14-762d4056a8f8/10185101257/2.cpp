#include<stdio.h>
int main()
{
    unsigned int x,p,n;
    unsigned int r=1;
    scanf("%u %u %u",&x,&p,&n);
    x=x>>p-n+1;
    for(int i=0;i<n;++i)
        r=r*2;
    x=x&(r-1);
    printf("%u",x);
    return 0;
}

