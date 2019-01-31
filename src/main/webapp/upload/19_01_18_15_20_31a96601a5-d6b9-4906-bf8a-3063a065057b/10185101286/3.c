#include<stdio.h>
int main()
{
    unsigned long long int x,p,c,n;
    scanf("%llu %llu %llu",&x,&p,&n);
    c=~(~0<<n);
	c=c<<(p-n+1);
	x=x^c;
    printf("%llu",x);
    return 0;
}