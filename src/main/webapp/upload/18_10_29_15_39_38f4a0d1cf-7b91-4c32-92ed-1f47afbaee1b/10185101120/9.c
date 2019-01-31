#include<stdio.h>
int main()
{
	int n,a=1;
	scanf("%d",&n);
	int m=n;
	int b[n][m];
	for (;a<=n;a++)
	{
		for (m=1;m<=a;m++)
		{
		    if (m==1)
		    {
			    b[a][m]=1;
			    printf ("%d",b[a][m]);
		    }
		    else if (m==a)
		    {
		    	b[a][m]=1;
		    	printf (" %d",b[a][m]);
			}
			else
		    {
			    b[a][m]=b[a-1][m-1]+b[a-1][m];
			    printf (" %d",b[a][m]);
		    }
	    }
	    if (a<n)
		printf ("\n");
	}
}