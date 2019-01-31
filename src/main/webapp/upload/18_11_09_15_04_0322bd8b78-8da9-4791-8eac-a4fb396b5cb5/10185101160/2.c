#include <stdio.h>
int main()
{
	int i=0,j=0,n=0,m=0,x=0;
	scanf("%d",&n);
	x=2*n-1;
	for(j=1;j<x;j++)
		printf(" ");
	printf("1=1");
	for(i=2;i<=n;i++)
	{
		printf("\n");
		m=x-2*i+1;
		for(j=1;j<=m;j++)
			printf(" ");
		printf("1");
		for(j=2;j<=i;j++)
			printf("+%d",j);
		printf("=%d",i);
		for(j=1;j<i;j++)
			printf("+%d",i-j);						
	}
	return 0;
}
