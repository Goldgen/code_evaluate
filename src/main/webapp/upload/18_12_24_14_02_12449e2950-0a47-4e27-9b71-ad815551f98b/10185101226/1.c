#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Book
    {
        char name[90];
        double price;
        char edi[30];
    }typedef Book;
    Book book;
    Book *bot;
    bot=&book;
    bot=(Book*)malloc(3*sizeof(Book));
    gets(bot->name);
    scanf("%lf",&bot->price);
    getchar();
    gets(bot->edi);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",bot->name,bot->price,bot->edi);
    free(bot);
    return 0;
}