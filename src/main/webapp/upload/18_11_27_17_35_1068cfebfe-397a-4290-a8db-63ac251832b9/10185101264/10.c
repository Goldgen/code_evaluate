#include <stdio.h>
int swap(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int i, j, n;
	scanf("%d", &n);
	int num[n];

	for(i = 0; i < n; i++)
		scanf("%d", &num[i]);

	for(i = 0; i < n - 1; i++)
		for(j = 0; j < n - i - 1; j++)
			if(num[j] > num[j + 1])
			    swap(&num[j], &num[j + 1]);

	for(i = 0; i < n - 1; i++)
		printf("%d ", num[i]);
	printf("%d", num[n - 1]);
}