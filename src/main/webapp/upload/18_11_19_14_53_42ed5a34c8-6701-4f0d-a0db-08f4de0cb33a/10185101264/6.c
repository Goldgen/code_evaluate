#include <stdio.h>
long long fibonacci(long long n)
{
	if(n == 1 || n == 2)
		return 1;
	else if(n == 0)
		return 0;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%lld", fibonacci(n));
}