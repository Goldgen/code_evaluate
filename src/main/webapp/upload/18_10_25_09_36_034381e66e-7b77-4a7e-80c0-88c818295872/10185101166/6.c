#include<stdio.h>
int main()
{
	int i,n,j,a;
	scanf("%d",&n);
	printf("*\n**");
	for(i=1,a=1;i<=n-3;i++,a++)
	{
		printf("\n*");
		for(j=1,a;j<=a;j++)
		{
			printf(" ");
		}
		printf("*");
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
    	printf("*");
	}
}