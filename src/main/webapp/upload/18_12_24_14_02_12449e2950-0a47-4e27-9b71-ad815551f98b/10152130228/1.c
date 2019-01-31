#include <stdio.h>
#include <stdlib.h>

struct book{
    char title[99];
    float price;
    char public[33];
};

int main()
{
    struct book book1;
    gets(book1.title);
    scanf("%f", &book1.price);
    getchar();
    gets(book1.public);

    printf("name is \"%s\", price is $%.2f, press is \"%s\"", book1.title, book1.price, book1.public);
    return 0;
}
