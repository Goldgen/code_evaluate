#include<stdio.h>

int main()
{
	int a,b,c,d,e,f,x,y;
	scanf("%d",&a);
	for(x=1;x<=(a-1)/2;x++) printf(" ");
	printf("*");
	printf("\n");
	for(b=1;b<=(a-3)/2;b++)
	{
	for(c=b;c<=(a-3)/2;c++) {printf(" ");}
	printf("*");
	for(d=1;d<=2*b-1;d++) {printf(" ");}
	printf("*");
	printf("\n");
	}
	for(f=1;f<=a;f++) printf("*");
	return 0; 
}
 