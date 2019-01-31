#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct
{
    char name[100];
    double price;
    char press[40];
}Book;
int main()
{
    Book *p=(Book*)malloc(sizeof(Book));
    gets((*p).name);
    scanf("%lf",&(*p).price);
    getchar();
    gets((*p).press);
    printf("name is \"%s\", ",p->name);
    printf("price is $%.2f, ",p->price);
    printf("press is \"%s\"",p->press);
    free(p);
    return 0;
}
