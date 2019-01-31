#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;
	scanf("%f %f",&a,&b);
	if(a>b);
	{
		c=a-b;
	}
	if(a<=b);
	{
		c=b-a;
	}
	d=sqrt(c);
	printf("%0.8f %0.8f% 0.3f",a,b,d);
	return 0;
 }
