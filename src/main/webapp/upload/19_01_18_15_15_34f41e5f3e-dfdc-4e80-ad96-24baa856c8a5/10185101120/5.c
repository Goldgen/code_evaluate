#include<stdio.h>
int main()
{
	int a=0,b=0,c;
	for(c=1;c<=100;c++)
	{
		if (c%2==1)
		{
			a+=c;
		}
		if (c%2==0)
		{
		    b+=c;
		}
	}
	printf ("%d %d",a,b);
}