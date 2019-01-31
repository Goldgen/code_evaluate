#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char name[92];
    double price;
    char press[32];
};

void getBook(struct Book *ptr);
void putBook(struct Book *ptr);

int main()
{
    struct Book *ptr = (struct Book*)malloc(sizeof(struct Book));

    getBook(ptr);
    putBook(ptr);

    return 0;
}

void getBook(struct Book *ptr){
    gets(ptr->name);
    scanf("%lf\n", &(ptr->price));
    gets(ptr->press);
}

void putBook(struct Book *ptr){
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"", ptr->name, ptr->price, ptr->press);
}
