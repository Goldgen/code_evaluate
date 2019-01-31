#include<stdio.h>
#include<string.h>
int main()
{
    int m,n;
    scanf("%d",&n);
    for(m=1;m<=n;m++)
		printf("*");
    for(m=1;m<=(n-2);m++)
	{
		printf("\n*");
		for(int j=1;j<=(n-2);j++)
			printf(" ");
		printf("*");
	}
    printf("\n");
    for(m=1;m<=n;m++)
		printf("*");

   return 0;
}
