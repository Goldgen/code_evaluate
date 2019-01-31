#include <stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	int num[n], t, flag = 0;
	for(i = 0; i < n; i++)
		scanf("%d", &num[i]);
	scanf("%d", &t);
	for(i = 0; i < n; i++)
		if(num[i] == t)
		{
			flag++;
			break;
		}

	if(flag)
	{
		if(i == n - 1)
		{
			for(j = 0; j < n - 2; j++)
				printf("%d ", num[j]);
			printf("%d", num[j]);
		}
		else
		    for(int j = 0; j < n; j++)
		    {
			    if(j == i)
				    continue;
			    if(j == n - 1)
				    printf("%d", num[j]);
			    else
			        printf("%d ", num[j]);
		    }
	}
	else
		printf("ERROR");
}