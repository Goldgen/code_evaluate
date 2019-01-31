#include<stdio.h>
int main(void)
{
	float money;
	while (scanf("%f", &money) != '\n') {
		printf("$%.2f", money);
		printf(" ");
	}
	printf("\b");
	return 0;
}