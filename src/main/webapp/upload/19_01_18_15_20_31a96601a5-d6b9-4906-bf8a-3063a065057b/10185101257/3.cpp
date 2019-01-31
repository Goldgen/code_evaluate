#include<stdio.h>
int main()
{
    unsigned int x,p,n,y,z;
    unsigned int r=1;
    scanf("%u %u %u",&x,&p,&n);
    y=x>>p-n+1;
    for(int i=0;i<n;++i)
        r=r*2;
    y=y&(r-1);
    z=r-1-y;
    x=x-(y<<p-n+1)+(z<<p-n+1);
    printf("%u",x);
    return 0;
}

