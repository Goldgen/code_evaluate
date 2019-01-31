#include<stdio.h>
int main()
{
	int a,b,c=2;
	scanf ("%d %d",&a,&b);
	if (a>b)
	{
		c=b;
	}
	else
	{
		c=a;
	}
	for (;c;c--)
	{
		if (a%c==0&&b%c==0)
		{
			if (a%c==0&&b%c==0)
			{
				printf ("最大公约数是: %d",c);
			}
			break;
		}
	}
}