#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		printf("*");
	}
	printf("\n");
	
	for(int i=n-2;i>=1;i--)
	{
		printf("*");
		for(int i=n-2;i>=1;i--)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for(int i=n;i>=1;i--)
	{
		printf("*");
	}
	return 0;
}