#include<stdio.h>

int main(void)
{
	int a=0;
	scanf("%d",&a);
	int i=0;
	int j=0;
	while(i<a){
		++i;
		printf("*");
	}
	while(j<a-2){
		++j;
		printf("\n*");
		i=0;
		while(i<a-2){
			++i;
			printf(" ");
		}
		printf("*");
		
	}
	printf("\n");
	i=0;
	while(i<a){
		++i;
		printf("*");
	}
	return 0;
	
}