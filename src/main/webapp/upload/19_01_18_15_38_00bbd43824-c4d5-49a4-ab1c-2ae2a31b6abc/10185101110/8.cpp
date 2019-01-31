#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b)
	{
		d=a;
		a=b;
		b=d;
	}//b>=a
	if(b>=c)
	{
		if(a>c)
		printf("%d",a);
		if(a<=c)
		printf("%d",c);
	
	}
	else
	printf("%d",b);

	return 0;
 }