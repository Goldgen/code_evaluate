#include <stdio.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<(n-1)/2;i++)
	{
		for(j=0;j<=(n-1)/2+i;j++)
		{
			if(j==(n-1)/2+i||j==(n-1)/2-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
		printf("*");
	return 0;
} 