#include<stdio.h>

int fibonacci(int a)
{
	int m = 0;
	if(a == 1 || a == 2)
	{
		return 1;
	}
	if(a > 2)
	{
		m = fibonacci(a - 1) + fibonacci(a - 2);
	}
	return m;
}


int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fibonacci(n));
}