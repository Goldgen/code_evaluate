#include <stdio.h>

int main()
{
	int n,m=1,i,j;
	scanf("%d",&n);
	printf("1\n");
	for(i=2;i<n;i++)
	{
		printf("1");
		for(j=1;j<i;j++)
		{
			m=m*(i-j)/j;
			printf(" %d",m);
		}
		printf("\n");
	}
	printf("1");
	for(j=1;j<n;j++)
	{
		m=m*(n-j)/j;
		printf(" %d",m);
	}
	return 0;
} 