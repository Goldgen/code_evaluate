#include<stdio.h>
int main(void)
{
	int number, i, j, k;
	scanf("%d", &number);
	int a[100] = { 0 };
	for (i = 0; i < number; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &j);
	scanf("%d", &k);
	for (i = number ; i > j; i--) {
		a[i] = a[i - 1];
	}
	a[j] = k;
	for (i = 0; i < number; i++) {
		printf("%d ", a[i]);
	}
	printf("%d", a[number]);
	return 0;
}