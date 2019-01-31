#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	double a,b,c,c1,x,y,z;
	scanf("%lf+%lf=%lf",&a,&b,&c);
	c1=a+b;
	if( c == c1)
	{
		printf("%d",i);
	}
	else 
	{
		for(i = 1;i < 9;i++)
		{
			x = pow(10,i);
			y = a*x;
			z = y+b;
			if(z==c)
			{
				printf("%d",i);
				return 0;
			}
		}
		for(i = 1;i < 9;i++)
		{
			x = pow(10,i);
			y = b*x;
			z = a+y;
			if(z==c)
			{
				printf("-%d",i);
				break;
			}
		}
	}
	return 0;
}
