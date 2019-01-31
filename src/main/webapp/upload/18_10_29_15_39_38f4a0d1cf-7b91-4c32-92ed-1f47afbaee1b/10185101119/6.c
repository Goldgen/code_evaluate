#include <stdio.h>
int main()
{
	int a,b,c=0,d=0,n=0;
	scanf("%d%d",&a,&b);
	if(a==b)
	n=a;
	else
	{do
	{
		if(a<b)
		{
			d=a;
			a=b;
			b=d;
		}
		n=a-b;
		a=n;
		c=n-b;
	}while(c!=0);
	}
	printf("最大公约数是: %d",n);
	return 0;
}