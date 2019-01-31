#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=(n-1)/2;i>=1;i--)
    {
    	printf(" ");
	};
	printf("*\n");
	for(int i=1;i<=(n+1)/2-2;i++)
	{
		for(int s=(n-1)/2-i;s>=1;s--)
		printf(" ");
		printf("*");
		for(int m=2*i-1;m>=1;m--)
		printf(" ");
		printf("*\n");
	}
    for(int i=n;i>=1;i--)
	printf("*");
	return 0;
}