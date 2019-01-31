#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    struct Book
{
char name[91];
double price;
char press[31];
}book1;

    struct Book *pr=(struct Book*)malloc(1*sizeof(struct Book));
    pr=&book1;
	book1.name[91]='\0';
	book1.press[31]='\0';
        gets(book1.name);
        scanf("%lf\n",&book1.price);
        gets(book1.press);
        printf("name is \"%s\", price is $%.2lf, press is \"%s\"",book1.name,book1.price,book1.press);
free(pr);
    return 0;
}
