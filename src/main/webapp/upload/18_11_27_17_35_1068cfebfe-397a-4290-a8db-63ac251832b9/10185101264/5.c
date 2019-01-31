#include <stdio.h>
int main()
{
	int n, i, j, temp;
	scanf("%d", &n);
	int num[n];
	for(i = 0; i < n; i++)
		scanf("%d", &num[i]);
	scanf("%d %d", &j, &temp);
	for(int k = 0; k < n; k++)
	{
		if(k == j)
			printf("%d ", temp);
		if(k == n - 1)
			printf("%d", num[k]);
		else
			printf("%d ", num[k]);
	}
	if(j == n)
		printf(" %d", temp);
}
