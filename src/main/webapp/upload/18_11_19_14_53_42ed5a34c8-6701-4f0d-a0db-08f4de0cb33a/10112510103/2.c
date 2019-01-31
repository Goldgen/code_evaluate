#include <stdio.h>

int sum(int n)
{
	if (n / 10 == 0)
		return n;
	return sum(n / 10) + n % 10;
}

int main(void)
{
	int n;

	while (scanf("%d", &n)!=EOF)
	{
		printf("%d\n", sum(n));
	}

	return 0;
}
