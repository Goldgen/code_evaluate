#include<stdio.h>
#include<math.h>
int main()
{
	int nextodd (int x);
	int lastodd (int y);
	int a=2,b=1000,n;
	scanf ("%d",&n);
	printf ("%d",n);
	for (;a<=n/2;a=nextodd(a))
	{
		for (b=1000;b>=n/2;b=lastodd(b))
		{
			if (a+b==n)
			{
				printf ("=%d+%d",a,b);
			}
		}
	}
}
int nextodd (int x)
{
	int b,c=2;
	b=x+1;
	for (;b;b+=1)
	{
		for (c=2;c<=sqrt(b);c++)
		{
			if (b%c==0)
			{
				break;
			}
		}
		if (c>sqrt(b))
		{
			break;
		}
	}
	return b;
}
int lastodd (int y)
{
	int b,c;
	b=y-1;
	for (;b;b-=1)
	{
		for (c=2;c<=sqrt(b);c++)
		{
			if (b%c==0)
			{
				break;
			}
		}
		if (c>sqrt(b))
		{
			break;
		}
	}
	return b;
}