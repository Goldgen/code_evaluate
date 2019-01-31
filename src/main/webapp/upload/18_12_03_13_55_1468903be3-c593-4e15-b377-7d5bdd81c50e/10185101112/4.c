#include <stdio.h>
#include <string.h>

int main(){
	int m,n;
	scanf("%d %d\n",&m,&n);
	int max=(m>n)?m:n;
	int num[max][max];
	int temp;
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}

	for (int i=0;i<max;i++)
	{
		for (int j=0;j<i;j++)
		{
			temp=num[i][j];
			num[i][j]=num[j][i];
			num[j][i]=temp;
		}
	}

	for (int i=0;i<n;i++)
	{
		printf("%d",num[i][0]);
		for (int j=1;j<m;j++)
		{
			printf(" %d",num[i][j]);
		}
		putchar('\n');
	}
	return 0;
} 