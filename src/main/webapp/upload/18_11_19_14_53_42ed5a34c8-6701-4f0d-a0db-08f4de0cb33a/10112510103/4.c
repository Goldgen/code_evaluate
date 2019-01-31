#include <stdio.h>

void dec_to_bin(int n)
{
	int r;

	if (n == 0)
		return;
	r = n % 2;
	dec_to_bin(n / 2);
	printf("%d", r);
}

int main(void)
{
	int n;

	while (scanf("%d", &n)!=EOF)
	{
		if (n == 0)
			printf("0");
		dec_to_bin(n);
	}

	return 0;
}
