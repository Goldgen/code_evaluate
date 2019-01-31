#include <stdio.h>

void line(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if((i*n)/10==0)
			printf(" %d * %d =  %d",i,n,i*n);
		else
			printf(" %d * %d = %d",i,n,i*n);
	}
}

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		line(i);
		if(i==n)
			break;
		printf("\n");
	}
	return 0;
}