#include <stdio.h>
#include <string.h>

typedef struct Book Book;
struct Book
{
    char name[100];
    double price;
    char press[40];
};

int main(){
    Book *pt = (Book *)calloc(1000, sizeof(Book *));
    gets(pt->name);
    scanf("%lf", &pt->price);
    getchar();
    gets(pt->press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",
           pt->name, pt->price, pt->press);
    free(pt);
    return 0;
}
