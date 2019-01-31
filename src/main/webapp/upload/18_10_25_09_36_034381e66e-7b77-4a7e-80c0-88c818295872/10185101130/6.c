#include<stdio.h>

int main(void)
{
	int i=0;
	int a=0;
	int j=0; 
	scanf("%d",&a);
	printf("*");
	printf("\n**");
	while(i<a-3){
		++i;
		printf("\n*");
		j=0;
		while(j<i){
			++j;
			printf(" ");
		}
		printf("*");
	}
	printf("\n");
	i=0;
	while(i<=a-1){
		++i;
		printf("*");
	}
	return 0;
	
		
 } 