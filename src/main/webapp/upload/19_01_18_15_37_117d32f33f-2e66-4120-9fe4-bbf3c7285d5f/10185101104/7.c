#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	c=c>d?c:d;
	b=b>c?b:c;
	a=a>b?a:b;
	printf("%d",a);
	return 0;
}