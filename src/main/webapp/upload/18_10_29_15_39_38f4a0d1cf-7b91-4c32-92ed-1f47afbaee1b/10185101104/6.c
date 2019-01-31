#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	if(a==b)
		c=a;
	else 
	{
		if(a<b) 
		{
			d=a;
			a=b;
			b=d;
		}
		c=a-b;
		if(a%c!=0||b%c!=0)
		{
			d=b;
			b=c;
			c=d%c;
		}
		while(b%c!=0)
		{
			d=b;
			b=c;
			c=d%c;
		}
	} 
	printf("最大公约数是: %d",c);
	return 0;
}
