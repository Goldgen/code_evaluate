#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct book1
    {
        char name[100];
        double price;
        char press[50];
    }book;
    gets(book.name);
    scanf("%lf",&book.price);
    getchar();
    gets(book.press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",book.name,book.price,book.press);
    return 0;
}
