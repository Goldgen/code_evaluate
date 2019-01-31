#include<stdio.h>
struct book_t{
	char name[91];
	double price;
	char press[31]; 
};
int main()
{
	struct book_t book;
	struct book_t *p;
	p=&book;
	gets(book.name);
	scanf("%lf",&book.price);
	getchar();
	gets(book.press);
	printf("name is \"%s\", price is $%.2lf, press is \"%s\"",p->name,(*p).price,p->press);
}