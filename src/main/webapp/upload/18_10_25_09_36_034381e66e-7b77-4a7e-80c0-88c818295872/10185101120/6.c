#include<stdio.h>
int main()
{
	int n,a=2,b=1;
	scanf ("%d",&n);
	printf ("*");
	for (;a<n;a++)
	{
		printf ("\n");
		for (b=1;b<=a;b++)
		{
			if (b==1||a==b)
			{
				printf ("*");
			}
			else
			{
				printf (" ");
			}
		}
	}
	printf ("\n");
	for (;n;n--)
	{
		printf ("*");
	}
}