#include <stdio.h>
int main()
{
	float n, count = 0, sum = 0;

	while(scanf("%f", &n) && n != -1)
	{
		count++;
		sum += n;
		n = sum / count;
		printf("%.2f\n", n);
	}
}