#include<stdio.h>
int main(void)
{
	int number, i, j;
	int a[100];
	scanf("%d", &number);
	for (i = 0; i < number; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < number-1; i++)
	{
		if (a[i] > a[i + 1])
		{
			j = a[i];
			a[i] = a[i + 1];
			a[i + 1] = j;
			i = -1;
		}
	}
	for (i = 0; i < number-1; i++)
	{
		printf("%d ", a[i]);
	}
	printf("%d", a[number - 1]);
	return 0;
}