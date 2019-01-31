#include<stdio.h>
int main()
{
	int a,i,j;
	scanf("%d",&a);
	for(i=1;i<=(a-1)/2;i++){
		
		printf(" ");
	}
	printf("*\n");
	for(i=1;i<(a+1)/2-1;i++)
	{
		for(j=1;j<(a+1)/2-i;j++)
		{printf(" ");
		}
		printf("*");
		for(j=0;j<2*i-1;j++)
		{printf(" ");
		}
		printf("*\n");
	}
	for(i=0;i<a;i++){
		printf("*");
	}
	return 0;

}