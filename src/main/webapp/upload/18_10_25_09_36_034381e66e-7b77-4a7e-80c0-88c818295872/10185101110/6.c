#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	printf("*\n");
	for(b=1;b<a-1;b++){
		printf("*");
		for(c=0;c<b-1;c++)
		{printf(" ");
		}
		printf("*\n");
		
	}
	for(b=0;b<a;b++){printf("*");
	}
	return 0;
}
	