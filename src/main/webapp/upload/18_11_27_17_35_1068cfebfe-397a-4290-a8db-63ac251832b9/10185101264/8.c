#include <stdio.h>
int main()
{
	int n, i, j = 1;
	scanf("%d", &n);
	int num[n], temp = 1;
	for(i = 0; i < n; i++)
		scanf("%d", &num[i]);
	for(i = 1; i < n; i++)
	{
		if(num[i] == num[i - 1])
			j++;
		else
		{
			if(j > temp)
				temp = j;
			j = 1;
		}
	}
	if(j > temp)
		temp = j;
	printf("%d", temp);
}
