#include <stdio.h>
int main()
{
	int a,b,m,n,c;
	scanf("%d %d",&a,&b);
	if(a>b)
    {
        m=a;
        n=b;
    }
    else
    {
        m=b;
        n=a;
    }
    while(n!=0)
    {
        c=m%n;
        m=n;
        n=c;
    }   
    printf("最大公约数是: %d",m);
}