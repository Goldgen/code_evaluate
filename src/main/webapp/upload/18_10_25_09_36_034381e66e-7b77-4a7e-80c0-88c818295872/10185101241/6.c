#include<stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	printf("*\n**\n");
	for(b=1;b<=a-3;b++)
	{
		printf("*");
		for(c=1;c<=b;c++)
		{
			printf(" ");
		}
		printf("*\n");
		}
	for(d=1;d<=a;d++)
	printf("*");
	return 0;
}