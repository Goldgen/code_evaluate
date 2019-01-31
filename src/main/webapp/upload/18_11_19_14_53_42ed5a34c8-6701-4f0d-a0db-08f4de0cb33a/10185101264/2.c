#include <stdio.h>

int sum = 0;
int sums(int n)
{
	int t = n % 10;
	sum += t;
	n /= 10;
	if(n != 0)
		sums(n);
	return sum;
}
int main()
{
	int n;
	scanf("%d", &n);
	n = sums(n);
	printf("%d", n);
}