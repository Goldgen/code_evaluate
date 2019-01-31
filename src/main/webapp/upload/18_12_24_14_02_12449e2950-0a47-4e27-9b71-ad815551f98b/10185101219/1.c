#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Book book;

struct Book{
    char name[91];
    double price;
    char publish[31];
    };

int main(){

    book* b;
    b=(book*)malloc(sizeof(book));
    gets(b->name);
    scanf("%lf",&b->price);
    getchar();
    gets(b->publish);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",b->name,b->price,b->publish);
    free(b);
    return 0;
}
