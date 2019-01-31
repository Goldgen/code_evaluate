#include<stdio.h>
int main(void)
{
	int a,b,c,d,e;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
		e=a;
	else if(b>c&&b>d)
		e=b;
	else if(c>d)
		e=c;
	else
		e=d;
	printf("%d",e);
	return 0;
}