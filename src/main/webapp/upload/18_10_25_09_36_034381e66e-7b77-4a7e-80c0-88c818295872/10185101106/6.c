#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("*\n");
	for(int i=2;i<n;i++)
	{printf("*");
	for(int k=0;k<i-2;k++)
	printf(" ");
	printf("*\n");}
	
	for(int i=0;i<n;i++)
	printf("*");
	

	return 0;
}