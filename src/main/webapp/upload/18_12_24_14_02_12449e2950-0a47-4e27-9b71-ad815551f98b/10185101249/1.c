#define __STDC_WANT_LIB_EXIT1__ 1
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
struct Book
{
    char name[100];
    double price;
    char chu[50];
};
typedef struct Book Book;
int main()
{

    struct Book *cc;
    cc=(struct Book*) malloc(sizeof(struct Book));
    gets(cc->name);
    scanf("%lf\n",&cc->price);
    gets(cc->chu);
    printf("name is \"%s\", price is $%.2f, press is \"%s\"",
           cc->name,cc->price,cc->chu);
    free(cc);
    return 0;
}