#include <stdio.h>
#include <stdlib.h>
typedef struct book book;

struct book
    {
        char str[100];
        char price[50];
        char pub[40];
    };

int main()
{
    book my_book;

    gets(my_book.str);
    gets(my_book.price);
    gets(my_book.pub);



    printf("name is \"%s\", price is $%s, press is \"%s\"",my_book.str,my_book.price,my_book.pub);

    return 0;
}
