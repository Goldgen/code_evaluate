#include <stdio.h>
int fibonacci(int n)
{
	static int str[50];
	if(n == 0)
		str[n] = 0;
	else if(n == 1) 
		str[n] = 1;
	else
		str[n] = fibonacci(n-1)+str[n-2];
	return str[n];
}
int main()
{
	int m;
	scanf("%d",&m);
		printf("%d",fibonacci(m));
	return 0;
}
