#include <stdio.h>

int main()
{
	int n,a=1,i,j;
	scanf("%d",&n);
	printf("1\n");
	for(i=2;i<n;i++)
	{
		printf("1");
		for(j=1;j<i;j++)
		{
			a=a*i/j-a;
			printf(" %d",a);
		}
		printf("\n");
	}printf("1");for(j=1;j<n;j++)
		{
			a=a*n/j-a;
			printf(" %d",a);
		}
	
		

	
	return 0;
} 