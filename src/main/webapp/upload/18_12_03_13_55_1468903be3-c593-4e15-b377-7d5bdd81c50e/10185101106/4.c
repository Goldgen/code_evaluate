#include<stdio.h>
int sh1[100][100];
int main()
{
	int m,n;
	scanf("%d %d",&n,&m);
	
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		scanf("%d",&sh1[j][i]);
		}
	}

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		printf("%d",sh1[i][j]);
		if(j!=n-1)
		printf(" ");
		}
		if(i!=m-1)
		printf("\n");
	}
	return 0;
	
 } 