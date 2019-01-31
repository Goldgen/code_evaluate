#include<stdio.h>
int main()
{
	int n,a,b='A',c,d;
	scanf ("%d",&n);
	for (a=1;a<=n;a++)
	{
		for (c=0;c<n-a;c++)
		{
			printf (" ");
		}
		for (d=0;d<2*a-1;d++)
		{
			printf ("%c",b);
		}
		b++;
		printf ("\n");
	}
	for (a-=2;a>0;a--)
	{
		for (c=0;c<n-a;c++)
		{
			printf (" ");
		}
		for (d=0;d<2*a-1;d++)
		{
			printf ("%c",b);
		}
		b++;
		if (a>1)
		{
			printf ("\n");
		}
	}
}