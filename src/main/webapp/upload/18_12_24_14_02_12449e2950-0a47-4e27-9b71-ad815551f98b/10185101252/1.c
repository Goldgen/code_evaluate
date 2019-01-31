#include <stdio.h>
#include <stdlib.h>

struct Book{
    char name[100];
    double price;
    char press[50];
};


int main(void){

    struct Book *book;
    book = (struct Book*)malloc(sizeof(struct Book));
    gets(book->name);
    scanf("%lf", &(book->price));
    getchar();
    gets(book->press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",
           book->name, book->price, book->press);
    return 0;
}
