#include<stdio.h>
int fibonacci(unsigned int x);
int main()
{
	unsigned int n;
	scanf ("%u",&n);
	n=fibonacci(n);
	printf ("%u",n);
}
int fibonacci(unsigned int x)
{
	int a;
	if (x==0)
	a=0;
	else if (x==1||x==2)
	a=1;
	else
	a=fibonacci(x-1)+fibonacci(x-2);
	return a;
}