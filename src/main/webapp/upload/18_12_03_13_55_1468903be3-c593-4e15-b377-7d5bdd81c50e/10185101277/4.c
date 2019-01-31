#include<stdio.h>
#include<string.h>

int i,j;
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int str[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&str[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(j==0){
				printf("%d",str[j][i]);
			}
			else{
				printf(" %d",str[j][i]);
			}
		}
		printf("\n");
	}
	return 0;
}