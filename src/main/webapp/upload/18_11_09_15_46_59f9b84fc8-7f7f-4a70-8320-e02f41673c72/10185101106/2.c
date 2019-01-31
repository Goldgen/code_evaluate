#include <stdio.h>
int main()
{
	double a = 2;
	double b = 1;
	double c = 0;
	int cnt = 0;
	double sum = 0;
	while(cnt < 50)
	{
		sum += 1.0*a/b;
		c = a + b;
		b = a;
		a = c;
		cnt++;
	}
	printf("%.2f",sum);
}