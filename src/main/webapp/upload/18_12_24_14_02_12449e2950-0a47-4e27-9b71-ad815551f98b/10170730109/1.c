#include <stdio.h>
struct Book{
    char name[91];
    double price;
    char publisher[31];
};

int main()
{
    struct Book book;
    struct Book* pbook;
    pbook=(struct Book*)malloc(sizeof(struct Book));
    gets(book.name);
    scanf("%lf\n",&book.price);
    gets(book.publisher);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",book.name,book.price,book.publisher);
	free(pbook);
    return 0;
}