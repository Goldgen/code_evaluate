#include<stdio.h>
int main()
{
	int n,i,j,a[10][10]={};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=2;i<n;i++)
	{
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<n-1;i++)
	{
		printf("1");
		for(j=1;j<=i;j++)
		{
			printf(" %d",a[i][j]);
		}
    printf("\n");
	}
	printf("1");
	for(j=1;j<=i;j++)
        {
			printf(" %d",a[i][j]);
		}
	return 0;
}
