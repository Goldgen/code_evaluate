#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
    struct Book
    {
        char name[100];
        double price;
        char str[40];
    };
    struct Book book;
    struct Book *ptr=malloc(sizeof(char)*140+sizeof(int));
    ptr=&book;

    gets(ptr->name);
    scanf("%lf",&(ptr->price));
    getchar();
    gets(ptr->str);
    printf("name is \"%s\", ",book.name);
    printf("price is $%.2lf, ",book.price);
    printf("press is \"%s\"",book.str);
return 0;
}
