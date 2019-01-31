#include<stdio.h>
int main()
{
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("*");
	}
    for(i=1;i<=n-2;i++)
    {
    	printf("\n*");
    	for(j=1;j<=n-2;j++)
    	{
    		printf(" ");
		}
		printf("*");
	}
	printf("\n");
	for(i=1;i<=n;i++)
    printf("*");
}