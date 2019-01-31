#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char a[n][100];
	for(int i = 0;i < n;i++)
	{
		scanf("%s",a[i]);
	}
	int j = 0;
	int i;
	int m;
	for(i = 0;i < n;i++)
	{
		m = strlen(a[i]);
		for(j = 0;j < m;j++)
		{
			if(a[i][j] < 'Z')
			
			a[i][j] += 1;
			
			else
			
			a[i][j] = 'A';
		}
	}
	int k = 0;
	for(k = 0;k < n;k++)
	{
		printf("case #%d: %s",k,a[k]);
		if(k != n-1)
		
		printf("\n");
		
	}
	return 0;
}