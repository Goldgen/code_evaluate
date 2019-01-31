#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	typedef struct
	{
		char name[100];
		double price;
		char press[40];
	}Book_i;
	Book_i book; 
	gets(book.name);
	scanf("%lf",&book.price);
	getchar();
	gets(book.press);
	printf("name is \"%s\", price is $%.2lf, press is \"%s\"",book.name,book.price,book.press);
	return 0;
}
