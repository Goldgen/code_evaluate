#include<stdio.h>
int main()
{
	int n,a,m;
	scanf ("%d",&n);
	a=n;
	m=n;
	for (;n;n--)
	{
        printf ("*");
	}
	n=a-1;
	for (;n>1;n--)
	{
		printf ("\n");
		for (;m;m--)
		{
		    if (m==1||m==a)
		    {
			    printf ("*");
		    }
		    else 
		    printf (" ");
        }
		m=a;
	}
	printf ("\n");
	for (;a;a--)
	{
        printf ("*");
	}
}