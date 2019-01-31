#include <stdio.h>
int main()
{
	int n, i, t, j = 0, flag = 0;
	scanf("%d", &n);
	int num1[n], num2[n];
	for(i = 0; i < n; i++)
		scanf("%d", &num1[i]);
	scanf("%d", &t);
	for(i = 0; i < n; i++)
		if(num1[i] == t)
		{
			num2[j] = i;
			j++;
			flag = 1;
		}
	if(flag)
	{
		for(int k = 0; k < j - 1; k++)
			printf("%d ", num2[k]);
		printf("%d", num2[j - 1]);
	}
	else
		printf("ERROR");
}