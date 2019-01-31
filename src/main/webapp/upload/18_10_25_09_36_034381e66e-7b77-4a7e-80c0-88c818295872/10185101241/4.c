#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
		for(b=1;b<=a;b++)
			printf("*");
		printf("\n");
		for(c=2;c<=a-1;c++)
		{	
			printf("*");
			for(e=2;e<=a-1;e++)
			{
			   printf(" ");
			}
			printf("*");
			printf("\n");
		}
		for(d=1;d<=a;d++)
			printf("*");
	return 0;
} 