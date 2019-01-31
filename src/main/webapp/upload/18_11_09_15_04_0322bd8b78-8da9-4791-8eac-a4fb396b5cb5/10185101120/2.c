#include<stdio.h>
int main()
{
	int n,i=0,v,a,b;
	scanf ("%d",&n);
	for (a=1;a<=n;a++)
	{
		v=2*(n-a);
	    for (i=0;i<v;i++)
	    {
		    printf (" ");
	    }
	    for (b=1;b<=a;b++)
	    {
	    	printf ("%d",b);
	    	if (b<a)
	    	{
	    		printf ("+");
			}
		}
		printf ("=");
		while(b--)
		{
			if (b>0)
			{
			    printf ("%d",b);
			}
			if (b>1)
			{
				printf ("+");
			}
		}
		if (a<n)
		{
			printf ("\n");
		}
	}
}