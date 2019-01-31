#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	int num[m][n];

	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&num[i][j]);
	for(i=0;i<n;i++)
	{
		printf("%d",num[0][i]);
		for(j=1;j<m;j++)
			printf(" %d",num[j][i]);
		printf("\n");
	}

}