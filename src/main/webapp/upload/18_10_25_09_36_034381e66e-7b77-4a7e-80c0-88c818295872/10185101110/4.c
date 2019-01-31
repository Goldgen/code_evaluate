#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	for(b=0;b<a;b++){
		printf("*");
	}
	for(b=0;b<a-2;b++){
	
	printf("\n*");
	for(c=0;c<a-2;c++){
		printf(" ");
	}
	printf("*");}
	printf("\n");
	for(b=0;b<a;b++){
		printf("*");
	}
	return 0;
}
	