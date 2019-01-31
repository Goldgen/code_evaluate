#include<stdio.h>
int main()
{
	float b=100,sum=0;
	for(int a=0;a<10;a++)
	{sum=sum+b;
	b=b*0.5;}
	printf("%.3f %.3f",2*sum-100,b);
	return 0;
}