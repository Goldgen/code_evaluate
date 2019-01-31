#include<stdio.h>
int main()
{
	int i,a=0,b=0;
	for(i=1;i<=100;i+=2)
	{
		a = a + i;
	}
	for(i=2;i<=100;i+=2)
	{
		b = b + i;
	}
	printf("%d %d",a,b);
}