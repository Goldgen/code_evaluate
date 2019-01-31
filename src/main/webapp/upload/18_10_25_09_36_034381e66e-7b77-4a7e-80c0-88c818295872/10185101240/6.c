#include <stdio.h>
int main()
{
	int n,m,j,y,i;
	scanf("%d",&n);
	m=n-3;
	printf("*\n**");
	for(j = 1;j <= m;j++) 
    {
		printf("\n*");
		for(i= 1;i <= j;i++)
			printf(" ");
		printf("*");
	}
	printf("\n");
	for(y = 1;y <= n;++y)
		printf("*");
	return 0;
}
