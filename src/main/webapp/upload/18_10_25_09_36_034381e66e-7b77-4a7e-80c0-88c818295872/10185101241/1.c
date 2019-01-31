#include<stdio.h> 

int main()
{
	int a=1;
	float b,c;
	b=100;
	c=100;
	for(a=1;a<10;a++)
	{
		b=b*0.5;
		c=c+b*2.0;
	}
	printf("%.3f %.3f",c,b*0.5);
	return 0;
}