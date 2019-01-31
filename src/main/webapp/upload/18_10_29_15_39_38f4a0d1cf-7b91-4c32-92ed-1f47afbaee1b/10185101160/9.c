#include <stdio.h>
int main()
{
    int n,i,j;
	int x=1;
	scanf("%d",&n);
	printf("1");
	for (i=2;i<n+1;i++)
	{
		printf("\n1 ");
		for (j=2;j<i;j++)
		{
			x = x*(i-j+1) / (j-1);
			printf("%d ",x);
		}
		printf("1");
		x = 1;
	}
	return 0;
	}