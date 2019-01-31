#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
			
		}
		
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{if(j==0)
			printf("%d",arr[j][i]);
			else
			printf(" %d",arr[j][i]);
			
		}
		if(i!=m-1)
		printf("\n");
	}


	return 0;
}