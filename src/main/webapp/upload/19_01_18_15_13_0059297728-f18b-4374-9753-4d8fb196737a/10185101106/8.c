#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b&&b>=c)
	d=b;
	if(a<=b&&b<=c)
	d=b;
	if(c>=a&&a>=b)
	d=a;
	if(c<=a&&a<=b)
	d=a;
	if(a<=c&&c<=b)
	d=c;
	if(a>=c&&c>=b)
	d=c;
	printf("%d",d);
	return 0;
	
 } 