#include<stdio.h>
int main()
{
	int n,i,j,a,m;
	scanf("%d",&n);
	for(i=1;i<=(n-1)/2;i++)
	{
		printf(" ");
	}
	printf("*");
	for(i=1,a=1;i<=(n-3)/2;i++,a++)
	{
		printf("\n");
		for(j=1;j<=(n-1)/2-a;j++)
		{
			printf(" ");
			
		}
		printf("*");
		for(m=1;m<=2*a-1;m++)
		{
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
	for(i=1;i<=n;i++)
	printf("*");
}