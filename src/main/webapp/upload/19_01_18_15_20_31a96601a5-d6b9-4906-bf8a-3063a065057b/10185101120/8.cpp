#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a<b)
	{
		if (b<=c)
		{
			printf ("%d",b);
		}
		else 
		{
			if (a>c)
			{
				printf ("%d",a);
			}
			else
			printf ("%d",c);
		}
	}
	if (a>b)
	{
		if (a>c)
		{
			if (c>b)
			{
				printf ("%d",c);
			}
			printf("%d",b);
		}
		else 
		{
			printf ("%d",a);
		}
	}
	if (a==b)
	{
		printf ("%d",b);
	}
	return 0;
}