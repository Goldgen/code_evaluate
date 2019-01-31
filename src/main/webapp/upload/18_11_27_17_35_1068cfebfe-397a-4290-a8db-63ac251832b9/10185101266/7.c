#include<stdio.h>
int main(void)
{
	int number, i, j=0, l;
	int data[100];
	scanf("%d", &number);
	for (i = 0; i < number; i++)
	{
		scanf("%d", &data[i]);
	}
	scanf("%d", &l);
	for (i = 0; i < number; i++)
	{
		if (data[i] == l)
			printf("%d ", i);
	}
	for (i = 0; i < number; i++)
	{
		if (data[i] == l) {
			j = 1;
			break;
		}
	}
	if (j != 1)
		printf("ERROR");
	return 0;
}