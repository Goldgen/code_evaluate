#include<stdio.h>
int main()
{
	int a=100,b,c,d;
	printf ("%d",153);
	for (;a<1000;a++)
	{
		b=a%10;
		c=(a/10)%10;
		d=a/100;
		if (a==b*b*b+c*c*c+d*d*d)
		{
			if (a!=153)
			{
			    printf (" %d",a);
		    }
		}
	}
}