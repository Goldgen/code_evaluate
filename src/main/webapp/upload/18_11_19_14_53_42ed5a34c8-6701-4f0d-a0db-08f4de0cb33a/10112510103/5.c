#include <stdio.h>

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	
	return gcd(b, a%b);
}

int main(void)
{
	int a, b;

	while (scanf("%d%d", &a, &b)!=EOF)
	{
		if (a < b)
		{
			int t = a;
			a = b;
			b = t;
		}

		printf("%d", gcd(a, b));
	}

	return 0;
}
