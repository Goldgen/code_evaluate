#include<stdio.h>
	
int main()
{	
	int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<i+1;j++)
		{	
			if(i==j)a[i][j]=1;
			else if(j==0)a[i][j]=1;
			else a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	for(i=0;i<n;i++)
		for(j=0;j<i+1;j++)
		{
			if(j<i) printf("%d ",a[i][j]);
			else printf("%d",a[i][j]);
			if(i<n-1&&j==i) printf("\n");
		}
	return 0;
}
	