#include<stdio.h>
#include <string.h>
#include<stdlib.h>
typedef struct _book
{
	char a[100];
	double i;
	char b[100];
} book;
int main()
{
	book Mybook;
	gets(Mybook.a); 
	 
	scanf("%lf",&Mybook.i);getchar();
	gets(Mybook.b);


 	printf("name is \"%s\", price is $%.2lf, press is \"%s\"",Mybook.a,Mybook.i,Mybook.b);
 
 	return 0;
 	
 }