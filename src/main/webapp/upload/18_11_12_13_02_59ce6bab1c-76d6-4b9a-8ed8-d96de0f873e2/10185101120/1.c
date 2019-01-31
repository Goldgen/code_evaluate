#include<stdio.h>
int main()
{
	void cfkjb(int x);
	int n;
	scanf ("%d",&n);
	cfkjb (n);
}
void cfkjb (int x)
{
	int i,v=1;
	for (i=1;i<=x;++i)
	{
		for (v=1;v<=i;v++)
		{
		    printf (" %d * %d = %2d",v,i,i*v);
		}
        if (i<x)
        {
            printf ("\n");
    	}
	}
}