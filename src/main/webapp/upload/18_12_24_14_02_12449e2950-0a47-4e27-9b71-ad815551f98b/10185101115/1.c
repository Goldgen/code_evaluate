#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[91];
	double price;
	char press[31];
}Book;

int main()
{
	
    char* name;
    name=(char*)malloc(91*sizeof(char));
    char* press;
    press=(char*)malloc(31*sizeof(char));
    double* price;
    price=(double*)malloc(1*sizeof(double));

    Book book;
	gets(book.name);
	scanf("%lf\n",&book.price);
	gets(book.press);
	
	printf("name is \"%s\", price is $%.2lf, press is \"%s\"",book.name,book.price,book.press);	
	free(name);
	free(price);
	free(press);
	return 0;
 } 
 