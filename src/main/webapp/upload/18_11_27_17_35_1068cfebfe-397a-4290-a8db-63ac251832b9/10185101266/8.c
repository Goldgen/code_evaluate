#include<stdio.h>
int main(void)
{
	int number, i, j, l;
	int data[100];
	scanf("%d", &number);
	for (i = 0; i < number; i++)
	{
		scanf("%d", &data[i]);
	}
	int k[100];
	l = 0;
	j = 1;
	for (i = 0; i < number-1; i++)
	{
		if (data[i] == data[i + 1])
			k[i] = 1;
		else
			k[i] = 0;
	}
	for (i = 0; i < number - 1; i++)
	{
		if (k[i] == 1)
		{
			j = j + k[i];
		}
		if (j > l) 
			l = j;
		if (k[i] == 0)
		{
			if (j > l) {
				l = j;
			}
			j = 1;
		}
	}
	printf("%d", l);
	return 0;
}