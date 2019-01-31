#include<stdio.h>
int main()
{
	int n,a,b;
	scanf ("%d",&n);
	for (a=1;a<=n;a+=2)
	{
		b=(n-a)/2;
		if (a==1)
		{
		    for (;b;b--)
		    {
			    printf (" ");
		    }
		    printf ("*");
		}
		else if (a<n)
		{
			printf ("\n");
		    for (;b;b--)
		    {
		    	printf (" ");
			}
			printf ("*");
			for (b=a-2;b;b--)
			{
				printf (" ");
			}
			printf ("*");
		}
		else 
		{
			printf ("\n");
			for (b=n;b;b--)
			{
				printf ("*"); 
			}
		}
	}
}