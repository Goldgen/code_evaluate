#include<stdio.h>

int m(int a)
{
	int p , q;
	p = a % 10;
	if(a==0)
	{
		return 0;
	}
	if(a != 0)
	{
		q = p + m(a / 10);
	}
	return q;
	
}

int main()
{
	int a , b;
	scanf("%d",&a);
	b = m(a);
	printf("%d",b);
}