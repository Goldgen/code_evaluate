#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Book
    {
        char name[1000];
        char p[100];
        char publish[1000];
    };

int main()
{
struct Book book;
    struct Book *p;
    p=(struct Book*)malloc(sizeof(struct Book));
    p=&book;
    gets(book.name);
    gets(book.p);
    gets(book.publish);

    printf("name is \"%s\", price is $%s, press is \"%s\"",book.name,book.p,book.publish);

    return 0;
}
