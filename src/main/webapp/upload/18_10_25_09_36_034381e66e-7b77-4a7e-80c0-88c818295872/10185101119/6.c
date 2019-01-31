#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("*\n**\n");
    for(int i=3;i<n;i++)
    {
    	printf("*");
    	for(int s=i-2;s>=1;s--)
    	{
    		printf(" ");
		}
		printf("*\n");
	}
	for(int i=n;i>=1;i--)
	printf("*");
	return 0;
}