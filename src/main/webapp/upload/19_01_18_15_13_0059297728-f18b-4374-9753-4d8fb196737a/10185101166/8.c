#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	if((a>=b&&a<=c)||(a>=c&&a<=b))
	d=a;
	else if((b>=a&&b<=c)||(b>=c&&b<=a))
	d=b;
	else
	d=c;
	printf("%d",d);
}