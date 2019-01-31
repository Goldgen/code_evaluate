#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j <= i;j++)
		{
			printf("%2d *%2d = %2d",j,i,i*j);
		}
		if(i < n)
		printf("\n");
	}
}